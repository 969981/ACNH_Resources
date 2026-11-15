
void _INIT_5665(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_05464c50 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05464c54);
  DAT_05464c60 = 0x8004ef;
  DAT_05464c68 = nn::os::GetSystemTick();
  DAT_05464c70 = 0;
  DAT_05464c78 = 3;
  DAT_05464c7c = 2;
  DAT_05464c81 = &DAT_101010101010101;
  DAT_05464c89 = &DAT_101010101010101;
  DAT_05464c91 = &DAT_101010101010101;
  DAT_05464c99 = &DAT_101010101010101;
  DAT_05464ca1 = &DAT_101010101010101;
  DAT_05464ca9 = &DAT_101010101010101;
  DAT_05464cb1 = 1;
  DAT_05464c80 = 0;
  DAT_05464cb2 = 0x2020202;
  uRam0000000005464cb6 = 0x20202;
  DAT_05464cbc = 1;
  DAT_05464cc8 = &DAT_05464cd4;
  DAT_05464cd0 = 0x20;
  DAT_05464cf3 = 0;
  DAT_05464cdc = 0x65676174;
  DAT_05464ce0 = 0;
  DAT_05464cd4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05464cd4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05464cd4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05464cd4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05464cd4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05464cd4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05464cd4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05464cd4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05464cc0 = PTR_DAT_04bb2028 + 0x10;
  DAT_05464cf8 = FUN_006bd550("InvalidStage",0);
  DAT_05464d00 = PTR_DAT_04bb2020 + 0x10;
  DAT_05464d08 = "FanState";
  pcStack_28 = "\"ObjectElectricFan\"";
  pcStack_38 = "ObjectElectricFan";
  local_40 = DAT_05464d00;
  local_30 = DAT_05464d00;
  FUN_007621e0(&DAT_05464d10,0x58,&LAB_02247cf0,0x418,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

