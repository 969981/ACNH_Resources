
void FUN_003144cc(long param_1,uint param_2,undefined4 param_3)

{
  if ((ulong)param_2 < (ulong)(*(long *)(param_1 + 0x98) - *(long *)(param_1 + 0x90) >> 2)) {
    *(undefined4 *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 4) = param_3;
  }
  return;
}

