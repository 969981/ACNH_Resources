
void _INIT_2814(void)

{
  DAT_04f00130 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f00134);
  DAT_04f00140 = 0x8004ef;
  DAT_04f00148 = nn::os::GetSystemTick();
  DAT_04f0018b = 0;
  DAT_04f00150 = 0;
  DAT_04f00160 = &DAT_04f0016c;
  DAT_04f00168 = 0x20;
  DAT_04f00174 = 0x65676174;
  DAT_04f00178 = 0;
  DAT_04f0016c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04f0016c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04f0016c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04f0016c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04f0016c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04f0016c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04f0016c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04f0016c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04f00158 = PTR_DAT_04bb2028 + 0x10;
  DAT_04f00190 = FUN_006bd550("InvalidStage",0);
  DAT_04f00198 = 1;
  DAT_04f0019c = 0x1c2b;
  FUN_0277d4ac();
  DAT_04f001a4 = 0x142e;
  FUN_0277d4ac();
  return;
}

