
void _INIT_3909(void)

{
  DAT_05064e10 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05064e14);
  DAT_05064e20 = 0x8004ef;
  DAT_05064e28 = nn::os::GetSystemTick();
  DAT_05064e6b = 0;
  DAT_05064e30 = 0;
  DAT_05064e40 = &DAT_05064e4c;
  DAT_05064e48 = 0x20;
  DAT_05064e54 = 0x65676174;
  DAT_05064e58 = 0;
  DAT_05064e4c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05064e4c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05064e4c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05064e4c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05064e4c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05064e4c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05064e4c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05064e4c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05064e38 = PTR_DAT_04bb2028 + 0x10;
  DAT_05064e70 = FUN_006bd550("InvalidStage",0);
  DAT_05064e78 = 0x1c2b;
  FUN_0277d4ac(&DAT_05064e78);
  DAT_05064e80 = 0x142e;
  FUN_0277d4ac();
  return;
}

