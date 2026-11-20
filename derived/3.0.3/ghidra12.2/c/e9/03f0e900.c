
undefined4 FUN_03f0e900(uint *param_1)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  long *plVar14;
  uint *puVar15;
  long *plVar16;
  
  plVar14 = *(long **)(param_1 + 6);
  plVar16 = plVar14;
  if (plVar14 == (long *)0x0) {
    lVar5 = *(long *)(param_1 + 2);
    if (lVar5 == 0) {
      return 0;
    }
    if (param_1[4] != *(uint *)(lVar5 + 0x10)) {
      return 0;
    }
    lVar9 = *(long *)(*(long *)(lVar5 + 0x120) + 8);
    lVar5 = *(long *)(lVar9 + 0x38);
    if ((DAT_05aebc00 == '\0') && (lVar5 == 0)) {
      return 0;
    }
    if (DAT_05aebc00 != '\0') {
      lVar5 = lVar9 + 0x70;
    }
    lVar5 = *(long *)(lVar5 + 8);
    if (lVar5 == 0) {
      return 0;
    }
    if (*(uint *)(lVar5 + 0x18) == 0) {
      return 0;
    }
    plVar16 = (long *)((ulong)*(uint *)(lVar5 + 0x18) + lVar5);
    if (*plVar16 != 0x101feff464e494d) {
      return 0;
    }
  }
  puVar13 = (uint *)((long)plVar16 + 0x2c);
  if (*puVar13 == 0) {
    return 0;
  }
  if (*(short *)((ulong)*puVar13 + (long)puVar13) == 0) {
    return 0;
  }
  if (plVar14 == (long *)0x0) {
    lVar5 = *(long *)(param_1 + 2);
    if ((lVar5 == 0) || (param_1[4] != *(uint *)(lVar5 + 0x10))) {
      plVar16 = (long *)0x0;
      uVar4 = 0;
    }
    else {
      lVar7 = *(long *)(*(long *)(lVar5 + 0x120) + 8);
      lVar9 = *(long *)(lVar7 + 0x38);
      if ((DAT_05aebc00 == '\0') && (lVar9 == 0)) {
LAB_03f0ea38:
        plVar16 = (long *)0x0;
      }
      else {
        if (DAT_05aebc00 != '\0') {
          lVar9 = lVar7 + 0x70;
        }
        lVar9 = *(long *)(lVar9 + 8);
        if ((lVar9 == 0) || (*(uint *)(lVar9 + 0x18) == 0)) goto LAB_03f0ea38;
        plVar16 = (long *)((ulong)*(uint *)(lVar9 + 0x18) + lVar9);
        if (*plVar16 != 0x101feff464e494d) {
          plVar16 = (long *)0x0;
        }
      }
      uVar4 = FUN_03b46270(0,lVar5);
    }
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    puVar15 = (uint *)((long)plVar16 + 0x2c);
    uVar6 = (ulong)*puVar15;
    if (*puVar15 == 0) goto LAB_03f0eac0;
  }
  else {
    uVar4 = *param_1;
    puVar15 = (uint *)((long)plVar14 + 0x2c);
    uVar6 = (ulong)*puVar15;
    if (*puVar15 == 0) {
      uVar6 = 0;
      goto LAB_03f0eac0;
    }
  }
  puVar1 = (ushort *)(uVar6 + (long)puVar15);
  uVar2 = *puVar1;
  uVar10 = (ulong)uVar2;
  if (uVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ulong)(uVar2 >> 1);
    uVar12 = *(uint *)(puVar1 + uVar6 * 6 + 2);
    if (uVar12 != uVar4) {
      iVar11 = 0;
      do {
        iVar3 = (int)uVar6;
        iVar8 = iVar11;
        if (uVar4 <= uVar12) {
          iVar8 = (int)uVar10;
          uVar10 = uVar6;
          iVar3 = iVar11;
        }
        iVar11 = iVar3;
        if (iVar8 == (int)uVar6) break;
        uVar6 = (ulong)((uint)(iVar11 + (int)uVar10) >> 1);
        uVar12 = *(uint *)(puVar1 + uVar6 * 6 + 2);
      } while (uVar12 != uVar4);
    }
  }
LAB_03f0eac0:
  return *(undefined4 *)((long)puVar13 + uVar6 * 0xc + (ulong)*puVar13 + 8);
}

