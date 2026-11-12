
void _INIT_1437(void)

{
  DAT_04ccaf50 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04ccaf54);
  DAT_04ccaf60 = 0x8004ef;
  DAT_04ccaf68 = nn::os::GetSystemTick();
  DAT_04ccaf70 = 0;
  FUN_03f2f3b8(0x3f800000,&DAT_04ccaf78,0);
  DAT_04ccb008._0_5_ = 0;
  DAT_04ccaf78 = PTR_DAT_04bb4460 + 0x10;
  DAT_04ccb008._5_3_ = 0;
  uRam0000000004ccb010 = 0;
  DAT_04ccb018 = 0;
  DAT_04ccb020 = 0;
  DAT_04ccb028 = 0;
  DAT_04ccaff8 = PTR_DAT_04bd0df0 + 0x10;
  DAT_04ccb000 = 0;
  DAT_04ccb048 = 1;
  DAT_04ccb030 = 0;
  DAT_04ccb038 = 0;
  DAT_04ccb040 = 0;
  FUN_001001d0(PTR_FUN_04bb4428,&DAT_04ccaf78,&__DT_FINI_ARRAY);
  return;
}

