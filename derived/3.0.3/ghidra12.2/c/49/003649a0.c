
long FUN_003649a0(long param_1,ushort param_2)

{
  return *(long *)(param_1 + 0x10) +
         (ulong)*(uint *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 4 + 0xc);
}

