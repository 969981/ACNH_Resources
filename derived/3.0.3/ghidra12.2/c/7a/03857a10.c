
void _INIT_8455(void)

{
  DAT_05ae5be8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae5bec);
  DAT_05ae5bf8 = 0x8004ef;
  DAT_05ae5c00 = nn::os::GetSystemTick();
  DAT_05ae5c08 = 0;
  return;
}

