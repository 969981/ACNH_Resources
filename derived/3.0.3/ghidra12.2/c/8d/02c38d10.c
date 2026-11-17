
void _INIT_6912(void)

{
  DAT_0565a000 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0565a004);
  DAT_0565a010 = 0x8004ef;
  DAT_0565a018 = nn::os::GetSystemTick();
  DAT_0565a020 = 0;
  return;
}

