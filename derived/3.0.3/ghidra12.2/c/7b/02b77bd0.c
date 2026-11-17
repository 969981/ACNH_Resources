
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_6850(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_0563a9d8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0563a9dc);
  DAT_0563a9e8 = 0x8004ef;
  _DAT_0563a9f0 = nn::os::GetSystemTick();
  DAT_0563a9f8 = 0;
  DAT_0563aa7b = 0;
  DAT_0563aa00 = 1;
  DAT_0563aa04 = 3;
  DAT_0563aa08 = 2;
  DAT_0563aa0d = &DAT_101010101010101;
  DAT_0563aa15 = &DAT_101010101010101;
  DAT_0563aa1d = &DAT_101010101010101;
  DAT_0563aa25 = &DAT_101010101010101;
  DAT_0563aa2d = &DAT_101010101010101;
  DAT_0563aa35 = &DAT_101010101010101;
  DAT_0563aa3d = 1;
  DAT_0563aa0c = 0;
  DAT_0563aa3e = 0x2020202;
  uRam000000000563aa42 = 0x20202;
  DAT_0563aa50 = &DAT_0563aa5c;
  DAT_0563aa58 = 0x20;
  DAT_0563aa64 = 0x65676174;
  DAT_0563aa68 = 0;
  DAT_0563aa5c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0563aa5c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0563aa5c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0563aa5c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0563aa5c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0563aa5c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0563aa5c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0563aa5c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0563aa48 = PTR_DAT_04bb2028 + 0x10;
  DAT_0563aa80 = FUN_006bd550("InvalidStage",0);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"StructureWherearenFacilityRoofActor\"";
  pcStack_38 = "StructureWherearenFacilityRoofActor";
  local_30 = local_40;
  FUN_007621e0(&DAT_0563aa88,0xb2,FUN_02b76f40,0x2b8,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

