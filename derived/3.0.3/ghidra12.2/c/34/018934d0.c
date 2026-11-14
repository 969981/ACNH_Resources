
void _INIT_4961(void)

{
  DAT_052abc88 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052abc8c);
  DAT_052abc98 = 0x8004ef;
  DAT_052abca0 = nn::os::GetSystemTick();
  DAT_052abceb = 0;
  DAT_052abca8 = 0;
  DAT_052abcb0 = 2;
  DAT_052abcc0 = &DAT_052abccc;
  DAT_052abcc8 = 0x20;
  DAT_052abcd4 = 0x65676174;
  DAT_052abcd8 = 0;
  DAT_052abccc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052abccc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052abccc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052abccc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052abccc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052abccc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052abccc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052abccc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052abcb8 = PTR_DAT_04bb2028 + 0x10;
  DAT_052abcf0 = FUN_006bd550("InvalidStage",0);
  DAT_052abcf8 = 0x1c2b;
  FUN_0277d4ac(&DAT_052abcf8);
  DAT_052abd00 = 0x142e;
  FUN_0277d4ac();
  return;
}

