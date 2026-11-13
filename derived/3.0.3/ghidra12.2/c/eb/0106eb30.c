
void _INIT_3990(void)

{
  DAT_050764b8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050764bc);
  DAT_050764c8 = 0x8004ef;
  DAT_050764d0 = nn::os::GetSystemTick();
  DAT_05076513 = 0;
  DAT_050764d8 = 0;
  DAT_050764e8 = &DAT_050764f4;
  DAT_050764f0 = 0x20;
  DAT_050764fc = 0x65676174;
  DAT_05076500 = 0;
  DAT_050764f4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_050764f4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_050764f4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_050764f4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_050764f4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_050764f4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_050764f4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_050764f4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_050764e0 = PTR_DAT_04bb2028 + 0x10;
  DAT_05076518 = FUN_006bd550("InvalidStage",0);
  DAT_05076520 = 0x1c2b;
  FUN_0277d4ac(&DAT_05076520);
  DAT_05076528 = 0x142e;
  FUN_0277d4ac();
  return;
}

