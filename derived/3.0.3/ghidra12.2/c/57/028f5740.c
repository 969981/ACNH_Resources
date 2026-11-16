
void _INIT_6445(void)

{
  DAT_055bab94 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_055bab98);
  DAT_055baba4 = 0x8004ef;
  DAT_055baba8 = nn::os::GetSystemTick();
  DAT_055babb0 = 0;
  DAT_055bac33 = 0;
  DAT_055babb8 = 3;
  DAT_055babbc = 2;
  DAT_055babc1 = &DAT_101010101010101;
  DAT_055babc9 = &DAT_101010101010101;
  DAT_055babd1 = &DAT_101010101010101;
  DAT_055babd9 = &DAT_101010101010101;
  DAT_055babe1 = &DAT_101010101010101;
  DAT_055babe9 = &DAT_101010101010101;
  DAT_055babf1 = 1;
  DAT_055babc0 = 0;
  DAT_055babf2 = 0x2020202;
  uRam00000000055babf6 = 0x20202;
  DAT_055bac10 = 0x20;
  DAT_055bac08 = &DAT_055bac14;
  DAT_055bac1c = 0x65676174;
  DAT_055bac20 = 0;
  DAT_055bac14._0_1_ = s_InvalidStage_040d9503[0];
  DAT_055bac14._1_1_ = s_InvalidStage_040d9503[1];
  DAT_055bac14._2_1_ = s_InvalidStage_040d9503[2];
  DAT_055bac14._3_1_ = s_InvalidStage_040d9503[3];
  DAT_055bac14._4_1_ = s_InvalidStage_040d9503[4];
  DAT_055bac14._5_1_ = s_InvalidStage_040d9503[5];
  DAT_055bac14._6_1_ = s_InvalidStage_040d9503[6];
  DAT_055bac14._7_1_ = s_InvalidStage_040d9503[7];
  DAT_055bac00 = PTR_DAT_04bb2028 + 0x10;
  DAT_055bac38 = FUN_006bd550("InvalidStage",0);
  DAT_055bac40 = 1;
  DAT_055bac44 = 0;
  DAT_055bac48 = 0;
  FUN_001001d0(PTR_LAB_04bbc5f0,&DAT_055bac44,&__DT_FINI_ARRAY);
  return;
}

