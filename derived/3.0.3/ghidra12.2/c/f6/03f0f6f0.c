
undefined4 FUN_03f0f6f0(uint *param_1)

{
  short *psVar1;
  ushort *puVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  long *plVar15;
  long *plVar16;
  uint *puVar17;
  
  plVar15 = *(long **)(param_1 + 6);
  plVar16 = plVar15;
  if (plVar15 == (long *)0x0) {
    lVar6 = *(long *)(param_1 + 2);
    if (lVar6 == 0) {
      return 0xffffffff;
    }
    if (param_1[4] != *(uint *)(lVar6 + 0x10)) {
      return 0xffffffff;
    }
    lVar10 = *(long *)(*(long *)(lVar6 + 0x120) + 8);
    lVar6 = *(long *)(lVar10 + 0x38);
    if ((DAT_05aebc00 == '\0') && (lVar6 == 0)) {
      return 0xffffffff;
    }
    if (DAT_05aebc00 != '\0') {
      lVar6 = lVar10 + 0x70;
    }
    lVar6 = *(long *)(lVar6 + 8);
    if (lVar6 == 0) {
      return 0xffffffff;
    }
    if (*(uint *)(lVar6 + 0x18) == 0) {
      return 0xffffffff;
    }
    plVar16 = (long *)((ulong)*(uint *)(lVar6 + 0x18) + lVar6);
    if (*plVar16 != 0x101feff464e494d) {
      return 0xffffffff;
    }
  }
  puVar14 = (uint *)(plVar16 + 7);
  if (((*puVar14 == 0) ||
      (psVar1 = (short *)((ulong)*puVar14 + (long)puVar14), psVar1 == (short *)0x0)) ||
     (*psVar1 == 0)) {
    return 0xffffffff;
  }
  if (plVar15 == (long *)0x0) {
    lVar6 = *(long *)(param_1 + 2);
    if ((lVar6 == 0) || (param_1[4] != *(uint *)(lVar6 + 0x10))) {
      plVar16 = (long *)0x0;
      uVar5 = 0;
    }
    else {
      lVar8 = *(long *)(*(long *)(lVar6 + 0x120) + 8);
      lVar10 = *(long *)(lVar8 + 0x38);
      if ((DAT_05aebc00 == '\0') && (lVar10 == 0)) {
LAB_03f0f834:
        plVar16 = (long *)0x0;
      }
      else {
        if (DAT_05aebc00 != '\0') {
          lVar10 = lVar8 + 0x70;
        }
        lVar10 = *(long *)(lVar10 + 8);
        if ((lVar10 == 0) || (*(uint *)(lVar10 + 0x18) == 0)) goto LAB_03f0f834;
        plVar16 = (long *)((ulong)*(uint *)(lVar10 + 0x18) + lVar10);
        if (*plVar16 != 0x101feff464e494d) {
          plVar16 = (long *)0x0;
        }
      }
      uVar5 = FUN_03b46270(lVar6);
    }
    uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
    puVar17 = (uint *)(plVar16 + 7);
    uVar7 = (ulong)*puVar17;
    if (*puVar17 == 0) goto LAB_03f0f8b4;
  }
  else {
    uVar5 = *param_1;
    puVar17 = (uint *)(plVar15 + 7);
    uVar7 = (ulong)*puVar17;
    if (*puVar17 == 0) {
      uVar7 = 0;
      goto LAB_03f0f8b4;
    }
  }
  puVar2 = (ushort *)(uVar7 + (long)puVar17);
  uVar3 = *puVar2;
  uVar11 = (ulong)uVar3;
  if (uVar3 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulong)(uVar3 >> 1);
    uVar13 = *(uint *)(puVar2 + uVar7 * 4 + 2);
    if (uVar13 != uVar5) {
      iVar12 = 0;
      do {
        iVar4 = (int)uVar7;
        iVar9 = iVar12;
        if (uVar5 <= uVar13) {
          iVar9 = (int)uVar11;
          uVar11 = uVar7;
          iVar4 = iVar12;
        }
        iVar12 = iVar4;
        if (iVar9 == (int)uVar7) break;
        uVar7 = (ulong)((uint)(iVar12 + (int)uVar11) >> 1);
        uVar13 = *(uint *)(puVar2 + uVar7 * 4 + 2);
      } while (uVar13 != uVar5);
    }
  }
LAB_03f0f8b4:
  if (((*puVar14 == 0) ||
      (puVar2 = (ushort *)((ulong)*puVar14 + (long)puVar14), puVar2 == (ushort *)0x0)) ||
     ((uint)*puVar2 <= (uint)uVar7)) {
    return 0;
  }
  return *(undefined4 *)(puVar2 + uVar7 * 4 + 4);
}

