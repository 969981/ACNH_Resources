
void _INIT_4972(void)

{
  DAT_052acee0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052acee4);
  DAT_052acef0 = 0x8004ef;
  DAT_052acef8 = nn::os::GetSystemTick();
  DAT_052acf43 = 0;
  DAT_052acf00 = 0;
  DAT_052acf08 = 2;
  DAT_052acf18 = &DAT_052acf24;
  DAT_052acf20 = 0x20;
  DAT_052acf2c = 0x65676174;
  DAT_052acf30 = 0;
  DAT_052acf24._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052acf24._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052acf24._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052acf24._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052acf24._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052acf24._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052acf24._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052acf24._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052acf10 = PTR_DAT_04bb2028 + 0x10;
  DAT_052acf48 = FUN_006bd550("InvalidStage",0);
  DAT_052acf50 = 0x1c2b;
  FUN_0277d4ac(&DAT_052acf50);
  DAT_052acf58 = 0x142e;
  FUN_0277d4ac();
  return;
}

