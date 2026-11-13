
void _INIT_3917(void)

{
  DAT_05065d20 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05065d24);
  DAT_05065d30 = 0x8004ef;
  DAT_05065d38 = nn::os::GetSystemTick();
  DAT_05065d7b = 0;
  DAT_05065d40 = 0;
  DAT_05065d50 = &DAT_05065d5c;
  DAT_05065d58 = 0x20;
  DAT_05065d64 = 0x65676174;
  DAT_05065d68 = 0;
  DAT_05065d5c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05065d5c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05065d5c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05065d5c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05065d5c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05065d5c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05065d5c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05065d5c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05065d48 = PTR_DAT_04bb2028 + 0x10;
  DAT_05065d80 = FUN_006bd550("InvalidStage",0);
  DAT_05065d88 = 0x1c2b;
  FUN_0277d4ac(&DAT_05065d88);
  DAT_05065d90 = 0x142e;
  FUN_0277d4ac();
  return;
}

