
void FUN_032b7de0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  plVar3 = *(long **)(param_1 + 0x650);
  if (plVar3[0x1f] != 0) {
    FUN_032d15b0();
    plVar3 = *(long **)(param_1 + 0x650);
  }
  puVar2 = PTR_DAT_04bc6338;
  if (*plVar3 != 0) {
    lVar4 = *(long *)PTR_DAT_04bc6338;
    lVar7 = plVar3[1];
    lVar6 = plVar3[2];
    *plVar3 = 0;
    plVar3[1] = 0;
    plVar3[2] = 0;
    if (*(long **)(lVar4 + 0x560) == plVar3) {
      *(long *)(lVar4 + 0x560) = lVar6;
    }
    if (lVar6 != 0) {
      *(long *)(lVar6 + 8) = lVar7;
    }
    if (lVar7 != 0) {
      *(long *)(lVar7 + 0x10) = lVar6;
    }
  }
  lVar7 = 0;
  do {
    plVar3 = *(long **)(param_1 + lVar7 + 0x10);
    plVar1 = *(long **)(param_1 + lVar7 + 0x18);
    lVar6 = plVar1[0x1f];
    if (plVar3[0x1f] != 0) {
      FUN_032d15b0(plVar3[0x1f],plVar3);
    }
    if (lVar6 != 0) {
      FUN_032d15b0(lVar6,plVar1);
    }
    if (*plVar3 != 0) {
      lVar5 = *(long *)puVar2;
      lVar6 = plVar3[1];
      lVar4 = plVar3[2];
      *plVar3 = 0;
      plVar3[1] = 0;
      plVar3[2] = 0;
      if (*(long **)(lVar5 + 0x560) == plVar3) {
        *(long *)(lVar5 + 0x560) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar6;
      }
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x10) = lVar4;
      }
    }
    if (*plVar1 != 0) {
      lVar5 = *(long *)puVar2;
      lVar6 = plVar1[1];
      lVar4 = plVar1[2];
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
      if (*(long **)(lVar5 + 0x560) == plVar1) {
        *(long *)(lVar5 + 0x560) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 8) = lVar6;
      }
      if (lVar6 != 0) {
        *(long *)(lVar6 + 0x10) = lVar4;
      }
    }
    lVar7 = lVar7 + 0x68;
  } while (lVar7 != 0x618);
  return;
}

