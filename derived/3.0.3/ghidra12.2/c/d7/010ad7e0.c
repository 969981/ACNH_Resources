
void _INIT_4110(void)

{
  DAT_05090ac0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05090ac4);
  DAT_05090ad0 = 0x8004ef;
  DAT_05090ad8 = nn::os::GetSystemTick();
  DAT_05090ae0 = 0;
  DAT_05090ae8 = PTR_DAT_04bb2020 + 0x10;
  DAT_05090af0 = "MainContents";
  DAT_05090af8 = DAT_05090ae8;
  DAT_05090b00 = "FixedUi";
  DAT_05090b08 = DAT_05090ae8;
  DAT_05090b10 = "Prepare";
  DAT_05090b18 = DAT_05090ae8;
  DAT_05090b20 = "Layout";
  DAT_05090b28 = DAT_05090ae8;
  DAT_05090b30 = "Scene";
  DAT_05090b38 = DAT_05090ae8;
  DAT_05090b40 = "Fader";
  DAT_05090b48 = DAT_05090ae8;
  DAT_05090b50 = "Notification";
  DAT_05090b58 = 0xc4070000c4700000;
  DAT_05090b60 = 0x4407000044700000;
  return;
}

