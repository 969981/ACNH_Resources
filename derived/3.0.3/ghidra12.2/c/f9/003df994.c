
uint FUN_003df994(long param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  
  if (*(char *)(param_1 + (ulong)param_2) == -2) {
    uVar1 = *(ushort *)((char *)(param_1 + (ulong)param_2) + 1);
    *param_3 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8 | 1;
    return param_2 + 3;
  }
  *param_3 = 1;
  return param_2;
}

