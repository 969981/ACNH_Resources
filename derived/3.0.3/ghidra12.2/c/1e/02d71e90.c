
void _INIT_7015(void)

{
  DAT_0568419c = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056841a0);
  DAT_056841ac = 0x8004ef;
  DAT_056841b0 = nn::os::GetSystemTick();
  DAT_056841b8 = 0;
  DAT_056841c0 = 0x1c2b;
  FUN_0277d4ac();
  DAT_056841c8 = 0x142e;
  FUN_0277d4ac();
  DAT_056841d0 = 0xc0000000;
  DAT_056841d4 = 0x40000000;
  DAT_056841d8 = 1;
  return;
}

