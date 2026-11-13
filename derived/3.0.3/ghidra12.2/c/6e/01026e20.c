
void _INIT_3842(void)

{
  DAT_05056440 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05056444);
  DAT_05056450 = 0x8004ef;
  DAT_05056458 = nn::os::GetSystemTick();
  DAT_0505649b = 0;
  DAT_05056460 = 0;
  DAT_05056470 = &DAT_0505647c;
  DAT_05056478 = 0x20;
  DAT_05056484 = 0x65676174;
  DAT_05056488 = 0;
  DAT_0505647c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0505647c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0505647c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0505647c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0505647c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0505647c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0505647c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0505647c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05056468 = PTR_DAT_04bb2028 + 0x10;
  DAT_050564a0 = FUN_006bd550("InvalidStage",0);
  return;
}

