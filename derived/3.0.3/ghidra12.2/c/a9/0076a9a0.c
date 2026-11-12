
void _INIT_1303(void)

{
  undefined *local_30;
  char *pcStack_28;
  undefined *local_20;
  char *pcStack_18;
  
  local_20 = (undefined *)CONCAT44(local_20._4_4_,2);
  DAT_04c98ed0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_04c98ed4);
  DAT_04c98ee0 = 0x8004ef;
  DAT_04c98ee8 = nn::os::GetSystemTick();
  DAT_04c98ef0 = 0;
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_18 = "\"Stars\"";
  pcStack_28 = "ActorStars";
  local_20 = local_30;
  FUN_007621e0(&DAT_04c98ef8,0x90,&LAB_0076a180,0x278,&local_20,&local_30,0,0,0xffffffff,0,0);
  return;
}

