
void _INIT_8030(void)

{
  DAT_05762cd8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05762cdc);
  DAT_05762ce8 = 0x8004ef;
  DAT_05762cf0 = nn::os::GetSystemTick();
  DAT_05762d10 = 0xc0000000;
  DAT_05762cf8 = 0;
  DAT_05762d00 = PTR_DAT_04bb2020 + 0x10;
  DAT_05762d08 = "ModelOnUI";
  DAT_05762d14 = 0x40000000;
  return;
}

