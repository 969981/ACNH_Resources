
void _INIT_5071(void)

{
  DAT_052c77e0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052c77e4);
  DAT_052c77f0 = 0x8004ef;
  DAT_052c77f8 = nn::os::GetSystemTick();
  DAT_052c7800 = 0;
  DAT_052c7808 = 2;
  DAT_052c780c = 0x1c2b;
  FUN_0277d4ac();
  DAT_052c7814 = 0x142e;
  FUN_0277d4ac();
  DAT_052c7853 = 0;
  DAT_052c7830 = 0x20;
  DAT_052c7828 = &DAT_052c7834;
  DAT_052c783c = 0x65676174;
  DAT_052c7840 = 0;
  DAT_052c7834._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052c7834._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052c7834._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052c7834._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052c7834._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052c7834._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052c7834._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052c7834._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052c7820 = PTR_DAT_04bb2028 + 0x10;
  DAT_052c7858 = FUN_006bd550("InvalidStage",0);
  return;
}

