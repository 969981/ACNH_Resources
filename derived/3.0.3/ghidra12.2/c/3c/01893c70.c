
void _INIT_4962(void)

{
  DAT_052abd18 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052abd1c);
  DAT_052abd28 = 0x8004ef;
  DAT_052abd30 = nn::os::GetSystemTick();
  DAT_052abd7b = 0;
  DAT_052abd38 = 0;
  DAT_052abd40 = 2;
  DAT_052abd50 = &DAT_052abd5c;
  DAT_052abd58 = 0x20;
  DAT_052abd64 = 0x65676174;
  DAT_052abd68 = 0;
  DAT_052abd5c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052abd5c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052abd5c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052abd5c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052abd5c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052abd5c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052abd5c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052abd5c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052abd48 = PTR_DAT_04bb2028 + 0x10;
  DAT_052abd80 = FUN_006bd550("InvalidStage",0);
  DAT_052abd88 = 0x1c2b;
  FUN_0277d4ac(&DAT_052abd88);
  DAT_052abd90 = 0x142e;
  FUN_0277d4ac();
  return;
}

