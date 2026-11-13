
void _INIT_3915(void)

{
  DAT_05065c10 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05065c14);
  DAT_05065c20 = 0x8004ef;
  DAT_05065c28 = nn::os::GetSystemTick();
  DAT_05065c6b = 0;
  DAT_05065c30 = 0;
  DAT_05065c40 = &DAT_05065c4c;
  DAT_05065c48 = 0x20;
  DAT_05065c54 = 0x65676174;
  DAT_05065c58 = 0;
  DAT_05065c4c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05065c4c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05065c4c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05065c4c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05065c4c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05065c4c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05065c4c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05065c4c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05065c38 = PTR_DAT_04bb2028 + 0x10;
  DAT_05065c70 = FUN_006bd550("InvalidStage",0);
  DAT_05065c78 = 0x1c2b;
  FUN_0277d4ac(&DAT_05065c78);
  DAT_05065c80 = 0x142e;
  FUN_0277d4ac();
  return;
}

