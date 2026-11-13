
void _INIT_2815(void)

{
  DAT_04f001c0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f001c4);
  DAT_04f001d0 = 0x8004ef;
  DAT_04f001d8 = nn::os::GetSystemTick();
  DAT_04f0021b = 0;
  DAT_04f001e0 = 0;
  DAT_04f001f0 = &DAT_04f001fc;
  DAT_04f001f8 = 0x20;
  DAT_04f00204 = 0x65676174;
  DAT_04f00208 = 0;
  DAT_04f001fc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04f001fc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04f001fc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04f001fc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04f001fc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04f001fc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04f001fc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04f001fc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04f001e8 = PTR_DAT_04bb2028 + 0x10;
  DAT_04f00220 = FUN_006bd550("InvalidStage",0);
  DAT_04f00228 = 1;
  DAT_04f0022c = 0x1c2b;
  FUN_0277d4ac();
  DAT_04f00234 = 0x142e;
  FUN_0277d4ac();
  return;
}

