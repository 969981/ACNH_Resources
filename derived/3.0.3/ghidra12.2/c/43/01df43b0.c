
void _INIT_5455(void)

{
  DAT_053880b8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_053880bc);
  DAT_053880c8 = 0x8004ef;
  DAT_053880d0 = nn::os::GetSystemTick();
  DAT_05388113 = 0;
  DAT_053880d8 = 0;
  DAT_053880e8 = &DAT_053880f4;
  DAT_053880f0 = 0x20;
  DAT_053880fc = 0x65676174;
  DAT_05388100 = 0;
  DAT_053880f4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_053880f4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_053880f4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_053880f4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_053880f4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_053880f4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_053880f4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_053880f4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_053880e0 = PTR_DAT_04bb2028 + 0x10;
  DAT_05388118 = FUN_006bd550("InvalidStage",0);
  return;
}

