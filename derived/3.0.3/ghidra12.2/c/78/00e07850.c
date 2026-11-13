
void _INIT_3028(void)

{
  DAT_04f3db18 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f3db1c);
  DAT_04f3db28 = 0x8004ef;
  DAT_04f3db30 = nn::os::GetSystemTick();
  DAT_04f3db73 = 0;
  DAT_04f3db38 = 0;
  DAT_04f3db48 = &DAT_04f3db54;
  DAT_04f3db50 = 0x20;
  DAT_04f3db5c = 0x65676174;
  DAT_04f3db60 = 0;
  DAT_04f3db54._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04f3db54._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04f3db54._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04f3db54._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04f3db54._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04f3db54._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04f3db54._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04f3db54._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04f3db40 = PTR_DAT_04bb2028 + 0x10;
  DAT_04f3db78 = FUN_006bd550("InvalidStage",0);
  DAT_04f3db80 = 1;
  return;
}

