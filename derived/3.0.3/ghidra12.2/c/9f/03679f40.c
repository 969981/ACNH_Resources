
void _INIT_8180(void)

{
  DAT_05aab330 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aab334);
  DAT_05aab340 = 0x8004ef;
  DAT_05aab348 = nn::os::GetSystemTick();
  DAT_05aab350 = 0;
  return;
}

