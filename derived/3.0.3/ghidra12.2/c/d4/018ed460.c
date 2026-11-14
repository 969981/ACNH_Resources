
void _INIT_5020(void)

{
  DAT_052c3020 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052c3024);
  DAT_052c3030 = 0x8004ef;
  DAT_052c3038 = nn::os::GetSystemTick();
  DAT_052c3040 = 0;
  return;
}

