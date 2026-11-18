
void _INIT_8324(void)

{
  DAT_05ad99e8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05ad99ec);
  DAT_05ad99f8 = 0x8004ef;
  DAT_05ad9a00 = nn::os::GetSystemTick();
  DAT_05ad9a43 = 0;
  DAT_05ad9a08 = 0;
  DAT_05ad9a18 = &DAT_05ad9a24;
  DAT_05ad9a20 = 0x20;
  DAT_05ad9a2c = 0x65676174;
  DAT_05ad9a30 = 0;
  DAT_05ad9a24._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05ad9a24._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05ad9a24._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05ad9a24._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05ad9a24._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05ad9a24._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05ad9a24._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05ad9a24._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05ad9a10 = PTR_DAT_04bb2028 + 0x10;
  DAT_05ad9a48 = FUN_006bd550("InvalidStage",0);
  FUN_038e18e4(&DAT_05ad9a50);
  FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05ad9a50,&__DT_FINI_ARRAY);
  return;
}

