
uint FUN_002be31c(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < 3) {
    uVar1 = (*(uint *)(param_1 + 0x638) >> (ulong)(param_2 & 0x1f)) >> 0x18 & 1;
  }
  return uVar1;
}

