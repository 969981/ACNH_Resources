
long FUN_003c0344(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((lVar1 == 0) && (lVar1 = param_1[1], lVar1 == 0)) {
    return param_1[2];
  }
  return lVar1;
}

