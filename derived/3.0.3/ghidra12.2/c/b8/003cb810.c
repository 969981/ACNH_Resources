
void FUN_003cb810(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = param_1 + 8;
  if (lVar2 != lVar1) {
    do {
      lVar3 = *(long *)(lVar2 + 8);
      FUN_003c0de0(lVar2 + -0x288);
      lVar2 = lVar3;
    } while (lVar3 != lVar1);
    lVar2 = *(long *)(param_1 + 0x10);
    while (lVar2 != lVar1) {
      lVar3 = *(long *)(lVar2 + 8);
      FUN_003c1180(lVar2 + -0x288);
      lVar2 = lVar3;
    }
  }
  return;
}

