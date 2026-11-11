
undefined8 FUN_0048ef90(ulong *param_1)

{
  undefined8 uVar1;
  int local_14;
  
  if (*param_1 != param_1[1]) {
    local_14 = 0;
    uVar1 = FUN_004a1850(*param_1,&local_14);
    if (0 < local_14) {
      if (param_1[1] < *param_1 + (long)local_14) {
        *param_1 = param_1[1];
        *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
        return uVar1;
      }
      *param_1 = *param_1 + (long)local_14;
      return uVar1;
    }
  }
  *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
  return 0;
}

