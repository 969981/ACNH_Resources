
void FUN_008dc080(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0251bdc4(param_1 + 8,0);
  if (lVar1 != 0) {
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar1 + 4);
  }
  return;
}

