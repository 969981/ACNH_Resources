
void _INIT_8039(void)

{
  DAT_05765220 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05765224);
  DAT_05765230 = 0x8004ef;
  DAT_05765238 = nn::os::GetSystemTick();
  DAT_05765240 = 0;
  return;
}

