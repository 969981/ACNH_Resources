
void _INIT_4908(void)

{
  DAT_052951f0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052951f4);
  DAT_05295200 = 0x8004ef;
  DAT_05295208 = nn::os::GetSystemTick();
  DAT_0529524b = 0;
  DAT_05295210 = 0;
  DAT_05295220 = &DAT_0529522c;
  DAT_05295228 = 0x20;
  DAT_05295234 = 0x65676174;
  DAT_05295238 = 0;
  DAT_0529522c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0529522c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0529522c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0529522c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0529522c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0529522c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0529522c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0529522c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05295218 = PTR_DAT_04bb2028 + 0x10;
  DAT_05295250 = FUN_006bd550("InvalidStage",0);
  return;
}

