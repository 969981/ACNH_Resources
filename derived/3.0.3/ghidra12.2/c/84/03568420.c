
void _INIT_8081(void)

{
  DAT_0576ed20 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0576ed24);
  DAT_0576ed30 = 0x8004ef;
  DAT_0576ed38 = nn::os::GetSystemTick();
  DAT_0576ed40 = 0;
  return;
}

