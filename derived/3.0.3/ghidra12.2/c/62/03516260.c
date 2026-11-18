
void _INIT_8048(void)

{
  DAT_057679b8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_057679bc);
  DAT_057679c8 = 0x8004ef;
  DAT_057679d0 = nn::os::GetSystemTick();
  DAT_057679d8 = 0;
  DAT_057679f0 = 1;
  DAT_057679f4 = 3;
  DAT_057679f8 = 2;
  DAT_057679e0 = PTR_DAT_04bb2020 + 0x10;
  DAT_057679e8 = "ModelOnUI";
  DAT_057679fd = &DAT_101010101010101;
  DAT_05767a05 = &DAT_101010101010101;
  DAT_05767a0d = &DAT_101010101010101;
  DAT_05767a15 = &DAT_101010101010101;
  DAT_05767a1d = &DAT_101010101010101;
  DAT_05767a25 = &DAT_101010101010101;
  DAT_05767a2d = 1;
  DAT_057679fc = 0;
  DAT_05767a48 = 0x20;
  DAT_05767a2e = 0x2020202;
  uRam0000000005767a32 = 0x20202;
  DAT_05767a40 = &DAT_05767a4c;
  DAT_05767a6b = 0;
  DAT_05767a54 = 0x65676174;
  DAT_05767a58 = 0;
  DAT_05767a4c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05767a4c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05767a4c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05767a4c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05767a4c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05767a4c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05767a4c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05767a4c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05767a38 = PTR_DAT_04bb2028 + 0x10;
  DAT_05767a70 = FUN_006bd550("InvalidStage",0);
  DAT_05767a78 = 0x1c2b;
  FUN_0277d4ac(&DAT_05767a78);
  DAT_05767a80 = 0x142e;
  FUN_0277d4ac();
  return;
}

