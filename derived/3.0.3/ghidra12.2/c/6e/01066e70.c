
void _INIT_3962(void)

{
  DAT_05074558 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0507455c);
  DAT_05074568 = 0x8004ef;
  DAT_05074570 = nn::os::GetSystemTick();
  DAT_050745b3 = 0;
  DAT_05074578 = 0;
  DAT_05074588 = &DAT_05074594;
  DAT_05074590 = 0x20;
  DAT_0507459c = 0x65676174;
  DAT_050745a0 = 0;
  DAT_05074594._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05074594._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05074594._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05074594._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05074594._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05074594._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05074594._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05074594._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05074580 = PTR_DAT_04bb2028 + 0x10;
  DAT_050745b8 = FUN_006bd550("InvalidStage",0);
  return;
}

