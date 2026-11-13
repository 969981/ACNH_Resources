
void _INIT_3982(void)

{
  DAT_050761f8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050761fc);
  DAT_05076208 = 0x8004ef;
  DAT_05076210 = nn::os::GetSystemTick();
  DAT_05076253 = 0;
  DAT_05076218 = 0;
  DAT_05076228 = &DAT_05076234;
  DAT_05076230 = 0x20;
  DAT_0507623c = 0x65676174;
  DAT_05076240 = 0;
  DAT_05076234._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05076234._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05076234._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05076234._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05076234._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05076234._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05076234._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05076234._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05076220 = PTR_DAT_04bb2028 + 0x10;
  DAT_05076258 = FUN_006bd550("InvalidStage",0);
  DAT_05076260 = 0;
  DAT_05076268 = 0;
  DAT_05076270 = PTR_DAT_04bb2020 + 0x10;
  DAT_05076278 = "ModelOnUI";
  return;
}

