
void _INIT_2713(void)

{
  DAT_04eed2d8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04eed2dc);
  DAT_04eed2e8 = 0x8004ef;
  DAT_04eed2f0 = nn::os::GetSystemTick();
  DAT_04eed333 = 0;
  DAT_04eed2f8 = 0;
  DAT_04eed308 = &DAT_04eed314;
  DAT_04eed310 = 0x20;
  DAT_04eed31c = 0x65676174;
  DAT_04eed320 = 0;
  DAT_04eed314._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04eed314._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04eed314._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04eed314._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04eed314._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04eed314._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04eed314._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04eed314._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04eed300 = PTR_DAT_04bb2028 + 0x10;
  DAT_04eed338 = FUN_006bd550("InvalidStage",0);
  DAT_04eed340 = 0x1c2b;
  FUN_0277d4ac(&DAT_04eed340);
  DAT_04eed348 = 0x142e;
  FUN_0277d4ac();
  return;
}

