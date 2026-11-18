
void _INIT_8281(void)

{
  DAT_05acf8f0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05acf8f4);
  DAT_05acf900 = 0x8004ef;
  DAT_05acf908 = nn::os::GetSystemTick();
  DAT_05acf910 = 0;
  return;
}

