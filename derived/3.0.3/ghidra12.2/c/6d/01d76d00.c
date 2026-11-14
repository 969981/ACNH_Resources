
void _INIT_5400(void)

{
  DAT_05370bd0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05370bd4);
  DAT_05370be0 = 0x8004ef;
  DAT_05370be8 = nn::os::GetSystemTick();
  DAT_05370bf0 = 0;
  return;
}

