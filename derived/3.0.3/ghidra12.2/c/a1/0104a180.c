
void _INIT_3912(void)

{
  DAT_05065a88 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05065a8c);
  DAT_05065a98 = 0x8004ef;
  DAT_05065aa0 = nn::os::GetSystemTick();
  DAT_05065ae3 = 0;
  DAT_05065aa8 = 0;
  DAT_05065ab8 = &DAT_05065ac4;
  DAT_05065ac0 = 0x20;
  DAT_05065acc = 0x65676174;
  DAT_05065ad0 = 0;
  DAT_05065ac4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05065ac4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05065ac4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05065ac4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05065ac4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05065ac4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05065ac4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05065ac4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05065ab0 = PTR_DAT_04bb2028 + 0x10;
  DAT_05065ae8 = FUN_006bd550("InvalidStage",0);
  DAT_05065af0 = 0x1c2b;
  FUN_0277d4ac(&DAT_05065af0);
  DAT_05065af8 = 0x142e;
  FUN_0277d4ac();
  return;
}

