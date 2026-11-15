
void _INIT_5452(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_05387120 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05387124);
  DAT_05387130 = 0x8004ef;
  DAT_05387138 = nn::os::GetSystemTick();
  DAT_05387140 = 0;
  DAT_05387148 = 1;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"NetStageMgr\"";
  pcStack_38 = "NetStageMgr";
  local_30 = local_40;
  FUN_007621e0(&DAT_05387150,0x89,&LAB_01df20a0,0x290,&local_30,&local_40,3,0,0xffffffff,0,0);
  return;
}

