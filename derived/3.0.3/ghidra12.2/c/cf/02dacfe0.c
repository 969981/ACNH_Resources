
void _INIT_7030(void)

{
  DAT_05688fb0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05688fb4);
  DAT_05688fc0 = 0x8004ef;
  DAT_05688fc8 = nn::os::GetSystemTick();
  DAT_05688fd0 = 0;
  DAT_05688ff8 = 0x20;
  DAT_0568901b = 0;
  DAT_05688ff0 = &DAT_05688ffc;
  DAT_05688fd8 = PTR_DAT_04bb2020 + 0x10;
  DAT_05688fe0 = "ModelOnUI";
  DAT_05689004 = 0x65676174;
  DAT_05689008 = 0;
  DAT_05688ffc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05688ffc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05688ffc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05688ffc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05688ffc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05688ffc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05688ffc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05688ffc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05688fe8 = PTR_DAT_04bb2028 + 0x10;
  DAT_05689020 = FUN_006bd550("InvalidStage",0);
  DAT_05689028 = 0xc0000000;
  DAT_0568902c = 0x40000000;
  return;
}

