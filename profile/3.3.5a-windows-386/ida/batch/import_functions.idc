#include <idc.idc>

static import_functions() {
	// Import function addresses and comments
	msg("Importing function addresses and comments");
	set_func_cmt(0x00401030, "void operator delete(void*)", 0);
	set_func_cmt(0x00401070, "protected: int __thiscall CDataStore::FetchWrite(unsigned int,unsigned int,char const *,int)", 0);
	set_func_cmt(0x004010D0, "CDataStore::IsRead() const", 0);
	set_func_cmt(0x004010E0, "CDataStore::Reset()", 0);
	set_func_cmt(0x00401130, "CDataStore::Finalize()", 0);
	set_func_cmt(0x004038A0, "CDataStore::~CDataStore()", 0);
	set_func_cmt(0x00427130, "Blizzard::File::Delete(char const*)", 0);
	set_func_cmt(0x00427500, "Blizzard::File::MakeAbsolutePath(char const*, char*, int, bool)", 0);
	set_func_cmt(0x00427560, "Blizzard::File::Move(char const*, char const*)", 0);
	set_func_cmt(0x0047ADE0, "CDataStore::GetBufferParams(void const**, unsigned int*, unsigned int*)", 0);
	set_func_cmt(0x0047AE10, "CDataStore::DetachBuffer(void**, unsigned int*, unsigned int*)", 0);
	set_func_cmt(0x0047AE50, "virtual void __thiscall CDataStore::InternalDestroy(unsigned char * &,unsigned int &,unsigned int &)", 0);
	set_func_cmt(0x0047AEA0, "CDataStore::InternalFetchWrite(unsigned int, unsigned int, unsigned char*&, unsigned int&, unsigned int&, char const*, int)", 0);
	set_func_cmt(0x0047AF40, "CDataStore::Set(unsigned int, unsigned short)", 0);
	set_func_cmt(0x0047AFE0, "CDataStore::Put(unsigned char)", 0);
	set_func_cmt(0x0047B040, "CDataStore::Put(unsigned short)", 0);
	set_func_cmt(0x0047B0A0, "CDataStore::Put(unsigned int)", 0);
	set_func_cmt(0x0047B100, "CDataStore::Put(unsigned long long)", 0);
	set_func_cmt(0x0047B1C0, "CDataStore::PutArray(unsigned char const*, unsigned int)", 0);
	set_func_cmt(0x0047B280, "CDataStore::PutData(void const*, unsigned long)", 0);
	set_func_cmt(0x0047B290, "CDataStore::FetchRead(unsigned int, unsigned int)", 0);
	set_func_cmt(0x0047B300, "CDataStore::PutString(char const*)", 0);
	set_func_cmt(0x0047B340, "CDataStore::Get(unsigned char&)", 0);
	set_func_cmt(0x0047B380, "CDataStore::Get(unsigned short&)", 0);
	set_func_cmt(0x0047B3C0, "CDataStore::Get(unsigned int&)", 0);
	set_func_cmt(0x0047B400, "CDataStore::Get(unsigned long long&)", 0);
	set_func_cmt(0x0047B440, "CDataStore::Get(float&)", 0);
	set_func_cmt(0x0047B480, "CDataStore::GetString(char*, unsigned int)", 0);
	set_func_cmt(0x0047B560, "CDataStore::GetArray(unsigned char*, unsigned int)", 0);
	set_func_cmt(0x0047B6B0, "CDataStore::GetDataInSitu(void*&, unsigned int)", 0);
	set_func_cmt(0x0047F230, "IEvtSchedulerProcess as an independent function appears to be optimized out", 0);
	set_func_cmt(0x004A2780, "_CBackdropGenerator::LoadXML(linkObject*, CStatus*)", 0);
	set_func_cmt(0x004A81B0, "FrameScript_GetObjectThis(lua_State*, int)", 0);
	set_func_cmt(0x004DBFD0, "thanks namreeb :^)", 0);
	set_func_cmt(0x00532AF0, "public: class CGxCaps const & __thiscall CGxDevice::Caps(void)const", 0);
	set_func_cmt(0x005EEB70, "SErrDisplayAppFatal resolves to this in release mode?", 0);
	set_func_cmt(0x006337D0, "00005400", 0);
	set_func_cmt(0x00634C60, "00005400", 0);
	set_func_cmt(0x00634E00, "ClientDBInitialize()", 0);
	set_func_cmt(0x00636E50, "WowClientDB<AchievementRec>::Load(char const, int)", 0);
	set_func_cmt(0x006393A0, "WowClientDB<Cfg_CategoriesRec>::Load(char const, int)", 0);
	set_func_cmt(0x006395F0, "WowClientDB<Cfg_ConfigsRec>::Load(char const, int)", 0);
	set_func_cmt(0x00639840, "WowClientDB<CharBaseInfoRec>::Load(char const, int)", 0);
	set_func_cmt(0x00658D90, "WowClientDB<AchievementRec>::LoadRecords(SFile*, char const*, int)", 0);
	set_func_cmt(0x00659910, "WowClientDB<Cfg_CategoriesRec>::LoadRecords(SFile*, char const*, int)", 0);
	set_func_cmt(0x00659B80, "WowClientDB<CharBaseInfoRec>::LoadRecords(SFile*, char const*, int)", 0);
	set_func_cmt(0x0065C290, "00005410", 0);
	set_func_cmt(0x0065F520, "WowClientDB<AchievementRec>::GetRecordByIndex(int, void*)", 0);
	set_func_cmt(0x006811D0, "00005410", 0);
	set_func_cmt(0x00681BE0, "UC", 0);
	set_func_cmt(0x00682400, "this is one of the functions named 'GxPrimVertexPtr' that uses the fixed-function pipeline", 0);
	set_func_cmt(0x00683670, "static void CGxDevice::LogOpen(void)", 0);
	set_func_cmt(0x00684C40, "CGxDevice::Log(CGxCaps const&) const", 0);
	set_func_cmt(0x006859E0, "CGxDevice::IRsForceUpdate(EGxRenderState)", 0);
	set_func_cmt(0x00685A70, "CGxDevice::IRsForceUpdate()", 0);
	set_func_cmt(0x00689EA0, "UC", 0);
	set_func_cmt(0x0069FE10, "UC (invented name)", 0);
	set_func_cmt(0x006AA350, "UC", 0);
	set_func_cmt(0x006AA420, "private utility method", 0);
	set_func_cmt(0x006AB390, "public method", 0);
	set_func_cmt(0x00763730, "UC", 0);
	set_func_cmt(0x00763AB0, "static void CONSOLELINE::Backspace()", 0);
	set_func_cmt(0x00763B10, "void CONSOLELINE::Delete()", 0);
	set_func_cmt(0x00763B40, "static void CONSOLELINE::Up()", 0);
	set_func_cmt(0x00763B90, "static void CONSOLELINE::Down()", 0);
	set_func_cmt(0x007663F0, "CVar::ArchiveCodeRegisteredOnly()", 0);
	set_func_cmt(0x007666B0, "CVar::LogCvar(char const*, char const*, void*)", 0);
	set_func_cmt(0x007667B0, "CVar::InternalSet(char const*, bool, bool, bool, bool)", 0);
	set_func_cmt(0x00766990, "public: void __thiscall CVar::Reset(void)", 0);
	set_func_cmt(0x00766A20, "public: bool __thiscall CVar::Default(void)", 0);
	set_func_cmt(0x00766AB0, "CVar::Update()", 0);
	set_func_cmt(0x00767030, "CVar::IterateForArchive(unsigned int, unsigned int, int (*)(char const*, char const*, void*), void*)", 0);
	set_func_cmt(0x007671A0, "CVar::LogAll(char*, unsigned long, unsigned int, unsigned int)", 0);
	set_func_cmt(0x00767220, "00005410", 0);
	set_func_cmt(0x007673A0, "00005400", 0);
	set_func_cmt(0x00767440, "CVar::Lookup(char const*)", 0);
	set_func_cmt(0x007698B0, "00005400", 0);
	set_func_cmt(0x00769950, "SetGxCVars(CGxFormat const&)", 0);
	set_func_cmt(0x00769D40, "00005400", 0);
	set_func_cmt(0x0076B3F0, "void SetDefaults(DefaultSettings&, const Hardware&)", 0);
	set_func_cmt(0x0076B520, "ConsoleDetectSetDefaultsFormat(DefaultSettings&, const Hardware&)", 0);
	set_func_cmt(0x0076BA30, "ConsoleDetectDetectHardware(Hardware&, bool&)", 0);
	set_func_cmt(0x0077ACF0, "public: unsigned int __thiscall BigBuffer::operator[](unsigned int)const", 0);
	set_func_cmt(0x0077AE80, "public: __thiscall BigStack::~BigStack(void)", 0);
	set_func_cmt(0x0077AEC0, "public: unsigned int & __thiscall BigBuffer::operator[](unsigned int)const", 0);
	set_func_cmt(0x0077AF80, "public: void __thiscall BigBuffer::Trim(void)const", 0);
	set_func_cmt(0x0077B020, "void Add(class BigBuffer &,class BigBuffer const &,class BigBuffer const &)", 0);
	set_func_cmt(0x0077B160, "void Div(class BigBuffer &,unsigned int *,class BigBuffer const &,unsigned __int64)", 0);
	set_func_cmt(0x0077B2B0, "void Mul(class BigBuffer &,class BigBuffer const &,unsigned __int64)", 0);
	set_func_cmt(0x0077B3E0, "void Sub(class BigBuffer &,class BigBuffer const &,class BigBuffer const &)", 0);
	set_func_cmt(0x0077B590, "void Shl(class BigBuffer &,class BigBuffer const &,unsigned int)", 0);
	set_func_cmt(0x0077B700, "void Shl(class BigBuffer &,class BigBuffer const &,unsigned int)", 0);
	set_func_cmt(0x0077B7F0, "void FromBinary(class BigBuffer &,void const *,unsigned int)", 0);
	set_func_cmt(0x0077B8B0, "void FromUnsigned(class BigBuffer &,unsigned int)", 0);
	set_func_cmt(0x0077B910, "_ToBinaryAppend(TSGrowableArray<unsigned char>&, BigBuffer const&)", 0);
	set_func_cmt(0x0077BAC0, "void __fastcall Div(class BigBuffer &,class BigBuffer &,class BigBuffer const &,class BigBuffer const &,class BigStack &)", 0);
	set_func_cmt(0x0077BFF0, "void Mul(class BigBuffer &,class BigBuffer const &,class BigBuffer const &,class BigStack &)", 0);
	set_func_cmt(0x0077C330, "void __fastcall Square(class BigBuffer &,class BigBuffer const &,class BigStack &)", 0);
	set_func_cmt(0x00816790, "FrameScript_Object::CreateScriptMetaTable(lua_State*, void (*)(lua_State*))", 0);
	set_func_cmt(0x008167E0, "FrameScript_Object::FillScriptMethodTable(lua_State*, FrameScript_Method*, int)", 0);
	set_func_cmt(0x00818070, "startIndex is the index of starting argument on stack", 0);
	set_func_cmt(0x00819830, "FrameScript_Object::FrameScript_Object()", 0);
	set_func_cmt(0x00819850, "FrameScript_Object::~FrameScript_Object()", 0);
	set_func_cmt(0x008199C0, "FrameScript_Object::UnregisterScriptObject(char const*)", 0);
	set_func_cmt(0x0081A2C0, "FrameScript_Object__RunScript(FrameScript_Object::ScriptIx const&, int, char const*)", 0);
	set_func_cmt(0x0081AA00, "FrameScript_SignalEvent(unsigned int, lua_State*, int)", 0);
	set_func_cmt(0x0081AC90, "vFrameScript_SignalEvent(unsigned int, char const*, char*)", 0);
	set_func_cmt(0x0081B530, "FrameScript_SignalEvent(unsigned int, char const*, ...)", 0);
	set_func_cmt(0x0081B5F0, "FrameScript_CreateEvents(char const**, unsigned int)", 0);
	set_func_cmt(0x008A1420, "known names: System_File::Shutdown, CVGxVideoOptionsVersionCallback", 0);
	set_func_cmt(0x008E5250, "Script_ToggleTris", 0);
	set_func_cmt(0x0095D110, "CDataAllocator::GetData(int, char const*, int)", 0);
	set_func_cmt(0x0095D1B0, "CDataAllocator::PutData(void*, char const*, int)", 0);
}
