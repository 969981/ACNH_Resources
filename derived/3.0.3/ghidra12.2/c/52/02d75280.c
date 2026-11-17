
void _INIT_7017(void)

{
  DAT_056842c0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056842c4);
  DAT_056842d0 = 0x8004ef;
  DAT_056842d8 = nn::os::GetSystemTick();
  DAT_056842e0 = 0;
  DAT_056842e8 = PTR_DAT_04bb2020 + 0x10;
  DAT_056842f0 = "ModelOnUI";
  DAT_056842f8 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05684300 = 0x142e;
  FUN_0277d4ac();
  DAT_05684308 = 0xc0000000;
  DAT_0568430c = 0x40000000;
  DAT_05684310 = 1;
  return;
}

