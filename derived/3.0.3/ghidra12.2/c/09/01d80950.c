
void _INIT_5412(void)

{
  DAT_05372850 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05372854);
  DAT_05372860 = 0x8004ef;
  DAT_05372868 = nn::os::GetSystemTick();
  DAT_053728bb = 0;
  DAT_05372870 = 0;
  DAT_05372878 = 0;
  DAT_05372880 = 0;
  DAT_05372898 = 0x20;
  DAT_05372890 = &DAT_0537289c;
  DAT_053728a4 = 0x65676174;
  DAT_053728a8 = 0;
  DAT_0537289c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0537289c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0537289c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0537289c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0537289c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0537289c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0537289c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0537289c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05372888 = PTR_DAT_04bb2028 + 0x10;
  DAT_053728c0 = FUN_006bd550("InvalidStage",0);
  return;
}

