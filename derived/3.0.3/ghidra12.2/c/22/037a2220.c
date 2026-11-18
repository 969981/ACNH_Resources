
void _INIT_8260(void)

{
  DAT_05ac75a0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ac75a4);
  DAT_05ac75b0 = 0x8004ef;
  DAT_05ac75b8 = nn::os::GetSystemTick();
  DAT_05ac75c0 = 0;
  DAT_05ac75c8 = 3;
  DAT_05ac75cc = 2;
  DAT_05ac75d1 = &DAT_101010101010101;
  DAT_05ac75d9 = &DAT_101010101010101;
  DAT_05ac75e1 = &DAT_101010101010101;
  DAT_05ac75e9 = &DAT_101010101010101;
  DAT_05ac75f1 = &DAT_101010101010101;
  DAT_05ac75f9 = &DAT_101010101010101;
  DAT_05ac7601 = 1;
  DAT_05ac75d0 = 0;
  DAT_05ac7602 = 0x2020202;
  uRam0000000005ac7606 = 0x20202;
  return;
}

