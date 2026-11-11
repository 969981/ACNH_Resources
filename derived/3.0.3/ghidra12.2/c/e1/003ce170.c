
void FUN_003ce170(long param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 8) != param_1) {
    lVar1 = *(long *)(param_1 + 8);
    do {
      lVar2 = *(long *)(lVar1 + 8);
      FUN_003cec34(lVar1 + -0x1e0,param_2 & 1,param_3);
      lVar1 = lVar2;
    } while (lVar2 != param_1);
  }
  return;
}

