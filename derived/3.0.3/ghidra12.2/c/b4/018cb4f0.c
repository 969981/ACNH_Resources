
void _INIT_5002(void)

{
  DAT_052bb450 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052bb454);
  DAT_052bb460 = 0x8004ef;
  DAT_052bb468 = nn::os::GetSystemTick();
  DAT_052bb470 = 0;
  DAT_052bb478 = 2;
  DAT_052bb47c = 3;
  DAT_052bb480 = 2;
  DAT_052bb484 = 0;
  DAT_052bb485 = &DAT_101010101010101;
  DAT_052bb48d = &DAT_101010101010101;
  DAT_052bb495 = &DAT_101010101010101;
  DAT_052bb49d = &DAT_101010101010101;
  DAT_052bb4a5 = &DAT_101010101010101;
  DAT_052bb4ad = &DAT_101010101010101;
  DAT_052bb4b5 = 1;
  DAT_052bb4b6 = 0x2020202;
  uRam00000000052bb4ba = 0x20202;
  DAT_052bb4c0 = 0;
  DAT_052bb4c4 = 0;
  DAT_052bb4c8 = 0x1c2b;
  FUN_0277d4ac();
  DAT_052bb4d0 = 0x142e;
  FUN_0277d4ac();
  DAT_052bb50b = 0;
  DAT_052bb4e8 = 0x20;
  DAT_052bb4e0 = &DAT_052bb4ec;
  DAT_052bb4f4 = 0x65676174;
  DAT_052bb4f8 = 0;
  DAT_052bb4ec._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052bb4ec._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052bb4ec._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052bb4ec._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052bb4ec._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052bb4ec._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052bb4ec._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052bb4ec._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052bb4d8 = PTR_DAT_04bb2028 + 0x10;
  DAT_052bb510 = FUN_006bd550("InvalidStage",0);
  return;
}

