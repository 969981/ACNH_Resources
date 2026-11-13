
void _INIT_4030(void)

{
  DAT_05079f70 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05079f74);
  DAT_05079f80 = 0x8004ef;
  DAT_05079f88 = nn::os::GetSystemTick();
  DAT_05079f90 = 0;
  DAT_05079f98 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05079fa0 = 0x142e;
  FUN_0277d4ac();
  DAT_05079fa8 = 0xc0000000;
  DAT_05079fac = 0x40000000;
  DAT_05079fb0 = 1;
  return;
}

