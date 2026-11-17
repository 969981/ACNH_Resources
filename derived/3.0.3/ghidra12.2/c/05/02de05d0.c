
void _INIT_7061(void)

{
  DAT_0568e088 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0568e08c);
  DAT_0568e098 = 0x8004ef;
  DAT_0568e0a0 = nn::os::GetSystemTick();
  DAT_0568e0a8 = 0;
  DAT_0568e0b0 = PTR_DAT_04bb2020 + 0x10;
  DAT_0568e0b8 = "ModelOnUI";
  return;
}

