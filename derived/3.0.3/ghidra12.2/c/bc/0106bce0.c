
void _INIT_3978(void)

{
  DAT_05076010 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05076014);
  DAT_05076020 = 0x8004ef;
  DAT_05076028 = nn::os::GetSystemTick();
  DAT_0507606b = 0;
  DAT_05076030 = 0;
  DAT_05076040 = &DAT_0507604c;
  DAT_05076048 = 0x20;
  DAT_05076054 = 0x65676174;
  DAT_05076058 = 0;
  DAT_0507604c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0507604c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0507604c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0507604c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0507604c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0507604c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0507604c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0507604c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05076038 = PTR_DAT_04bb2028 + 0x10;
  DAT_05076070 = FUN_006bd550("InvalidStage",0);
  return;
}

