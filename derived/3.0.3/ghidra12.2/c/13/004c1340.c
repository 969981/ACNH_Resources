
void FUN_004c1340(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_2 + 0xb0) != 0) {
    lVar2 = *(long *)(param_2 + 0xa8);
    lVar3 = (long)*(int *)(param_2 + 0xb0) * 0xc;
    do {
      lVar1 = FUN_004c4a20(param_1 + 0xa8,lVar2);
      if (lVar1 != 0) {
        FUN_004c4ad0(param_1 + 0xa8,lVar1);
      }
      lVar2 = lVar2 + 0xc;
      lVar3 = lVar3 + -0xc;
    } while (lVar3 != 0);
  }
  return;
}

