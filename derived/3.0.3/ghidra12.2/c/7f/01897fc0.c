
void _INIT_4966(void)

{
  DAT_052ac0b0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052ac0b4);
  DAT_052ac0c0 = 0x8004ef;
  DAT_052ac0c8 = nn::os::GetSystemTick();
  DAT_052ac113 = 0;
  DAT_052ac0d0 = 0;
  DAT_052ac0d8 = 2;
  DAT_052ac0e8 = &DAT_052ac0f4;
  DAT_052ac0f0 = 0x20;
  DAT_052ac0fc = 0x65676174;
  DAT_052ac100 = 0;
  DAT_052ac0f4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052ac0f4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052ac0f4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052ac0f4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052ac0f4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052ac0f4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052ac0f4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052ac0f4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052ac0e0 = PTR_DAT_04bb2028 + 0x10;
  DAT_052ac118 = FUN_006bd550("InvalidStage",0);
  DAT_052ac120 = 0x1c2b;
  FUN_0277d4ac(&DAT_052ac120);
  DAT_052ac128 = 0x142e;
  FUN_0277d4ac();
  return;
}

