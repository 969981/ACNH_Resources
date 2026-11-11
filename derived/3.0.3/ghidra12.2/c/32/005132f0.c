
ulong FUN_005132f0(long param_1,long param_2)

{
  ulong uVar1;
  
  if (*(int *)(param_1 + 0x20) < 1) {
    return 0xffffffff;
  }
  uVar1 = 0;
  do {
    if (*(long *)(*(long *)(param_1 + 0x18) + uVar1 * 8) == param_2) {
      return uVar1 & 0xffffffff;
    }
    uVar1 = uVar1 + 1;
  } while ((long)uVar1 < (long)*(int *)(param_1 + 0x20));
  return 0xffffffff;
}

