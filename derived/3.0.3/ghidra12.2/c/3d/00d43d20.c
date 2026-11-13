
void _INIT_2714(void)

{
  DAT_04eed360 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04eed364);
  DAT_04eed370 = 0x8004ef;
  DAT_04eed378 = nn::os::GetSystemTick();
  DAT_04eed3bb = 0;
  DAT_04eed380 = 0;
  DAT_04eed390 = &DAT_04eed39c;
  DAT_04eed398 = 0x20;
  DAT_04eed3a4 = 0x65676174;
  DAT_04eed3a8 = 0;
  DAT_04eed39c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04eed39c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04eed39c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04eed39c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04eed39c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04eed39c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04eed39c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04eed39c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04eed388 = PTR_DAT_04bb2028 + 0x10;
  DAT_04eed3c0 = FUN_006bd550("InvalidStage",0);
  DAT_04eed3c8 = 0x1c2b;
  FUN_0277d4ac(&DAT_04eed3c8);
  DAT_04eed3d0 = 0x142e;
  FUN_0277d4ac();
  return;
}

