
void FUN_003c03ac(undefined4 param_1,long *param_2,int param_3)

{
  if ((3 < param_3) && ((int)(param_3 - 4U) < (int)((long *)*param_2)[1])) {
    *(undefined4 *)(*(long *)*param_2 + (ulong)(param_3 - 4U) * 4) = param_1;
  }
  return;
}

