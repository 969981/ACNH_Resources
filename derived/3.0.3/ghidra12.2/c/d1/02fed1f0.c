
void _INIT_7310(void)

{
  DAT_056d4300 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056d4304);
  DAT_056d4310 = 0x8004ef;
  DAT_056d4318 = nn::os::GetSystemTick();
  DAT_056d4320 = 0;
  DAT_056d4328 = PTR_DAT_04bb2020 + 0x10;
  DAT_056d4330 = "MyDesignEditCursor";
  return;
}

