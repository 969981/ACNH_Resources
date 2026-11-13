
void _INIT_3914(void)

{
  DAT_05065b88 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05065b8c);
  DAT_05065b98 = 0x8004ef;
  DAT_05065ba0 = nn::os::GetSystemTick();
  DAT_05065be3 = 0;
  DAT_05065ba8 = 0;
  DAT_05065bb8 = &DAT_05065bc4;
  DAT_05065bc0 = 0x20;
  DAT_05065bcc = 0x65676174;
  DAT_05065bd0 = 0;
  DAT_05065bc4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05065bc4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05065bc4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05065bc4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05065bc4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05065bc4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05065bc4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05065bc4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05065bb0 = PTR_DAT_04bb2028 + 0x10;
  DAT_05065be8 = FUN_006bd550("InvalidStage",0);
  DAT_05065bf0 = 0x1c2b;
  FUN_0277d4ac(&DAT_05065bf0);
  DAT_05065bf8 = 0x142e;
  FUN_0277d4ac();
  return;
}

