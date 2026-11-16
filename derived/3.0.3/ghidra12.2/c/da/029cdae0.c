
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_029cdae0(long *param_1,long param_2,uint param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  long *plVar12;
  uint uVar13;
  int iVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  uVar3 = _UNK_04102b48;
  uVar2 = _DAT_04102b40;
  if ((int)param_3 < 9) {
    if (1 < (int)param_3) {
      plVar4 = *(long **)(param_2 + 8);
      if ((long *)param_1[1] != plVar4) {
        lVar18 = *param_1;
        plVar17 = (long *)param_1[1];
        do {
          plVar16 = (long *)*plVar17;
          uVar20 = *(undefined8 *)(plVar16[-1] + 0x40);
          fVar24 = (float)uVar2;
          fVar21 = (float)uVar20 / fVar24;
          fVar26 = (float)((ulong)uVar2 >> 0x20);
          fVar22 = (float)((ulong)uVar20 >> 0x20) / fVar26;
          fVar19 = (float)uVar3;
          fVar28 = (float)*(undefined8 *)(plVar16[-1] + 0x48) / fVar19;
          uVar5 = 0;
          if (fVar21 != (float)(int)fVar21) {
            uVar5 = (uint)(fVar21 < 0.0);
          }
          uVar13 = 0;
          if (fVar22 != (float)(int)fVar22) {
            uVar13 = (uint)(fVar22 < 0.0);
          }
          uVar20 = *(undefined8 *)(plVar17[-1] + 0x40);
          uVar6 = 0;
          if (fVar28 != (float)(int)fVar28) {
            uVar6 = (uint)(fVar28 < 0.0);
          }
          fVar23 = (float)uVar20 / fVar24;
          fVar25 = (float)((ulong)uVar20 >> 0x20) / fVar26;
          fVar27 = (float)*(undefined8 *)(plVar17[-1] + 0x48) / fVar19;
          uVar7 = 0;
          if (fVar23 != (float)(int)fVar23) {
            uVar7 = (uint)(fVar23 < 0.0);
          }
          uVar8 = 0;
          if (fVar25 != (float)(int)fVar25) {
            uVar8 = (uint)(fVar25 < 0.0);
          }
          plVar15 = (long *)plVar17[1];
          uVar9 = 0;
          if (fVar27 != (float)(int)fVar27) {
            uVar9 = (uint)(fVar27 < 0.0);
          }
          fVar23 = (float)(int)((int)fVar23 - uVar7) + (float)(int)((int)fVar27 - uVar9) * 500.0 +
                   (float)(int)((int)fVar25 - uVar8) * 250000.0;
          if (fVar23 < (float)(int)((int)fVar21 - uVar5) + (float)(int)((int)fVar28 - uVar6) * 500.0
                       + (float)(int)((int)fVar22 - uVar13) * 250000.0) {
            plVar12 = plVar16;
            do {
              plVar12 = (long *)*plVar12;
              plVar1 = (long *)lVar18;
              if (plVar12 == (long *)lVar18) break;
              uVar20 = *(undefined8 *)(plVar12[-1] + 0x40);
              fVar21 = (float)uVar20 / fVar24;
              fVar22 = (float)((ulong)uVar20 >> 0x20) / fVar26;
              fVar28 = (float)*(undefined8 *)(plVar12[-1] + 0x48) / fVar19;
              uVar5 = 0;
              if (fVar21 != (float)(int)fVar21) {
                uVar5 = (uint)(fVar21 < 0.0);
              }
              uVar13 = 0;
              if (fVar22 != (float)(int)fVar22) {
                uVar13 = (uint)(fVar22 < 0.0);
              }
              uVar6 = 0;
              if (fVar28 != (float)(int)fVar28) {
                uVar6 = (uint)(fVar28 < 0.0);
              }
              plVar1 = plVar12;
            } while (fVar23 < (float)(int)((int)fVar21 - uVar5) +
                              (float)(int)((int)fVar28 - uVar6) * 500.0 +
                              (float)(int)((int)fVar22 - uVar13) * 250000.0);
            plVar12 = plVar15;
            if (plVar16 != (long *)0x0) {
              plVar16[1] = (long)plVar15;
              plVar12 = (long *)plVar17[1];
            }
            if (plVar12 != (long *)0x0) {
              *plVar12 = *plVar17;
            }
            *plVar17 = 0;
            plVar17[1] = 0;
            puVar11 = *(undefined8 **)((long)plVar1 + 8);
            *(long **)((long)plVar1 + 8) = plVar17;
            *plVar17 = (long)plVar1;
            plVar17[1] = (long)puVar11;
            if (puVar11 != (undefined8 *)0x0) {
              *puVar11 = plVar17;
            }
          }
          plVar17 = plVar15;
        } while (plVar15 != plVar4);
      }
    }
  }
  else {
    uVar13 = param_3 >> 1;
    uVar5 = uVar13 - 1 & 3;
    plVar4 = param_1;
    if (2 < uVar13 - 2) {
      uVar6 = uVar13 - 1 & 0xfffffffc;
      do {
        uVar6 = uVar6 - 4;
        plVar4 = *(long **)(*(long *)(*(long *)(plVar4[1] + 8) + 8) + 8);
      } while (uVar6 != 0);
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      plVar4 = (long *)plVar4[1];
    }
    plVar17 = (long *)*param_1;
    iVar14 = param_3 - uVar13;
    plVar15 = (long *)plVar4[1];
    FUN_029cdae0(param_1,plVar4,uVar13);
    plVar16 = (long *)plVar17[1];
    lVar18 = *plVar15;
    FUN_029cdae0(plVar15,param_2,iVar14);
    uVar3 = _UNK_04102b48;
    uVar2 = _DAT_04102b40;
    plVar4 = *(long **)(lVar18 + 8);
    do {
      if (uVar13 == 0) {
LAB_029cdf90:
        plVar15 = (long *)plVar4[1];
        plVar12 = plVar15;
        if (*plVar4 != 0) {
          *(long **)(*plVar4 + 8) = plVar15;
          plVar12 = (long *)plVar4[1];
        }
        if (plVar12 != (long *)0x0) {
          *plVar12 = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        puVar11 = (undefined8 *)plVar17[1];
        plVar17[1] = (long)plVar4;
        *plVar4 = (long)plVar17;
        plVar4[1] = (long)puVar11;
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = plVar4;
        }
        iVar14 = iVar14 + -1;
        plVar17 = plVar4;
      }
      else {
        if (iVar14 != 0) {
          uVar20 = *(undefined8 *)(plVar16[-1] + 0x40);
          fVar24 = (float)uVar2;
          fVar19 = (float)uVar20 / fVar24;
          fVar26 = (float)((ulong)uVar2 >> 0x20);
          fVar21 = (float)((ulong)uVar20 >> 0x20) / fVar26;
          fVar22 = (float)*(undefined8 *)(plVar16[-1] + 0x48) / (float)uVar3;
          uVar5 = 0;
          if (fVar19 != (float)(int)fVar19) {
            uVar5 = (uint)(fVar19 < 0.0);
          }
          uVar6 = 0;
          if (fVar21 != (float)(int)fVar21) {
            uVar6 = (uint)(fVar21 < 0.0);
          }
          uVar7 = 0;
          if (fVar22 != (float)(int)fVar22) {
            uVar7 = (uint)(fVar22 < 0.0);
          }
          uVar20 = *(undefined8 *)(plVar4[-1] + 0x40);
          fVar24 = (float)uVar20 / fVar24;
          fVar26 = (float)((ulong)uVar20 >> 0x20) / fVar26;
          fVar28 = (float)*(undefined8 *)(plVar4[-1] + 0x48) / (float)uVar3;
          uVar8 = 0;
          if (fVar24 != (float)(int)fVar24) {
            uVar8 = (uint)(fVar24 < 0.0);
          }
          uVar9 = 0;
          if (fVar26 != (float)(int)fVar26) {
            uVar9 = (uint)(fVar26 < 0.0);
          }
          uVar10 = 0;
          if (fVar28 != (float)(int)fVar28) {
            uVar10 = (uint)(fVar28 < 0.0);
          }
          if ((float)(int)((int)fVar24 - uVar8) + (float)(int)((int)fVar28 - uVar10) * 500.0 +
              (float)(int)((int)fVar26 - uVar9) * 250000.0 <
              (float)(int)((int)fVar19 - uVar5) + (float)(int)((int)fVar22 - uVar7) * 500.0 +
              (float)(int)((int)fVar21 - uVar6) * 250000.0) goto LAB_029cdf90;
        }
        plVar12 = (long *)plVar16[1];
        plVar15 = plVar12;
        if (*plVar16 != 0) {
          *(long **)(*plVar16 + 8) = plVar12;
          plVar15 = (long *)plVar16[1];
        }
        if (plVar15 != (long *)0x0) {
          *plVar15 = *plVar16;
        }
        *plVar16 = 0;
        plVar16[1] = 0;
        puVar11 = (undefined8 *)plVar17[1];
        plVar17[1] = (long)plVar16;
        *plVar16 = (long)plVar17;
        plVar16[1] = (long)puVar11;
        if (puVar11 != (undefined8 *)0x0) {
          *puVar11 = plVar16;
        }
        uVar13 = uVar13 - 1;
        plVar15 = plVar4;
        plVar17 = plVar16;
        plVar16 = plVar12;
      }
      plVar4 = plVar15;
    } while ((0 < (int)uVar13) || (0 < iVar14));
  }
  return;
}

