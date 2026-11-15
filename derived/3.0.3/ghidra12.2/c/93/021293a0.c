
void _INIT_5601(void)

{
  DAT_053ed160 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_053ed164);
  DAT_053ed170 = 0x8004ef;
  DAT_053ed178 = nn::os::GetSystemTick();
  DAT_053ed180 = 0;
  DAT_053ed188 = 0x1c2b;
  FUN_0277d4ac();
  DAT_053ed190 = 0x142e;
  FUN_0277d4ac();
  DAT_053ed198 = 0xc0000000;
  DAT_053ed19c = 0x40000000;
  DAT_053ed1a0 = 1;
  return;
}

