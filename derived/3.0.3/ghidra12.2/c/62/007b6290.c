
void _INIT_1391(void)

{
  DAT_04ca91b0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04ca91b4);
  DAT_04ca91c0 = 0x8004ef;
  DAT_04ca91c8 = nn::os::GetSystemTick();
  DAT_04ca91d0 = 0;
  FUN_03f2f3b8(0x3f800000,&DAT_04ca91d8,0);
  DAT_04ca9268._0_5_ = 0;
  DAT_04ca91d8 = &PTR_FUN_04912568;
  DAT_04ca9268._5_3_ = 0;
  uRam0000000004ca9270 = 0;
  DAT_04ca9278 = 0;
  DAT_04ca9280 = 0;
  DAT_04ca9288 = 0;
  DAT_04ca9258 = PTR_DAT_04bd0df0 + 0x10;
  DAT_04ca92a8 = 1;
  DAT_04ca9290 = 0;
  DAT_04ca9260 = 0;
  DAT_04ca9298 = 0;
  DAT_04ca92a0 = 0;
  FUN_001001d0(FUN_007b54e4,&DAT_04ca91d8,&__DT_FINI_ARRAY);
  return;
}

