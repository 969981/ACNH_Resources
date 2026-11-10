
void FUN_001f6410(long *param_1)

{
  long lVar1;
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar1 = *param_1;
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 8);
    FUN_001f4e60();
  }
  FUN_001f4e60(param_1);
  return;
}

