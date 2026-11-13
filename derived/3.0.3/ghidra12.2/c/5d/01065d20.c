
void _INIT_3960(void)

{
  DAT_05073a10 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05073a14);
  DAT_05073a20 = 0x8004ef;
  DAT_05073a28 = nn::os::GetSystemTick();
  DAT_05073a6b = 0;
  DAT_05073a30 = 0;
  DAT_05073a40 = &DAT_05073a4c;
  DAT_05073a48 = 0x20;
  DAT_05073a54 = 0x65676174;
  DAT_05073a58 = 0;
  DAT_05073a4c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05073a4c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05073a4c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05073a4c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05073a4c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05073a4c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05073a4c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05073a4c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05073a38 = PTR_DAT_04bb2028 + 0x10;
  DAT_05073a70 = FUN_006bd550("InvalidStage",0);
  return;
}

