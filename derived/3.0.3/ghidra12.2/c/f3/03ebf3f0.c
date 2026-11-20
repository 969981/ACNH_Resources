
float FUN_03ebf3f0(long param_1,float *param_2,long param_3,uint param_4,undefined8 *param_5,
                  undefined8 *param_6)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  float *pfVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar19 = param_2[-1];
  if (-1 < (int)fVar19) {
    return *param_2;
  }
  uVar12 = (uint)fVar19 & 0xffff;
  if (((uint)fVar19 >> 0x1e & 1) == 0) {
    fVar18 = 1.0;
    fVar20 = -100000.0;
    fVar21 = 100000.0;
    fVar17 = 0.0;
    fVar23 = -1.0;
    fVar22 = 1.0;
    pfVar15 = (float *)0x0;
    if (((uint)fVar19 >> 0x19 & 1) == 0) goto LAB_03ebf568;
LAB_03ebf5dc:
    fVar19 = *(float *)(param_1 + (long)(int)uVar12 * 4 + 0x118);
  }
  else {
    puVar10 = (uint *)(*(long *)(*(long *)(param_3 + 0x10) + 0x58) + (ulong)uVar12 * 0x1c);
    uVar1 = *puVar10;
    fVar18 = (float)puVar10[1];
    fVar23 = (float)puVar10[2];
    fVar22 = (float)puVar10[3];
    fVar17 = (float)puVar10[4];
    fVar20 = (float)puVar10[5];
    fVar21 = (float)puVar10[6];
    iVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x18))();
    lVar9 = **(long **)(param_1 + 0xb8);
    if (lVar9 != 0) {
      uVar13 = (uint)*(ushort *)(param_3 + 10) | iVar4 << 0x10;
      do {
        while (*(uint *)(lVar9 + 0x20) <= uVar13) {
          if (uVar13 <= *(uint *)(lVar9 + 0x20)) {
            uVar13 = (uint)*(ushort *)(lVar9 + 0x50);
            if ((uVar12 < uVar13) || (*(ushort *)(lVar9 + 0x52) + uVar13 <= uVar12)) {
              uVar13 = (uint)*(ushort *)(lVar9 + 0x38);
              if ((uVar12 < uVar13) || (*(ushort *)(lVar9 + 0x3a) + uVar13 <= uVar12))
              goto LAB_03ebf558;
              uVar14 = *(uint *)(lVar9 + 0x28);
              lVar9 = *(long *)(lVar9 + 0x30);
            }
            else {
              uVar14 = *(uint *)(lVar9 + 0x40);
              lVar9 = *(long *)(lVar9 + 0x48);
            }
            uVar12 = uVar12 - uVar13;
            if (uVar14 <= uVar12) {
              uVar12 = 0;
            }
            pfVar15 = (float *)(lVar9 + (long)(int)uVar12 * 4);
            goto LAB_03ebf55c;
          }
          lVar9 = *(long *)(lVar9 + 0x10);
          if (lVar9 == 0) goto LAB_03ebf558;
        }
        lVar9 = *(long *)(lVar9 + 8);
      } while (lVar9 != 0);
    }
LAB_03ebf558:
    pfVar15 = (float *)0x0;
LAB_03ebf55c:
    uVar12 = uVar1 & 0xffff;
    if ((int)uVar1 < 0) goto LAB_03ebf5dc;
    fVar19 = param_2[-1];
LAB_03ebf568:
    plVar6 = *(long **)(param_1 + 0x18);
    uVar1 = (uint)fVar19 >> 0x1a & 3;
    if (uVar1 == 0) {
      uVar5 = (**(code **)(*plVar6 + 0x120))(plVar6,*(undefined8 *)(param_3 + 0x10),uVar12);
      fVar19 = (float)(**(code **)(**(long **)(param_1 + 0x20) + 0x130))
                                (*(long **)(param_1 + 0x20),uVar5);
      if (param_5 != (undefined8 *)0x0) {
        uVar8 = (**(code **)(**(long **)(param_1 + 0x20) + 0x160))(*(long **)(param_1 + 0x20),uVar5)
        ;
        *param_5 = uVar8;
      }
    }
    else {
      uVar5 = (**(code **)(*plVar6 + 0x130))(plVar6,*(undefined8 *)(param_3 + 0x10),uVar12);
      if (uVar1 == 2) {
        lVar9 = (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),uVar5)
        ;
        fVar19 = *(float *)(lVar9 + 4);
        if (param_5 != (undefined8 *)0x0) {
          uVar8 = (**(code **)(**(long **)(param_1 + 0x20) + 0x170))
                            (*(long **)(param_1 + 0x20),uVar5);
          *param_5 = uVar8;
          puVar11 = &DAT_040c28ff;
          goto LAB_03ebf6b4;
        }
      }
      else if (uVar1 == 1) {
        pfVar7 = (float *)(**(code **)(**(long **)(param_1 + 0x20) + 0x140))
                                    (*(long **)(param_1 + 0x20),uVar5);
        fVar19 = *pfVar7;
        if (param_5 != (undefined8 *)0x0) {
          uVar8 = (**(code **)(**(long **)(param_1 + 0x20) + 0x170))
                            (*(long **)(param_1 + 0x20),uVar5);
          *param_5 = uVar8;
          puVar11 = &DAT_040fc4a5;
LAB_03ebf6b4:
          *param_6 = puVar11;
        }
      }
      else {
        lVar9 = (**(code **)(**(long **)(param_1 + 0x20) + 0x140))(*(long **)(param_1 + 0x20),uVar5)
        ;
        fVar19 = *(float *)(lVar9 + 8);
        if (param_5 != (undefined8 *)0x0) {
          uVar8 = (**(code **)(**(long **)(param_1 + 0x20) + 0x170))
                            (*(long **)(param_1 + 0x20),uVar5);
          puVar11 = &DAT_040dc978;
          *param_5 = uVar8;
          goto LAB_03ebf6b4;
        }
      }
    }
  }
  fVar16 = fVar19;
  if (pfVar15 != (float *)0x0) {
    fVar16 = *pfVar15;
    if (fVar16 == INFINITY) {
      fVar16 = fVar19;
      if (0.0 <= fVar23) {
        fVar16 = fVar23;
      }
      *pfVar15 = fVar16;
    }
    if (0.0 < fVar18) {
      if ((param_4 & 1) == 0) {
        fVar18 = 0.0;
      }
      if (fVar16 < fVar19) {
        fVar18 = fVar18 + fVar16;
        bVar2 = false;
        bVar3 = false;
        if (fVar16 <= fVar18) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar18) && !NAN(fVar19)) {
            bVar2 = fVar18 < fVar19;
            bVar3 = false;
          }
        }
        if (bVar2 != bVar3) {
          fVar19 = fVar18;
        }
      }
      else {
        if (fVar16 <= fVar19) goto LAB_03ebf740;
        fVar18 = fVar16 - fVar18;
        bVar2 = false;
        bVar3 = false;
        if (fVar18 <= fVar16) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar18) && !NAN(fVar19)) {
            bVar2 = fVar18 == fVar19;
            bVar3 = fVar19 <= fVar18;
          }
        }
        if (bVar3 && !bVar2) {
          fVar19 = fVar18;
        }
      }
    }
    *pfVar15 = fVar19;
    fVar16 = fVar19;
  }
LAB_03ebf740:
  fVar17 = fVar17 + fVar22 * fVar16;
  if (fVar17 <= fVar21) {
    fVar21 = fVar17;
  }
  if (fVar20 <= fVar17) {
    fVar20 = fVar21;
  }
  return fVar20;
}

