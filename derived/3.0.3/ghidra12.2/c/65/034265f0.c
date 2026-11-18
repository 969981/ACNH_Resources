
void _INIT_7950(void)

{
  DAT_05752314 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05752318);
  DAT_05752324 = 0x8004ef;
  DAT_05752328 = nn::os::GetSystemTick();
  DAT_05752330 = 0;
  DAT_05752338 = 0x1c2b;
  FUN_0277d4ac();
  DAT_05752340 = 0x142e;
  FUN_0277d4ac();
  DAT_05752348 = 0xc0000000;
  DAT_0575234c = 0x40000000;
  DAT_05752350 = 1;
  DAT_0575238b = 0;
  DAT_05752368 = 0x20;
  DAT_05752360 = &DAT_0575236c;
  DAT_05752374 = 0x65676174;
  DAT_05752378 = 0;
  DAT_0575236c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0575236c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0575236c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0575236c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0575236c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0575236c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0575236c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0575236c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05752358 = PTR_DAT_04bb2028 + 0x10;
  DAT_05752390 = FUN_006bd550("InvalidStage",0);
  DAT_05752398 = PTR_DAT_04bb2020 + 0x10;
  DAT_057523a0 = "ModelOnUI";
  DAT_057523a8 = DAT_05752398;
  DAT_057523b0 = "NoticeAboutMydesingOnWorkBench";
  DAT_057523b8 = DAT_05752398;
  DAT_057523c0 = "NoticeAboutSmartPhoneCase";
  return;
}

