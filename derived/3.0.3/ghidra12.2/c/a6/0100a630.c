
void _INIT_3804(void)

{
  DAT_05047cc0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05047cc4);
  DAT_05047cd0 = 0x8004ef;
  DAT_05047cd8 = nn::os::GetSystemTick();
  DAT_05047d1b = 0;
  DAT_05047ce0 = 0;
  DAT_05047cf0 = &DAT_05047cfc;
  DAT_05047cf8 = 0x20;
  DAT_05047d04 = 0x65676174;
  DAT_05047d08 = 0;
  DAT_05047cfc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05047cfc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05047cfc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05047cfc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05047cfc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05047cfc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05047cfc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05047cfc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05047ce8 = PTR_DAT_04bb2028 + 0x10;
  DAT_05047d20 = FUN_006bd550("InvalidStage",0);
  DAT_05047d28 = 3;
  DAT_05047d2c = 2;
  DAT_05047d31 = &DAT_101010101010101;
  DAT_05047d39 = &DAT_101010101010101;
  DAT_05047d41 = &DAT_101010101010101;
  DAT_05047d49 = &DAT_101010101010101;
  DAT_05047d51 = &DAT_101010101010101;
  DAT_05047d59 = &DAT_101010101010101;
  DAT_05047d61 = 1;
  DAT_05047d30 = 0;
  DAT_05047d62 = 0x2020202;
  uRam0000000005047d66 = 0x20202;
  DAT_05047d6c = 1;
  DAT_05047d70 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05047d78 = 0x142e;
  FUN_0277d4ac();
  DAT_05047d80 = PTR_DAT_04bb2020 + 0x10;
  DAT_05047d88 = "NNPC_Talk_Sequence";
  DAT_05047d90 = DAT_05047d80;
  DAT_05047d98 = &DAT_04066c7f;
  DAT_05047da0 = DAT_05047d80;
  DAT_05047da8 = "AI_NPC_";
  DAT_05047db0 = DAT_05047d80;
  DAT_05047db8 = &DAT_040a029a;
  return;
}

