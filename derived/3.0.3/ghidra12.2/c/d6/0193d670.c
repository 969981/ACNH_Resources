
void _INIT_5073(void)

{
  DAT_052c79d0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052c79d4);
  DAT_052c79e0 = 0x8004ef;
  DAT_052c79e8 = nn::os::GetSystemTick();
  DAT_052c7a33 = 0;
  DAT_052c79f0 = 0;
  DAT_052c79f8 = 2;
  DAT_052c7a08 = &DAT_052c7a14;
  DAT_052c7a10 = 0x20;
  DAT_052c7a1c = 0x65676174;
  DAT_052c7a20 = 0;
  DAT_052c7a14._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052c7a14._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052c7a14._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052c7a14._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052c7a14._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052c7a14._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052c7a14._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052c7a14._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052c7a00 = PTR_DAT_04bb2028 + 0x10;
  DAT_052c7a38 = FUN_006bd550("InvalidStage",0);
  DAT_052c7a40 = 0x1c2b;
  FUN_0277d4ac(&DAT_052c7a40);
  DAT_052c7a48 = 0x142e;
  FUN_0277d4ac();
  return;
}

