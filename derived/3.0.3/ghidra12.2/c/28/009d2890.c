
void _INIT_1588(void)

{
  DAT_04d0ce48 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04d0ce4c);
  DAT_04d0ce58 = 0x8004ef;
  DAT_04d0ce60 = nn::os::GetSystemTick();
  DAT_04d0cea3 = 0;
  DAT_04d0ce68 = 0;
  DAT_04d0ce78 = &DAT_04d0ce84;
  DAT_04d0ce80 = 0x20;
  DAT_04d0ce8c = 0x65676174;
  DAT_04d0ce90 = 0;
  DAT_04d0ce84._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04d0ce84._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04d0ce84._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04d0ce84._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04d0ce84._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04d0ce84._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04d0ce84._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04d0ce84._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04d0ce70 = PTR_DAT_04bb2028 + 0x10;
  DAT_04d0cea8 = FUN_006bd550("InvalidStage",0);
  return;
}

