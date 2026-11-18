
void _INIT_8170(void)

{
  DAT_05aa9e10 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aa9e14);
  DAT_05aa9e20 = 0x8004ef;
  DAT_05aa9e28 = nn::os::GetSystemTick();
  DAT_05aa9e30 = 0;
  return;
}

