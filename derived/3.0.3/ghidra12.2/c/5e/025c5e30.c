
void FUN_025c5e30(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  char *pcStack_38;
  
  puVar2 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x28) != 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "SerialNumber";
    local_40 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605660(*(long *)(param_1 + 8),&local_40,*(undefined4 *)(param_2 + 0xc));
      pcStack_38 = "PageNum";
      local_40 = puVar1;
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)*(int *)(param_2 + 0x10));
        local_40 = puVar2 + 0x10;
        pcStack_38 = "Page";
        if (*(long *)(param_1 + 8) != 0) {
          FUN_02605660(*(long *)(param_1 + 8),&local_40,(long)*(int *)(param_2 + 0x14));
        }
      }
    }
    FUN_025c5f10(param_1,param_2);
    local_40 = puVar2 + 0x10;
    pcStack_38 = "RemakeInfo";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02605b30(*(long *)(param_1 + 8),&local_40,*(undefined8 *)(param_1 + 0x28));
    }
  }
  return;
}

