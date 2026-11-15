
void _INIT_5706(void)

{
  undefined *puVar1;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_05474d18 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05474d1c);
  DAT_05474d28 = 0x8004ef;
  DAT_05474d30 = nn::os::GetSystemTick();
  DAT_05474d38 = 0;
  DAT_05474dbb = 0;
  DAT_05474d40 = 3;
  DAT_05474d44 = 2;
  DAT_05474d49 = &DAT_101010101010101;
  DAT_05474d51 = &DAT_101010101010101;
  DAT_05474d59 = &DAT_101010101010101;
  DAT_05474d61 = &DAT_101010101010101;
  DAT_05474d69 = &DAT_101010101010101;
  DAT_05474d71 = &DAT_101010101010101;
  DAT_05474d79 = 1;
  DAT_05474d48 = 0;
  DAT_05474d7a = 0x2020202;
  uRam0000000005474d7e = 0x20202;
  DAT_05474d98 = 0x20;
  DAT_05474d90 = &DAT_05474d9c;
  DAT_05474da4 = 0x65676174;
  DAT_05474da8 = 0;
  DAT_05474d9c._0_1_ = s_InvalidStage_040d9503[0];
  DAT_05474d9c._1_1_ = s_InvalidStage_040d9503[1];
  DAT_05474d9c._2_1_ = s_InvalidStage_040d9503[2];
  DAT_05474d9c._3_1_ = s_InvalidStage_040d9503[3];
  DAT_05474d9c._4_1_ = s_InvalidStage_040d9503[4];
  DAT_05474d9c._5_1_ = s_InvalidStage_040d9503[5];
  DAT_05474d9c._6_1_ = s_InvalidStage_040d9503[6];
  DAT_05474d9c._7_1_ = s_InvalidStage_040d9503[7];
  DAT_05474d88 = PTR_DAT_04bb2028 + 0x10;
  DAT_05474dc0 = FUN_006bd550("InvalidStage",0);
  DAT_05474dc8 = 1;
  DAT_05474dcc = 0x1c2b;
  FUN_0277d4ac();
  DAT_05474dd4 = 0x142e;
  FUN_0277d4ac();
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  DAT_05474de8 = "NNPC_Talk_Sequence";
  DAT_05474df8 = &DAT_04066c7f;
  DAT_05474e08 = "AI_NPC_";
  DAT_05474e18 = &DAT_040a029a;
  pcStack_28 = "\"ObjectTanukichi00Deco\"";
  pcStack_38 = "ObjectTanukichi00Deco";
  DAT_05474de0 = puVar1;
  DAT_05474df0 = puVar1;
  DAT_05474e00 = puVar1;
  DAT_05474e10 = puVar1;
  local_40 = puVar1;
  local_30 = puVar1;
  FUN_007621e0(&DAT_05474e20,0x62,&LAB_02298dc0,0x420,&local_30,&local_40,0,0,0xffffffff,0,0);
  DAT_05474f10 = puVar1;
  DAT_05474f18 = "Before";
  DAT_05474f20 = puVar1;
  DAT_05474f28 = "After";
  return;
}

