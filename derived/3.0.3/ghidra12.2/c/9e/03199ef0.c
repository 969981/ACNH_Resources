
void _INIT_7502(void)

{
  DAT_05701808 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0570180c);
  DAT_05701818 = 0x8004ef;
  DAT_05701820 = nn::os::GetSystemTick();
  DAT_05701828 = 0;
  DAT_05701830 = PTR_DAT_04bb2020 + 0x10;
  DAT_05701838 = "ModelOnUI";
  return;
}

