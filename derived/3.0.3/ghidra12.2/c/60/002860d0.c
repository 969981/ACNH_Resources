
void FUN_002860d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = (long)param_2;
  *param_2 = lVar1;
  param_2[1] = (long)param_1;
  if (lVar1 != 0) {
    *(long **)(lVar1 + 8) = param_2;
  }
  return;
}

