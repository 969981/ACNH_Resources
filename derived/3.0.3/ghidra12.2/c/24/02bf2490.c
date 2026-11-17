
void _INIT_6890(void)

{
  DAT_05649080 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05649084);
  DAT_05649090 = 0x8004ef;
  DAT_05649098 = nn::os::GetSystemTick();
  DAT_056490a0 = 0;
  DAT_056490a8 = PTR_DAT_04bb2020 + 0x10;
  DAT_056490b0 = "ModelOnUI";
  return;
}

