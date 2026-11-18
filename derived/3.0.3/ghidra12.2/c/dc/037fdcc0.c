
void _INIT_8310(void)

{
  DAT_05ad7fd0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ad7fd4);
  DAT_05ad7fe0 = 0x8004ef;
  DAT_05ad7fe8 = nn::os::GetSystemTick();
  DAT_05ad7ff0 = 0;
  return;
}

