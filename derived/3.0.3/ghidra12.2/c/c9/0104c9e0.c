
void _INIT_3920(void)

{
  DAT_05066948 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0506694c);
  DAT_05066958 = 0x8004ef;
  DAT_05066960 = nn::os::GetSystemTick();
  DAT_050669a3 = 0;
  DAT_05066968 = 0;
  DAT_05066978 = &DAT_05066984;
  DAT_05066980 = 0x20;
  DAT_0506698c = 0x65676174;
  DAT_05066990 = 0;
  DAT_05066984._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05066984._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05066984._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05066984._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05066984._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05066984._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05066984._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05066984._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05066970 = PTR_DAT_04bb2028 + 0x10;
  DAT_050669a8 = FUN_006bd550("InvalidStage",0);
  DAT_050669b0 = 0x1c2b;
  FUN_0277d4ac(&DAT_050669b0);
  DAT_050669b8 = 0x142e;
  FUN_0277d4ac();
  return;
}

