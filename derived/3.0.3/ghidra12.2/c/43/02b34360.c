
void _INIT_6821(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_0562c0b8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0562c0bc);
  DAT_0562c0c8 = 0x8004ef;
  DAT_0562c0d0 = nn::os::GetSystemTick();
  DAT_0562c0d8 = 0;
  DAT_0562c0e0 = 0xc0000000;
  DAT_0562c0e4 = 0x40000000;
  DAT_0562c0f8 = 0x20;
  DAT_0562c11b = 0;
  DAT_0562c0f0 = &DAT_0562c0fc;
  DAT_0562c104 = 0x65676174;
  DAT_0562c108 = 0;
  DAT_0562c0fc._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0562c0fc._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0562c0fc._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0562c0fc._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0562c0fc._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0562c0fc._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0562c0fc._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0562c0fc._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0562c0e8 = PTR_DAT_04bb2028 + 0x10;
  DAT_0562c120 = FUN_006bd550("InvalidStage",0);
  DAT_0562c128 = 0x1c2b;
  FUN_0277d4ac(&DAT_0562c128);
  DAT_0562c130 = 0x142e;
  FUN_0277d4ac();
  DAT_0562c138 = 1;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"StructurePartsFtrActor\"";
  pcStack_38 = "StructurePartsFtrActor";
  local_30 = local_40;
  FUN_007621e0(&DAT_0562c140,0x25,&LAB_02b33a60,0x280,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

