
void _INIT_8280(void)

{
  DAT_05acf8b8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05acf8bc);
  DAT_05acf8c8 = 0x8004ef;
  DAT_05acf8d0 = nn::os::GetSystemTick();
  DAT_05acf8d8 = 0;
  return;
}

