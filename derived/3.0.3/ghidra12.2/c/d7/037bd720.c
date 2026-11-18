
void _INIT_8273(void)

{
  DAT_05acd698 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05acd69c);
  DAT_05acd6a8 = 0x8004ef;
  DAT_05acd6b0 = nn::os::GetSystemTick();
  DAT_05acd6b8 = 0;
  FUN_038e18e4(&DAT_05acd6c0);
  FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05acd6c0,&__DT_FINI_ARRAY);
  return;
}

