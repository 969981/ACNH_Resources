
void FUN_003cdf50(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != param_1) {
    lVar2 = *(long *)(lVar1 + 8);
    FUN_003ceb1c(lVar1 + -0x1e0,param_2);
    lVar1 = lVar2;
  }
  return;
}

