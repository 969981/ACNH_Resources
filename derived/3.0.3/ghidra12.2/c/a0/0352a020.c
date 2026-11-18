
void _INIT_8058(void)

{
  DAT_05768410 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05768414);
  DAT_05768420 = 0x8004ef;
  DAT_05768428 = nn::os::GetSystemTick();
  DAT_05768448 = 0xc0000000;
  DAT_05768430 = 0;
  DAT_05768438 = PTR_DAT_04bb2020 + 0x10;
  DAT_05768440 = "ModelOnUI";
  DAT_0576844c = 0x40000000;
  return;
}

