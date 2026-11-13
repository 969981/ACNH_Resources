
void _INIT_4051(void)

{
  DAT_0507d308 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0507d30c);
  DAT_0507d318 = 0x8004ef;
  DAT_0507d320 = nn::os::GetSystemTick();
  DAT_0507d328 = 0;
  DAT_0507d330 = 0x1c2b;
  FUN_0277d4ac();
  DAT_0507d338 = 0x142e;
  FUN_0277d4ac();
  DAT_0507d340 = 0xc0000000;
  DAT_0507d344 = 0x40000000;
  DAT_0507d348 = 1;
  return;
}

