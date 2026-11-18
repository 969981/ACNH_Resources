
void _INIT_7550(void)

{
  DAT_0571ed10 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0571ed14);
  DAT_0571ed20 = 0x8004ef;
  DAT_0571ed28 = nn::os::GetSystemTick();
  DAT_0571ed30 = 0;
  DAT_0571ed38 = PTR_DAT_04bb2020 + 0x10;
  DAT_0571ed40 = "ModelOnUI";
  return;
}

