
void _INIT_6232(void)

{
  DAT_055851d8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_055851dc);
  DAT_055851e8 = 0x8004ef;
  DAT_055851f0 = nn::os::GetSystemTick();
  DAT_05585233 = 0;
  DAT_055851f8 = 0;
  DAT_05585208 = &DAT_05585214;
  DAT_05585210 = 0x20;
  DAT_0558521c = 0x65676174;
  DAT_05585220 = 0;
  DAT_05585214._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05585214._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05585214._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05585214._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05585214._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05585214._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05585214._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05585214._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05585200 = PTR_DAT_04bb2028 + 0x10;
  DAT_05585238 = FUN_006bd550("InvalidStage",0);
  return;
}

