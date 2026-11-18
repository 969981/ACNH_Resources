
void _INIT_7850(void)

{
  undefined *puVar1;
  
  DAT_05736ce8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05736cec);
  DAT_05736cf8 = 0x8004ef;
  DAT_05736d00 = nn::os::GetSystemTick();
  DAT_05736d08 = 0;
  DAT_05736d20 = 3;
  DAT_05736d24 = 2;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  DAT_05736d18 = "ModelOnUI";
  DAT_05736d28 = 0;
  DAT_05736d29 = &DAT_101010101010101;
  DAT_05736d31 = &DAT_101010101010101;
  DAT_05736d39 = &DAT_101010101010101;
  DAT_05736d41 = &DAT_101010101010101;
  DAT_05736d49 = &DAT_101010101010101;
  DAT_05736d51 = &DAT_101010101010101;
  DAT_05736d59 = 1;
  DAT_05736d9b = 0;
  DAT_05736d5a = 0x2020202;
  uRam0000000005736d5e = 0x20202;
  DAT_05736d78 = 0x20;
  DAT_05736d70 = &DAT_05736d7c;
  DAT_05736d84 = 0x65676174;
  DAT_05736d88 = 0;
  DAT_05736d7c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05736d7c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05736d7c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05736d7c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05736d7c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05736d7c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05736d7c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05736d7c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05736d68 = PTR_DAT_04bb2028 + 0x10;
  DAT_05736d10 = puVar1;
  DAT_05736da0 = FUN_006bd550("InvalidStage",0);
  DAT_05736da8 = 1;
  DAT_05736dac = 0x1c2b;
  FUN_0277d4ac();
  DAT_05736db4 = 0x142e;
  FUN_0277d4ac();
  DAT_05736dc0 = puVar1;
  DAT_05736dc8 = "NNPC_Talk_Sequence";
  DAT_05736dd0 = puVar1;
  DAT_05736dd8 = &DAT_04066c7f;
  DAT_05736de0 = puVar1;
  DAT_05736de8 = "AI_NPC_";
  DAT_05736df0 = puVar1;
  DAT_05736df8 = &DAT_040a029a;
  return;
}

