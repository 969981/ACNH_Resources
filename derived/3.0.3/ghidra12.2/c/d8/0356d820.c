
void _INIT_8085(void)

{
  DAT_0576f1c8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0576f1cc);
  DAT_0576f1d8 = 0x8004ef;
  DAT_0576f1e0 = nn::os::GetSystemTick();
  DAT_0576f1e8 = 0;
  return;
}

