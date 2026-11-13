
void _INIT_4095(void)

{
  DAT_0508ce30 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0508ce34);
  DAT_0508ce40 = 0x8004ef;
  DAT_0508ce48 = nn::os::GetSystemTick();
  DAT_0508ce8b = 0;
  DAT_0508ce50 = 0;
  DAT_0508ce60 = &DAT_0508ce6c;
  DAT_0508ce68 = 0x20;
  DAT_0508ce74 = 0x65676174;
  DAT_0508ce78 = 0;
  DAT_0508ce6c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0508ce6c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0508ce6c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0508ce6c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0508ce6c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0508ce6c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0508ce6c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0508ce6c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0508ce58 = PTR_DAT_04bb2028 + 0x10;
  DAT_0508ce90 = FUN_006bd550("InvalidStage",0);
  return;
}

