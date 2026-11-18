
void _INIT_8006(void)

{
  DAT_0575c8d4 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0575c8d8);
  DAT_0575c8e4 = 0x8004ef;
  DAT_0575c8e8 = nn::os::GetSystemTick();
  DAT_0575c8f0 = 0;
  return;
}

