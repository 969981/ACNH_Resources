
void _INIT_8205(void)

{
  DAT_05ab3c54 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ab3c58);
  DAT_05ab3c64 = 0x8004ef;
  DAT_05ab3c68 = nn::os::GetSystemTick();
  DAT_05ab3c70 = 0;
  DAT_05ab3c78 = 3;
  DAT_05ab3c7c = 2;
  DAT_05ab3c80 = 0;
  DAT_05ab3c81 = &DAT_101010101010101;
  DAT_05ab3c89 = &DAT_101010101010101;
  DAT_05ab3c91 = &DAT_101010101010101;
  DAT_05ab3c99 = &DAT_101010101010101;
  DAT_05ab3ca1 = &DAT_101010101010101;
  DAT_05ab3ca9 = &DAT_101010101010101;
  DAT_05ab3cb1 = 1;
  DAT_05ab3cb2 = 0x2020202;
  uRam0000000005ab3cb6 = 0x20202;
  DAT_05ab3cc0 = (undefined **)(PTR_DAT_04bcb440 + 0x10);
  DAT_05ab3cd8 = 0x80;
  DAT_05ab3d5b = 0;
  DAT_05ab3cd0 = &DAT_05ab3cdc;
  DAT_05ab3cdc = 0;
  DAT_05ab3cc8 = PTR_DAT_04bb2d88 + 0x10;
  DAT_05ab3d60 = FUN_006bd550(&DAT_0407ebb1,0);
  DAT_05ab3cc0 = &PTR_FUN_04b44f90;
  DAT_05ab3d90 = 0;
  DAT_05ab3d98 = &PTR_LAB_04b44fe8;
  DAT_05ab3d78._0_5_ = 0;
  DAT_05ab3d78._5_3_ = 0;
  uRam0000000005ab3d80 = 0;
  DAT_05ab3d88 = 0;
  DAT_05ab3db8 = &PTR_LAB_04b45010;
  DAT_05ab3d68 = 0;
  DAT_05ab3d70 = 0;
  DAT_05ab3dd8 = PTR_DAT_04bb4a78 + 0x10;
  DAT_05ab3e08 = 0x40;
  DAT_05ab3e4b = 0;
  DAT_05ab3e00 = &DAT_05ab3e0c;
  DAT_05ab3e0c = 0;
  DAT_05ab3e78 = 0;
  DAT_05ab3e58 = 0;
  DAT_05ab3e60 = 0;
  DAT_05ab3e68 = 0;
  DAT_05ab3e70 = 0;
  DAT_05ab3df8 = PTR_DAT_04bb2bc0 + 0x10;
  DAT_05ab3e50 = 0xffffffff;
  DAT_05ab3e80 = 0xffffffff;
  DAT_05ab3e88 = 0;
  DAT_05ab3e90 = 0;
  DAT_05ab3e98 = 1;
  DAT_05ab3e9c = 0xffffffff;
  FUN_001001d0(FUN_036cafc0,&DAT_05ab3cc0,&__DT_FINI_ARRAY);
  return;
}

