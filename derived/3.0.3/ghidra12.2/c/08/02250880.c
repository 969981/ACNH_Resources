
void _INIT_5672(void)

{
  undefined *puVar1;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_054661b0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_054661b4);
  DAT_054661c0 = 0x8004ef;
  DAT_054661c8 = nn::os::GetSystemTick();
  DAT_054661d0 = 0;
  DAT_054661d8 = 3;
  DAT_054661dc = 2;
  DAT_054661e1 = &DAT_101010101010101;
  DAT_054661e9 = &DAT_101010101010101;
  DAT_054661f1 = &DAT_101010101010101;
  DAT_054661f9 = &DAT_101010101010101;
  DAT_05466201 = &DAT_101010101010101;
  DAT_05466209 = &DAT_101010101010101;
  DAT_05466211 = 1;
  DAT_05466212 = 0x2020202;
  uRam0000000005466216 = 0x20202;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  DAT_054661e0 = 0;
  DAT_0546621c = 1;
  DAT_05466228 = "NNPC_Talk_Sequence";
  DAT_05466238 = &DAT_04066c7f;
  DAT_05466248 = "AI_NPC_";
  DAT_05466293 = 0;
  DAT_05466258 = &DAT_040a029a;
  DAT_05466270 = 0x20;
  DAT_05466268 = &DAT_05466274;
  DAT_0546627c = 0x65676174;
  DAT_05466280 = 0;
  DAT_05466274._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05466274._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05466274._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05466274._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05466274._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05466274._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05466274._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05466274._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05466260 = PTR_DAT_04bb2028 + 0x10;
  DAT_05466220 = puVar1;
  DAT_05466230 = puVar1;
  DAT_05466240 = puVar1;
  DAT_05466250 = puVar1;
  DAT_05466298 = FUN_006bd550("InvalidStage",0);
  DAT_054662a0 = 0x1c2b;
  FUN_0277d4ac(&DAT_054662a0);
  DAT_054662a8 = 0x142e;
  FUN_0277d4ac();
  DAT_054662b0 = 0xc0000000;
  DAT_054662b4 = 0x40000000;
  DAT_054662c0 = &DAT_04077df4;
  DAT_054662d0 = "IdrObjHotelEnt00PaintSet";
  pcStack_28 = "\"ObjectHotelPaintSet\"";
  pcStack_38 = "ObjectHotelPaintSet";
  DAT_054662b8 = puVar1;
  DAT_054662c8 = puVar1;
  local_40 = puVar1;
  local_30 = puVar1;
  FUN_007621e0(&DAT_054662d8,0xe3,FUN_022503b0,0x418,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

