
void _INIT_4150(void)

{
  DAT_05095980 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05095984);
  DAT_05095990 = 0x8004ef;
  DAT_05095998 = nn::os::GetSystemTick();
  DAT_050959a0 = 0;
  DAT_050959a8 = 0x1c2b;
  FUN_0277d4ac();
  DAT_050959b0 = 0x142e;
  FUN_0277d4ac();
  DAT_050959b8 = 0xc0000000;
  DAT_050959bc = 0x40000000;
  DAT_050959c0 = 1;
  return;
}

