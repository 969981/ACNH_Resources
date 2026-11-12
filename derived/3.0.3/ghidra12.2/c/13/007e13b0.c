
void _INIT_1418(void)

{
  DAT_04cb3178 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04cb317c);
  DAT_04cb3188 = 0x8004ef;
  DAT_04cb3190 = nn::os::GetSystemTick();
  DAT_04cb3198 = 0;
  FUN_03f2f3b8(0x3f800000,&DAT_04cb31a0,0);
  DAT_04cb3230._0_5_ = 0;
  DAT_04cb31a0 = PTR_DAT_04bb4460 + 0x10;
  DAT_04cb3230._5_3_ = 0;
  uRam0000000004cb3238 = 0;
  DAT_04cb3240 = 0;
  DAT_04cb3248 = 0;
  DAT_04cb3250 = 0;
  DAT_04cb3220 = PTR_DAT_04bd0df0 + 0x10;
  DAT_04cb3228 = 0;
  DAT_04cb3270 = 1;
  DAT_04cb3258 = 0;
  DAT_04cb3260 = 0;
  DAT_04cb3268 = 0;
  FUN_001001d0(PTR_FUN_04bb4428,&DAT_04cb31a0,&__DT_FINI_ARRAY);
  return;
}

