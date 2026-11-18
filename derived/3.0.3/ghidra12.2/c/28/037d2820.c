
void _INIT_8284(void)

{
  DAT_05acfcd8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05acfcdc);
  DAT_05acfce8 = 0x8004ef;
  DAT_05acfcf0 = nn::os::GetSystemTick();
  DAT_05acfcf8 = 0;
  DAT_05acfd00 = 3;
  DAT_05acfd04 = 2;
  DAT_05acfd09 = &DAT_101010101010101;
  DAT_05acfd11 = &DAT_101010101010101;
  DAT_05acfd19 = &DAT_101010101010101;
  DAT_05acfd21 = &DAT_101010101010101;
  DAT_05acfd29 = &DAT_101010101010101;
  DAT_05acfd31 = &DAT_101010101010101;
  DAT_05acfd39 = 1;
  DAT_05acfd48 = PTR_DAT_04bb2020 + 0x10;
  DAT_05acfd3a = 0x2020202;
  uRam0000000005acfd3e = 0x20202;
  DAT_05acfd08 = 0;
  DAT_05acfd50 = &DAT_04093d96;
  FUN_038e18e4(&DAT_05acfd58);
  FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05acfd58,&__DT_FINI_ARRAY);
  return;
}

