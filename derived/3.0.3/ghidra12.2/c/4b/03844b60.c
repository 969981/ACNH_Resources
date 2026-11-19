
void _INIT_8387(void)

{
  DAT_05ae1a5c = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae1a60);
  DAT_05ae1a6c = 0x8004ef;
  DAT_05ae1a70 = nn::os::GetSystemTick();
  DAT_05ae1a78 = 0;
  DAT_05ae1a80 = 3;
  DAT_05ae1a84 = 2;
  DAT_05ae1a89 = &DAT_101010101010101;
  DAT_05ae1a91 = &DAT_101010101010101;
  DAT_05ae1a99 = &DAT_101010101010101;
  DAT_05ae1aa1 = &DAT_101010101010101;
  DAT_05ae1aa9 = &DAT_101010101010101;
  DAT_05ae1ab1 = &DAT_101010101010101;
  DAT_05ae1ab9 = 1;
  DAT_05ae1a88 = 0;
  DAT_05ae1aba = 0x2020202;
  uRam0000000005ae1abe = 0x20202;
  FUN_038e18e4(&DAT_05ae1ac8);
  FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05ae1ac8,&__DT_FINI_ARRAY);
  DAT_05ae1b08 = 0;
  DAT_05ae1b20 = 0;
  DAT_05ae1b28 = 0;
  DAT_05ae1b30 = 0;
  DAT_05ae1b38 = 0;
  DAT_05ae1b18 = PTR_DAT_04bdf1d8 + 0x10;
  DAT_05ae1b60 = 0;
  DAT_05ae1b10 = 0;
  DAT_05ae1b40 = 0;
  DAT_05ae1b50 = 0;
  DAT_05ae1b58 = 0;
  DAT_05ae1b48 = DAT_05ae1b18;
  FUN_001001d0(FUN_03844930,&DAT_05ae1b08,&__DT_FINI_ARRAY);
  return;
}

