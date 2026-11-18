
void _INIT_7570(void)

{
  DAT_05723e80 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05723e84);
  DAT_05723e90 = 0x8004ef;
  DAT_05723e98 = nn::os::GetSystemTick();
  DAT_05723ea0 = 0;
  DAT_05723ea8 = PTR_DAT_04bb2020 + 0x10;
  DAT_05723eb0 = "ModelOnUI";
  DAT_05723eb8 = 1;
  DAT_05723ebc = 0x1c2b;
  FUN_0277d4ac();
  DAT_05723ec4 = 0x142e;
  FUN_0277d4ac();
  return;
}

