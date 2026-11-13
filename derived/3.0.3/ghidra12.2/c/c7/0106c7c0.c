
void _INIT_3981(void)

{
  DAT_05076168 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0507616c);
  DAT_05076178 = 0x8004ef;
  DAT_05076180 = nn::os::GetSystemTick();
  DAT_050761c3 = 0;
  DAT_05076188 = 0;
  DAT_05076198 = &DAT_050761a4;
  DAT_050761a0 = 0x20;
  DAT_050761ac = 0x65676174;
  DAT_050761b0 = 0;
  DAT_050761a4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_050761a4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_050761a4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_050761a4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_050761a4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_050761a4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_050761a4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_050761a4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05076190 = PTR_DAT_04bb2028 + 0x10;
  DAT_050761c8 = FUN_006bd550("InvalidStage",0);
  DAT_050761d0 = 0;
  DAT_050761d8 = 0;
  DAT_050761e0 = 1;
  return;
}

