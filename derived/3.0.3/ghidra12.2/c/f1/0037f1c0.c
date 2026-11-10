
void FUN_0037f1c0(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  FUN_00367b50(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  plVar2 = *(long **)(param_1 + 0x20);
  while (plVar2 != (long *)(param_1 + 0x18)) {
    plVar1 = (long *)plVar2[1];
    lVar4 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar4 + 8) = plVar2;
    *plVar2 = lVar4;
    iVar3 = (int)plVar2[2];
    if (0 < iVar3) {
      lVar4 = 0;
      lVar5 = 8;
      do {
        if (*(long *)(plVar2[3] + lVar5) != 0) {
          FUN_00367b50();
          iVar3 = (int)plVar2[2];
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x10;
      } while (lVar4 < iVar3);
    }
    if (plVar2[3] != 0) {
      FUN_00367b50();
    }
    FUN_00367b50(plVar2);
    plVar2 = plVar1;
  }
  return;
}

