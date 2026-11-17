
/* WARNING: Removing unreachable block (ram,0x02a213d0) */

uint FUN_02a210d0(uint *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  uint uVar9;
  uint *puVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  uint uVar22;
  int *piVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 local_c0;
  long *local_b8;
  uint *local_b0;
  uint local_a0 [16];
  long local_60 [8];
  
  uVar6 = *(uint *)(param_2 + 1);
  uVar7 = *(uint *)((long)param_2 + 0xc);
  lVar18 = *param_2;
  bVar11 = lVar18 == 0;
  if ((int)uVar6 < 1 || bVar11) {
    lVar18 = 0;
  }
  uVar17 = *(uint *)(param_2 + 2);
  iVar12 = *(int *)((long)param_2 + 0x14);
  if ((int)uVar6 < 1 || bVar11) {
    uVar6 = 0;
  }
  local_b0 = local_a0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  if (local_60 != (long *)0x0) {
    local_c0 = 0x800000000;
    local_b8 = local_60;
  }
  iVar19 = iVar12;
  if ((3 < (int)param_1[1]) &&
     (iVar19 = (*param_1 & 0xfffffffe) + ((int)*param_1 >> 1), iVar12 <= iVar19)) {
    iVar19 = iVar12;
  }
  uVar22 = uVar7 + uVar17;
  uVar1 = iVar19 + uVar7;
  if ((int)uVar6 <= (int)(iVar19 + uVar7)) {
    uVar1 = uVar6;
  }
  if ((int)uVar22 < (int)uVar1) {
    fVar24 = 0.0;
    uVar2 = uVar22;
    if (uVar6 <= uVar22) {
      uVar2 = 0;
    }
    uVar14 = 0;
    uVar15 = (uint)*(ushort *)(lVar18 + (long)(int)uVar2 * 2);
    uVar2 = uVar6 - uVar7;
    if (iVar12 >> 1 <= (int)(uVar6 - uVar7)) {
      uVar2 = iVar12 >> 1;
    }
    uVar13 = uVar17;
    uVar16 = 0;
    do {
      puVar10 = local_b0;
      if (local_c0._4_4_ <= (int)uVar14) break;
      uVar9 = (uint)(short)uVar15;
      uVar15 = uVar22;
      if (uVar6 <= uVar22) {
        uVar15 = 0;
      }
      sVar8 = *(short *)(lVar18 + (long)(int)uVar15 * 2);
      uVar15 = (int)sVar8;
      if ((int)sVar8 == uVar9 || (int)sVar8 < (int)uVar9) {
        uVar15 = uVar9;
      }
      if (((uVar16 >> 0xf & 1) != 0) && (0 < -sVar8)) {
        if (0x80 < (short)uVar15) {
          if ((int)uVar6 <= (int)(uVar22 + uVar17)) break;
          if ((int)uVar2 < 1) {
            iVar12 = uVar22 - uVar7;
            fVar26 = 0.0;
            fVar25 = 1e+07;
          }
          else {
            fVar25 = 0.0;
            uVar14 = 0;
            if (uVar2 != 1) {
              uVar15 = uVar7;
              do {
                uVar16 = uVar13 + uVar15;
                uVar14 = uVar14 + 2;
                uVar9 = uVar15;
                if (uVar6 <= uVar15) {
                  uVar9 = 0;
                }
                uVar3 = uVar16;
                if (uVar6 <= uVar16) {
                  uVar3 = 0;
                }
                fVar26 = (float)((int)*(short *)(lVar18 + (long)(int)uVar9 * 2) -
                                (int)*(short *)(lVar18 + (long)(int)uVar3 * 2));
                iVar12 = 0;
                if (uVar15 + 1 < uVar6) {
                  iVar12 = uVar15 + 1;
                }
                uVar15 = uVar15 + 2;
                iVar19 = 0;
                if (uVar16 + 1 < uVar6) {
                  iVar19 = uVar16 + 1;
                }
                fVar27 = (float)((int)*(short *)(lVar18 + (long)iVar12 * 2) -
                                (int)*(short *)(lVar18 + (long)iVar19 * 2));
                fVar25 = fVar25 + fVar26 * fVar26 + fVar27 * fVar27;
              } while ((uVar2 & 0xfffffffe) != uVar14);
            }
            if ((uVar2 & 1) != 0) {
              uVar15 = uVar14 + uVar7;
              uVar14 = uVar14 + uVar22;
              if (uVar6 <= uVar15) {
                uVar15 = 0;
              }
              if (uVar6 <= uVar14) {
                uVar14 = 0;
              }
              fVar26 = (float)((int)*(short *)(lVar18 + (long)(int)uVar15 * 2) -
                              (int)*(short *)(lVar18 + (long)(int)uVar14 * 2));
              fVar25 = fVar25 + fVar26 * fVar26;
            }
            iVar12 = uVar22 - uVar7;
            iVar19 = iVar12;
            if ((int)uVar22 < (int)uVar7) {
              iVar19 = iVar12 + 1;
            }
            uVar14 = 0;
            if (uVar2 == 1) {
              fVar26 = 0.0;
LAB_02a21378:
              uVar15 = uVar14 + uVar7;
              uVar14 = (iVar19 >> 1) + uVar7 + uVar14;
              if (uVar6 <= uVar15) {
                uVar15 = 0;
              }
              if (uVar6 <= uVar14) {
                uVar14 = 0;
              }
              fVar27 = (float)((int)*(short *)(lVar18 + (long)(int)uVar15 * 2) -
                              (int)*(short *)(lVar18 + (long)(int)uVar14 * 2));
              fVar26 = fVar26 + fVar27 * fVar27;
            }
            else {
              fVar26 = 0.0;
              do {
                uVar15 = uVar7 + uVar14;
                uVar16 = uVar7 + (iVar19 >> 1) + uVar14;
                uVar14 = uVar14 + 2;
                uVar9 = uVar15;
                if (uVar6 <= uVar15) {
                  uVar9 = 0;
                }
                uVar3 = uVar16;
                if (uVar6 <= uVar16) {
                  uVar3 = 0;
                }
                fVar27 = (float)((int)*(short *)(lVar18 + (long)(int)uVar9 * 2) -
                                (int)*(short *)(lVar18 + (long)(int)uVar3 * 2));
                iVar4 = 0;
                if (uVar15 + 1 < uVar6) {
                  iVar4 = uVar15 + 1;
                }
                iVar5 = 0;
                if (uVar16 + 1 < uVar6) {
                  iVar5 = uVar16 + 1;
                }
                fVar28 = (float)((int)*(short *)(lVar18 + (long)iVar4 * 2) -
                                (int)*(short *)(lVar18 + (long)iVar5 * 2));
                fVar26 = fVar26 + fVar27 * fVar27 + fVar28 * fVar28;
              } while ((uVar2 & 0xfffffffe) != uVar14);
              if ((uVar2 & 1) != 0) goto LAB_02a21378;
            }
            if (fVar25 == 0.0) {
              fVar25 = 1e+07;
            }
            else {
              fVar25 = 1.0 / fVar25;
            }
          }
          fVar27 = 1e+07;
          if (fVar26 != 0.0) {
            fVar27 = 1.0 / fVar26;
          }
          iVar12 = iVar12 - *param_1;
          iVar19 = -iVar12;
          if (-1 < iVar12) {
            iVar19 = iVar12;
          }
          iVar12 = 10;
          if ((int)param_1[1] < 4) {
            iVar12 = 1;
          }
          fVar26 = (fVar25 - fVar27) / ((float)iVar12 * (float)iVar19 * 0.04 + 1.0);
          fVar25 = fVar26;
          if (fVar26 <= fVar24) {
            fVar25 = fVar24;
          }
          fVar24 = fVar25;
          if (local_b0 != (uint *)0x0) {
            local_b0 = *(uint **)local_b0;
          }
          *puVar10 = uVar22;
          puVar10[1] = (uint)fVar26;
          uVar14 = (uint)local_c0;
          if ((int)(uint)local_c0 < local_c0._4_4_) {
            uVar15 = 0;
            local_b8[(int)(uint)local_c0] = (long)puVar10;
            uVar14 = (uint)local_c0 + 1;
            local_c0 = CONCAT44(local_c0._4_4_,uVar14);
            goto LAB_02a211e4;
          }
        }
        uVar15 = 0;
      }
LAB_02a211e4:
      uVar22 = uVar22 + 1;
      uVar13 = uVar13 + 1;
      uVar16 = (int)-sVar8;
    } while ((int)uVar22 < (int)uVar1);
    if (uVar14 != 0) {
      if ((int)param_1[1] < 3) {
        if (0 < (int)uVar14) {
          uVar21 = (ulong)uVar14;
          do {
            if (fVar24 * 0.8 <= *(float *)(*local_b8 + 4)) {
              piVar23 = (int *)*local_b8;
              goto LAB_02a21508;
            }
            local_b8 = local_b8 + 1;
            uVar21 = uVar21 - 1;
          } while (uVar21 != 0);
        }
      }
      else if (0 < (int)uVar14) {
        uVar21 = (ulong)uVar14;
        do {
          uVar20 = uVar21 - 1;
          if (((uint)uVar20 < uVar14) &&
             (piVar23 = (int *)local_b8[uVar20 & 0xffffffff], fVar24 * 0.8 <= (float)piVar23[1]))
          goto LAB_02a21508;
          bVar11 = 1 < uVar21;
          uVar21 = uVar20;
        } while (bVar11);
      }
      goto LAB_02a21510;
    }
  }
  *param_1 = uVar17;
  param_1[1] = 0;
  return uVar17;
LAB_02a21508:
  uVar17 = *piVar23 - uVar7;
LAB_02a21510:
  uVar6 = 0;
  if (0xffffffcc < (uVar17 - *param_1) - 0x1a) {
    uVar6 = param_1[1] + 1;
  }
  *param_1 = uVar17;
  param_1[1] = uVar6;
  return uVar17;
}

