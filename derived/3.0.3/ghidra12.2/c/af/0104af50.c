
void _INIT_3916(void)

{
  DAT_05065c98 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05065c9c);
  DAT_05065ca8 = 0x8004ef;
  DAT_05065cb0 = nn::os::GetSystemTick();
  DAT_05065cf3 = 0;
  DAT_05065cb8 = 0;
  DAT_05065cc8 = &DAT_05065cd4;
  DAT_05065cd0 = 0x20;
  DAT_05065cdc = 0x65676174;
  DAT_05065ce0 = 0;
  DAT_05065cd4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05065cd4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05065cd4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05065cd4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05065cd4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05065cd4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05065cd4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05065cd4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05065cc0 = PTR_DAT_04bb2028 + 0x10;
  DAT_05065cf8 = FUN_006bd550("InvalidStage",0);
  DAT_05065d00 = 0x1c2b;
  FUN_0277d4ac(&DAT_05065d00);
  DAT_05065d08 = 0x142e;
  FUN_0277d4ac();
  return;
}

