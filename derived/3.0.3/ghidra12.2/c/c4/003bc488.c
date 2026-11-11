
ulong FUN_003bc488(long param_1,int param_2)

{
  return ((long)param_2 + (long)*(int *)(param_1 + 4) * 0x1f0) - 1U & -(long)param_2;
}

