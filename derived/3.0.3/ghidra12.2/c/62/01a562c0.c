
void _INIT_5130(void)

{
  DAT_053005d0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_053005d4);
  DAT_053005e0 = 0x8004ef;
  DAT_053005e8 = nn::os::GetSystemTick();
  DAT_053005f0 = 0;
  DAT_053005f8 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05300600 = 0x142e;
  FUN_0277d4ac();
  DAT_05300608 = 0xc0000000;
  DAT_0530060c = 0x40000000;
  DAT_05300610 = 1;
  return;
}

