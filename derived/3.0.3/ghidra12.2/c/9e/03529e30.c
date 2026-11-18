
void _INIT_8057(void)

{
  DAT_057683c0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_057683c4);
  DAT_057683d0 = 0x8004ef;
  DAT_057683d8 = nn::os::GetSystemTick();
  DAT_057683e0 = 0;
  DAT_057683e8 = PTR_DAT_04bb2020 + 0x10;
  DAT_057683f0 = "ModelOnUI";
  return;
}

