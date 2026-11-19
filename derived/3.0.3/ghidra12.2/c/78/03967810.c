
void FUN_03967810(long param_1,uint *param_2,uint param_3)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) - *(long *)(param_2 + 6);
  puVar7 = param_2 + 0x16;
  if (*(long *)puVar7 != 0) {
    if (((param_3 & 1) != 0) && (*(long **)(param_2 + 0x18) != (long *)0x0)) {
      (**(code **)(**(long **)(param_2 + 0x18) + 8))();
    }
    param_2[0x14] = 0;
    puVar7[0] = 0;
    puVar7[1] = 0;
    param_2[0x18] = 0;
    param_2[0x19] = 0;
    goto LAB_03967ab4;
  }
  if (*(int *)(param_1 + 0xd8) < 1) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = *(long **)(param_1 + 200);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + -1;
  }
  uVar12 = (ulong)*param_2;
  puVar1 = (ulong *)0x0;
  if (plVar5 != (long *)0x0) {
    puVar1 = (ulong *)((long)plVar5 - (long)*(int *)(param_1 + 0xdc));
  }
  *puVar1 = uVar12;
  puVar1[1] = *(long *)(param_2 + 6) + uVar12;
  *(uint *)(puVar1 + 2) = param_2[0x1e];
  *(uint *)((long)puVar1 + 0x14) = param_2[0x1f];
  *(uint *)(puVar1 + 3) = param_2[0x20];
  plVar5 = (long *)(param_1 + 0xb0);
  iVar8 = *(int *)(param_1 + 0xc4);
  if (*(long **)(param_1 + 0xb8) != plVar5) {
    lVar6 = (long)iVar8;
    puVar11 = (ulong *)((long)*(long **)(param_1 + 0xb8) - lVar6);
    do {
      if (uVar12 <= *puVar11) goto LAB_039679c0;
      puVar11 = (ulong *)(*(long *)((long)puVar11 + lVar6 + 8) - lVar6);
    } while (puVar11 != (ulong *)((long)plVar5 - lVar6));
  }
  goto LAB_03967a18;
  while( true ) {
    iVar8 = *(int *)(param_1 + 0xc4);
    plVar9 = (long *)((long)iVar8 + (long)puVar11);
    plVar10 = (long *)plVar9[1];
    plVar4 = plVar10;
    if (*plVar9 != 0) {
      *(long **)(*plVar9 + 8) = plVar10;
      plVar4 = (long *)plVar9[1];
    }
    if (plVar4 != (long *)0x0) {
      *plVar4 = *plVar9;
    }
    *plVar9 = 0;
    plVar9[1] = 0;
    plVar9 = (long *)((long)*(int *)(param_1 + 0xdc) + (long)puVar11);
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + -1;
    lVar6 = *(long *)(param_1 + 200);
    *(long **)(param_1 + 200) = plVar9;
    *plVar9 = lVar6;
    plVar9[1] = (long)(param_1 + 200);
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar9;
    }
    *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + 1;
    if ((plVar10 == plVar5) ||
       (puVar11 = (ulong *)((long)plVar10 - (long)iVar8), puVar11 == (ulong *)0x0)) break;
LAB_039679c0:
    uVar12 = puVar1[1];
    if (uVar12 < puVar11[1]) {
      if (*puVar11 < uVar12) {
        *puVar11 = uVar12;
      }
      lVar6 = (long)*(int *)(param_1 + 0xc4);
      plVar9 = (long *)(lVar6 + (long)puVar11);
      goto LAB_039679f4;
    }
  }
  lVar6 = (long)*(int *)(param_1 + 0xc4);
  plVar9 = plVar5;
LAB_039679f4:
  lVar13 = *plVar9;
  plVar10 = (long *)(lVar6 + (long)puVar1);
  *plVar9 = (long)plVar10;
  *plVar10 = lVar13;
  plVar10[1] = (long)plVar9;
  if (lVar13 != 0) {
    *(long **)(lVar13 + 8) = plVar10;
  }
  iVar8 = *(int *)(param_1 + 0xc4);
  *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
LAB_03967a18:
  if (puVar1[5] == 0 && puVar1[4] == 0) {
    plVar9 = (long *)((long)puVar1 + (long)iVar8);
    lVar6 = *plVar5;
    *plVar5 = (long)plVar9;
    *plVar9 = lVar6;
    plVar9[1] = (long)plVar5;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar9;
    }
    iVar8 = *(int *)(param_1 + 0xc4);
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + 1;
  }
  lVar6 = (long)-iVar8;
  if (((*(long **)((long)puVar1 + (long)iVar8) != plVar5) &&
      (lVar13 = (long)*(long **)((long)puVar1 + (long)iVar8) + lVar6, lVar13 != 0)) &&
     (*puVar1 < *(ulong *)(lVar13 + 8))) {
    *(ulong *)(lVar13 + 8) = *puVar1;
    iVar8 = *(int *)(param_1 + 0xc4);
    lVar6 = -(long)iVar8;
  }
  if (*(long **)(param_1 + 0xb8) != plVar5) {
    lVar13 = lVar6 + (long)*(long **)(param_1 + 0xb8);
    do {
      lVar13 = lVar6 + *(long *)(lVar13 + iVar8 + 8);
    } while (lVar13 != lVar6 + (long)plVar5);
  }
LAB_03967ab4:
  plVar5 = (long *)((long)*(int *)(param_1 + 0x54) + (long)param_2);
  if (*plVar5 != 0) {
    *(long *)(*plVar5 + 8) = plVar5[1];
  }
  if ((long *)plVar5[1] != (long *)0x0) {
    *(long *)plVar5[1] = *plVar5;
  }
  *plVar5 = 0;
  plVar5[1] = 0;
  plVar5 = (long *)(param_1 + 0x58);
  iVar8 = *(int *)(param_1 + 0x6c);
  lVar13 = (long)iVar8;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
  lVar6 = -lVar13;
  if (*(long **)(param_1 + 0x60) != plVar5) {
    uVar2 = param_2[6];
    puVar7 = (uint *)((long)*(long **)(param_1 + 0x60) - lVar13);
    uVar3 = *param_2;
    do {
      plVar9 = (long *)((long)puVar7 + lVar13);
      if (uVar3 + uVar2 <= *puVar7) {
        lVar6 = *plVar9;
        plVar10 = (long *)(lVar13 + (long)param_2);
        *plVar9 = (long)plVar10;
        *plVar10 = lVar6;
        plVar10[1] = (long)plVar9;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 8) = plVar10;
        }
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
        if (uVar3 + uVar2 == *puVar7) {
          *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + *(long *)(puVar7 + 6);
          plVar9 = (long *)((long)puVar7 + (long)*(int *)(param_1 + 0x6c));
          if (*plVar9 != 0) {
            *(long *)(*plVar9 + 8) = plVar9[1];
          }
          if ((long *)plVar9[1] != (long *)0x0) {
            *(long *)plVar9[1] = *plVar9;
          }
          *plVar9 = 0;
          plVar9[1] = 0;
          plVar10 = (long *)(param_1 + 0x70);
          lVar6 = *plVar10;
          *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
          plVar9 = (long *)((long)puVar7 + (long)*(int *)(param_1 + 0x84));
          *plVar10 = (long)plVar9;
          *plVar9 = lVar6;
          plVar9[1] = (long)plVar10;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 8) = plVar9;
          }
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        }
        if (*(long *)(param_2 + 0x1c) != 0 || *(long *)(param_2 + 0x1a) != 0) goto LAB_03967c2c;
        iVar8 = *(int *)(param_1 + 0x6c);
        goto LAB_03967c08;
      }
      puVar7 = (uint *)(plVar9[1] + lVar6);
    } while (puVar7 != (uint *)((long)plVar5 - lVar13));
  }
  if (*(long *)(param_2 + 0x1c) == 0 && *(long *)(param_2 + 0x1a) == 0) {
LAB_03967c08:
    lVar6 = *plVar5;
    plVar9 = (long *)((long)param_2 + (long)iVar8);
    *plVar5 = (long)plVar9;
    *plVar9 = lVar6;
    plVar9[1] = (long)plVar5;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar9;
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
LAB_03967c2c:
    iVar8 = *(int *)(param_1 + 0x6c);
    lVar13 = (long)iVar8;
    lVar6 = -lVar13;
    if (((*(long **)(lVar13 + (long)param_2) != plVar5) &&
        (puVar7 = (uint *)((long)*(long **)(lVar13 + (long)param_2) - lVar13), puVar7 != (uint *)0x0
        )) && (*puVar7 + puVar7[6] == *param_2)) {
      *param_2 = *puVar7;
      param_2[1] = puVar7[1];
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(puVar7 + 2);
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar7 + 4);
      *(long *)(param_2 + 6) = *(long *)(param_2 + 6) + *(long *)(puVar7 + 6);
      plVar9 = (long *)((long)puVar7 + (long)*(int *)(param_1 + 0x6c));
      if (*plVar9 != 0) {
        *(long *)(*plVar9 + 8) = plVar9[1];
      }
      if ((long *)plVar9[1] != (long *)0x0) {
        *(long *)plVar9[1] = *plVar9;
      }
      *plVar9 = 0;
      plVar9[1] = 0;
      plVar10 = (long *)(param_1 + 0x70);
      lVar6 = *plVar10;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
      plVar9 = (long *)((long)puVar7 + (long)*(int *)(param_1 + 0x84));
      *plVar10 = (long)plVar9;
      *plVar9 = lVar6;
      plVar9[1] = (long)plVar10;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar9;
      }
      iVar8 = *(int *)(param_1 + 0x6c);
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      lVar6 = -(long)iVar8;
    }
  }
  if (*(long **)(param_1 + 0x60) != plVar5) {
    lVar13 = lVar6 + (long)*(long **)(param_1 + 0x60);
    do {
      lVar13 = lVar6 + *(long *)(lVar13 + iVar8 + 8);
    } while (lVar13 != lVar6 + (long)plVar5);
  }
  return;
}

