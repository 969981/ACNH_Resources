
void _INIT_6340(void)

{
  DAT_0559bcb4 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0559bcb8);
  DAT_0559bcc4 = 0x8004ef;
  DAT_0559bcc8 = nn::os::GetSystemTick();
  DAT_0559bcd0 = 0;
  DAT_0559bcd8 = 0x1c2b;
  FUN_0277d4ac();
  DAT_0559bce0 = 0x142e;
  FUN_0277d4ac();
  DAT_0559bce8 = 0xc0000000;
  DAT_0559bcec = 0x40000000;
  DAT_0559bcf0 = 1;
  return;
}

