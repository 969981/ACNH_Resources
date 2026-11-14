
void _INIT_5310(void)

{
  DAT_053512e8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_053512ec);
  DAT_053512f8 = 0x8004ef;
  DAT_05351300 = nn::os::GetSystemTick();
  DAT_0535134b = 0;
  DAT_05351308 = 0;
  DAT_05351310 = 1;
  DAT_05351320 = &DAT_0535132c;
  DAT_05351328 = 0x20;
  DAT_05351334 = 0x65676174;
  DAT_05351338 = 0;
  DAT_0535132c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0535132c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0535132c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0535132c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0535132c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0535132c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0535132c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0535132c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05351318 = PTR_DAT_04bb2028 + 0x10;
  DAT_05351350 = FUN_006bd550("InvalidStage",0);
  return;
}

