
void FUN_001fa9b0(long param_1)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    bVar1 = lVar3 == plVar2[2];
    lVar4 = lVar3;
    if (lVar3 != 0 && lVar3 != plVar2[2]) {
      do {
        lVar3 = *(long *)(lVar4 + 0x10);
        FUN_00187e4c(lVar4);
        *plVar2 = lVar3;
        bVar1 = lVar3 == plVar2[2];
        if (lVar3 == 0) break;
        lVar4 = lVar3;
      } while (!bVar1);
    }
    if ((lVar3 != 0) && (bVar1)) {
      *(undefined8 *)(lVar3 + 8) = 0;
    }
    if (plVar2[4] != 0) {
      FUN_00187e4c();
    }
    operator_delete(plVar2);
  }
  FUN_00187e4c(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  FUN_00187e4c();
  return;
}

