
void FUN_004c12f0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0xb0) != 0) {
    lVar1 = *(long *)(param_2 + 0xa8);
    lVar2 = (long)*(int *)(param_2 + 0xb0) * 0xc;
    do {
      FUN_004c4860(param_1 + 0xa8,lVar1);
      lVar1 = lVar1 + 0xc;
      lVar2 = lVar2 + -0xc;
    } while (lVar2 != 0);
  }
  return;
}

