
void _INIT_7800(void)

{
  DAT_05730c90 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05730c94);
  DAT_05730ca0 = 0x8004ef;
  DAT_05730ca8 = nn::os::GetSystemTick();
  DAT_05730cb0 = 0;
  return;
}

