
void FUN_03fe69ac(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x3170d0);
  if ((*(char *)(*(long *)(param_1 + 0x45940) + 0x34710) == '\0') ||
     ((uVar1 >> 8 & 0xff) != (param_2 & 0xff))) {
    uVar1 = uVar1 & 0xff0000 | uVar1 & 0xff | (param_2 & 0xff) << 8;
    *(uint *)(param_1 + 0x3170d0) = uVar1;
    if (uVar1 != *(uint *)(param_1 + 0x3170d4)) {
      *(uint *)(param_1 + 0x3170d4) = uVar1;
      FUN_03fe5eb0();
      return;
    }
  }
  return;
}

