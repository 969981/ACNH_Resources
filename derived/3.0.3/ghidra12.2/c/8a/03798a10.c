
void _INIT_8249(void)

{
  DAT_05ac3f20 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ac3f24);
  DAT_05ac3f30 = 0x8004ef;
  DAT_05ac3f38 = nn::os::GetSystemTick();
  DAT_05ac3f40 = 0;
  return;
}

