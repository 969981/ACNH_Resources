
void _INIT_3128(void)

{
  DAT_04f508f8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f508fc);
  DAT_04f50908 = 0x8004ef;
  DAT_04f50910 = nn::os::GetSystemTick();
  DAT_04f50953 = 0;
  DAT_04f50918 = 0;
  DAT_04f50928 = &DAT_04f50934;
  DAT_04f50930 = 0x20;
  DAT_04f5093c = 0x65676174;
  DAT_04f50940 = 0;
  DAT_04f50934._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04f50934._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04f50934._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04f50934._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04f50934._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04f50934._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04f50934._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04f50934._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04f50920 = PTR_DAT_04bb2028 + 0x10;
  DAT_04f50958 = FUN_006bd550("InvalidStage",0);
  return;
}

