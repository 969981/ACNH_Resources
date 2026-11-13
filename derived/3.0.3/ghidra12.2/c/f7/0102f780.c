
void _INIT_3863(void)

{
  DAT_05058b08 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05058b0c);
  DAT_05058b18 = 0x8004ef;
  DAT_05058b20 = nn::os::GetSystemTick();
  DAT_05058b63 = 0;
  DAT_05058b28 = 0;
  DAT_05058b38 = &DAT_05058b44;
  DAT_05058b40 = 0x20;
  DAT_05058b4c = 0x65676174;
  DAT_05058b50 = 0;
  DAT_05058b44._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05058b44._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05058b44._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05058b44._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05058b44._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05058b44._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05058b44._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05058b44._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05058b30 = PTR_DAT_04bb2028 + 0x10;
  DAT_05058b68 = FUN_006bd550("InvalidStage",0);
  return;
}

