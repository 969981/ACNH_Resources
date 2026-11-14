
void _INIT_5116(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_052d8b38 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052d8b3c);
  DAT_052d8b48 = 0x8004ef;
  DAT_052d8b50 = nn::os::GetSystemTick();
  DAT_052d8b58 = 0;
  DAT_052d8b60 = 0x1c2b;
  FUN_0277d4ac();
  DAT_052d8b68 = 0x142e;
  FUN_0277d4ac();
  DAT_052d8b70 = 0xc0000000;
  DAT_052d8b74 = 0x40000000;
  DAT_052d8bab = 0;
  DAT_052d8b88 = 0x20;
  DAT_052d8b80 = &DAT_052d8b8c;
  DAT_052d8b94 = 0x65676174;
  DAT_052d8b98 = 0;
  DAT_052d8b8c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052d8b8c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052d8b8c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052d8b8c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052d8b8c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052d8b8c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052d8b8c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052d8b8c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052d8b78 = PTR_DAT_04bb2028 + 0x10;
  DAT_052d8bb0 = FUN_006bd550("InvalidStage",0);
  DAT_052d8bb8 = 1;
  DAT_052d8bbc = 0;
  DAT_052d8bc4 = 0;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"ItemPreviewSwapActor\"";
  pcStack_38 = "ItemPreviewSwapActor";
  local_30 = local_40;
  FUN_007621e0(&DAT_052d8bc8,6,&LAB_01a35790,0x450,&local_30,&local_40,3,&LAB_01a359b0,0xffffffff,0,
               0);
  return;
}

