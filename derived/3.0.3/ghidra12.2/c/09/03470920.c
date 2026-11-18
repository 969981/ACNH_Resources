
void _INIT_8002(void)

{
  DAT_0575c6e8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0575c6ec);
  DAT_0575c6f8 = 0x8004ef;
  DAT_0575c700 = nn::os::GetSystemTick();
  DAT_0575c708 = 0;
  DAT_0575c710 = PTR_DAT_04bb2020 + 0x10;
  DAT_0575c718 = "ModelOnUI";
  return;
}

