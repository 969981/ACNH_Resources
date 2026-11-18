
uint FUN_034113b8(long param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x40) >> (ulong)(param_2 & 0x1f) & 1;
}

