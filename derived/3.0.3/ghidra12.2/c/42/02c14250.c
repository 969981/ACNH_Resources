
void _INIT_6900(void)

{
  DAT_0564ba70 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0564ba74);
  DAT_0564ba80 = 0x8004ef;
  DAT_0564ba88 = nn::os::GetSystemTick();
  DAT_0564ba90 = 0;
  DAT_0564ba98 = PTR_DAT_04bb2020 + 0x10;
  DAT_0564baa0 = "ModelOnUI";
  DAT_0564baa8 = 0x1c2b;
  FUN_0277d4ac();
  DAT_0564bab0 = 0x142e;
  FUN_0277d4ac();
  return;
}

