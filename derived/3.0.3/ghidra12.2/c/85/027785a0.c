
void _INIT_6230(void)

{
  DAT_055850e0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_055850e4);
  DAT_055850f0 = 0x8004ef;
  DAT_055850f8 = nn::os::GetSystemTick();
  DAT_05585143 = 0;
  DAT_05585100 = 0;
  DAT_05585108 = 1;
  DAT_05585118 = &DAT_05585124;
  DAT_05585120 = 0x20;
  DAT_0558512c = 0x65676174;
  DAT_05585130 = 0;
  DAT_05585124._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05585124._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05585124._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05585124._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05585124._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05585124._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05585124._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05585124._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05585110 = PTR_DAT_04bb2028 + 0x10;
  DAT_05585148 = FUN_006bd550("InvalidStage",0);
  return;
}

