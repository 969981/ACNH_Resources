
void _INIT_5309(void)

{
  DAT_05351258 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0535125c);
  DAT_05351268 = 0x8004ef;
  DAT_05351270 = nn::os::GetSystemTick();
  DAT_053512bb = 0;
  DAT_05351278 = 0;
  DAT_05351280 = 1;
  DAT_05351290 = &DAT_0535129c;
  DAT_05351298 = 0x20;
  DAT_053512a4 = 0x65676174;
  DAT_053512a8 = 0;
  DAT_0535129c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0535129c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0535129c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0535129c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0535129c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0535129c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0535129c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0535129c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05351288 = PTR_DAT_04bb2028 + 0x10;
  DAT_053512c0 = FUN_006bd550("InvalidStage",0);
  DAT_053512c8 = 0;
  DAT_053512d0 = 0;
  return;
}

