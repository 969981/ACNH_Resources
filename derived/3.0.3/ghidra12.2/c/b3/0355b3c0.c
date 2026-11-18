
void _INIT_8070(void)

{
  DAT_0576d994 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0576d998);
  DAT_0576d9a4 = 0x8004ef;
  DAT_0576d9a8 = nn::os::GetSystemTick();
  DAT_0576d9c8 = 0xc0000000;
  DAT_0576d9b0 = 0;
  DAT_0576d9b8 = PTR_DAT_04bb2020 + 0x10;
  DAT_0576d9c0 = "ModelOnUI";
  DAT_0576d9cc = 0x40000000;
  return;
}

