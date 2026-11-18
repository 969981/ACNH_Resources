
void _INIT_8001(void)

{
  DAT_0575c698 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0575c69c);
  DAT_0575c6a8 = 0x8004ef;
  DAT_0575c6b0 = nn::os::GetSystemTick();
  DAT_0575c6b8 = 0;
  return;
}

