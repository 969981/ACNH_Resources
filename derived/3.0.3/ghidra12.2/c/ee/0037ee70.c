
void FUN_0037ee70(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  FUN_00367b50(*(undefined8 *)(param_1 + 0x18));
  *(undefined2 *)(param_1 + 0x10d) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  plVar2 = *(long **)(param_1 + 0x138);
  while (plVar2 != (long *)(param_1 + 0x130)) {
    plVar1 = (long *)plVar2[1];
    lVar5 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar5 + 8) = plVar2;
    *plVar2 = lVar5;
    iVar3 = (int)plVar2[2];
    if (0 < iVar3) {
      lVar5 = 0;
      lVar7 = 8;
      do {
        if (*(long *)(plVar2[3] + lVar7) != 0) {
          FUN_00367b50();
          iVar3 = (int)plVar2[2];
        }
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar5 < iVar3);
    }
    if (plVar2[3] != 0) {
      FUN_00367b50();
    }
    FUN_00367b50(plVar2);
    plVar2 = plVar1;
  }
  plVar2 = *(long **)(param_1 + 0x40);
  while (plVar2 != (long *)(param_1 + 0x38)) {
    plVar1 = (long *)plVar2[1];
    FUN_00367b50(plVar2[2]);
    plVar2[2] = 0;
    if (0 < (int)plVar2[4]) {
      lVar5 = 0;
      lVar7 = 8;
      do {
        lVar4 = plVar2[5];
        if (*(long *)(lVar4 + lVar7) != 0) {
          FUN_00367b50();
          lVar4 = plVar2[5];
        }
        *(undefined8 *)(lVar4 + lVar7) = 0;
        lVar5 = lVar5 + 1;
        lVar7 = lVar7 + 0x10;
      } while (lVar5 < (int)plVar2[4]);
    }
    if (plVar2[5] != 0) {
      FUN_00367b50();
    }
    plVar2[5] = 0;
    if (plVar2 != (long *)(param_1 + 0x38)) {
      plVar6 = (long *)plVar2[1];
      lVar5 = *plVar6;
      *(long **)(*plVar2 + 8) = plVar6;
      *plVar6 = *plVar2;
      *(long **)(lVar5 + 8) = plVar2;
      *plVar2 = lVar5;
    }
    FUN_00367b50(plVar2);
    plVar2 = plVar1;
  }
  plVar2 = *(long **)(param_1 + 0x78);
  while (plVar2 != (long *)(param_1 + 0x70)) {
    plVar6 = (long *)plVar2[1];
    FUN_0037f0d0(plVar2);
    plVar1 = (long *)plVar2[1];
    lVar5 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar5 + 8) = plVar2;
    *plVar2 = lVar5;
    FUN_00367b50(plVar2);
    plVar2 = plVar6;
  }
  plVar2 = *(long **)(param_1 + 0x30);
  while (plVar2 != (long *)(param_1 + 0x28)) {
    plVar6 = (long *)plVar2[1];
    FUN_0037f1c0(plVar2);
    plVar1 = (long *)plVar2[1];
    lVar5 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar5 + 8) = plVar2;
    *plVar2 = lVar5;
    FUN_00367b50(plVar2);
    plVar2 = plVar6;
  }
  lVar5 = FUN_00386774(param_1 + 0x48);
  if ((lVar5 != 0) && (*(char *)(param_1 + 0x10f) == '\0')) {
    FUN_00367b50();
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_00386718(param_1 + 0x48);
  return;
}

