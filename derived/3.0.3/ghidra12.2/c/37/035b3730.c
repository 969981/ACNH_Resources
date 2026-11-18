
void _INIT_8125(void)

{
  DAT_05aa8a98 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aa8a9c);
  DAT_05aa8aa8 = 0x8004ef;
  DAT_05aa8ab0 = nn::os::GetSystemTick();
  DAT_05aa8ab8 = 0;
  return;
}

