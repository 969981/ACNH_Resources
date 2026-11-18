
void _INIT_8262(void)

{
  DAT_05ac76a0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ac76a4);
  DAT_05ac76b0 = 0x8004ef;
  DAT_05ac76b8 = nn::os::GetSystemTick();
  DAT_05ac76c0 = 0;
  FUN_038e18e4(&DAT_05ac76c8);
  FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05ac76c8,&__DT_FINI_ARRAY);
  DAT_05ac7708 = PTR_DAT_04bb2020 + 0x10;
  DAT_05ac7710 = &DAT_040a8336;
  return;
}

