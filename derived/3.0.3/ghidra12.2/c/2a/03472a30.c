
void _INIT_8004(void)

{
  DAT_0575c838 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0575c83c);
  DAT_0575c848 = 0x8004ef;
  DAT_0575c850 = nn::os::GetSystemTick();
  DAT_0575c858 = 0;
  DAT_0575c860 = PTR_DAT_04bb2020 + 0x10;
  DAT_0575c868 = "ModelOnUI";
  DAT_0575c870 = PTR_DAT_04bb2020 + 0x10;
  DAT_0575c878 = "VideogameKeyGuide";
  return;
}

