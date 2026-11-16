
void _INIT_6522(void)

{
  DAT_055dfc9c = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_055dfca0);
  DAT_055dfcac = 0x8004ef;
  DAT_055dfcb0 = nn::os::GetSystemTick();
  DAT_055dfcb8 = 0;
  DAT_055dfcc0 = 3;
  DAT_055dfcc4 = 2;
  DAT_055dfcc9 = &DAT_101010101010101;
  DAT_055dfcd1 = &DAT_101010101010101;
  DAT_055dfcd9 = &DAT_101010101010101;
  DAT_055dfce1 = &DAT_101010101010101;
  DAT_055dfce9 = &DAT_101010101010101;
  DAT_055dfcf1 = &DAT_101010101010101;
  DAT_055dfcf9 = 1;
  DAT_055dfcc8 = 0;
  DAT_055dfcfa = 0x2020202;
  uRam00000000055dfcfe = 0x20202;
  return;
}

