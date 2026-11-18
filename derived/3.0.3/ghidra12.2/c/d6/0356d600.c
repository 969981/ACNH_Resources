
void _INIT_8084(void)

{
  DAT_0576f180 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0576f184);
  DAT_0576f190 = 0x8004ef;
  DAT_0576f198 = nn::os::GetSystemTick();
  DAT_0576f1a0 = 0;
  DAT_0576f1a8 = PTR_DAT_04bb2020 + 0x10;
  DAT_0576f1b0 = "ModelOnUI";
  return;
}

