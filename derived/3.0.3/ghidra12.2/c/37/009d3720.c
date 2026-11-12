
void _INIT_1595(void)

{
  DAT_04d0da88 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04d0da8c);
  DAT_04d0da98 = 0x8004ef;
  DAT_04d0daa0 = nn::os::GetSystemTick();
  DAT_04d0daa8 = 0;
  DAT_04d0dab0 = 0x1c2b;
  FUN_0277d4ac();
  DAT_04d0dab8 = 0x142e;
  FUN_0277d4ac();
  DAT_04d0dac0 = 0xc0000000;
  DAT_04d0dac4 = 0x40000000;
  DAT_04d0dac8 = 1;
  return;
}

