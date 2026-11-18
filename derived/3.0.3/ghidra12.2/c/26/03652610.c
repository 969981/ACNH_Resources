
void _INIT_8169(void)

{
  DAT_05aa9dec = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aa9df0);
  DAT_05aa9dfc = 0x8004ef;
  DAT_05aa9e00 = nn::os::GetSystemTick();
  DAT_05aa9e08 = 0;
  return;
}

