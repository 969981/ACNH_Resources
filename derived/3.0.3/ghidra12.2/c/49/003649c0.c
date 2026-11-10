
long FUN_003649c0(long param_1,uint param_2)

{
  return *(long *)(param_1 + 0x18) +
         (ulong)*(uint *)(*(long *)(param_1 + 0x18) + (ulong)param_2 * 4 + 0xc);
}

