
void _INIT_2706(void)

{
  DAT_04eeba98 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04eeba9c);
  DAT_04eebaa8 = 0x8004ef;
  DAT_04eebab0 = nn::os::GetSystemTick();
  DAT_04eebaf3 = 0;
  DAT_04eebab8 = 0;
  DAT_04eebac8 = &DAT_04eebad4;
  DAT_04eebad0 = 0x20;
  DAT_04eebadc = 0x65676174;
  DAT_04eebae0 = 0;
  DAT_04eebad4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04eebad4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04eebad4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04eebad4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04eebad4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04eebad4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04eebad4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04eebad4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04eebac0 = PTR_DAT_04bb2028 + 0x10;
  DAT_04eebaf8 = FUN_006bd550("InvalidStage",0);
  DAT_04eebb00 = 0x1c2b;
  FUN_0277d4ac(&DAT_04eebb00);
  DAT_04eebb08 = 0x142e;
  FUN_0277d4ac();
  return;
}

