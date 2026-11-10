
undefined8 FUN_00189434(long param_1)

{
  uint uVar1;
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(uint *)(param_1 + 0x1c) == 0) {
      nn::os::YieldThread();
    }
    else {
      nn::os::SleepThread((ulong)*(uint *)(param_1 + 0x1c) * 1000000);
    }
  }
  if (DAT_04be21f1 == '\0') {
    FUN_0018cb8c(&local_18);
  }
  else {
    FUN_0018c9b0(&local_18,0);
  }
  DAT_04c589a0 = local_18;
  uVar1 = (int)local_18 - *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x18) = uVar1;
  if (((*(uint *)(param_1 + 0xc) == 0) || (*(uint *)(param_1 + 0xc) < uVar1)) &&
     (*(undefined1 *)(param_1 + 0x30) = 1, *(short *)(param_1 + 8) == 2)) {
    return 0;
  }
  return 1;
}

