
void _INIT_6710(void)

{
  DAT_055f800c = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_055f8010);
  DAT_055f801c = 0x8004ef;
  DAT_055f8020 = nn::os::GetSystemTick();
  DAT_055f8028 = 0;
  DAT_055f80ab = 0;
  DAT_055f8030 = 1;
  DAT_055f8034 = 3;
  DAT_055f8038 = 2;
  DAT_055f803d = &DAT_101010101010101;
  DAT_055f8045 = &DAT_101010101010101;
  DAT_055f804d = &DAT_101010101010101;
  DAT_055f8055 = &DAT_101010101010101;
  DAT_055f805d = &DAT_101010101010101;
  DAT_055f8065 = &DAT_101010101010101;
  DAT_055f806d = 1;
  DAT_055f803c = 0;
  DAT_055f806e = 0x2020202;
  uRam00000000055f8072 = 0x20202;
  DAT_055f8080 = &DAT_055f808c;
  DAT_055f8088 = 0x20;
  DAT_055f8094 = 0x65676174;
  DAT_055f8098 = 0;
  DAT_055f808c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_055f808c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_055f808c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_055f808c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_055f808c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_055f808c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_055f808c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_055f808c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_055f8078 = PTR_DAT_04bb2028 + 0x10;
  DAT_055f80b0 = FUN_006bd550("InvalidStage",0);
  return;
}

