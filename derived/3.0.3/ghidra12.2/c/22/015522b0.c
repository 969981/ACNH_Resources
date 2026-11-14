
void _INIT_4699(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_05218580 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05218584);
  DAT_05218590 = 0x8004ef;
  DAT_05218598 = nn::os::GetSystemTick();
  DAT_052185a0 = 0;
  DAT_052185a8 = 0xc0000000;
  DAT_052185ac = 0x40000000;
  DAT_052185c0 = 0x20;
  DAT_052185e3 = 0;
  DAT_052185b8 = &DAT_052185c4;
  DAT_052185cc = 0x65676174;
  DAT_052185d0 = 0;
  DAT_052185c4._0_1_ = s_InvalidStage_040d9503[0];
  DAT_052185c4._1_1_ = s_InvalidStage_040d9503[1];
  DAT_052185c4._2_1_ = s_InvalidStage_040d9503[2];
  DAT_052185c4._3_1_ = s_InvalidStage_040d9503[3];
  DAT_052185c4._4_1_ = s_InvalidStage_040d9503[4];
  DAT_052185c4._5_1_ = s_InvalidStage_040d9503[5];
  DAT_052185c4._6_1_ = s_InvalidStage_040d9503[6];
  DAT_052185c4._7_1_ = s_InvalidStage_040d9503[7];
  DAT_052185b0 = PTR_DAT_04bb2028 + 0x10;
  DAT_052185e8 = FUN_006bd550("InvalidStage",0);
  DAT_052185f0 = 0x1c2b;
  FUN_0277d4ac(&DAT_052185f0);
  DAT_052185f8 = 0x142e;
  FUN_0277d4ac();
  DAT_05218600 = 1;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"SCREEN\"";
  pcStack_38 = "FtrViewerActor";
  local_30 = local_40;
  FUN_007621e0(&DAT_05218608,0x55,&LAB_01550490,0x290,&local_30,&local_40,0,&LAB_015505b0,0xffffffff
               ,0,0);
  return;
}

