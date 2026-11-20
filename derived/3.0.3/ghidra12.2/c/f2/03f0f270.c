
undefined1  [16] FUN_03f0f270(uint *param_1)

{
  short *psVar1;
  ushort *puVar2;
  float *pfVar3;
  ushort uVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  uint uVar14;
  long *plVar15;
  uint *puVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  ulong uVar20;
  ulong extraout_d0;
  undefined1 auVar21 [16];
  
  plVar17 = *(long **)(param_1 + 6);
  plVar15 = plVar17;
  if (plVar17 == (long *)0x0) {
    lVar9 = *(long *)(param_1 + 2);
    uVar20 = 0;
    if ((lVar9 == 0) || (param_1[4] != *(uint *)(lVar9 + 0x10))) goto LAB_03f0f500;
    lVar10 = *(long *)(*(long *)(lVar9 + 0x120) + 8);
    lVar9 = *(long *)(lVar10 + 0x38);
    if ((DAT_05aebc00 == '\0') && (lVar9 == 0)) goto LAB_03f0f500;
    if (DAT_05aebc00 != '\0') {
      lVar9 = lVar10 + 0x70;
    }
    lVar9 = *(long *)(lVar9 + 8);
    if (((lVar9 == 0) || (*(uint *)(lVar9 + 0x18) == 0)) ||
       (plVar15 = (long *)((ulong)*(uint *)(lVar9 + 0x18) + lVar9), *plVar15 != 0x101feff464e494d))
    goto LAB_03f0f500;
  }
  uVar20 = 0;
  puVar16 = (uint *)(plVar15 + 7);
  if (((*puVar16 == 0) ||
      (psVar1 = (short *)((ulong)*puVar16 + (long)puVar16), psVar1 == (short *)0x0)) ||
     (*psVar1 == 0)) goto LAB_03f0f500;
  if (plVar17 == (long *)0x0) {
    if (*(long *)(param_1 + 2) == 0) {
      uVar8 = 0;
      plVar17 = (long *)0x0;
      uVar7 = 0;
    }
    else {
      if (param_1[4] == *(uint *)(*(long *)(param_1 + 2) + 0x10)) {
        uVar8 = FUN_03b46270(0);
        plVar17 = *(long **)(param_1 + 6);
        uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
        uVar20 = extraout_d0;
        if (plVar17 != (long *)0x0) {
          uVar7 = *param_1;
          goto LAB_03f0f414;
        }
      }
      else {
        uVar8 = 0;
      }
      lVar9 = *(long *)(param_1 + 2);
      if (lVar9 == 0) {
        plVar17 = (long *)0x0;
        uVar7 = 0;
      }
      else if (param_1[4] == *(uint *)(lVar9 + 0x10)) {
        lVar10 = *(long *)(*(long *)(lVar9 + 0x120) + 8);
        lVar9 = *(long *)(lVar10 + 0x38);
        if ((DAT_05aebc00 == '\0') && (lVar9 == 0)) {
LAB_03f0f408:
          plVar17 = (long *)0x0;
        }
        else {
          if (DAT_05aebc00 != '\0') {
            lVar9 = lVar10 + 0x70;
          }
          lVar9 = *(long *)(lVar9 + 8);
          if ((lVar9 == 0) || (*(uint *)(lVar9 + 0x18) == 0)) goto LAB_03f0f408;
          plVar17 = (long *)((ulong)*(uint *)(lVar9 + 0x18) + lVar9);
          if (*plVar17 != 0x101feff464e494d) {
            plVar17 = (long *)0x0;
          }
        }
        uVar7 = FUN_03b46270(uVar20);
      }
      else {
        plVar17 = (long *)0x0;
        uVar7 = 0;
      }
    }
    uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
  }
  else {
    uVar8 = *param_1;
    uVar7 = uVar8;
  }
LAB_03f0f414:
  uVar14 = *(uint *)(plVar17 + 7);
  uVar20 = (ulong)uVar14;
  if (uVar14 != 0) {
    puVar2 = (ushort *)(uVar20 + (long)(plVar17 + 7));
    uVar4 = *puVar2;
    uVar12 = (ulong)uVar4;
    if (uVar4 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = (ulong)(uVar4 >> 1);
      uVar14 = *(uint *)(puVar2 + uVar20 * 4 + 2);
      if (uVar14 != uVar7) {
        iVar13 = 0;
        do {
          iVar6 = (int)uVar20;
          iVar11 = iVar13;
          if (uVar7 <= uVar14) {
            iVar11 = (int)uVar12;
            uVar12 = uVar20;
            iVar6 = iVar13;
          }
          iVar13 = iVar6;
          if (iVar11 == (int)uVar20) break;
          uVar20 = (ulong)((uint)(iVar13 + (int)uVar12) >> 1);
          uVar14 = *(uint *)(puVar2 + uVar20 * 4 + 2);
        } while (uVar14 != uVar7);
      }
    }
  }
  if ((*puVar16 == 0) ||
     (puVar2 = (ushort *)((ulong)*puVar16 + (long)puVar16), puVar2 == (ushort *)0x0)) {
    fVar18 = (float)uVar8;
LAB_03f0f4f0:
    uVar8 = -uVar8;
LAB_03f0f4f4:
    fVar19 = fVar18 + (float)uVar8;
  }
  else {
    fVar18 = 0.0;
    uVar7 = (uint)uVar20;
    if (uVar7 < *puVar2) {
      fVar18 = (float)NEON_ucvtf(*(undefined4 *)(puVar2 + uVar20 * 4 + 2));
    }
    fVar18 = (float)uVar8 - fVar18;
    if (uVar7 < *puVar2 - 1) {
      if ((uint)*puVar2 <= uVar7 + 1) goto LAB_03f0f4f0;
      uVar8 = *(int *)(puVar2 + (ulong)(uVar7 + 1) * 4 + 2) - uVar8;
      goto LAB_03f0f4f4;
    }
    if (*(int *)((long)plVar15 + 0x1c) != (int)plVar15[3]) {
      uVar20 = 0;
      if (*puVar2 - 1 == (uint)puVar2[1]) goto LAB_03f0f500;
      lVar9 = (ulong)puVar2[1] + 1;
      if ((uint)lVar9 < (uint)*puVar2) {
        iVar13 = *(int *)(puVar2 + lVar9 * 4 + 2);
      }
      else {
        iVar13 = 0;
      }
      uVar8 = (iVar13 - (int)plVar15[3]) + (*(int *)((long)plVar15 + 0x1c) - uVar8);
      if ((fVar18 == 0.0) && (uVar8 == 0)) goto LAB_03f0f500;
      goto LAB_03f0f4f4;
    }
    plVar17 = *(long **)(param_1 + 6);
    if (plVar17 == (long *)0x0) {
      lVar9 = *(long *)(param_1 + 2);
      if (lVar9 == 0) {
        plVar17 = (long *)0x0;
        uVar8 = 0;
      }
      else if (param_1[4] == *(uint *)(lVar9 + 0x10)) {
        lVar10 = *(long *)(*(long *)(lVar9 + 0x120) + 8);
        lVar9 = *(long *)(lVar10 + 0x38);
        if ((DAT_05aebc00 == '\0') && (lVar9 == 0)) {
LAB_03f0f618:
          plVar17 = (long *)0x0;
        }
        else {
          if (DAT_05aebc00 != '\0') {
            lVar9 = lVar10 + 0x70;
          }
          lVar9 = *(long *)(lVar9 + 8);
          if ((lVar9 == 0) || (*(uint *)(lVar9 + 0x18) == 0)) goto LAB_03f0f618;
          plVar17 = (long *)((ulong)*(uint *)(lVar9 + 0x18) + lVar9);
          if (*plVar17 != 0x101feff464e494d) {
            plVar17 = (long *)0x0;
          }
        }
        uVar8 = FUN_03b46270();
      }
      else {
        plVar17 = (long *)0x0;
        uVar8 = 0;
      }
      uVar8 = uVar8 & ((int)uVar8 >> 0x1f ^ 0xffffffffU);
    }
    else {
      uVar8 = *param_1;
    }
    uVar7 = *(uint *)((long)plVar17 + 0x2c);
    uVar20 = (ulong)uVar7;
    if (uVar7 != 0) {
      puVar2 = (ushort *)(uVar20 + (long)plVar17 + 0x2c);
      uVar4 = *puVar2;
      uVar12 = (ulong)uVar4;
      if (uVar4 == 0) {
        uVar20 = 0;
      }
      else {
        uVar20 = (ulong)(uVar4 >> 1);
        uVar7 = *(uint *)(puVar2 + uVar20 * 6 + 2);
        if (uVar7 != uVar8) {
          iVar13 = 0;
          do {
            iVar6 = (int)uVar20;
            iVar11 = iVar13;
            if (uVar8 <= uVar7) {
              iVar11 = (int)uVar12;
              uVar12 = uVar20;
              iVar6 = iVar13;
            }
            iVar13 = iVar6;
            if (iVar11 == (int)uVar20) break;
            uVar20 = (ulong)((uint)(iVar13 + (int)uVar12) >> 1);
            uVar7 = *(uint *)(puVar2 + uVar20 * 6 + 2);
          } while (uVar7 != uVar8);
        }
      }
    }
    puVar2 = (ushort *)((ulong)*(uint *)((long)plVar15 + 0x2c) + (long)plVar15 + 0x2c);
    fVar19 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar15 + 0x14));
    pfVar3 = (float *)(puVar2 + uVar20 * 6 + 4);
    if ((uint)*puVar2 <= (uint)uVar20) {
      pfVar3 = (float *)0x0;
    }
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)((long)pfVar3 + 6));
    fVar19 = (fVar19 * 240.0) / (*pfVar3 * fVar5);
  }
  uVar20 = (ulong)(uint)(fVar18 / fVar19);
LAB_03f0f500:
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar20;
  return auVar21;
}

