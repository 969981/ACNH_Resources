
void _INIT_4550(void)

{
  DAT_051af128 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_051af12c);
  DAT_051af138 = 0x8004ef;
  DAT_051af140 = nn::os::GetSystemTick();
  DAT_051af148 = 0;
  DAT_051af150 = 0x1c2b;
  FUN_0277d4ac();
  DAT_051af158 = 0x142e;
  FUN_0277d4ac();
  DAT_051af160 = 3;
  DAT_051af164 = 2;
  DAT_051af169 = &DAT_101010101010101;
  DAT_051af171 = &DAT_101010101010101;
  DAT_051af179 = &DAT_101010101010101;
  DAT_051af181 = &DAT_101010101010101;
  DAT_051af189 = &DAT_101010101010101;
  DAT_051af191 = &DAT_101010101010101;
  DAT_051af199 = 1;
  DAT_051af168 = 0;
  DAT_051af19a = 0x2020202;
  uRam00000000051af19e = 0x20202;
  DAT_051af1b8 = 0x20;
  DAT_051af1b0 = &DAT_051af1bc;
  DAT_051af1db = 0;
  DAT_051af1c4 = 0x65676174;
  DAT_051af1c8 = 0;
  DAT_051af1bc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_051af1bc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_051af1bc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_051af1bc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_051af1bc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_051af1bc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_051af1bc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_051af1bc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_051af1a8 = PTR_DAT_04bb2028 + 0x10;
  DAT_051af1e0 = FUN_006bd550("InvalidStage",0);
  return;
}

