
undefined8 FUN_014cc174(long param_1)

{
  ulong uVar1;
  undefined *local_20;
  int local_18;
  int iStack_14;
  
  if (((*(int *)(param_1 + 0xb58) != 0) && (*(uint *)(param_1 + 0xb58) != 0)) &&
     ((*(uint *)(param_1 + 0xb58) & 0xfffffffe) == 6)) {
    local_20 = PTR_DAT_04bb2010 + 0x10;
    local_18 = (int)((float)(int)*(float *)(param_1 + 0xb68) / 5.0) -
               (uint)(*(float *)(param_1 + 0xb68) < 0.0);
    iStack_14 = (int)((float)(int)*(float *)(param_1 + 0xb70) / 5.0) -
                (uint)(*(float *)(param_1 + 0xb70) < 0.0);
    uVar1 = FUN_022b5770(&local_20);
    if ((uVar1 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

