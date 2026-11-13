
void _INIT_4004(void)

{
  DAT_05077568 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0507756c);
  DAT_05077578 = 0x8004ef;
  DAT_05077580 = nn::os::GetSystemTick();
  DAT_050775c3 = 0;
  DAT_05077588 = 0;
  DAT_05077598 = &DAT_050775a4;
  DAT_050775a0 = 0x20;
  DAT_050775ac = 0x65676174;
  DAT_050775b0 = 0;
  DAT_050775a4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_050775a4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_050775a4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_050775a4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_050775a4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_050775a4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_050775a4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_050775a4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05077590 = PTR_DAT_04bb2028 + 0x10;
  DAT_050775c8 = FUN_006bd550("InvalidStage",0);
  DAT_050775d0 = 0x1c2b;
  FUN_0277d4ac(&DAT_050775d0);
  DAT_050775d8 = 0x142e;
  FUN_0277d4ac();
  return;
}

