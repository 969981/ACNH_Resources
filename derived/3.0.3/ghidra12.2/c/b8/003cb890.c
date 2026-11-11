
void FUN_003cb890(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = param_1 + 8;
  if (lVar2 != lVar1) {
    do {
      lVar3 = *(long *)(lVar2 + 8);
      if (*(int *)(lVar2 + -0x10) == 0) {
        FUN_003c0de0(lVar2 + -0x288);
      }
      lVar2 = lVar3;
    } while (lVar3 != lVar1);
    lVar2 = *(long *)(param_1 + 0x10);
    while (lVar3 = lVar2, lVar3 != lVar1) {
      lVar2 = *(long *)(lVar3 + 8);
      if (*(int *)(lVar3 + -0x10) == 0) {
        FUN_003c1180(lVar3 + -0x288);
      }
    }
  }
  return;
}

