
undefined4 FUN_003144e8(long param_1,uint param_2)

{
  if ((ulong)param_2 < (ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 2)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 4);
  }
  return 0;
}

