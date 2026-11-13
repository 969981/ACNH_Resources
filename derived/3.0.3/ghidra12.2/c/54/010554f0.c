
void _INIT_3932(void)

{
  DAT_0506b980 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0506b984);
  DAT_0506b990 = 0x8004ef;
  DAT_0506b998 = nn::os::GetSystemTick();
  DAT_0506b9db = 0;
  DAT_0506b9a0 = 0;
  DAT_0506b9b0 = &DAT_0506b9bc;
  DAT_0506b9b8 = 0x20;
  DAT_0506b9c4 = 0x65676174;
  DAT_0506b9c8 = 0;
  DAT_0506b9bc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0506b9bc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0506b9bc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0506b9bc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0506b9bc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0506b9bc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0506b9bc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0506b9bc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0506b9a8 = PTR_DAT_04bb2028 + 0x10;
  DAT_0506b9e0 = FUN_006bd550("InvalidStage",0);
  DAT_0506b9e8 = 0x1c2b;
  FUN_0277d4ac(&DAT_0506b9e8);
  DAT_0506b9f0 = 0x142e;
  FUN_0277d4ac();
  return;
}

