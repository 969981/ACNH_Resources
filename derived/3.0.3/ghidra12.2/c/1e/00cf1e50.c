
void _INIT_2600(void)

{
  DAT_04ec5618 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04ec561c);
  DAT_04ec5628 = 0x8004ef;
  DAT_04ec5630 = nn::os::GetSystemTick();
  DAT_04ec5638 = 0;
  DAT_04ec5640 = PTR_DAT_04bb2020 + 0x10;
  DAT_04ec5648 = "ModelOnUI";
  return;
}

