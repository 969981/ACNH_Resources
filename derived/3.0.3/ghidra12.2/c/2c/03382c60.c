
void _INIT_7861(void)

{
  DAT_05738330 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05738334);
  DAT_05738340 = 0x8004ef;
  DAT_05738348 = nn::os::GetSystemTick();
  DAT_0573838b = 0;
  DAT_05738350 = 0;
  DAT_05738360 = &DAT_0573836c;
  DAT_05738368 = 0x20;
  DAT_05738374 = 0x65676174;
  DAT_05738378 = 0;
  DAT_0573836c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0573836c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0573836c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0573836c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0573836c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0573836c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0573836c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0573836c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05738358 = PTR_DAT_04bb2028 + 0x10;
  DAT_05738390 = FUN_006bd550("InvalidStage",0);
  return;
}

