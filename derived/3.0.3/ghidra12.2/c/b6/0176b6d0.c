
void _INIT_4889(void)

{
  undefined *puVar1;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_0528b9b8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0528b9bc);
  DAT_0528b9c8 = 0x8004ef;
  DAT_0528b9d0 = nn::os::GetSystemTick();
  DAT_0528ba13 = 0;
  DAT_0528b9d8 = 0;
  DAT_0528b9e8 = &DAT_0528b9f4;
  DAT_0528b9f0 = 0x20;
  DAT_0528b9fc = 0x65676174;
  DAT_0528ba00 = 0;
  DAT_0528b9f4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_0528b9f4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_0528b9f4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_0528b9f4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_0528b9f4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_0528b9f4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_0528b9f4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_0528b9f4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_0528b9e0 = PTR_DAT_04bb2028 + 0x10;
  DAT_0528ba18 = FUN_006bd550("InvalidStage",0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"IndoorActorIdrSpotlightScene\"";
  pcStack_38 = "IndoorActorIdrSpotlightScene";
  local_40 = puVar1;
  local_30 = puVar1;
  FUN_007621e0(&DAT_0528ba20,0x3f,&LAB_0176aa80,0x298,&local_30,&local_40,4,0,0xffffffff,0,0);
  DAT_0528bb10 = puVar1;
  DAT_0528bb18 = "RoomMdlFloorSpotlight";
  DAT_0528bb20 = puVar1;
  DAT_0528bb28 = "RoomTexFloorCedar00";
  DAT_0528bb30 = puVar1;
  DAT_0528bb38 = "tex_srt0";
  DAT_0528bb40 = puVar1;
  DAT_0528bb48 = "tex_srt1";
  DAT_0528bb50 = puVar1;
  DAT_0528bb58 = "mDummyFloor";
  DAT_0528bb60 = puVar1;
  DAT_0528bb68 = "RoomTexShareTexture";
  return;
}

