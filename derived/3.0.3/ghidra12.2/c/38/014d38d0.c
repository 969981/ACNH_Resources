
uint FUN_014d38d0(long param_1,uint param_2)

{
  int iVar1;
  
  if ((((param_2 < 0x37) &&
       (iVar1 = (int)param_2 >> 5,
       (*(uint *)(param_1 + (long)iVar1 * 4 + 0x18) >> (ulong)(param_2 & 0x1f) & 1) != 0)) &&
      ((0x36 < param_2 ||
       ((*(uint *)(param_1 + (long)iVar1 * 4 + 8) >> (ulong)(param_2 & 0x1f) & 1) == 0)))) &&
     (param_2 < 0x37)) {
    return *(uint *)(param_1 + (long)iVar1 * 4) >> (ulong)(param_2 & 0x1f) & 1;
  }
  return 0;
}

