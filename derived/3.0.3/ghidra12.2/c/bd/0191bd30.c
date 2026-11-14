
void _INIT_5056(void)

{
  DAT_052c55b8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052c55bc);
  DAT_052c55c8 = 0x8004ef;
  DAT_052c55d0 = nn::os::GetSystemTick();
  DAT_052c561b = 0;
  DAT_052c55d8 = 0;
  DAT_052c55e0 = 2;
  DAT_052c55f0 = &DAT_052c55fc;
  DAT_052c55f8 = 0x20;
  DAT_052c5604 = 0x65676174;
  DAT_052c5608 = 0;
  DAT_052c55fc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052c55fc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052c55fc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052c55fc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052c55fc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052c55fc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052c55fc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052c55fc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052c55e8 = PTR_DAT_04bb2028 + 0x10;
  DAT_052c5620 = FUN_006bd550("InvalidStage",0);
  DAT_052c5628 = 0x1c2b;
  FUN_0277d4ac(&DAT_052c5628);
  DAT_052c5630 = 0x142e;
  FUN_0277d4ac();
  return;
}

