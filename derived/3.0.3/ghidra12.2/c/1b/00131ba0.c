
long FUN_00131ba0(long param_1,ushort param_2)

{
  if (param_2 < *(ushort *)(param_1 + 0x658dc)) {
    return param_1 + (ulong)param_2 * 0x70 + 0x6428c;
  }
  return 0;
}

