
void _INIT_7255(void)

{
  DAT_056cc1d8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056cc1dc);
  DAT_056cc1e8 = 0x8004ef;
  DAT_056cc1f0 = nn::os::GetSystemTick();
  DAT_056cc1f8 = 0;
  return;
}

