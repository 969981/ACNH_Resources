
void _INIT_8168(void)

{
  DAT_05aa9dc0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aa9dc4);
  DAT_05aa9dd0 = 0x8004ef;
  DAT_05aa9dd8 = nn::os::GetSystemTick();
  DAT_05aa9de0 = 0;
  return;
}

