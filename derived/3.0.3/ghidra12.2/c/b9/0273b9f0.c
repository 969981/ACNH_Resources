
void _INIT_6173(void)

{
  DAT_05577bc0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05577bc4);
  DAT_05577bd0 = 0x8004ef;
  DAT_05577bd8 = nn::os::GetSystemTick();
  DAT_05577c1b = 0;
  DAT_05577be0 = 0;
  DAT_05577bf0 = &DAT_05577bfc;
  DAT_05577bf8 = 0x20;
  DAT_05577c04 = 0x65676174;
  DAT_05577c08 = 0;
  DAT_05577bfc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05577bfc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05577bfc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05577bfc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05577bfc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05577bfc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05577bfc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05577bfc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05577be8 = PTR_DAT_04bb2028 + 0x10;
  DAT_05577c20 = FUN_006bd550("InvalidStage",0);
  return;
}

