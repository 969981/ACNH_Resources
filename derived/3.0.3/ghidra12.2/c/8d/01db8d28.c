
undefined8 FUN_01db8d28(long param_1,byte *param_2)

{
  int iVar1;
  byte local_3c [4];
  byte local_38 [4];
  byte local_34 [4];
  
  local_3c[0] = *param_2;
  if (7 < local_3c[0]) {
    local_3c[0] = 0xff;
  }
  iVar1 = FUN_02582fe0(local_3c);
  if (iVar1 != *(int *)(param_1 + 0x8418) || *(int *)(param_1 + 0x58) < 1) {
    local_38[0] = *param_2;
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
    iVar1 = FUN_02582fe0(local_38);
    if ((iVar1 != *(int *)(param_1 + 0x8414)) || (*(char *)(param_1 + 0x8424) == '\0')) {
      local_34[0] = *param_2;
      if (7 < local_34[0]) {
        local_34[0] = 0xff;
      }
      iVar1 = FUN_02582fe0(local_34);
      if ((iVar1 != *(int *)(param_1 + 0x841c)) || (*(int *)(param_1 + 0x74b8) < 1)) {
        return 0;
      }
    }
  }
  return 1;
}

