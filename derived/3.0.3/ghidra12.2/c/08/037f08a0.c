
void _INIT_8300(void)

{
  DAT_05ad4548 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ad454c);
  DAT_05ad4558 = 0x8004ef;
  DAT_05ad4560 = nn::os::GetSystemTick();
  DAT_05ad4568 = 0;
  return;
}

