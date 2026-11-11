
void FUN_00452230(long param_1,long param_2)

{
  *(long *)(param_1 + 0x178) = param_2;
  if (param_2 == 0) {
    *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) & 0xfffffffffbffffff;
    return;
  }
  *(ulong *)(param_1 + 0x70) = *(ulong *)(param_1 + 0x70) | 0x4000000;
  *(long *)(param_1 + 0x148) = param_2;
  return;
}

