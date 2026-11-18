
void _INIT_8268(void)

{
  DAT_05acc240 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05acc244);
  DAT_05acc250 = 0x8004ef;
  DAT_05acc258 = nn::os::GetSystemTick();
  DAT_05acc260 = 0;
  DAT_05acc268 = 0xc0000000;
  DAT_05acc26c = 0x40000000;
  DAT_05acc270 = 3;
  DAT_05acc274 = 2;
  DAT_05acc279 = &DAT_101010101010101;
  DAT_05acc281 = &DAT_101010101010101;
  DAT_05acc289 = &DAT_101010101010101;
  DAT_05acc291 = &DAT_101010101010101;
  DAT_05acc299 = &DAT_101010101010101;
  DAT_05acc2a1 = &DAT_101010101010101;
  DAT_05acc2a9 = 1;
  DAT_05acc278 = 0;
  DAT_05acc2aa = 0x2020202;
  uRam0000000005acc2ae = 0x20202;
  DAT_05acc2b4 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05acc2bc = 0x142e;
  FUN_0277d4ac();
  DAT_05acc2c4 = 1;
  DAT_05acc2c8 = PTR_DAT_04bb2020 + 0x10;
  DAT_05acc2d0 = &DAT_04100b62;
  FUN_038e18e4(&DAT_05acc2d8);
  FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05acc2d8,&__DT_FINI_ARRAY);
  return;
}

