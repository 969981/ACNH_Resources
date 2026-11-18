
void _INIT_8275(void)

{
  DAT_05acf1e8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05acf1ec);
  DAT_05acf1f8 = 0x8004ef;
  DAT_05acf200 = nn::os::GetSystemTick();
  DAT_05acf208 = 0;
  DAT_05acf210 = PTR_DAT_04bb2020 + 0x10;
  DAT_05acf218 = &DAT_040b2aee;
  return;
}

