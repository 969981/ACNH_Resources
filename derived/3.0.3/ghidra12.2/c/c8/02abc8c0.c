
void _INIT_6745(void)

{
  DAT_0560ab80 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0560ab84);
  DAT_0560ab90 = 0x8004ef;
  DAT_0560ab98 = nn::os::GetSystemTick();
  DAT_0560abe3 = 0;
  DAT_0560aba0 = 0;
  DAT_0560aba8 = 1;
  DAT_0560abb8 = &DAT_0560abc4;
  DAT_0560abc0 = 0x20;
  DAT_0560abcc = 0x65676174;
  DAT_0560abd0 = 0;
  DAT_0560abc4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0560abc4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0560abc4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0560abc4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0560abc4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0560abc4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0560abc4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0560abc4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0560abb0 = PTR_DAT_04bb2028 + 0x10;
  DAT_0560abe8 = FUN_006bd550("InvalidStage",0);
  return;
}

