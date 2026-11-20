
long FUN_03ef9d4c(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = param_2;
  if (*(uint *)(param_1 + 0x30) <= param_2) {
    uVar1 = 0;
  }
  if ((*(byte *)(*(long *)(param_1 + 0x38) + (long)(int)uVar1) >> 1 & 1) != 0) {
    lVar2 = FUN_03ef9df0();
    return lVar2;
  }
  if (*(uint *)(param_1 + 0x20) <= param_2) {
    param_2 = 0;
  }
  return *(long *)(param_1 + 0x28) + (long)(int)param_2 * 0x1c;
}

