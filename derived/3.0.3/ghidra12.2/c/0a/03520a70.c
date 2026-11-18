
void _INIT_8051(void)

{
  DAT_05767e40 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05767e44);
  DAT_05767e50 = 0x8004ef;
  DAT_05767e58 = nn::os::GetSystemTick();
  DAT_05767e60 = 0;
  return;
}

