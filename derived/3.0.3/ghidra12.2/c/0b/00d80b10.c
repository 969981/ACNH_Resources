
void _INIT_2819(void)

{
  DAT_04f00e68 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f00e6c);
  DAT_04f00e78 = 0x8004ef;
  DAT_04f00e80 = nn::os::GetSystemTick();
  DAT_04f00ec3 = 0;
  DAT_04f00e88 = 0;
  DAT_04f00e98 = &DAT_04f00ea4;
  DAT_04f00ea0 = 0x20;
  DAT_04f00eac = 0x65676174;
  DAT_04f00eb0 = 0;
  DAT_04f00ea4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04f00ea4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04f00ea4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04f00ea4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04f00ea4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04f00ea4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04f00ea4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04f00ea4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04f00e90 = PTR_DAT_04bb2028 + 0x10;
  DAT_04f00ec8 = FUN_006bd550("InvalidStage",0);
  return;
}

