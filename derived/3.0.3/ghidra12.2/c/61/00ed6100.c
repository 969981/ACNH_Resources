
void _INIT_3358(void)

{
  DAT_04fa25c0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04fa25c4);
  DAT_04fa25d0 = 0x8004ef;
  DAT_04fa25d8 = nn::os::GetSystemTick();
  DAT_04fa25e8 = 3;
  DAT_04fa25ec = 2;
  DAT_04fa25e0 = 0;
  DAT_04fa2630 = PTR_DAT_04bb2020 + 0x10;
  DAT_04fa2638 = "NNPC_Talk_Sequence";
  DAT_04fa2648 = &DAT_04066c7f;
  DAT_04fa2658 = "AI_NPC_";
  DAT_04fa2668 = &DAT_040a029a;
  DAT_04fa25f1 = &DAT_101010101010101;
  DAT_04fa25f9 = &DAT_101010101010101;
  DAT_04fa2601 = &DAT_101010101010101;
  DAT_04fa2609 = &DAT_101010101010101;
  DAT_04fa2611 = &DAT_101010101010101;
  DAT_04fa2619 = &DAT_101010101010101;
  DAT_04fa2621 = 1;
  DAT_04fa25f0 = 0;
  DAT_04fa2678 = "cat00";
  DAT_04fa2622 = 0x2020202;
  uRam0000000004fa2626 = 0x20202;
  DAT_04fa2690 = 1;
  DAT_04fa2688 = "Normal";
  DAT_04fa26a0 = &DAT_04fa26ac;
  DAT_04fa26a8 = 0x20;
  DAT_04fa26cb = 0;
  DAT_04fa26b4 = 0x65676174;
  DAT_04fa26b8 = 0;
  DAT_04fa26ac._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04fa26ac._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04fa26ac._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04fa26ac._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04fa26ac._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04fa26ac._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04fa26ac._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04fa26ac._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04fa2698 = PTR_DAT_04bb2028 + 0x10;
  DAT_04fa2640 = DAT_04fa2630;
  DAT_04fa2650 = DAT_04fa2630;
  DAT_04fa2660 = DAT_04fa2630;
  DAT_04fa2670 = DAT_04fa2630;
  DAT_04fa2680 = DAT_04fa2630;
  DAT_04fa26d0 = FUN_006bd550("InvalidStage",0);
  DAT_04fa26d8 = 0x1c2b;
  FUN_0277d4ac(&DAT_04fa26d8);
  DAT_04fa26e0 = 0x142e;
  FUN_0277d4ac();
  return;
}

