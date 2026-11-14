
void _INIT_5054(void)

{
  DAT_052c5498 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_052c549c);
  DAT_052c54a8 = 0x8004ef;
  DAT_052c54b0 = nn::os::GetSystemTick();
  DAT_052c54fb = 0;
  DAT_052c54b8 = 0;
  DAT_052c54c0 = 2;
  DAT_052c54d0 = &DAT_052c54dc;
  DAT_052c54d8 = 0x20;
  DAT_052c54e4 = 0x65676174;
  DAT_052c54e8 = 0;
  DAT_052c54dc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052c54dc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052c54dc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052c54dc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052c54dc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052c54dc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052c54dc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052c54dc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052c54c8 = PTR_DAT_04bb2028 + 0x10;
  DAT_052c5500 = FUN_006bd550("InvalidStage",0);
  DAT_052c5508 = 0x1c2b;
  FUN_0277d4ac(&DAT_052c5508);
  DAT_052c5510 = 0x142e;
  FUN_0277d4ac();
  return;
}

