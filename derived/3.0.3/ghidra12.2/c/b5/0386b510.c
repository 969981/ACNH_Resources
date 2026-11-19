
void _INIT_8485(void)

{
  DAT_05ae625c = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae6260);
  DAT_05ae626c = 0x8004ef;
  DAT_05ae6270 = nn::os::GetSystemTick();
  DAT_05ae6278 = 0;
  return;
}

