
void _INIT_6105(void)

{
  DAT_0556be10 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0556be14);
  DAT_0556be20 = 0x8004ef;
  DAT_0556be28 = nn::os::GetSystemTick();
  DAT_0556be30 = 0;
  DAT_0556be38 = 0x1c2b;
  FUN_0277d4ac();
  DAT_0556be40 = 0x142e;
  FUN_0277d4ac();
  return;
}

