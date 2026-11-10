
void FUN_001f6520(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = *(long *)(lVar1 + 8);
  if (lVar1 == param_1[1]) {
    param_1[1] = 0;
    FUN_001f4e60();
    return;
  }
  FUN_001f4e60();
  return;
}

