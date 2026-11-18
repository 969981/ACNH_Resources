
void _INIT_8022(void)

{
  DAT_05761b44 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05761b48);
  DAT_05761b54 = 0x8004ef;
  DAT_05761b58 = nn::os::GetSystemTick();
  DAT_05761b60 = 0;
  DAT_05761b68 = PTR_DAT_04bb2020 + 0x10;
  DAT_05761b70 = "ModelOnUI";
  return;
}

