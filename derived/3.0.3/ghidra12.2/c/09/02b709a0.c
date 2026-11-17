
void _INIT_6845(void)

{
  undefined **local_40;
  char *pcStack_38;
  undefined **local_30;
  char *pcStack_28;
  
  local_30 = (undefined **)CONCAT44(local_30._4_4_,2);
  DAT_05637c98 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05637c9c);
  DAT_05637ca8 = 0x8004ef;
  DAT_05637cb0 = nn::os::GetSystemTick();
  DAT_05637cb8 = 0;
  DAT_05637cc0 = 1;
  DAT_05637cc4 = 3;
  DAT_05637cc8 = 2;
  DAT_05637ccc = 0;
  DAT_05637ccd = &DAT_101010101010101;
  DAT_05637cd5 = &DAT_101010101010101;
  DAT_05637cdd = &DAT_101010101010101;
  DAT_05637ce5 = &DAT_101010101010101;
  DAT_05637ced = &DAT_101010101010101;
  DAT_05637cf5 = &DAT_101010101010101;
  DAT_05637cfd = 1;
  DAT_05637cfe = 0x2020202;
  uRam0000000005637d02 = 0x20202;
  local_30 = &PTR_LAB_048f9770;
  pcStack_28 = "\"StructureWherearenFacilityAccessoryActor\"";
  local_40 = &PTR_LAB_048f9770;
  pcStack_38 = "StructureWherearenFacilityAccessoryActor";
  FUN_007621e0(&DAT_05637d08,0xbe,&LAB_02b6f950,0x2b8,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

