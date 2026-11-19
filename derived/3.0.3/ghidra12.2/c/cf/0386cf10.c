
void _INIT_8488(void)

{
  DAT_05ae62d8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae62dc);
  DAT_05ae62e8 = 0x8004ef;
  DAT_05ae62f0 = nn::os::GetSystemTick();
  DAT_05ae62f8 = 0;
  return;
}

