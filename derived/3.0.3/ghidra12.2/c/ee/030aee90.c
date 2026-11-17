
void _INIT_7390(void)

{
  DAT_056e8ae0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056e8ae4);
  DAT_056e8af0 = 0x8004ef;
  DAT_056e8af8 = nn::os::GetSystemTick();
  DAT_056e8b18 = 0xc0000000;
  DAT_056e8b00 = 0;
  DAT_056e8b08 = PTR_DAT_04bb2020 + 0x10;
  DAT_056e8b10 = "ModelOnUI";
  DAT_056e8b1c = 0x40000000;
  return;
}

