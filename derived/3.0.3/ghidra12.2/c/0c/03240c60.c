
void _INIT_7575(void)

{
  DAT_05724208 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0572420c);
  DAT_05724218 = 0x8004ef;
  DAT_05724220 = nn::os::GetSystemTick();
  DAT_05724228 = 0;
  DAT_05724230 = PTR_DAT_04bb2020 + 0x10;
  DAT_05724238 = "ModelOnUI";
  return;
}

