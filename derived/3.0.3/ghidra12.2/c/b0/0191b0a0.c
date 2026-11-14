
void _INIT_5055(void)

{
  DAT_052c5528 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052c552c);
  DAT_052c5538 = 0x8004ef;
  DAT_052c5540 = nn::os::GetSystemTick();
  DAT_052c558b = 0;
  DAT_052c5548 = 0;
  DAT_052c5550 = 2;
  DAT_052c5560 = &DAT_052c556c;
  DAT_052c5568 = 0x20;
  DAT_052c5574 = 0x65676174;
  DAT_052c5578 = 0;
  DAT_052c556c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052c556c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052c556c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052c556c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052c556c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052c556c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052c556c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052c556c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052c5558 = PTR_DAT_04bb2028 + 0x10;
  DAT_052c5590 = FUN_006bd550("InvalidStage",0);
  DAT_052c5598 = 0x1c2b;
  FUN_0277d4ac(&DAT_052c5598);
  DAT_052c55a0 = 0x142e;
  FUN_0277d4ac();
  return;
}

