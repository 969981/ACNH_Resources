
undefined1 FUN_014cc218(long param_1)

{
  ulong uVar1;
  undefined *local_30;
  int local_28;
  int iStack_24;
  
  if ((*(uint *)(param_1 + 0xb58) & 0xfffffffe) == 6) {
    local_30 = PTR_DAT_04bb2010 + 0x10;
    local_28 = (int)((float)(int)*(float *)(param_1 + 0xb68) / 5.0) -
               (uint)(*(float *)(param_1 + 0xb68) < 0.0);
    iStack_24 = (int)((float)(int)*(float *)(param_1 + 0xb70) / 5.0) -
                (uint)(*(float *)(param_1 + 0xb70) < 0.0);
    uVar1 = FUN_022b5770(&local_30);
    if ((uVar1 & 1) != 0) {
      FUN_014e70e0(param_1 + 0x720,param_1 + 0xb40);
      local_30 = (undefined *)CONCAT44(local_30._4_4_,0x17);
      if (*(int *)(param_1 + 0x3c0) == 0x17) {
        return 0;
      }
      FUN_03ebb160(param_1 + 0x3b8);
      return 1;
    }
  }
  return 0;
}

