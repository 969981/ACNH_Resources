
void _INIT_8405(void)

{
  DAT_05ae5408 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae540c);
  DAT_05ae5418 = 0x8004ef;
  DAT_05ae5420 = nn::os::GetSystemTick();
  DAT_05ae5428 = 0;
  return;
}

