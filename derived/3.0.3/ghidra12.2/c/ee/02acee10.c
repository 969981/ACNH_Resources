
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_6760(void)

{
  undefined **local_40;
  char *pcStack_38;
  undefined **local_30;
  char *pcStack_28;
  
  local_30 = (undefined **)CONCAT44(local_30._4_4_,2);
  DAT_056122f0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_056122f4);
  DAT_05612300 = 0x8004ef;
  _DAT_05612308 = nn::os::GetSystemTick();
  DAT_05612310 = 0;
  DAT_05612318 = 3;
  DAT_0561231c = 2;
  DAT_05612320 = 0;
  DAT_05612321 = &DAT_101010101010101;
  DAT_05612329 = &DAT_101010101010101;
  DAT_05612331 = &DAT_101010101010101;
  DAT_05612339 = &DAT_101010101010101;
  DAT_05612341 = &DAT_101010101010101;
  DAT_05612349 = &DAT_101010101010101;
  DAT_05612351 = 1;
  DAT_05612352 = 0x2020202;
  uRam0000000005612356 = 0x20202;
  local_30 = &PTR_LAB_048f9770;
  pcStack_28 = "\"StructureDynamicCollisionActor\"";
  local_40 = &PTR_LAB_048f9770;
  pcStack_38 = "StructureDynamicCollisionActor";
  FUN_007621e0(&DAT_05612360,0x95,FUN_02ace2a0,0x310,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

