
void _INIT_4785(void)

{
  DAT_0522e0d8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0522e0dc);
  DAT_0522e0e8 = 0x8004ef;
  DAT_0522e0f0 = nn::os::GetSystemTick();
  DAT_0522e0f8 = 0;
  DAT_0522e100 = 1;
  DAT_0522e104 = 0x1c2b;
  FUN_0277d4ac();
  DAT_0522e10c = 0x142e;
  FUN_0277d4ac();
  DAT_0522e118 = PTR_DAT_04bb2020 + 0x10;
  DAT_0522e120 = "APP_DrawOekakiDrawerMap";
  return;
}

