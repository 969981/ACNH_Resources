
void _INIT_6864(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_05640f00 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05640f04);
  DAT_05640f10 = 0x8004ef;
  DAT_05640f18 = nn::os::GetSystemTick();
  DAT_05640f20 = 0;
  DAT_05640f28 = 3;
  DAT_05640f2c = 2;
  DAT_05640f30 = 0;
  DAT_05640f31 = &DAT_101010101010101;
  DAT_05640f39 = &DAT_101010101010101;
  DAT_05640f41 = &DAT_101010101010101;
  DAT_05640f49 = &DAT_101010101010101;
  DAT_05640f51 = &DAT_101010101010101;
  DAT_05640f59 = &DAT_101010101010101;
  DAT_05640f61 = 1;
  DAT_05640f62 = 0x2020202;
  uRam0000000005640f66 = 0x20202;
  DAT_05640f70 = PTR_DAT_04bbc1a0 + 0x10;
  DAT_05640f6c = 0;
  DAT_05640f78 = PTR_DAT_04bb2010 + 0x10;
  DAT_05640f80 = 0x3f00000085;
  DAT_05640f90 = 0x4300000094;
  DAT_05640f88 = DAT_05640f78;
  FUN_001001d0(PTR_FUN_04bb2038,&DAT_05640f70,&__DT_FINI_ARRAY);
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "\"StructureWherearenRockArchActor\"";
  pcStack_38 = "StructureWherearenRockArchActor";
  local_30 = local_40;
  FUN_007621e0(&DAT_05640f98,0xd2,&LAB_02b8cc60,0x860,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

