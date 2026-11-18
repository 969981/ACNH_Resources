
void _INIT_7941(void)

{
  DAT_057513c0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_057513c4);
  DAT_057513d0 = 0x8004ef;
  DAT_057513d8 = nn::os::GetSystemTick();
  DAT_0575141b = 0;
  DAT_057513e0 = 0;
  DAT_057513f0 = &DAT_057513fc;
  DAT_057513f8 = 0x20;
  DAT_05751404 = 0x65676174;
  DAT_05751408 = 0;
  DAT_057513fc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_057513fc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_057513fc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_057513fc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_057513fc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_057513fc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_057513fc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_057513fc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_057513e8 = PTR_DAT_04bb2028 + 0x10;
  DAT_05751420 = FUN_006bd550("InvalidStage",0);
  return;
}

