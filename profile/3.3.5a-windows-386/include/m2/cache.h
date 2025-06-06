#ifndef M2_CACHE_H
#define M2_CACHE_H

DECLARE_STRUCT(CM2Cache);

#include "system/types.h"
#include "m2/shared.h"

struct CM2Cache {
  int32_t m_initialized;
  uint32_t m_flags;
  CM2Shared* m_freeList;
  CM2Shared** m_freeTail;
  uint32_t dword10;
  uint32_t dword14;
  uint32_t dword18;
  uint32_t dword1C;
  uint32_t dword20;
  uint32_t dword24;
  uint32_t dword28;
  uint32_t dword2C;
  uint32_t dword30;
  uint32_t dword34;
  uint32_t dword38;
  uint32_t dword3C;
  uint32_t dword40;
  uint32_t dword44;
  uint32_t dword48;
  uint32_t dword4C;
  uint32_t dword50;
  uint32_t dword54;
  uint32_t dword58;
  uint32_t dword5C;
  uint32_t dword60;
  uint32_t dword64;
  uint32_t dword68;
  uint32_t dword6C;
  uint32_t dword70;
  uint32_t dword74;
  uint32_t dword78;
  uint32_t dword7C;
  uint32_t dword80;
  uint32_t dword84;
  uint32_t dword88;
  uint32_t dword8C;
  uint32_t dword90;
  uint32_t dword94;
  uint32_t dword98;
  uint32_t dword9C;
  uint32_t dwordA0;
  uint32_t dwordA4;
  uint32_t dwordA8;
  uint32_t dwordAC;
  uint32_t dwordB0;
  uint32_t dwordB4;
  uint32_t dwordB8;
  uint32_t dwordBC;
  uint32_t dwordC0;
  uint32_t dwordC4;
  uint32_t dwordC8;
  uint32_t dwordCC;
  uint32_t dwordD0;
  uint32_t dwordD4;
  uint32_t dwordD8;
  uint32_t dwordDC;
  uint32_t dwordE0;
  uint32_t dwordE4;
  uint32_t dwordE8;
  uint32_t dwordEC;
  uint32_t dwordF0;
  uint32_t dwordF4;
  uint32_t dwordF8;
  uint32_t dwordFC;
  uint32_t dword100;
  uint32_t dword104;
  uint32_t dword108;
  uint32_t dword10C;
  uint32_t dword110;
  uint32_t dword114;
  uint32_t dword118;
  uint32_t dword11C;
  uint32_t dword120;
  uint32_t dword124;
  uint32_t dword128;
  uint32_t dword12C;
  uint32_t dword130;
  uint32_t dword134;
  uint32_t dword138;
  uint32_t dword13C;
  uint32_t dword140;
  uint32_t dword144;
  uint32_t dword148;
  uint32_t dword14C;
  uint32_t dword150;
  uint32_t dword154;
  uint32_t dword158;
  uint32_t dword15C;
  uint32_t dword160;
  uint32_t dword164;
  uint32_t dword168;
  uint32_t dword16C;
  uint32_t dword170;
  uint32_t dword174;
  uint32_t dword178;
  uint32_t dword17C;
  uint32_t dword180;
  uint32_t dword184;
  uint32_t dword188;
  uint32_t dword18C;
  uint32_t dword190;
  uint32_t dword194;
  uint32_t dword198;
  uint32_t dword19C;
  uint32_t dword1A0;
  uint32_t dword1A4;
  uint32_t dword1A8;
  uint32_t dword1AC;
  uint32_t dword1B0;
  uint32_t dword1B4;
  uint32_t dword1B8;
  uint32_t dword1BC;
  uint32_t dword1C0;
  uint32_t dword1C4;
  uint32_t dword1C8;
  uint32_t dword1CC;
  uint32_t dword1D0;
  uint32_t dword1D4;
  uint32_t dword1D8;
  uint32_t dword1DC;
  uint32_t dword1E0;
  uint32_t dword1E4;
  uint32_t dword1E8;
  uint32_t dword1EC;
  uint32_t dword1F0;
  uint32_t dword1F4;
  uint32_t dword1F8;
  uint32_t dword1FC;
  uint32_t dword200;
  uint32_t dword204;
  uint32_t dword208;
  uint32_t dword20C;
  uint32_t dword210;
  uint32_t dword214;
  uint32_t dword218;
  uint32_t dword21C;
  uint32_t dword220;
  uint32_t dword224;
  uint32_t dword228;
  uint32_t dword22C;
  uint32_t dword230;
  uint32_t dword234;
  uint32_t dword238;
  uint32_t dword23C;
  uint32_t dword240;
  uint32_t dword244;
  uint32_t dword248;
  uint32_t dword24C;
  uint32_t dword250;
  uint32_t dword254;
  uint32_t dword258;
  uint32_t dword25C;
  uint32_t dword260;
  uint32_t dword264;
  uint32_t dword268;
  uint32_t dword26C;
  uint32_t dword270;
  uint32_t dword274;
  uint32_t dword278;
  uint32_t dword27C;
  uint32_t dword280;
  uint32_t dword284;
  uint32_t dword288;
  uint32_t dword28C;
  uint32_t dword290;
  uint32_t dword294;
  uint32_t dword298;
  uint32_t dword29C;
  uint32_t dword2A0;
  uint32_t dword2A4;
  uint32_t dword2A8;
  uint32_t dword2AC;
  uint32_t dword2B0;
  uint32_t dword2B4;
  uint32_t dword2B8;
  uint32_t dword2BC;
  uint32_t dword2C0;
  uint32_t dword2C4;
  uint32_t dword2C8;
  uint32_t dword2CC;
  uint32_t dword2D0;
  uint32_t dword2D4;
  uint32_t dword2D8;
  uint32_t dword2DC;
  uint32_t dword2E0;
  uint32_t dword2E4;
  uint32_t dword2E8;
  uint32_t dword2EC;
  uint32_t dword2F0;
  uint32_t dword2F4;
  uint32_t dword2F8;
  uint32_t dword2FC;
  uint32_t dword300;
  uint32_t dword304;
  uint32_t dword308;
  uint32_t dword30C;
  uint32_t dword310;
  uint32_t dword314;
  uint32_t dword318;
  uint32_t dword31C;
  uint32_t dword320;
  uint32_t dword324;
  uint32_t dword328;
  uint32_t dword32C;
  uint32_t dword330;
  uint32_t dword334;
  uint32_t dword338;
  uint32_t dword33C;
  uint32_t dword340;
  uint32_t dword344;
  uint32_t dword348;
  uint32_t dword34C;
  uint32_t dword350;
  uint32_t dword354;
  uint32_t dword358;
  uint32_t dword35C;
  uint32_t dword360;
  uint32_t dword364;
  uint32_t dword368;
  uint32_t dword36C;
  uint32_t dword370;
  uint32_t dword374;
  uint32_t dword378;
  uint32_t dword37C;
  uint32_t dword380;
  uint32_t dword384;
  uint32_t dword388;
  uint32_t dword38C;
  uint32_t dword390;
  uint32_t dword394;
  uint32_t dword398;
  uint32_t dword39C;
  uint32_t dword3A0;
  uint32_t dword3A4;
  uint32_t dword3A8;
  uint32_t dword3AC;
  uint32_t dword3B0;
  uint32_t dword3B4;
  uint32_t dword3B8;
  uint32_t dword3BC;
  uint32_t dword3C0;
  uint32_t dword3C4;
  uint32_t dword3C8;
  uint32_t dword3CC;
  uint32_t dword3D0;
  uint32_t dword3D4;
  uint32_t dword3D8;
  uint32_t dword3DC;
  uint32_t dword3E0;
  uint32_t dword3E4;
  uint32_t dword3E8;
  uint32_t dword3EC;
  uint32_t dword3F0;
  uint32_t dword3F4;
  uint32_t dword3F8;
  uint32_t dword3FC;
  uint32_t dword400;
  uint32_t dword404;
  uint32_t dword408;
  uint32_t dword40C;
  uint32_t dword410;
  uint32_t dword414;
  uint32_t dword418;
  uint32_t dword41C;
  uint32_t dword420;
  uint32_t dword424;
  uint32_t dword428;
  uint32_t dword42C;
  uint32_t dword430;
  uint32_t dword434;
  uint32_t dword438;
  uint32_t dword43C;
  uint32_t dword440;
  uint32_t dword444;
  uint32_t dword448;
  uint32_t dword44C;
  uint32_t dword450;
  uint32_t dword454;
  uint32_t dword458;
  uint32_t dword45C;
  uint32_t dword460;
  uint32_t dword464;
  uint32_t dword468;
  uint32_t dword46C;
  uint32_t dword470;
  uint32_t dword474;
  uint32_t dword478;
  uint32_t dword47C;
  uint32_t dword480;
  uint32_t dword484;
  uint32_t dword488;
  uint32_t dword48C;
  uint32_t dword490;
  uint32_t dword494;
  uint32_t dword498;
  uint32_t dword49C;
  uint32_t dword4A0;
  uint32_t dword4A4;
  uint32_t dword4A8;
  uint32_t dword4AC;
  uint32_t dword4B0;
  uint32_t dword4B4;
  uint32_t dword4B8;
  uint32_t dword4BC;
  uint32_t dword4C0;
  uint32_t dword4C4;
  uint32_t dword4C8;
  uint32_t dword4CC;
  uint32_t dword4D0;
  uint32_t dword4D4;
  uint32_t dword4D8;
  uint32_t dword4DC;
  uint32_t dword4E0;
  uint32_t dword4E4;
  uint32_t dword4E8;
  uint32_t dword4EC;
  uint32_t dword4F0;
  uint32_t dword4F4;
  uint32_t dword4F8;
  uint32_t dword4FC;
  uint32_t dword500;
  uint32_t dword504;
  uint32_t dword508;
  uint32_t dword50C;
  uint32_t dword510;
  uint32_t dword514;
  uint32_t dword518;
  uint32_t dword51C;
  uint32_t dword520;
  uint32_t dword524;
  uint32_t dword528;
  uint32_t dword52C;
  uint32_t dword530;
  uint32_t dword534;
  uint32_t dword538;
  uint32_t dword53C;
  uint32_t dword540;
  uint32_t dword544;
  uint32_t dword548;
  uint32_t dword54C;
  uint32_t dword550;
  uint32_t dword554;
  uint32_t dword558;
  uint32_t dword55C;
  uint32_t dword560;
  uint32_t dword564;
  uint32_t dword568;
  uint32_t dword56C;
  uint32_t dword570;
  uint32_t dword574;
  uint32_t dword578;
  uint32_t dword57C;
  uint32_t dword580;
  uint32_t dword584;
  uint32_t dword588;
  uint32_t dword58C;
  uint32_t dword590;
  uint32_t dword594;
  uint32_t dword598;
  uint32_t dword59C;
  uint32_t dword5A0;
  uint32_t dword5A4;
  uint32_t dword5A8;
  uint32_t dword5AC;
  uint32_t dword5B0;
  uint32_t dword5B4;
  uint32_t dword5B8;
  uint32_t dword5BC;
  uint32_t dword5C0;
  uint32_t dword5C4;
  uint32_t dword5C8;
  uint32_t dword5CC;
  uint32_t dword5D0;
  uint32_t dword5D4;
  uint32_t dword5D8;
  uint32_t dword5DC;
  uint32_t dword5E0;
  uint32_t dword5E4;
  uint32_t dword5E8;
  uint32_t dword5EC;
  uint32_t dword5F0;
  uint32_t dword5F4;
  uint32_t dword5F8;
  uint32_t dword5FC;
  uint32_t dword600;
  uint32_t dword604;
  uint32_t dword608;
  uint32_t dword60C;
  uint32_t dword610;
  uint32_t dword614;
  uint32_t dword618;
  uint32_t dword61C;
  uint32_t dword620;
  uint32_t dword624;
  uint32_t dword628;
  uint32_t dword62C;
  uint32_t dword630;
  uint32_t dword634;
  uint32_t dword638;
  uint32_t dword63C;
  uint32_t dword640;
  uint32_t dword644;
  uint32_t dword648;
  uint32_t dword64C;
  uint32_t dword650;
  uint32_t dword654;
  uint32_t dword658;
  uint32_t dword65C;
  uint32_t dword660;
  uint32_t dword664;
  uint32_t dword668;
  uint32_t dword66C;
  uint32_t dword670;
  uint32_t dword674;
  uint32_t dword678;
  uint32_t dword67C;
  uint32_t dword680;
  uint32_t dword684;
  uint32_t dword688;
  uint32_t dword68C;
  uint32_t dword690;
  uint32_t dword694;
  uint32_t dword698;
  uint32_t dword69C;
  uint32_t dword6A0;
  uint32_t dword6A4;
  uint32_t dword6A8;
  uint32_t dword6AC;
  uint32_t dword6B0;
  uint32_t dword6B4;
  uint32_t dword6B8;
  uint32_t dword6BC;
  uint32_t dword6C0;
  uint32_t dword6C4;
  uint32_t dword6C8;
  uint32_t dword6CC;
  uint32_t dword6D0;
  uint32_t dword6D4;
  uint32_t dword6D8;
  uint32_t dword6DC;
  uint32_t dword6E0;
  uint32_t dword6E4;
  uint32_t dword6E8;
  uint32_t dword6EC;
  uint32_t dword6F0;
  uint32_t dword6F4;
  uint32_t dword6F8;
  uint32_t dword6FC;
  uint32_t dword700;
  uint32_t dword704;
  uint32_t dword708;
  uint32_t dword70C;
  uint32_t dword710;
  uint32_t dword714;
  uint32_t dword718;
  uint32_t dword71C;
  uint32_t dword720;
  uint32_t dword724;
  uint32_t dword728;
  uint32_t dword72C;
  uint32_t dword730;
  uint32_t dword734;
  uint32_t dword738;
  uint32_t dword73C;
  uint32_t dword740;
  uint32_t dword744;
  uint32_t dword748;
  uint32_t dword74C;
  uint32_t dword750;
  uint32_t dword754;
  uint32_t dword758;
  uint32_t dword75C;
  uint32_t dword760;
  uint32_t dword764;
  uint32_t dword768;
  uint32_t dword76C;
  uint32_t dword770;
  uint32_t dword774;
  uint32_t dword778;
  uint32_t dword77C;
  uint32_t dword780;
  uint32_t dword784;
  uint32_t dword788;
  uint32_t dword78C;
  uint32_t dword790;
  uint32_t dword794;
  uint32_t dword798;
  uint32_t dword79C;
  uint32_t dword7A0;
  uint32_t dword7A4;
  uint32_t dword7A8;
  uint32_t dword7AC;
  uint32_t dword7B0;
  uint32_t dword7B4;
  uint32_t dword7B8;
  uint32_t dword7BC;
  uint32_t dword7C0;
  uint32_t dword7C4;
  uint32_t dword7C8;
  uint32_t dword7CC;
  uint32_t dword7D0;
  uint32_t dword7D4;
  uint32_t dword7D8;
  uint32_t dword7DC;
  uint32_t dword7E0;
  uint32_t dword7E4;
  uint32_t dword7E8;
  uint32_t dword7EC;
  uint32_t dword7F0;
  uint32_t dword7F4;
  uint32_t dword7F8;
  uint32_t dword7FC;
  uint32_t dword800;
  uint32_t dword804;
  uint32_t dword808;
  uint32_t dword80C;
  uint32_t dword810;
  uint32_t dword814;
  uint32_t dword818;
  uint32_t dword81C;
  uint32_t dword820;
  uint32_t dword824;
  uint32_t dword828;
  uint32_t dword82C;
  uint32_t dword830;
  uint32_t dword834;
  uint32_t dword838;
  uint32_t dword83C;
  uint32_t dword840;
  uint32_t dword844;
  uint32_t dword848;
  uint32_t dword84C;
  uint32_t dword850;
  uint32_t dword854;
  uint32_t dword858;
  uint32_t dword85C;
  uint32_t dword860;
  uint32_t dword864;
  uint32_t dword868;
  uint32_t dword86C;
  uint32_t dword870;
  uint32_t dword874;
  uint32_t dword878;
  uint32_t dword87C;
  uint32_t dword880;
  uint32_t dword884;
  uint32_t dword888;
  uint32_t dword88C;
  uint32_t dword890;
  uint32_t dword894;
  uint32_t dword898;
  uint32_t dword89C;
  uint32_t dword8A0;
  uint32_t dword8A4;
  uint32_t dword8A8;
  uint32_t dword8AC;
  uint32_t dword8B0;
  uint32_t dword8B4;
  uint32_t dword8B8;
  uint32_t dword8BC;
  uint32_t dword8C0;
  uint32_t dword8C4;
  uint32_t dword8C8;
  uint32_t dword8CC;
  uint32_t dword8D0;
  uint32_t dword8D4;
  uint32_t dword8D8;
  uint32_t dword8DC;
  uint32_t dword8E0;
  uint32_t dword8E4;
  uint32_t dword8E8;
  uint32_t dword8EC;
  uint32_t dword8F0;
  uint32_t dword8F4;
  uint32_t dword8F8;
  uint32_t dword8FC;
  uint32_t dword900;
  uint32_t dword904;
  uint32_t dword908;
  uint32_t dword90C;
  uint32_t dword910;
  uint32_t dword914;
  uint32_t dword918;
  uint32_t dword91C;
  uint32_t dword920;
  uint32_t dword924;
  uint32_t dword928;
  uint32_t dword92C;
  uint32_t dword930;
  uint32_t dword934;
  uint32_t dword938;
  uint32_t dword93C;
  uint32_t dword940;
  uint32_t dword944;
  uint32_t dword948;
  uint32_t dword94C;
  uint32_t dword950;
  uint32_t dword954;
  uint32_t dword958;
  uint32_t dword95C;
  uint32_t dword960;
  uint32_t dword964;
  uint32_t dword968;
  uint32_t dword96C;
  uint32_t dword970;
  uint32_t dword974;
  uint32_t dword978;
  uint32_t dword97C;
  uint32_t dword980;
  uint32_t dword984;
  uint32_t dword988;
  uint32_t dword98C;
  uint32_t dword990;
  uint32_t dword994;
  uint32_t dword998;
  uint32_t dword99C;
  uint32_t dword9A0;
  uint32_t dword9A4;
  uint32_t dword9A8;
  uint32_t dword9AC;
  uint32_t dword9B0;
  uint32_t dword9B4;
  uint32_t dword9B8;
  uint32_t dword9BC;
  uint32_t dword9C0;
  uint32_t dword9C4;
  uint32_t dword9C8;
  uint32_t dword9CC;
  uint32_t dword9D0;
  uint32_t dword9D4;
  uint32_t dword9D8;
  uint32_t dword9DC;
  uint32_t dword9E0;
  uint32_t dword9E4;
  uint32_t dword9E8;
  uint32_t dword9EC;
  uint32_t dword9F0;
  uint32_t dword9F4;
  uint32_t dword9F8;
  uint32_t dword9FC;
  uint32_t dwordA00;
  uint32_t dwordA04;
  uint32_t dwordA08;
  uint32_t dwordA0C;
  uint32_t dwordA10;
  uint32_t dwordA14;
  uint32_t dwordA18;
  uint32_t dwordA1C;
  uint32_t dwordA20;
  uint32_t dwordA24;
  uint32_t dwordA28;
  uint32_t dwordA2C;
  uint32_t dwordA30;
  uint32_t dwordA34;
  uint32_t dwordA38;
  uint32_t dwordA3C;
  uint32_t dwordA40;
  uint32_t dwordA44;
  uint32_t dwordA48;
  uint32_t dwordA4C;
  uint32_t dwordA50;
  uint32_t dwordA54;
  uint32_t dwordA58;
  uint32_t dwordA5C;
  uint32_t dwordA60;
  uint32_t dwordA64;
  uint32_t dwordA68;
  uint32_t dwordA6C;
  uint32_t dwordA70;
  uint32_t dwordA74;
  uint32_t dwordA78;
  uint32_t dwordA7C;
  uint32_t dwordA80;
  uint32_t dwordA84;
  uint32_t dwordA88;
  uint32_t dwordA8C;
  uint32_t dwordA90;
  uint32_t dwordA94;
  uint32_t dwordA98;
  uint32_t dwordA9C;
  uint32_t dwordAA0;
  uint32_t dwordAA4;
  uint32_t dwordAA8;
  uint32_t dwordAAC;
  uint32_t dwordAB0;
  uint32_t dwordAB4;
  uint32_t dwordAB8;
  uint32_t dwordABC;
  uint32_t dwordAC0;
  uint32_t dwordAC4;
  uint32_t dwordAC8;
  uint32_t dwordACC;
  uint32_t dwordAD0;
  uint32_t dwordAD4;
  uint32_t dwordAD8;
  uint32_t dwordADC;
  uint32_t dwordAE0;
  uint32_t dwordAE4;
  uint32_t dwordAE8;
  uint32_t dwordAEC;
  uint32_t dwordAF0;
  uint32_t dwordAF4;
  uint32_t dwordAF8;
  uint32_t dwordAFC;
  uint32_t dwordB00;
  uint32_t dwordB04;
  uint32_t dwordB08;
  uint32_t dwordB0C;
  uint32_t dwordB10;
  uint32_t dwordB14;
  uint32_t dwordB18;
  uint32_t dwordB1C;
  uint32_t dwordB20;
  uint32_t dwordB24;
  uint32_t dwordB28;
  uint32_t dwordB2C;
  uint32_t dwordB30;
  uint32_t dwordB34;
  uint32_t dwordB38;
  uint32_t dwordB3C;
  uint32_t dwordB40;
  uint32_t dwordB44;
  uint32_t dwordB48;
  uint32_t dwordB4C;
  uint32_t dwordB50;
  uint32_t dwordB54;
  uint32_t dwordB58;
  uint32_t dwordB5C;
  uint32_t dwordB60;
  uint32_t dwordB64;
  uint32_t dwordB68;
  uint32_t dwordB6C;
  uint32_t dwordB70;
  uint32_t dwordB74;
  uint32_t dwordB78;
  uint32_t dwordB7C;
  uint32_t dwordB80;
  uint32_t dwordB84;
  uint32_t dwordB88;
  uint32_t dwordB8C;
  uint32_t dwordB90;
  uint32_t dwordB94;
  uint32_t dwordB98;
  uint32_t dwordB9C;
  uint32_t dwordBA0;
  uint32_t dwordBA4;
  uint32_t dwordBA8;
  uint32_t dwordBAC;
  uint32_t dwordBB0;
  uint32_t dwordBB4;
  uint32_t dwordBB8;
  uint32_t dwordBBC;
  uint32_t dwordBC0;
  uint32_t dwordBC4;
  uint32_t dwordBC8;
  uint32_t dwordBCC;
  uint32_t dwordBD0;
  uint32_t dwordBD4;
  uint32_t dwordBD8;
  uint32_t dwordBDC;
  uint32_t dwordBE0;
  uint32_t dwordBE4;
  uint32_t dwordBE8;
  uint32_t dwordBEC;
  uint32_t dwordBF0;
  uint32_t dwordBF4;
  uint32_t dwordBF8;
  uint32_t dwordBFC;
  uint32_t dwordC00;
  uint32_t dwordC04;
  uint32_t dwordC08;
  uint32_t dwordC0C;
  uint32_t dwordC10;
  uint32_t dwordC14;
  uint32_t dwordC18;
  uint32_t dwordC1C;
  uint32_t dwordC20;
  uint32_t dwordC24;
  uint32_t dwordC28;
  uint32_t dwordC2C;
  uint32_t dwordC30;
  uint32_t dwordC34;
  uint32_t dwordC38;
  uint32_t dwordC3C;
  uint32_t dwordC40;
  uint32_t dwordC44;
  uint32_t dwordC48;
  uint32_t dwordC4C;
  uint32_t dwordC50;
  uint32_t dwordC54;
  uint32_t dwordC58;
  uint32_t dwordC5C;
  uint32_t dwordC60;
  uint32_t dwordC64;
  uint32_t dwordC68;
  uint32_t dwordC6C;
  uint32_t dwordC70;
  uint32_t dwordC74;
  uint32_t dwordC78;
  uint32_t dwordC7C;
  uint32_t dwordC80;
  uint32_t dwordC84;
  uint32_t dwordC88;
  uint32_t dwordC8C;
  uint32_t dwordC90;
  uint32_t dwordC94;
  uint32_t dwordC98;
  uint32_t dwordC9C;
  uint32_t dwordCA0;
  uint32_t dwordCA4;
  uint32_t dwordCA8;
  uint32_t dwordCAC;
  uint32_t dwordCB0;
  uint32_t dwordCB4;
  uint32_t dwordCB8;
  uint32_t dwordCBC;
  uint32_t dwordCC0;
  uint32_t dwordCC4;
  uint32_t dwordCC8;
  uint32_t dwordCCC;
  uint32_t dwordCD0;
  uint32_t dwordCD4;
  uint32_t dwordCD8;
  uint32_t dwordCDC;
  uint32_t dwordCE0;
  uint32_t dwordCE4;
  uint32_t dwordCE8;
  uint32_t dwordCEC;
  uint32_t dwordCF0;
  uint32_t dwordCF4;
  uint32_t dwordCF8;
  uint32_t dwordCFC;
  uint32_t dwordD00;
  uint32_t dwordD04;
  uint32_t dwordD08;
  uint32_t dwordD0C;
  uint32_t dwordD10;
  uint32_t dwordD14;
  uint32_t dwordD18;
  uint32_t dwordD1C;
  uint32_t dwordD20;
  uint32_t dwordD24;
  uint32_t dwordD28;
  uint32_t dwordD2C;
  uint32_t dwordD30;
  uint32_t dwordD34;
  uint32_t dwordD38;
  uint32_t dwordD3C;
  uint32_t dwordD40;
  uint32_t dwordD44;
  uint32_t dwordD48;
  uint32_t dwordD4C;
  uint32_t dwordD50;
  uint32_t dwordD54;
  uint32_t dwordD58;
  uint32_t dwordD5C;
  uint32_t dwordD60;
  uint32_t dwordD64;
  uint32_t dwordD68;
  uint32_t dwordD6C;
  uint32_t dwordD70;
  uint32_t dwordD74;
  uint32_t dwordD78;
  uint32_t dwordD7C;
  uint32_t dwordD80;
  uint32_t dwordD84;
  uint32_t dwordD88;
  uint32_t dwordD8C;
  uint32_t dwordD90;
  uint32_t dwordD94;
  uint32_t dwordD98;
  uint32_t dwordD9C;
  uint32_t dwordDA0;
  uint32_t dwordDA4;
  uint32_t dwordDA8;
  uint32_t dwordDAC;
  uint32_t dwordDB0;
  uint32_t dwordDB4;
  uint32_t dwordDB8;
  uint32_t dwordDBC;
  uint32_t dwordDC0;
  uint32_t dwordDC4;
  uint32_t dwordDC8;
  uint32_t dwordDCC;
  uint32_t dwordDD0;
  uint32_t dwordDD4;
  uint32_t dwordDD8;
  uint32_t dwordDDC;
  uint32_t dwordDE0;
  uint32_t dwordDE4;
  uint32_t dwordDE8;
  uint32_t dwordDEC;
  uint32_t dwordDF0;
  uint32_t dwordDF4;
  uint32_t dwordDF8;
  uint32_t dwordDFC;
  uint32_t dwordE00;
  uint32_t dwordE04;
  uint32_t dwordE08;
  uint32_t dwordE0C;
  uint32_t dwordE10;
  uint32_t dwordE14;
  uint32_t dwordE18;
  uint32_t dwordE1C;
  uint32_t dwordE20;
  uint32_t dwordE24;
  uint32_t dwordE28;
  uint32_t dwordE2C;
  uint32_t dwordE30;
  uint32_t dwordE34;
  uint32_t dwordE38;
  uint32_t dwordE3C;
  uint32_t dwordE40;
  uint32_t dwordE44;
  uint32_t dwordE48;
  uint32_t dwordE4C;
  uint32_t dwordE50;
  uint32_t dwordE54;
  uint32_t dwordE58;
  uint32_t dwordE5C;
  uint32_t dwordE60;
  uint32_t dwordE64;
  uint32_t dwordE68;
  uint32_t dwordE6C;
  uint32_t dwordE70;
  uint32_t dwordE74;
  uint32_t dwordE78;
  uint32_t dwordE7C;
  uint32_t dwordE80;
  uint32_t dwordE84;
  uint32_t dwordE88;
  uint32_t dwordE8C;
  uint32_t dwordE90;
  uint32_t dwordE94;
  uint32_t dwordE98;
  uint32_t dwordE9C;
  uint32_t dwordEA0;
  uint32_t dwordEA4;
  uint32_t dwordEA8;
  uint32_t dwordEAC;
  uint32_t dwordEB0;
  uint32_t dwordEB4;
  uint32_t dwordEB8;
  uint32_t dwordEBC;
  uint32_t dwordEC0;
  uint32_t dwordEC4;
  uint32_t dwordEC8;
  uint32_t dwordECC;
  uint32_t dwordED0;
  uint32_t dwordED4;
  uint32_t dwordED8;
  uint32_t dwordEDC;
  uint32_t dwordEE0;
  uint32_t dwordEE4;
  uint32_t dwordEE8;
  uint32_t dwordEEC;
  uint32_t dwordEF0;
  uint32_t dwordEF4;
  uint32_t dwordEF8;
  uint32_t dwordEFC;
  uint32_t dwordF00;
  uint32_t dwordF04;
  uint32_t dwordF08;
  uint32_t dwordF0C;
  uint32_t dwordF10;
  uint32_t dwordF14;
  uint32_t dwordF18;
  uint32_t dwordF1C;
  uint32_t dwordF20;
  uint32_t dwordF24;
  uint32_t dwordF28;
  uint32_t dwordF2C;
  uint32_t dwordF30;
  uint32_t dwordF34;
  uint32_t dwordF38;
  uint32_t dwordF3C;
  uint32_t dwordF40;
  uint32_t dwordF44;
  uint32_t dwordF48;
  uint32_t dwordF4C;
  uint32_t dwordF50;
  uint32_t dwordF54;
  uint32_t dwordF58;
  uint32_t dwordF5C;
  uint32_t dwordF60;
  uint32_t dwordF64;
  uint32_t dwordF68;
  uint32_t dwordF6C;
  uint32_t dwordF70;
  uint32_t dwordF74;
  uint32_t dwordF78;
  uint32_t dwordF7C;
  uint32_t dwordF80;
  uint32_t dwordF84;
  uint32_t dwordF88;
  uint32_t dwordF8C;
  uint32_t dwordF90;
  uint32_t dwordF94;
  uint32_t dwordF98;
  uint32_t dwordF9C;
  uint32_t dwordFA0;
  uint32_t dwordFA4;
  uint32_t dwordFA8;
  uint32_t dwordFAC;
  uint32_t dwordFB0;
  uint32_t dwordFB4;
  uint32_t dwordFB8;
  uint32_t dwordFBC;
  uint32_t dwordFC0;
  uint32_t dwordFC4;
  uint32_t dwordFC8;
  uint32_t dwordFCC;
  uint32_t dwordFD0;
  uint32_t dwordFD4;
  uint32_t dwordFD8;
  uint32_t dwordFDC;
  uint32_t dwordFE0;
  uint32_t dwordFE4;
  uint32_t dwordFE8;
  uint32_t dwordFEC;
  uint32_t dwordFF0;
  uint32_t dwordFF4;
  uint32_t dwordFF8;
  uint32_t dwordFFC;
  uint32_t dword1000;
  uint32_t dword1004;
  uint32_t dword1008;
  uint32_t dword100C;
  uint32_t dword1010;
  uint32_t dword1014;
  uint32_t dword1018;
  uint32_t dword101C;
  uint32_t dword1020;
  uint32_t dword1024;
  uint32_t dword1028;
  uint32_t dword102C;
  uint32_t dword1030;
  uint32_t dword1034;
  uint32_t dword1038;
  uint32_t dword103C;
  uint32_t dword1040;
  uint32_t dword1044;
  uint32_t dword1048;
  uint32_t dword104C;
  uint32_t dword1050;
  uint32_t dword1054;
  uint32_t dword1058;
  uint32_t dword105C;
  uint32_t dword1060;
  uint32_t dword1064;
  uint32_t dword1068;
  uint32_t dword106C;
  uint32_t dword1070;
  uint32_t dword1074;
  uint32_t dword1078;
  uint32_t dword107C;
  uint32_t dword1080;
  uint32_t dword1084;
  uint32_t dword1088;
  uint32_t dword108C;
  uint32_t dword1090;
  uint32_t dword1094;
  uint32_t dword1098;
  uint32_t dword109C;
  uint32_t dword10A0;
  uint32_t dword10A4;
  uint32_t dword10A8;
};

#endif