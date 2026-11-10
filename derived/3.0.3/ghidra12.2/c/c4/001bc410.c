
void FUN_001bc410(long param_1,short param_2)

{
  long lVar1;
  undefined2 *puVar2;
  long *plVar3;
  undefined2 *puVar4;
  long *plVar5;
  long *plVar6;
  undefined2 *puVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  short *psVar13;
  
  plVar10 = (long *)(param_1 + 0x38);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  psVar13 = *(short **)(param_1 + 8);
  if (psVar13 != *(short **)(param_1 + 0x10)) {
    lVar12 = -(long)psVar13;
    do {
      if (*psVar13 == param_2) {
        *(undefined4 *)(param_1 + 200) = 1;
        FUN_001e6a1c(*(undefined8 *)(psVar13 + 4));
        plVar11 = (long *)(param_1 + 0x80);
        (**(code **)(*plVar11 + 0x10))(plVar11);
        plVar5 = *(long **)(param_1 + 0x20);
        plVar3 = *(long **)(param_1 + 0x28);
        if (*(long *)(*(long *)(psVar13 + 4) + 0xb0) == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(long *)(*(long *)(*(long *)(psVar13 + 4) + 0xb0) + 0x10);
        }
        if (plVar5 != plVar3) goto LAB_001bc4d0;
        goto LAB_001bc4ec;
      }
      psVar13 = psVar13 + 8;
      lVar12 = lVar12 + -0x10;
    } while (psVar13 != *(short **)(param_1 + 0x10));
  }
  goto LAB_001bc5d8;
  while (plVar5 = plVar5 + 2, plVar5 != plVar3) {
LAB_001bc4d0:
    if (*plVar5 == lVar9) goto LAB_001bc4ec;
  }
  plVar5 = plVar3;
LAB_001bc4ec:
  if (plVar5 != plVar3) {
    plVar8 = plVar5 + 2;
    plVar6 = plVar5;
    if (plVar8 != plVar3) {
      do {
        plVar5 = plVar6;
        if (*plVar8 != lVar9) {
          lVar1 = plVar8[1];
          plVar5 = plVar6 + 2;
          *plVar6 = *plVar8;
          plVar6[1] = lVar1;
        }
        plVar8 = plVar8 + 2;
        plVar6 = plVar5;
      } while (plVar8 != plVar3);
      plVar3 = *(long **)(param_1 + 0x28);
    }
  }
  if (plVar5 != plVar3) {
    if ((long *)((long)plVar5 + ((long)plVar3 - (long)plVar5)) != plVar3) {
      lVar9 = (long)plVar3 - (long)plVar5 >> 4;
      plVar8 = plVar5;
      do {
        lVar1 = (plVar8 + lVar9 * 2)[1];
        plVar5 = plVar8 + 2;
        *plVar8 = plVar8[lVar9 * 2];
        plVar8[1] = lVar1;
        plVar8 = plVar5;
      } while (plVar5 + lVar9 * 2 != plVar3);
    }
    *(long **)(param_1 + 0x28) = plVar5;
  }
  puVar7 = *(undefined2 **)(param_1 + 0x10);
  puVar2 = (undefined2 *)(0x10 - lVar12);
  if ((undefined2 *)(0x10 - lVar12) == puVar7) {
    puVar4 = (undefined2 *)-lVar12;
  }
  else {
    do {
      puVar4 = puVar2;
      puVar4[-8] = *puVar4;
      *(undefined8 *)(puVar4 + -4) = *(undefined8 *)(puVar4 + 4);
      puVar2 = puVar4 + 8;
    } while (puVar4 + 8 != puVar7);
  }
  *(undefined2 **)(param_1 + 0x10) = puVar4;
  (**(code **)(*(long *)(param_1 + 0x80) + 0x20))(plVar11);
  if (*(long *)(param_1 + 8) == *(long *)(param_1 + 0x10)) {
    *(undefined4 *)(param_1 + 0xcc) = 1;
  }
LAB_001bc5d8:
  (**(code **)(*(long *)(param_1 + 0x38) + 0x20))(plVar10);
  if (*(int *)(param_1 + 0xcc) != 1) {
    return;
  }
  plVar10 = *(long **)(param_1 + 0xd8);
  if (plVar10 == (long *)0x0) goto LAB_001bc628;
  if ((char)plVar10[10] == '\0') {
LAB_001bc618:
    (**(code **)(*plVar10 + 8))();
  }
  else {
    FUN_00189140(plVar10,0xffffffff);
    plVar10 = *(long **)(param_1 + 0xd8);
    if (plVar10 != (long *)0x0) goto LAB_001bc618;
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
LAB_001bc628:
  *(undefined4 *)(param_1 + 0xcc) = 0;
  return;
}

