
void _INIT_7387(void)

{
  DAT_056e7e88 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056e7e8c);
  DAT_056e7e98 = 0x8004ef;
  DAT_056e7ea0 = nn::os::GetSystemTick();
  DAT_056e7ea8 = 0;
  DAT_056e7eb0 = PTR_DAT_04bb2020 + 0x10;
  DAT_056e7eb8 = "ModelOnUI";
  DAT_056e7ec0 = 1;
  DAT_056e7ec4 = 0x1c2b;
  FUN_0277d4ac();
  DAT_056e7ecc = 0x142e;
  FUN_0277d4ac();
  DAT_056e7f0b = 0;
  DAT_056e7ee8 = 0x20;
  DAT_056e7ee0 = &DAT_056e7eec;
  DAT_056e7ef4 = 0x65676174;
  DAT_056e7ef8 = 0;
  DAT_056e7eec._0_1_ = s_InvalidStage_040d9503[0];
  DAT_056e7eec._1_1_ = s_InvalidStage_040d9503[1];
  DAT_056e7eec._2_1_ = s_InvalidStage_040d9503[2];
  DAT_056e7eec._3_1_ = s_InvalidStage_040d9503[3];
  DAT_056e7eec._4_1_ = s_InvalidStage_040d9503[4];
  DAT_056e7eec._5_1_ = s_InvalidStage_040d9503[5];
  DAT_056e7eec._6_1_ = s_InvalidStage_040d9503[6];
  DAT_056e7eec._7_1_ = s_InvalidStage_040d9503[7];
  DAT_056e7ed8 = PTR_DAT_04bb2028 + 0x10;
  DAT_056e7f10 = FUN_006bd550("InvalidStage",0);
  return;
}

