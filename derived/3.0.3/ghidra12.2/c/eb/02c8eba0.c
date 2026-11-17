
void _INIT_6940(void)

{
  DAT_056629a0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056629a4);
  DAT_056629b0 = 0x8004ef;
  DAT_056629b8 = nn::os::GetSystemTick();
  DAT_056629c0 = 0;
  DAT_056629c8 = PTR_DAT_04bb2020 + 0x10;
  DAT_056629d0 = "ModelOnUI";
  DAT_056629d8 = 1;
  DAT_056629dc = 0x1c2b;
  FUN_0277d4ac();
  DAT_056629e4 = 0x142e;
  FUN_0277d4ac();
  return;
}

