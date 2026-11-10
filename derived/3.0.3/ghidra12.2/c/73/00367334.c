
long FUN_00367334(long param_1,int param_2,int param_3,int param_4,int param_5)

{
  return *(long *)(param_1 + 0x260) +
         (long)(param_2 * 0xc + param_3 * 4 + param_4 + param_5 * 2) * 8;
}

