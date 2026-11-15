
void _INIT_5564(void)

{
  undefined *puVar1;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_053d7e80 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_053d7e84);
  DAT_053d7e90 = 0x8004ef;
  DAT_053d7e98 = nn::os::GetSystemTick();
  DAT_053d7ea8 = 3;
  DAT_053d7eac = 2;
  DAT_053d7ea0 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  DAT_053d7ef8 = "NNPC_Talk_Sequence";
  DAT_053d7f08 = &DAT_04066c7f;
  DAT_053d7f18 = "AI_NPC_";
  DAT_053d7f28 = &DAT_040a029a;
  DAT_053d7eb1 = &DAT_101010101010101;
  DAT_053d7eb9 = &DAT_101010101010101;
  DAT_053d7ec1 = &DAT_101010101010101;
  DAT_053d7ec9 = &DAT_101010101010101;
  DAT_053d7ed1 = &DAT_101010101010101;
  DAT_053d7ed9 = &DAT_101010101010101;
  DAT_053d7ee1 = 1;
  DAT_053d7eb0 = 0;
  DAT_053d7f38 = "cat00";
  DAT_053d7ee2 = 0x2020202;
  uRam00000000053d7ee6 = 0x20202;
  DAT_053d7f50 = 1;
  DAT_053d7f48 = "Normal";
  DAT_053d7f68 = 0x20;
  DAT_053d7f60 = &DAT_053d7f6c;
  DAT_053d7f8b = 0;
  DAT_053d7f74 = 0x65676174;
  DAT_053d7f78 = 0;
  DAT_053d7f6c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_053d7f6c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_053d7f6c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_053d7f6c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_053d7f6c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_053d7f6c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_053d7f6c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_053d7f6c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_053d7f58 = PTR_DAT_04bb2028 + 0x10;
  DAT_053d7ef0 = puVar1;
  DAT_053d7f00 = puVar1;
  DAT_053d7f10 = puVar1;
  DAT_053d7f20 = puVar1;
  DAT_053d7f30 = puVar1;
  DAT_053d7f40 = puVar1;
  DAT_053d7f90 = FUN_006bd550("InvalidStage",0);
  pcStack_28 = "\"NpcHeadCtrlMgr\"";
  pcStack_38 = "NpcHeadCtrlMgr";
  local_40 = puVar1;
  local_30 = puVar1;
  FUN_007621e0(&DAT_053d7f98,0x1f,&LAB_0208a110,0x278,&local_30,&local_40,3,0,0xffffffff,0,0);
  return;
}

