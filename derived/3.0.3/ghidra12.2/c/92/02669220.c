
void _INIT_6083(void)

{
  DAT_05560700 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05560704);
  DAT_05560710 = 0x8004ef;
  DAT_05560718 = nn::os::GetSystemTick();
  DAT_05560720 = 0;
  DAT_05560728 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05560730 = 0x142e;
  FUN_0277d4ac();
  DAT_05560738 = 0xc0000000;
  DAT_0556073c = 0x40000000;
  DAT_05560740 = 1;
  nn::os::GetSystemTick();
  return;
}

