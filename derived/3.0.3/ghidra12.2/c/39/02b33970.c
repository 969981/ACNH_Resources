
void _INIT_6820(void)

{
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = (undefined *)CONCAT44(local_30._4_4_,2);
  DAT_0562bf78 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_0562bf7c);
  DAT_0562bf88 = 0x8004ef;
  DAT_0562bf90 = nn::os::GetSystemTick();
  DAT_0562bfa0 = 1;
  DAT_0562bf98 = 0;
  DAT_0562bfa8 = PTR_DAT_04bb2020 + 0x10;
  DAT_0562bfb0 = &DAT_04079e84;
  pcStack_28 = "\"StructurePartsActor\"";
  pcStack_38 = "StructurePartsActor";
  local_40 = DAT_0562bfa8;
  local_30 = DAT_0562bfa8;
  FUN_007621e0(&DAT_0562bfb8,0x26,&LAB_02b32a70,0x440,&local_30,&local_40,0,0,0xffffffff,0,0);
  return;
}

