
void _INIT_8076(void)

{
  DAT_0576ea00 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0576ea04);
  DAT_0576ea10 = 0x8004ef;
  DAT_0576ea18 = nn::os::GetSystemTick();
  DAT_0576ea20 = 0;
  DAT_0576ea28 = PTR_DAT_04bb2020 + 0x10;
  DAT_0576ea30 = "ModelOnUI";
  return;
}

