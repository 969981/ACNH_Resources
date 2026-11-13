
void _INIT_3980(void)

{
  DAT_050760d0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050760d4);
  DAT_050760e0 = 0x8004ef;
  DAT_050760e8 = nn::os::GetSystemTick();
  DAT_050760f0 = 0;
  DAT_050760f8 = 0;
  DAT_05076100 = 0;
  DAT_05076108 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05076110 = 0x142e;
  FUN_0277d4ac();
  DAT_0507614b = 0;
  DAT_05076128 = 0x20;
  DAT_05076120 = &DAT_0507612c;
  DAT_05076134 = 0x65676174;
  DAT_05076138 = 0;
  DAT_0507612c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0507612c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0507612c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0507612c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0507612c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0507612c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0507612c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0507612c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05076118 = PTR_DAT_04bb2028 + 0x10;
  DAT_05076150 = FUN_006bd550("InvalidStage",0);
  return;
}

