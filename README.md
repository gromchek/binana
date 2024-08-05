# binana

This repository hosts some work related to studying the original game binaries.

You can use the information here to get a headstart when working on the [Whoa project](https://github.com/whoahq/whoa).

- [Header files](#header-files)
- [Symbol files](#symbol-files)
- [Debugging files](#debugging-files)
- [Ghidra](#ghidra)
  * [Importing C headers](#importing-c-headers)
  * [Importing symbols](#importing-symbols)
- [IDA](#ida)
  * [Importing C headers](#importing-c-headers-1)
  * [Importing symbols](#importing-symbols-1)
- [x64dbg](#x64dbg)
  * [Importing database](#importing-database)
  * [Importing types](#importing-types)

# Header files

To make looking at the binary easier, C header files to match the original executable's memory layout are provided. They aim to be lightweight and self-contained, so that many tools can make use of them.

# Symbol files

Symbol files are text files that map addresses to functions and variables/data labels.

The format is based on the one used in the stock Ghidra script `ImportSymbolsScript.py`:

```
DataLabel 00DDAA77AA l 
FunctionName 00CC00DDEE f
```

To improve the call stack view in x64dbg, you should append an `end` field to every function, with the address where this function ends and another begins (i.e. after the last instruction of the function):

```
FunctionName 00CC00DDEE f end=00CC00DDFF
```

In this repo, `script/compile-symbols` is used to concatenate our organized symbol files into one big file (`<game version>/symbol/main.sym`).

To refresh the gigantic `main.sym` file after changing one of the source symbol files:

```bash
script/compile-symbols <game version>
```

Or just 
```
make
```

# Debugging files

The best way to know what a particular routine does is to use a debugger.

With our [x64dbg](https://x64dbg.com/) files, you can easily navigate to various functions, read the call stack, play with variables, and explore data structures.

These files are autogenerated from the C header and symbol files, using our `binana` tool written in Go. You can install it like so:

```bash
make dependencies
```

To regenerate:

```bash
make
```

# Ghidra

## Importing C headers

To import the main header file into your Ghidra project,

  1. go to `File` 🡒 `Parse C Source...`. 
  2. Select `clib.prf` as your parse configuration, and clear all source files and input paths.
  3. Add the header `<game version>/include/main.h` to the `Source files to parse` combo box.
  4. Add the path to `<game version>/include` to the `Include paths` combo box.
  5. press `Parse to Program`.

If all goes well, Data Type Manager will now contain the data structures from the headers.

## Importing symbols

To import the symbol file into your Ghidra project,

  1. go to `Window` 🡒 `Script Manager`
  2. In the table view, lookup `ImportSymbolsScript.py`
  3. Run the script
  4. Enter the path to `<game version>/symbol/main.sym`

# IDA

## Importing C headers

To import the main header file into your IDA database,

  1. Go to `Options` 🡒 `Compiler`
  2. In `Include directories`, add the path to `<game version>/ida/include` and press `OK`
  3. Go to `File` 🡒 `Load file` 🡒 `Parse C Header file`
  4. Enter the path to `<game version>/include/main.h`

## Importing symbols

To use the IDC script,

  1. Go to `File` 🡒 `Script file...`
  2. Navigate to `<game version>/ida/import.idc`

# x64dbg 

For ease of debugging, we provide x64dbg databases (generated by the Go tool from symbol maps), as well as x64dbg type information (generated by the same Go tool from the C headers).

## Importing database

To load the database information into x64dbg:

  1. Open x96dbg.exe or x32dbg.exe directly
  2. Load your game binary
  3. Go to `File` 🡒 `Database` 🡒 `Import database`
  4. Navigate to `<game version>/x32dbg/game.dd32`.

## Importing types

To load the type information JSON file:

  1. Open the binary in x32dbg.exe
  2. in the console, type: `LoadTypes <full path to local binana repository>\<game version>\x32dbg\types.json` 

