
uint FUN_002eb358(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < 6) {
    uVar1 = (*(uint *)(param_1 + 0x710) >> (ulong)(param_2 & 0x1f)) >> 3 & 1;
  }
  return uVar1;
}

