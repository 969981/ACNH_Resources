
void _INIT_8328(void)

{
  DAT_05adac88 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05adac8c);
  DAT_05adac98 = 0x8004ef;
  DAT_05adaca0 = nn::os::GetSystemTick();
  DAT_05adaca8 = 0;
  DAT_05adacb0 = PTR_DAT_04bb2020 + 0x10;
  DAT_05adacb8 = &DAT_040b2aee;
  return;
}

