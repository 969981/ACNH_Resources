
void _INIT_8269(void)

{
  DAT_05acc978 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05acc97c);
  DAT_05acc988 = 0x8004ef;
  DAT_05acc990 = nn::os::GetSystemTick();
  DAT_05acc998 = 0;
  DAT_05acc9a0 = 0xc0000000;
  DAT_05acc9a4 = 0x40000000;
  DAT_05acc9a8 = 3;
  DAT_05acc9ac = 2;
  DAT_05acc9b1 = &DAT_101010101010101;
  DAT_05acc9b9 = &DAT_101010101010101;
  DAT_05acc9c1 = &DAT_101010101010101;
  DAT_05acc9c9 = &DAT_101010101010101;
  DAT_05acc9d1 = &DAT_101010101010101;
  DAT_05acc9d9 = &DAT_101010101010101;
  DAT_05acc9e1 = 1;
  DAT_05acc9b0 = 0;
  DAT_05acc9e2 = 0x2020202;
  uRam0000000005acc9e6 = 0x20202;
  DAT_05acc9ec = 0x1c2b;
  FUN_0277d4ac();
  DAT_05acc9f4 = 0x142e;
  FUN_0277d4ac();
  DAT_05acc9fc = 1;
  DAT_05acca00 = PTR_DAT_04bb2020 + 0x10;
  DAT_05acca08 = &DAT_04100b62;
  FUN_038e18e4(&DAT_05acca10);
  FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05acca10,&__DT_FINI_ARRAY);
  return;
}

