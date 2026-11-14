
void _INIT_4801(void)

{
  DAT_05231188 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0523118c);
  DAT_05231198 = 0x8004ef;
  DAT_052311a0 = nn::os::GetSystemTick();
  DAT_052311a8 = 0;
  DAT_052311b0 = PTR_DAT_04bb2020 + 0x10;
  DAT_052311b8 = "APP_DrawSkyScatterMap";
  DAT_052311c0 = PTR_DAT_04bb2020 + 0x10;
  DAT_052311c8 = "SkyScatterBuffer";
  return;
}

