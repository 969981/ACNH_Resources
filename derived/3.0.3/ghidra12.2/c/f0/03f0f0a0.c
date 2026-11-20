
int FUN_03f0f0a0(uint *param_1)

{
  short *psVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  uint *puVar15;
  long *plVar16;
  
  plVar14 = *(long **)(param_1 + 6);
  plVar16 = plVar14;
  if (plVar14 == (long *)0x0) {
    lVar6 = *(long *)(param_1 + 2);
    if (lVar6 == 0) {
      return -1;
    }
    if (param_1[4] != *(uint *)(lVar6 + 0x10)) {
      return -1;
    }
    lVar10 = *(long *)(*(long *)(lVar6 + 0x120) + 8);
    lVar6 = *(long *)(lVar10 + 0x38);
    if ((DAT_05aebc00 == '\0') && (lVar6 == 0)) {
      return -1;
    }
    if (DAT_05aebc00 != '\0') {
      lVar6 = lVar10 + 0x70;
    }
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == 0) {
      return -1;
    }
    if (*(uint *)(lVar6 + 0x18) == 0) {
      return -1;
    }
    plVar16 = (long *)((ulong)*(uint *)(lVar6 + 0x18) + lVar6);
    if (*plVar16 != 0x101feff464e494d) {
      return -1;
    }
  }
  uVar5 = *(uint *)(plVar16 + 7);
  if (((uVar5 == 0) ||
      (psVar1 = (short *)((ulong)uVar5 + (long)(plVar16 + 7)), psVar1 == (short *)0x0)) ||
     (*psVar1 == 0)) {
    return -1;
  }
  if (plVar14 == (long *)0x0) {
    lVar6 = *(long *)(param_1 + 2);
    if ((lVar6 == 0) || (param_1[4] != *(uint *)(lVar6 + 0x10))) {
      plVar16 = (long *)0x0;
      uVar5 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(lVar6 + 0x120) + 8);
      lVar10 = *(long *)(lVar7 + 0x38);
      if ((DAT_05aebc00 == '\0') && (lVar10 == 0)) {
LAB_03f0f1e4:
        plVar16 = (long *)0x0;
      }
      else {
        if (DAT_05aebc00 != '\0') {
          lVar10 = lVar7 + 0x70;
        }
        lVar10 = *(long *)(lVar10 + 8);
        if ((lVar10 == 0) || (*(uint *)(lVar10 + 0x18) == 0)) goto LAB_03f0f1e4;
        plVar16 = (long *)((ulong)*(uint *)(lVar10 + 0x18) + lVar10);
        if (*plVar16 != 0x101feff464e494d) {
          plVar16 = (long *)0x0;
        }
      }
      uVar5 = FUN_03b46270(lVar6);
    }
    uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    puVar15 = (uint *)(plVar16 + 7);
    uVar13 = *puVar15;
  }
  else {
    uVar5 = *param_1;
    puVar15 = (uint *)(plVar14 + 7);
    uVar13 = *puVar15;
  }
  if (uVar13 != 0) {
    puVar2 = (ushort *)((ulong)uVar13 + (long)puVar15);
    uVar3 = *puVar2;
    uVar9 = (ulong)uVar3;
    if (uVar3 != 0) {
      uVar11 = (ulong)(uVar3 >> 1);
      uVar13 = *(uint *)(puVar2 + uVar11 * 4 + 2);
      if (uVar13 != uVar5) {
        iVar12 = 0;
        do {
          iVar4 = (int)uVar11;
          iVar8 = iVar12;
          if (uVar5 <= uVar13) {
            iVar8 = (int)uVar9;
            uVar9 = uVar11;
            iVar4 = iVar12;
          }
          iVar12 = iVar4;
          if (iVar8 == (int)uVar11) break;
          uVar11 = (ulong)((uint)(iVar12 + (int)uVar9) >> 1);
          uVar13 = *(uint *)(puVar2 + uVar11 * 4 + 2);
        } while (uVar13 != uVar5);
      }
      goto LAB_03f0f264;
    }
  }
  uVar11 = 0;
LAB_03f0f264:
  return (int)uVar11 + 1;
}

