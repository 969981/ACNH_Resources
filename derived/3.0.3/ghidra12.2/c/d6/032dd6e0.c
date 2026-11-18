
void _INIT_7750(void)

{
  DAT_0572f918 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0572f91c);
  DAT_0572f928 = 0x8004ef;
  DAT_0572f930 = nn::os::GetSystemTick();
  DAT_0572f938 = 0;
  DAT_0572f940 = 0;
  FUN_001001d0(&LAB_032dd6d4,&DAT_0572f940,&__DT_FINI_ARRAY);
  return;
}

