
void _INIT_8250(void)

{
  DAT_05ac3f78 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ac3f7c);
  DAT_05ac3f88 = 0x8004ef;
  DAT_05ac3f90 = nn::os::GetSystemTick();
  DAT_05ac3f98 = 0;
  FUN_038e18e4(&DAT_05ac3fa0);
  FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05ac3fa0,&__DT_FINI_ARRAY);
  return;
}

