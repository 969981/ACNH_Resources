
void _INIT_5080(void)

{
  DAT_052c8750 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052c8754);
  DAT_052c8760 = 0x8004ef;
  DAT_052c8768 = nn::os::GetSystemTick();
  DAT_052c8770 = 0;
  DAT_052c8778 = 2;
  DAT_052c877c = 0x1c2b;
  FUN_0277d4ac();
  DAT_052c8784 = 0x142e;
  FUN_0277d4ac();
  DAT_052c87c3 = 0;
  DAT_052c87a0 = 0x20;
  DAT_052c8798 = &DAT_052c87a4;
  DAT_052c87ac = 0x65676174;
  DAT_052c87b0 = 0;
  DAT_052c87a4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052c87a4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052c87a4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052c87a4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052c87a4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052c87a4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052c87a4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052c87a4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052c8790 = PTR_DAT_04bb2028 + 0x10;
  DAT_052c87c8 = FUN_006bd550("InvalidStage",0);
  return;
}

