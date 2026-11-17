
void _INIT_6963(void)

{
  DAT_0566a360 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0566a364);
  DAT_0566a370 = 0x8004ef;
  DAT_0566a378 = nn::os::GetSystemTick();
  DAT_0566a380 = 0;
  DAT_0566a388 = PTR_DAT_04bb2020 + 0x10;
  DAT_0566a390 = "ModelOnUI";
  DAT_0566a398 = 1;
  DAT_0566a39c = 0x1c2b;
  FUN_0277d4ac();
  DAT_0566a3a4 = 0x142e;
  FUN_0277d4ac();
  return;
}

