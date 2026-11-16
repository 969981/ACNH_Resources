
void FUN_025a8fd0(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "SerialNumber";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar1;
      FUN_02605660(*(long *)(param_1 + 8),&local_40,*param_2);
      pcStack_38 = "PageNum";
      if (*(long *)(param_1 + 8) != 0) {
        local_40 = puVar1;
        FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)(int)param_2[1]);
        local_40 = puVar2 + 0x10;
        pcStack_38 = "Page";
        if (*(long *)(param_1 + 8) != 0) {
          FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)(int)param_2[2]);
        }
      }
    }
    puVar2 = puVar2 + 0x10;
    pcStack_38 = "ValidNum";
    local_40 = puVar2;
    iVar3 = FUN_025a90e0(param_1);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)iVar3);
    }
    FUN_025a9210(param_1,param_2);
    pcStack_38 = "History";
    if (*(long *)(param_1 + 8) != 0) {
      local_40 = puVar2;
      FUN_02605b30(*(long *)(param_1 + 8),&local_40,*(undefined8 *)(param_1 + 0x28));
    }
  }
  return;
}

