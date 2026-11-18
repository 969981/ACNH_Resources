
void _INIT_8251(void)

{
  DAT_05ac4078 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ac407c);
  DAT_05ac4088 = 0x8004ef;
  DAT_05ac4090 = nn::os::GetSystemTick();
  DAT_05ac4098 = 0;
  return;
}

