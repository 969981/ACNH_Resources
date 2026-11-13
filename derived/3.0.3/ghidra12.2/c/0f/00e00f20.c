
void _INIT_3005(void)

{
  DAT_04f3bcf0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f3bcf4);
  DAT_04f3bd00 = 0x8004ef;
  DAT_04f3bd08 = nn::os::GetSystemTick();
  DAT_04f3bd10 = 0;
  DAT_04f3bd18 = PTR_DAT_04bb2020 + 0x10;
  DAT_04f3bd20 = "ModelOnUI";
  DAT_04f3bd28 = 1;
  return;
}

