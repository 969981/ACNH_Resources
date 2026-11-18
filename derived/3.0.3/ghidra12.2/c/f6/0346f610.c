
void _INIT_8000(void)

{
  DAT_0575c650 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0575c654);
  DAT_0575c660 = 0x8004ef;
  DAT_0575c668 = nn::os::GetSystemTick();
  DAT_0575c670 = 0;
  DAT_0575c678 = PTR_DAT_04bb2020 + 0x10;
  DAT_0575c680 = "ModelOnUI";
  return;
}

