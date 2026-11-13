
void _INIT_2588(void)

{
  DAT_04ec1060 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04ec1064);
  DAT_04ec1070 = 0x8004ef;
  DAT_04ec1078 = nn::os::GetSystemTick();
  DAT_04ec10bb = 0;
  DAT_04ec1080 = 0;
  DAT_04ec1090 = &DAT_04ec109c;
  DAT_04ec1098 = 0x20;
  DAT_04ec10a4 = 0x65676174;
  DAT_04ec10a8 = 0;
  DAT_04ec109c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04ec109c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04ec109c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04ec109c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04ec109c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04ec109c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04ec109c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04ec109c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04ec1088 = PTR_DAT_04bb2028 + 0x10;
  DAT_04ec10c0 = FUN_006bd550("InvalidStage",0);
  DAT_04ec10c8 = 3;
  DAT_04ec10cc = 2;
  DAT_04ec10d1 = &DAT_101010101010101;
  DAT_04ec10d9 = &DAT_101010101010101;
  DAT_04ec10e1 = &DAT_101010101010101;
  DAT_04ec10e9 = &DAT_101010101010101;
  DAT_04ec10f1 = &DAT_101010101010101;
  DAT_04ec10f9 = &DAT_101010101010101;
  DAT_04ec1101 = 1;
  DAT_04ec10d0 = 0;
  DAT_04ec1102 = 0x2020202;
  uRam0000000004ec1106 = 0x20202;
  DAT_04ec110c = 1;
  DAT_04ec1110 = 0x1c2b;
  FUN_0277d4ac();
  DAT_04ec1118 = 0x142e;
  FUN_0277d4ac();
  DAT_04ec1120 = PTR_DAT_04bb2020 + 0x10;
  DAT_04ec1128 = "NNPC_Talk_Sequence";
  DAT_04ec1130 = DAT_04ec1120;
  DAT_04ec1138 = &DAT_04066c7f;
  DAT_04ec1140 = DAT_04ec1120;
  DAT_04ec1148 = "AI_NPC_";
  DAT_04ec1150 = DAT_04ec1120;
  DAT_04ec1158 = &DAT_040a029a;
  return;
}

