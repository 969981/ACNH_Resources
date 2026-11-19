
void _INIT_8510(void)

{
  DAT_05ae6748 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae674c);
  DAT_05ae6758 = 0x8004ef;
  DAT_05ae6760 = nn::os::GetSystemTick();
  DAT_05ae6768 = 0;
  return;
}

