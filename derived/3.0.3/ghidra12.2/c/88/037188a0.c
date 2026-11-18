
void _INIT_8218(void)

{
  DAT_05aba3f0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aba3f4);
  DAT_05aba400 = 0x8004ef;
  DAT_05aba408 = nn::os::GetSystemTick();
  DAT_05aba410 = 0;
  return;
}

