
void _INIT_5110(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_052d3f50 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052d3f54);
  DAT_052d3f60 = 0x8004ef;
  DAT_052d3f68 = nn::os::GetSystemTick();
  DAT_052d3f70 = 0;
  DAT_052d3f78 = 0x1c2b;
  FUN_0277d4ac();
  DAT_052d3f80 = 0x142e;
  FUN_0277d4ac();
  DAT_052d3f88 = 0xc0000000;
  DAT_052d3f8c = 0x40000000;
  DAT_052d3f90 = 3;
  DAT_052d3f94 = 2;
  DAT_052d3f99 = &DAT_101010101010101;
  DAT_052d3fa1 = &DAT_101010101010101;
  DAT_052d3fa9 = &DAT_101010101010101;
  DAT_052d3fb1 = &DAT_101010101010101;
  DAT_052d3fb9 = &DAT_101010101010101;
  DAT_052d3fc1 = &DAT_101010101010101;
  DAT_052d3fc9 = 1;
  DAT_052d3f98 = 0;
  DAT_052d3fca = 0x2020202;
  uRam00000000052d3fce = 0x20202;
  DAT_052d3fd4 = 1;
  DAT_052d3fe0 = &DAT_052d3fec;
  DAT_052d3fe8 = 0x20;
  DAT_052d400b = 0;
  DAT_052d3ff4 = 0x65676174;
  DAT_052d3ff8 = 0;
  DAT_052d3fec._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052d3fec._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052d3fec._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052d3fec._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052d3fec._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052d3fec._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052d3fec._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052d3fec._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052d3fd8 = PTR_DAT_04bb2028 + 0x10;
  DAT_052d4010 = FUN_006bd550("InvalidStage",0);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"ItemPreviewActor\"";
  pcStack_38 = "ItemPreviewActor";
  local_30 = local_40;
  FUN_007621e0(&DAT_052d4018,0x6f,&LAB_01a25120,0x330,&local_30,&local_40,4,0,0xffffffff,0,0);
  return;
}

