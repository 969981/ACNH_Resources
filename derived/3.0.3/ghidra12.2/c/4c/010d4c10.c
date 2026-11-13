
void _INIT_4205(void)

{
  DAT_050a0e68 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050a0e6c);
  DAT_050a0e78 = 0x8004ef;
  DAT_050a0e80 = nn::os::GetSystemTick();
  DAT_050a0ec3 = 0;
  DAT_050a0e88 = 0;
  DAT_050a0e98 = &DAT_050a0ea4;
  DAT_050a0ea0 = 0x20;
  DAT_050a0eac = 0x65676174;
  DAT_050a0eb0 = 0;
  DAT_050a0ea4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_050a0ea4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_050a0ea4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_050a0ea4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_050a0ea4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_050a0ea4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_050a0ea4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_050a0ea4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_050a0e90 = PTR_DAT_04bb2028 + 0x10;
  DAT_050a0ec8 = FUN_006bd550("InvalidStage",0);
  DAT_050a0ed0 = 3;
  DAT_050a0ed4 = 2;
  DAT_050a0ed9 = &DAT_101010101010101;
  DAT_050a0ee1 = &DAT_101010101010101;
  DAT_050a0ee9 = &DAT_101010101010101;
  DAT_050a0ef1 = &DAT_101010101010101;
  DAT_050a0ef9 = &DAT_101010101010101;
  DAT_050a0f01 = &DAT_101010101010101;
  DAT_050a0f09 = 1;
  DAT_050a0ed8 = 0;
  DAT_050a0f0a = 0x2020202;
  uRam00000000050a0f0e = 0x20202;
  DAT_050a0f14 = 1;
  DAT_050a0f18 = 0x1c2b;
  FUN_0277d4ac();
  DAT_050a0f20 = 0x142e;
  FUN_0277d4ac();
  DAT_050a0f28 = PTR_DAT_04bb2020 + 0x10;
  DAT_050a0f30 = "NNPC_Talk_Sequence";
  DAT_050a0f38 = DAT_050a0f28;
  DAT_050a0f40 = &DAT_04066c7f;
  DAT_050a0f48 = DAT_050a0f28;
  DAT_050a0f50 = "AI_NPC_";
  DAT_050a0f58 = DAT_050a0f28;
  DAT_050a0f60 = &DAT_040a029a;
  return;
}

