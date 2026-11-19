
void _INIT_8401(void)

{
  DAT_05ae5360 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae5364);
  DAT_05ae5370 = 0x8004ef;
  DAT_05ae5378 = nn::os::GetSystemTick();
  DAT_05ae5380 = 0;
  return;
}

