
void _INIT_8011(void)

{
  DAT_0575f538 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0575f53c);
  DAT_0575f548 = 0x8004ef;
  DAT_0575f550 = nn::os::GetSystemTick();
  DAT_0575f558 = 0;
  return;
}

