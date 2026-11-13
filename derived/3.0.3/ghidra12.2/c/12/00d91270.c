
void _INIT_2837(void)

{
  DAT_04f08060 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04f08064);
  DAT_04f08070 = 0x8004ef;
  DAT_04f08078 = nn::os::GetSystemTick();
  DAT_04f08080 = 0;
  DAT_04f08103 = 0;
  DAT_04f08088 = 1;
  DAT_04f0808c = 3;
  DAT_04f08090 = 2;
  DAT_04f08095 = &DAT_101010101010101;
  DAT_04f0809d = &DAT_101010101010101;
  DAT_04f080a5 = &DAT_101010101010101;
  DAT_04f080ad = &DAT_101010101010101;
  DAT_04f080b5 = &DAT_101010101010101;
  DAT_04f080bd = &DAT_101010101010101;
  DAT_04f080c5 = 1;
  DAT_04f08094 = 0;
  DAT_04f080c6 = 0x2020202;
  uRam0000000004f080ca = 0x20202;
  DAT_04f080d8 = &DAT_04f080e4;
  DAT_04f080e0 = 0x20;
  DAT_04f080ec = 0x65676174;
  DAT_04f080f0 = 0;
  DAT_04f080e4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04f080e4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04f080e4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04f080e4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04f080e4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04f080e4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04f080e4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04f080e4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04f080d0 = PTR_DAT_04bb2028 + 0x10;
  DAT_04f08108 = FUN_006bd550("InvalidStage",0);
  DAT_04f08110 = 0x1c2b;
  FUN_0277d4ac(&DAT_04f08110);
  DAT_04f08118 = 0x142e;
  FUN_0277d4ac();
  DAT_04f08120 = PTR_DAT_04bb2020 + 0x10;
  DAT_04f08128 = "ModelOnUI";
  return;
}

