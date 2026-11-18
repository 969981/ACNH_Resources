
void _INIT_8283(void)

{
  DAT_05acf9e8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05acf9ec);
  DAT_05acf9f8 = 0x8004ef;
  DAT_05acfa00 = nn::os::GetSystemTick();
  DAT_05acfa08 = 0;
  DAT_05acfa10 = 2;
  FUN_038e18e4(&DAT_05acfa18);
  FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05acfa18,&__DT_FINI_ARRAY);
  return;
}

