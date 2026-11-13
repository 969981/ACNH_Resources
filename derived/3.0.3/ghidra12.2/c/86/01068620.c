
void _INIT_3966(void)

{
  DAT_05075140 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05075144);
  DAT_05075150 = 0x8004ef;
  DAT_05075158 = nn::os::GetSystemTick();
  DAT_0507519b = 0;
  DAT_05075160 = 0;
  DAT_05075170 = &DAT_0507517c;
  DAT_05075178 = 0x20;
  DAT_05075184 = 0x65676174;
  DAT_05075188 = 0;
  DAT_0507517c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0507517c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0507517c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0507517c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0507517c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0507517c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0507517c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0507517c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05075168 = PTR_DAT_04bb2028 + 0x10;
  DAT_050751a0 = FUN_006bd550("InvalidStage",0);
  DAT_050751a8 = 0;
  DAT_050751b0 = 0;
  return;
}

