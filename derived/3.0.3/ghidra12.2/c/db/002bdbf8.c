
uint FUN_002bdbf8(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 < 6) {
    uVar1 = (*(uint *)(param_1 + 0x638) >> (ulong)(param_2 & 0x1f)) >> 2 & 1;
  }
  return uVar1;
}

