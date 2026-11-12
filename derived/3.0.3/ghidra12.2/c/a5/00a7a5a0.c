
void _INIT_2014(void)

{
  undefined *local_30;
  char *pcStack_28;
  undefined *local_20;
  char *pcStack_18;
  
  local_20 = (undefined *)CONCAT44(local_20._4_4_,2);
  DAT_04da4ac0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04da4ac4);
  DAT_04da4ad0 = 0x8004ef;
  DAT_04da4ad8 = nn::os::GetSystemTick();
  DAT_04da4ae0 = 0;
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_18 = "\"DemoMgrActor\"";
  pcStack_28 = "DemoMgrActor";
  local_20 = local_30;
  FUN_007621e0(&DAT_04da4ae8,2,FUN_00a7a280,0x278,&local_20,&local_30,3,0,0xffffffff,0,0);
  return;
}

