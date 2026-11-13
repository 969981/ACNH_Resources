
void _INIT_4008(void)

{
  DAT_05077720 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05077724);
  DAT_05077730 = 0x8004ef;
  DAT_05077738 = nn::os::GetSystemTick();
  DAT_0507777b = 0;
  DAT_05077740 = 0;
  DAT_05077750 = &DAT_0507775c;
  DAT_05077758 = 0x20;
  DAT_05077764 = 0x65676174;
  DAT_05077768 = 0;
  DAT_0507775c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0507775c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0507775c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0507775c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0507775c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0507775c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0507775c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0507775c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05077748 = PTR_DAT_04bb2028 + 0x10;
  DAT_05077780 = FUN_006bd550("InvalidStage",0);
  return;
}

