
void _INIT_6950(void)

{
  DAT_05665a00 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05665a04);
  DAT_05665a10 = 0x8004ef;
  DAT_05665a18 = nn::os::GetSystemTick();
  DAT_05665a20 = 0;
  return;
}

