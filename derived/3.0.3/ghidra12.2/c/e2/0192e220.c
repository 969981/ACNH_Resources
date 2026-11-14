
void _INIT_5065(void)

{
  DAT_052c5e38 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052c5e3c);
  DAT_052c5e48 = 0x8004ef;
  DAT_052c5e50 = nn::os::GetSystemTick();
  DAT_052c5e9b = 0;
  DAT_052c5e58 = 0;
  DAT_052c5e60 = 2;
  DAT_052c5e70 = &DAT_052c5e7c;
  DAT_052c5e78 = 0x20;
  DAT_052c5e84 = 0x65676174;
  DAT_052c5e88 = 0;
  DAT_052c5e7c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052c5e7c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052c5e7c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052c5e7c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052c5e7c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052c5e7c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052c5e7c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052c5e7c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052c5e68 = PTR_DAT_04bb2028 + 0x10;
  DAT_052c5ea0 = FUN_006bd550("InvalidStage",0);
  DAT_052c5ea8 = 0x1c2b;
  FUN_0277d4ac(&DAT_052c5ea8);
  DAT_052c5eb0 = 0x142e;
  FUN_0277d4ac();
  return;
}

