
void FUN_034dffb8(long param_1)

{
  undefined8 uVar1;
  undefined **local_80;
  char *pcStack_78;
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  long local_40;
  undefined **ppuStack_38;
  undefined *local_30;
  undefined1 local_28;
  
  local_60 = 0x100000000;
  uStack_58 = 0x200000002;
  local_50 = 1;
  local_70 = &PTR_FUN_04aa7780;
  local_4c = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_30 = PTR_DAT_04bb2120;
  local_28 = 0;
  local_68 = 1;
  uStack_64 = 3;
  local_48 = 1;
  ppuStack_38 = &PTR_LAB_048f9770;
  local_80 = &PTR_LAB_048f9770;
  pcStack_78 = "WherearenInspectInfoPage";
  local_40 = param_1;
  uVar1 = FUN_034bad10(*(undefined8 *)(param_1 + 0xa0),&local_80,&local_70);
  *(undefined8 *)(param_1 + 0x228) = uVar1;
  return;
}

