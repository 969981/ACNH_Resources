
void _INIT_7485(void)

{
  DAT_056f8f08 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056f8f0c);
  DAT_056f8f18 = 0x8004ef;
  DAT_056f8f20 = nn::os::GetSystemTick();
  DAT_056f8f28 = 0;
  DAT_056f8f30 = PTR_DAT_04bb2020 + 0x10;
  DAT_056f8f38 = "ModelOnUI";
  return;
}

