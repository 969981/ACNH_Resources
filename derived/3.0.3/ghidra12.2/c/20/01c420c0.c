
void _INIT_5280(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_0534bf00 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0534bf04);
  DAT_0534bf10 = 0x8004ef;
  DAT_0534bf18 = nn::os::GetSystemTick();
  DAT_0534bf20 = 0;
  DAT_0534bfa3 = 0;
  DAT_0534bf28 = 3;
  DAT_0534bf2c = 2;
  DAT_0534bf31 = &DAT_101010101010101;
  DAT_0534bf39 = &DAT_101010101010101;
  DAT_0534bf41 = &DAT_101010101010101;
  DAT_0534bf49 = &DAT_101010101010101;
  DAT_0534bf51 = &DAT_101010101010101;
  DAT_0534bf59 = &DAT_101010101010101;
  DAT_0534bf61 = 1;
  DAT_0534bf30 = 0;
  DAT_0534bf62 = 0x2020202;
  uRam000000000534bf66 = 0x20202;
  DAT_0534bf80 = 0x20;
  DAT_0534bf78 = &DAT_0534bf84;
  DAT_0534bf8c = 0x65676174;
  DAT_0534bf90 = 0;
  DAT_0534bf84._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0534bf84._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0534bf84._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0534bf84._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0534bf84._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0534bf84._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0534bf84._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0534bf84._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0534bf70 = PTR_DAT_04bb2028 + 0x10;
  DAT_0534bfa8 = FUN_006bd550("InvalidStage",0);
  DAT_0534bfb0 = 0x1c2b;
  FUN_0277d4ac(&DAT_0534bfb0);
  DAT_0534bfb8 = 0x142e;
  FUN_0277d4ac();
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"MuseumNameboardActorMgr\"";
  pcStack_38 = "MuseumNameboardActorMgr";
  local_30 = local_40;
  FUN_007621e0(&DAT_0534bfc0,0x2c,&LAB_01c414d0,0x718,&local_30,&local_40,0,&LAB_01c417f0,0xffffffff
               ,0,0);
  DAT_0534c0b0 = 0;
  return;
}

