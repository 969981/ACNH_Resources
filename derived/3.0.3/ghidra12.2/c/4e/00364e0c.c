
long FUN_00364e0c(long param_1,int param_2)

{
  if (param_2 < (int)(uint)*(ushort *)(param_1 + 0x12)) {
    return *(long *)(param_1 + 0x20) +
           (ulong)*(uint *)(*(long *)(param_1 + 0x20) + (long)param_2 * 4);
  }
  return 0;
}

