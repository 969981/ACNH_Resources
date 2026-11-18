
void _INIT_8090(void)

{
  DAT_05770e78 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05770e7c);
  DAT_05770e88 = 0x8004ef;
  DAT_05770e90 = nn::os::GetSystemTick();
  DAT_05770e98 = 0;
  return;
}

