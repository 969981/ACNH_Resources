
void _INIT_4015(void)

{
  DAT_05078e68 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05078e6c);
  DAT_05078e78 = 0x8004ef;
  DAT_05078e80 = nn::os::GetSystemTick();
  DAT_05078ec3 = 0;
  DAT_05078e88 = 0;
  DAT_05078e98 = &DAT_05078ea4;
  DAT_05078ea0 = 0x20;
  DAT_05078eac = 0x65676174;
  DAT_05078eb0 = 0;
  DAT_05078ea4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05078ea4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05078ea4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05078ea4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05078ea4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05078ea4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05078ea4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05078ea4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05078e90 = PTR_DAT_04bb2028 + 0x10;
  DAT_05078ec8 = FUN_006bd550("InvalidStage",0);
  return;
}

