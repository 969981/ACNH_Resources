
void _INIT_3964(void)

{
  DAT_05075090 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05075094);
  DAT_050750a0 = 0x8004ef;
  DAT_050750a8 = nn::os::GetSystemTick();
  DAT_050750eb = 0;
  DAT_050750b0 = 0;
  DAT_050750c0 = &DAT_050750cc;
  DAT_050750c8 = 0x20;
  DAT_050750d4 = 0x65676174;
  DAT_050750d8 = 0;
  DAT_050750cc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_050750cc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_050750cc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_050750cc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_050750cc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_050750cc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_050750cc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_050750cc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_050750b8 = PTR_DAT_04bb2028 + 0x10;
  DAT_050750f0 = FUN_006bd550("InvalidStage",0);
  return;
}

