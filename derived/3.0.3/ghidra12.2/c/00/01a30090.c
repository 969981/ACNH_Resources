
void _INIT_5114(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_052d4368 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052d436c);
  DAT_052d4378 = 0x8004ef;
  DAT_052d4380 = nn::os::GetSystemTick();
  DAT_052d4388 = 0;
  DAT_052d4390 = 0x1c2b;
  FUN_0277d4ac();
  DAT_052d4398 = 0x142e;
  FUN_0277d4ac();
  DAT_052d43a0 = 0xc0000000;
  DAT_052d43a4 = 0x40000000;
  DAT_052d43a8 = 1;
  DAT_052d43ac = 3;
  DAT_052d4423 = 0;
  DAT_052d43b0 = 2;
  DAT_052d43b5 = &DAT_101010101010101;
  DAT_052d43bd = &DAT_101010101010101;
  DAT_052d43c5 = &DAT_101010101010101;
  DAT_052d43cd = &DAT_101010101010101;
  DAT_052d43d5 = &DAT_101010101010101;
  DAT_052d43dd = &DAT_101010101010101;
  DAT_052d43e5 = 1;
  DAT_052d43b4 = 0;
  DAT_052d43e6 = 0x2020202;
  uRam00000000052d43ea = 0x20202;
  DAT_052d43f8 = &DAT_052d4404;
  DAT_052d4400 = 0x20;
  DAT_052d440c = 0x65676174;
  DAT_052d4410 = 0;
  DAT_052d4404._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052d4404._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052d4404._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052d4404._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052d4404._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052d4404._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052d4404._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052d4404._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052d43f0 = PTR_DAT_04bb2028 + 0x10;
  DAT_052d4428 = FUN_006bd550("InvalidStage",0);
  DAT_052d4430 = 0;
  DAT_052d4438 = 0;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"ItemPreviewMgr\"";
  pcStack_38 = "ItemPreviewMgr";
  local_30 = local_40;
  FUN_007621e0(&DAT_052d4440,0x42,&LAB_01a29cd0,0x3c8,&local_30,&local_40,3,&LAB_01a29ea0,0xffffffff
               ,0,0);
  return;
}

