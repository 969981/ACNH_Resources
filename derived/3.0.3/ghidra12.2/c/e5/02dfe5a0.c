
void _INIT_7075(void)

{
  DAT_05690ce8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05690cec);
  DAT_05690cf8 = 0x8004ef;
  DAT_05690d00 = nn::os::GetSystemTick();
  DAT_05690d08 = 0;
  DAT_05690d10 = PTR_DAT_04bb2020 + 0x10;
  DAT_05690d18 = "ModelOnUI";
  DAT_05690d20 = 1;
  DAT_05690d24 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05690d2c = 0x142e;
  FUN_0277d4ac();
  return;
}

