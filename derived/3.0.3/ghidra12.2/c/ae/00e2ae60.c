
void _INIT_3101(void)

{
  DAT_04f4bde0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f4bde4);
  DAT_04f4bdf0 = 0x8004ef;
  DAT_04f4bdf8 = nn::os::GetSystemTick();
  DAT_04f4be00 = 0;
  DAT_04f4be08 = PTR_DAT_04bb2020 + 0x10;
  DAT_04f4be10 = "ModelOnUI";
  DAT_04f4be18 = 0x1c2b;
  FUN_0277d4ac();
  DAT_04f4be20 = 0x142e;
  FUN_0277d4ac();
  return;
}

