
void _INIT_4100(void)

{
  DAT_0508cf98 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0508cf9c);
  DAT_0508cfa8 = 0x8004ef;
  DAT_0508cfb0 = nn::os::GetSystemTick();
  DAT_0508cfb8 = 0;
  DAT_0508cfc0 = 1;
  DAT_0508cfc4 = 3;
  DAT_0508cfc8 = 2;
  DAT_0508cfcc = 0;
  DAT_0508cfcd = &DAT_101010101010101;
  DAT_0508cfd5 = &DAT_101010101010101;
  DAT_0508cfdd = &DAT_101010101010101;
  DAT_0508cfe5 = &DAT_101010101010101;
  DAT_0508cfed = &DAT_101010101010101;
  DAT_0508cff5 = &DAT_101010101010101;
  DAT_0508cffd = 1;
  DAT_0508cffe = 0x2020202;
  uRam000000000508d002 = 0x20202;
  DAT_0508d008 = PTR_DAT_04bb2020 + 0x10;
  DAT_0508d010 = "NNPC_Talk_Sequence";
  DAT_0508d020 = &DAT_04066c7f;
  DAT_0508d030 = "AI_NPC_";
  DAT_0508d07b = 0;
  DAT_0508d040 = &DAT_040a029a;
  DAT_0508d050 = &DAT_0508d05c;
  DAT_0508d058 = 0x20;
  DAT_0508d064 = 0x65676174;
  DAT_0508d068 = 0;
  DAT_0508d05c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0508d05c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0508d05c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0508d05c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0508d05c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0508d05c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0508d05c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0508d05c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0508d048 = PTR_DAT_04bb2028 + 0x10;
  DAT_0508d018 = DAT_0508d008;
  DAT_0508d028 = DAT_0508d008;
  DAT_0508d038 = DAT_0508d008;
  DAT_0508d080 = FUN_006bd550("InvalidStage",0);
  return;
}

