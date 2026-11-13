
uint FUN_014d3868(long param_1,uint param_2)

{
  if (((param_2 < 0x37) &&
      ((*(uint *)(param_1 + (long)((int)param_2 >> 5) * 4 + 0x18) >> (ulong)(param_2 & 0x1f) & 1) !=
       0)) && (param_2 < 0x37)) {
    return *(uint *)(param_1 + (long)((int)param_2 >> 5) * 4 + 0x10) >> (ulong)(param_2 & 0x1f) & 1;
  }
  return 0;
}

