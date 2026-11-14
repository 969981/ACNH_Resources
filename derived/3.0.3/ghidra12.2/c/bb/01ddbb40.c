
void _INIT_5444(void)

{
  DAT_05382998 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0538299c);
  DAT_053829a8 = 0x8004ef;
  DAT_053829b0 = nn::os::GetSystemTick();
  DAT_053829f3 = 0;
  DAT_053829b8 = 0;
  DAT_053829c8 = &DAT_053829d4;
  DAT_053829d0 = 0x20;
  DAT_053829dc = 0x65676174;
  DAT_053829e0 = 0;
  DAT_053829d4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_053829d4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_053829d4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_053829d4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_053829d4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_053829d4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_053829d4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_053829d4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_053829c0 = PTR_DAT_04bb2028 + 0x10;
  DAT_053829f8 = FUN_006bd550("InvalidStage",0);
  return;
}

