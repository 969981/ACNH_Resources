
void _INIT_8080(void)

{
  DAT_0576ecec = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0576ecf0);
  DAT_0576ecfc = 0x8004ef;
  DAT_0576ed00 = nn::os::GetSystemTick();
  DAT_0576ed08 = 0;
  return;
}

