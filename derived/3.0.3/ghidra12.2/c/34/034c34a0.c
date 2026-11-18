
void _INIT_8020(void)

{
  DAT_05761a40 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05761a44);
  DAT_05761a50 = 0x8004ef;
  DAT_05761a58 = nn::os::GetSystemTick();
  DAT_05761a78 = 0xc0000000;
  DAT_05761a60 = 0;
  DAT_05761a68 = PTR_DAT_04bb2020 + 0x10;
  DAT_05761a70 = "ModelOnUI";
  DAT_05761a7c = 0x40000000;
  return;
}

