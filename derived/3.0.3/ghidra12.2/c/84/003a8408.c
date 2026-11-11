
void FUN_003a8408(int *param_1)

{
  long lVar1;
  
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = -1;
  param_1[0xd] = -1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  lVar1 = (long)*param_1 * 0x50;
  *(long *)(param_1 + 6) = lVar1;
  param_1[8] = 8;
  param_1[9] = 0;
  if (*param_1 != 0) {
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *(long *)(param_1 + 2) = lVar1;
  }
  return;
}

