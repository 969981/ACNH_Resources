
float FUN_03f0fd20(uint *param_1,int param_2)

{
  short *psVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  uint *puVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined4 extraout_s0;
  float fVar19;
  
  plVar17 = *(long **)(param_1 + 6);
  uVar18 = 0xbf800000;
  plVar15 = plVar17;
  if (plVar17 == (long *)0x0) {
    lVar8 = *(long *)(param_1 + 2);
    if (lVar8 == 0) {
      return -1.0;
    }
    if (param_1[4] != *(uint *)(lVar8 + 0x10)) {
      return -1.0;
    }
    lVar9 = *(long *)(*(long *)(lVar8 + 0x120) + 8);
    lVar8 = *(long *)(lVar9 + 0x38);
    if ((DAT_05aebc00 == '\0') && (lVar8 == 0)) {
      return -1.0;
    }
    if (DAT_05aebc00 != '\0') {
      lVar8 = lVar9 + 0x70;
    }
    lVar8 = *(long *)(lVar8 + 8);
    if (lVar8 == 0) {
      return -1.0;
    }
    if (*(uint *)(lVar8 + 0x18) == 0) {
      return -1.0;
    }
    plVar15 = (long *)((ulong)*(uint *)(lVar8 + 0x18) + lVar8);
    if (*plVar15 != 0x101feff464e494d) {
      return -1.0;
    }
  }
  puVar16 = (uint *)((long)plVar15 + 0x3c);
  if (*puVar16 == 0) {
    return -1.0;
  }
  psVar1 = (short *)((ulong)*puVar16 + (long)puVar16);
  if (psVar1 == (short *)0x0) {
    return -1.0;
  }
  if (*psVar1 == 0) {
    return -1.0;
  }
  if (plVar17 == (long *)0x0) {
    if (*(long *)(param_1 + 2) == 0) {
      uVar6 = 0;
      plVar17 = (long *)0x0;
      uVar7 = 0;
    }
    else {
      if (param_1[4] == *(uint *)(*(long *)(param_1 + 2) + 0x10)) {
        uVar6 = FUN_03b46270(0xbf800000);
        plVar17 = *(long **)(param_1 + 6);
        uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
        uVar18 = extraout_s0;
        if (plVar17 != (long *)0x0) {
          uVar7 = *param_1;
          goto LAB_03f0fec0;
        }
      }
      else {
        uVar6 = 0;
      }
      lVar8 = *(long *)(param_1 + 2);
      if (lVar8 == 0) {
        plVar17 = (long *)0x0;
        uVar7 = 0;
      }
      else if (param_1[4] == *(uint *)(lVar8 + 0x10)) {
        lVar9 = *(long *)(*(long *)(lVar8 + 0x120) + 8);
        lVar8 = *(long *)(lVar9 + 0x38);
        if ((DAT_05aebc00 == '\0') && (lVar8 == 0)) {
LAB_03f0feb4:
          plVar17 = (long *)0x0;
        }
        else {
          if (DAT_05aebc00 != '\0') {
            lVar8 = lVar9 + 0x70;
          }
          lVar8 = *(long *)(lVar8 + 8);
          if ((lVar8 == 0) || (*(uint *)(lVar8 + 0x18) == 0)) goto LAB_03f0feb4;
          plVar17 = (long *)((ulong)*(uint *)(lVar8 + 0x18) + lVar8);
          if (*plVar17 != 0x101feff464e494d) {
            plVar17 = (long *)0x0;
          }
        }
        uVar7 = FUN_03b46270(uVar18);
      }
      else {
        plVar17 = (long *)0x0;
        uVar7 = 0;
      }
    }
    uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  }
  else {
    uVar6 = *param_1;
    uVar7 = uVar6;
  }
LAB_03f0fec0:
  uVar14 = *(uint *)((long)plVar17 + 0x3c);
  uVar10 = (ulong)uVar14;
  if (uVar14 != 0) {
    puVar2 = (ushort *)(uVar10 + (long)plVar17 + 0x3c);
    uVar3 = *puVar2;
    uVar12 = (ulong)uVar3;
    if (uVar3 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (ulong)(uVar3 >> 1);
      uVar14 = *(uint *)(puVar2 + uVar10 * 2 + 2);
      if (uVar14 != uVar7) {
        iVar13 = 0;
        do {
          iVar5 = (int)uVar10;
          iVar11 = iVar13;
          if (uVar7 <= uVar14) {
            iVar11 = (int)uVar12;
            uVar12 = uVar10;
            iVar5 = iVar13;
          }
          iVar13 = iVar5;
          if (iVar11 == (int)uVar10) break;
          uVar10 = (ulong)((uint)(iVar13 + (int)uVar12) >> 1);
          uVar14 = *(uint *)(puVar2 + uVar10 * 2 + 2);
        } while (uVar14 != uVar7);
      }
    }
  }
  iVar13 = 0;
  if (*puVar16 != 0) {
    puVar2 = (ushort *)((ulong)*puVar16 + (long)puVar16);
    iVar13 = 0;
    if (puVar2 != (ushort *)0x0) {
      uVar7 = param_2 + (int)uVar10 + 1;
      if (*puVar2 - 1 < uVar7) {
        iVar13 = *(int *)((long)plVar15 + 0x1c) - (int)plVar15[3];
        if (iVar13 != 0) {
          uVar3 = puVar2[1];
          uVar14 = (*puVar2 - 1) - (uint)uVar3;
          if (uVar14 != 0) {
            uVar7 = uVar7 - uVar3;
            uVar4 = 0;
            if (uVar14 != 0) {
              uVar4 = uVar7 / uVar14;
            }
            uVar7 = (uVar7 - uVar4 * uVar14) + (uint)uVar3;
            if (uVar7 < *puVar2) {
              iVar11 = *(int *)(puVar2 + (ulong)uVar7 * 2 + 2);
            }
            else {
              iVar11 = 0;
            }
            uVar6 = (*(int *)((long)plVar15 + 0x1c) - (uVar6 + (int)plVar15[3])) +
                    (uVar4 - 1) * iVar13 + iVar11;
            goto LAB_03f0ff90;
          }
        }
        return 3.4028235e+38;
      }
      if (*puVar2 <= uVar7) {
        uVar6 = -uVar6;
        goto LAB_03f0ff90;
      }
      iVar13 = *(int *)(puVar2 + (ulong)uVar7 * 2 + 2);
    }
  }
  uVar6 = iVar13 - uVar6;
LAB_03f0ff90:
  fVar19 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar15 + 0x14));
  return (float)uVar6 / fVar19;
}

