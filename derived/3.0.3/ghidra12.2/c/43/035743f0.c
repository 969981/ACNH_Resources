
void _INIT_8087(void)

{
  DAT_0576f880 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0576f884);
  DAT_0576f890 = 0x8004ef;
  DAT_0576f898 = nn::os::GetSystemTick();
  DAT_0576f8a0 = 0;
  return;
}

