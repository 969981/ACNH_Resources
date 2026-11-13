
void _INIT_4278(void)

{
  undefined *local_30;
  char *pcStack_28;
  undefined *local_20;
  char *pcStack_18;
  
  local_20 = (undefined *)CONCAT44(local_20._4_4_,2);
  DAT_050cd2b8 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050cd2bc);
  DAT_050cd2c8 = 0x8004ef;
  DAT_050cd2d0 = nn::os::GetSystemTick();
  DAT_050cd2d8 = 0;
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_18 = "\"EventFlowSystemActor\"";
  pcStack_28 = "EventFlowSystemActor";
  local_20 = local_30;
  FUN_007621e0(&DAT_050cd2e0,0x47,&LAB_01189970,0x5c0,&local_20,&local_30,1,0,0xffffffff,0,0);
  return;
}

