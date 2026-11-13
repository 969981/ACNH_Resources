
void _INIT_3031(void)

{
  DAT_04f3dc58 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f3dc5c);
  DAT_04f3dc68 = 0x8004ef;
  DAT_04f3dc70 = nn::os::GetSystemTick();
  DAT_04f3dcb3 = 0;
  DAT_04f3dc78 = 0;
  DAT_04f3dc88 = &DAT_04f3dc94;
  DAT_04f3dc90 = 0x20;
  DAT_04f3dc9c = 0x65676174;
  DAT_04f3dca0 = 0;
  DAT_04f3dc94._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04f3dc94._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04f3dc94._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04f3dc94._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04f3dc94._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04f3dc94._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04f3dc94._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04f3dc94._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04f3dc80 = PTR_DAT_04bb2028 + 0x10;
  DAT_04f3dcb8 = FUN_006bd550("InvalidStage",0);
  DAT_04f3dcc0 = 0x1c2b;
  FUN_0277d4ac(&DAT_04f3dcc0);
  DAT_04f3dcc8 = 0x142e;
  FUN_0277d4ac();
  DAT_04f3dcd0 = PTR_DAT_04bb2020 + 0x10;
  DAT_04f3dcd8 = "ModelOnUI";
  return;
}

