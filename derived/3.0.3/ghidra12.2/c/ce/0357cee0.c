
void _INIT_8092(void)

{
  DAT_05770f10 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05770f14);
  DAT_05770f20 = 0x8004ef;
  DAT_05770f28 = nn::os::GetSystemTick();
  DAT_05770f30 = 0;
  DAT_05770f38 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05770f40 = 0x142e;
  FUN_0277d4ac();
  DAT_05770f48 = 0xc0000000;
  DAT_05770f4c = 0x40000000;
  DAT_05770f50 = 1;
  return;
}

