
void FUN_025ea190(long param_1,undefined2 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *local_40;
  char *pcStack_38;
  
  FUN_02602950(param_1,0x10);
  puVar2 = PTR_DAT_04bb2020;
  if ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 1) &&
     (*(byte *)(*(long *)PTR_DAT_04bb39b0 + 0x160) - 1 < 0xfe)) {
    uVar3 = 1;
    goto LAB_025ea24c;
  }
  if ((1 < *(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10)) &&
     (lVar4 = **(long **)PTR_DAT_04bb27d0, 1 < *(byte *)(lVar4 + 0x476))) {
    if (*(int *)(lVar4 + 0x508) != 0 && *(char *)(lVar4 + 0x55d) != '\0') {
      uVar3 = 2;
      goto LAB_025ea24c;
    }
    if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0) {
      uVar3 = 3;
      if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0) {
        uVar3 = 0;
      }
      goto LAB_025ea24c;
    }
  }
  uVar3 = 0;
LAB_025ea24c:
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "MultiPlayStatus";
  if (*(long *)(param_1 + 8) != 0) {
    local_40 = puVar1;
    FUN_02605660(*(long *)(param_1 + 8),&local_40,uVar3);
    pcStack_38 = "SNPCUniqueID";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar1;
      FUN_02605660(*(long *)(param_1 + 8),&local_40,*param_2);
    }
  }
  pcStack_38 = "EndMesageFileHash";
  local_40 = puVar2 + 0x10;
  FUN_026018a0(param_1,&local_40,param_2 + 4);
  pcStack_38 = "EndMesageLabel";
  if (*(long *)(param_1 + 8) != 0) {
    local_40 = puVar2 + 0x10;
    FUN_02605980(*(long *)(param_1 + 8),&local_40,param_2 + 0x50);
  }
  return;
}

