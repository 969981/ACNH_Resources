
bool FUN_03a04ee0(long param_1)

{
  uint uVar1;
  
  if (((*(byte *)(param_1 + 0x1c) & 1) == 0) || ((*(byte *)(param_1 + 0x20) >> 2 & 1) == 0)) {
    return false;
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (*(uint *)(param_1 + 8) <= uVar1) {
    uVar1 = 0;
  }
  return *(char *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * 0x588 + 0x60) != '\0';
}

