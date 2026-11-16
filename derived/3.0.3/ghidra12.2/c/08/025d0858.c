
void FUN_025d0858(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(char *)(*(long *)PTR_DAT_04bb2268 + 0xb1) != '\0') {
    return;
  }
  FUN_02602950(param_1,100);
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "UniqueID";
  local_40 = puVar1;
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_40,*param_2);
    pcStack_38 = "PreValue";
    local_40 = puVar1;
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)(int)param_2[1]);
      local_40 = puVar2 + 0x10;
      pcStack_38 = "PostValue";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_40,(long)(int)param_2[2]);
      }
    }
  }
  FUN_025d0920(param_1);
  return;
}

