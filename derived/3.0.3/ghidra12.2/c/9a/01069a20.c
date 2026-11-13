
void _INIT_3970(void)

{
  DAT_05075338 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0507533c);
  DAT_05075348 = 0x8004ef;
  DAT_05075350 = nn::os::GetSystemTick();
  DAT_05075393 = 0;
  DAT_05075358 = 0;
  DAT_05075368 = &DAT_05075374;
  DAT_05075370 = 0x20;
  DAT_0507537c = 0x65676174;
  DAT_05075380 = 0;
  DAT_05075374._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05075374._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05075374._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05075374._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05075374._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05075374._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05075374._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05075374._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05075360 = PTR_DAT_04bb2028 + 0x10;
  DAT_05075398 = FUN_006bd550("InvalidStage",0);
  return;
}

