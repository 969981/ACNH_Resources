
void _INIT_8478(void)

{
  DAT_05ae6100 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ae6104);
  DAT_05ae6110 = 0x8004ef;
  DAT_05ae6118 = nn::os::GetSystemTick();
  DAT_05ae6120 = 0;
  DAT_05ae6128 = PTR_DAT_04bb2020 + 0x10;
  DAT_05ae6130 = "PageSign_Decide";
  DAT_05ae6138 = PTR_DAT_04bb2020 + 0x10;
  DAT_05ae6140 = "PageSign_InvalidDecide";
  return;
}

