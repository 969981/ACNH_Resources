
void _INIT_8400(void)

{
  DAT_05ae5338 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae533c);
  DAT_05ae5348 = 0x8004ef;
  DAT_05ae5350 = nn::os::GetSystemTick();
  DAT_05ae5358 = 0;
  return;
}

