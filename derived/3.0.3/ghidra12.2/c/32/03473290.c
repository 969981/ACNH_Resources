
void _INIT_8005(void)

{
  DAT_0575c890 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0575c894);
  DAT_0575c8a0 = 0x8004ef;
  DAT_0575c8a8 = nn::os::GetSystemTick();
  DAT_0575c8b0 = 0;
  DAT_0575c8b8 = 0x1c2b;
  FUN_0277d4ac();
  DAT_0575c8c0 = 0x142e;
  FUN_0277d4ac();
  DAT_0575c8c8 = 0xc0000000;
  DAT_0575c8cc = 0x40000000;
  DAT_0575c8d0 = 1;
  return;
}

