
void _INIT_3877(void)

{
  DAT_0505d020 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0505d024);
  DAT_0505d030 = 0x8004ef;
  DAT_0505d038 = nn::os::GetSystemTick();
  DAT_0505d07b = 0;
  DAT_0505d040 = 0;
  DAT_0505d050 = &DAT_0505d05c;
  DAT_0505d058 = 0x20;
  DAT_0505d064 = 0x65676174;
  DAT_0505d068 = 0;
  DAT_0505d05c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0505d05c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0505d05c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0505d05c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0505d05c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0505d05c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0505d05c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0505d05c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0505d048 = PTR_DAT_04bb2028 + 0x10;
  DAT_0505d080 = FUN_006bd550("InvalidStage",0);
  DAT_0505d088 = 0x1c2b;
  FUN_0277d4ac(&DAT_0505d088);
  DAT_0505d090 = 0x142e;
  FUN_0277d4ac();
  return;
}

