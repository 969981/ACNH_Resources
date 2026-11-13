
void _INIT_3983(void)

{
  DAT_05076290 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05076294);
  DAT_050762a0 = 0x8004ef;
  DAT_050762a8 = nn::os::GetSystemTick();
  DAT_050762eb = 0;
  DAT_050762b0 = 0;
  DAT_050762c0 = &DAT_050762cc;
  DAT_050762c8 = 0x20;
  DAT_050762d4 = 0x65676174;
  DAT_050762d8 = 0;
  DAT_050762cc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_050762cc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_050762cc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_050762cc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_050762cc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_050762cc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_050762cc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_050762cc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_050762b8 = PTR_DAT_04bb2028 + 0x10;
  DAT_050762f0 = FUN_006bd550("InvalidStage",0);
  DAT_050762f8 = PTR_DAT_04bb2020 + 0x10;
  DAT_05076300 = "ModelOnUI";
  return;
}

