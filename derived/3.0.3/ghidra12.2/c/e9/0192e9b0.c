
void _INIT_5066(void)

{
  DAT_052c5eb8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052c5ebc);
  DAT_052c5ec8 = 0x8004ef;
  DAT_052c5ed0 = nn::os::GetSystemTick();
  DAT_052c5f1b = 0;
  DAT_052c5ed8 = 0;
  DAT_052c5ee0 = 2;
  DAT_052c5ef0 = &DAT_052c5efc;
  DAT_052c5ef8 = 0x20;
  DAT_052c5f04 = 0x65676174;
  DAT_052c5f08 = 0;
  DAT_052c5efc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052c5efc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052c5efc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052c5efc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052c5efc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052c5efc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052c5efc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052c5efc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052c5ee8 = PTR_DAT_04bb2028 + 0x10;
  DAT_052c5f20 = FUN_006bd550("InvalidStage",0);
  DAT_052c5f28 = 0x1c2b;
  FUN_0277d4ac(&DAT_052c5f28);
  DAT_052c5f30 = 0x142e;
  FUN_0277d4ac();
  return;
}

