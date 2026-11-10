
void FUN_002860e8(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = param_1[1];
  }
  if ((long *)param_1[1] != (long *)0x0) {
    *(long *)param_1[1] = lVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

