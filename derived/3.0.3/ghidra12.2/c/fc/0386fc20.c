
void _INIT_8500(void)

{
  DAT_05ae65a8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae65ac);
  DAT_05ae65b8 = 0x8004ef;
  DAT_05ae65c0 = nn::os::GetSystemTick();
  DAT_05ae65c8 = 0;
  return;
}

