
void _INIT_2740(void)

{
  DAT_04ef48e0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04ef48e4);
  DAT_04ef48f0 = 0x8004ef;
  DAT_04ef48f8 = nn::os::GetSystemTick();
  DAT_04ef493b = 0;
  DAT_04ef4900 = 0;
  DAT_04ef4910 = &DAT_04ef491c;
  DAT_04ef4918 = 0x20;
  DAT_04ef4924 = 0x65676174;
  DAT_04ef4928 = 0;
  DAT_04ef491c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_04ef491c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_04ef491c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_04ef491c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_04ef491c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_04ef491c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_04ef491c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_04ef491c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_04ef4908 = PTR_DAT_04bb2028 + 0x10;
  DAT_04ef4940 = FUN_006bd550("InvalidStage",0);
  DAT_04ef4948 = 0x1c2b;
  FUN_0277d4ac(&DAT_04ef4948);
  DAT_04ef4950 = 0x142e;
  FUN_0277d4ac();
  DAT_04ef4958 = 0;
  DAT_04ef495a = 0;
  DAT_04ef4968 = &DAT_04ef4974;
  DAT_04ef4970 = 8;
  DAT_04ef497b = 0;
  DAT_04ef4974 = 0;
  DAT_04ef4960 = PTR_DAT_04bb3768 + 0x10;
  DAT_04ef4980 = 0xfffe;
  FUN_0277d4ac();
  DAT_04ef4988 = 0;
  FUN_001001d0(&LAB_00d54dc4,&DAT_04ef4958,&__DT_FINI_ARRAY);
  return;
}

