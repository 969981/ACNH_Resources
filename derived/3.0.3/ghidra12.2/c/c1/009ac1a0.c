
void _INIT_1541(void)

{
  DAT_04d015a0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04d015a4);
  DAT_04d015b0 = 0x8004ef;
  DAT_04d015b8 = nn::os::GetSystemTick();
  DAT_04d015c0 = 0;
  DAT_04d015c8 = 0x1c2b;
  FUN_0277d4ac();
  DAT_04d015d0 = 0x142e;
  FUN_0277d4ac();
  return;
}

