
void FUN_0047ff90(long *param_1,long *param_2,long *param_3,long *param_4)

{
  bool bVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  uint uVar29;
  undefined4 *puVar30;
  undefined1 auStack_2a0 [16];
  long local_290;
  undefined8 local_288;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  
  local_78 = 0;
  local_70 = -0x8000000000000000;
  local_88 = 0;
  local_80 = -0x8000000000000000;
  plVar3 = &local_78;
  if (param_3 != param_2 && param_3 != param_1) {
    plVar3 = param_3;
  }
  plVar4 = &local_88;
  if (param_4 != param_2 && param_4 != param_1) {
    plVar4 = param_4;
  }
  *(undefined4 *)(plVar3 + 1) = 0;
  *(undefined4 *)(plVar4 + 1) = 0;
  iVar19 = (int)param_1[1];
  if (iVar19 < (int)param_2[1]) {
    if (plVar4 != param_1) {
      *(undefined4 *)(plVar4 + 1) = 0;
      iVar19 = (int)param_1[1];
      puVar30 = (undefined4 *)*param_1;
      if ((int)(*(uint *)((long)plVar4 + 0xc) & 0x3fffffff) < iVar19) {
        puVar12 = (undefined4 *)FUN_00426720(PTR_DAT_048607b8,iVar19,4,*plVar4,0);
        *plVar4 = (long)puVar12;
      }
      else {
        puVar12 = (undefined4 *)*plVar4;
      }
      if (iVar19 != 0) {
        uVar20 = (long)iVar19 * 4 - 4;
        uVar29 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
        puVar17 = puVar30;
        if ((uVar29 & 3) != 0) {
          lVar22 = -((ulong)uVar29 & 3);
          puVar13 = puVar12;
          puVar16 = puVar30;
          do {
            puVar17 = puVar16 + 1;
            lVar22 = lVar22 + 1;
            puVar12 = puVar13 + 1;
            *puVar13 = *puVar16;
            puVar13 = puVar12;
            puVar16 = puVar17;
          } while (lVar22 != 0);
        }
        if (0xb < uVar20) {
          do {
            *puVar12 = *puVar17;
            puVar12[1] = puVar17[1];
            puVar12[2] = puVar17[2];
            puVar13 = puVar17 + 3;
            puVar17 = puVar17 + 4;
            puVar12[3] = *puVar13;
            puVar12 = puVar12 + 4;
          } while (puVar17 != puVar30 + iVar19);
        }
      }
      *(int *)(plVar4 + 1) = iVar19;
    }
    goto LAB_00480604;
  }
  if ((int)param_2[1] == 0) {
    FUN_004426d0(auStack_2a0,&local_290,0x200);
    FUN_0043ac90(auStack_2a0,"Division by zero");
    iVar19 = FUN_00422320(0x21b66586,&local_290,
                          "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Math/ExtendedMath/hkMpMath.cpp"
                          ,0xff);
    if (iVar19 != 0) {
      CallSupervisor(0x26);
    }
    FUN_00442760(auStack_2a0);
    goto LAB_00480604;
  }
  if (plVar4 == param_1) {
    uVar29 = 0;
    if ((*(uint *)((long)plVar4 + 0xc) & 0x3fffffff) == 0) goto LAB_00480244;
  }
  else {
    *(undefined4 *)(plVar4 + 1) = 0;
    uVar29 = *(uint *)(param_1 + 1);
    puVar30 = (undefined4 *)*param_1;
    if ((int)(*(uint *)((long)plVar4 + 0xc) & 0x3fffffff) < (int)uVar29) {
      puVar12 = (undefined4 *)FUN_00426720(PTR_DAT_048607b8,uVar29,4,*plVar4,0);
      *plVar4 = (long)puVar12;
    }
    else {
      puVar12 = (undefined4 *)*plVar4;
    }
    if (uVar29 != 0) {
      uVar20 = (long)(int)uVar29 * 4 - 4;
      uVar23 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
      puVar17 = puVar30;
      if ((uVar23 & 3) != 0) {
        lVar22 = -((ulong)uVar23 & 3);
        puVar13 = puVar12;
        puVar16 = puVar30;
        do {
          puVar17 = puVar16 + 1;
          lVar22 = lVar22 + 1;
          puVar12 = puVar13 + 1;
          *puVar13 = *puVar16;
          puVar13 = puVar12;
          puVar16 = puVar17;
        } while (lVar22 != 0);
      }
      if (0xb < uVar20) {
        do {
          *puVar12 = *puVar17;
          puVar12[1] = puVar17[1];
          puVar12[2] = puVar17[2];
          puVar13 = puVar17 + 3;
          puVar17 = puVar17 + 4;
          puVar12[3] = *puVar13;
          puVar12 = puVar12 + 4;
        } while (puVar17 != puVar30 + (int)uVar29);
      }
    }
    *(uint *)(plVar4 + 1) = uVar29;
    if (uVar29 == (*(uint *)((long)plVar4 + 0xc) & 0x3fffffff)) {
LAB_00480244:
      FUN_00426990(PTR_DAT_048607b8,plVar4,4);
      uVar29 = *(uint *)(plVar4 + 1);
    }
  }
  *(undefined4 *)(*plVar4 + (long)(int)uVar29 * 4) = 0;
  iVar25 = uVar29 + 1;
  *(int *)(plVar4 + 1) = iVar25;
  local_290 = 0;
  local_288 = -0x8000000000000000;
  if ((int)uVar29 < 0) {
    local_288._0_4_ = 0;
    if (-1 < (int)uVar29) goto LAB_004802d4;
LAB_004802b4:
    if (iVar25 < (int)local_288) {
      local_288 = CONCAT44(local_288._4_4_,iVar25);
    }
  }
  else {
    local_290 = FUN_00426720(PTR_DAT_048607b8,iVar25,4,0,0,(long)&local_288 + 4);
    bVar10 = (int)uVar29 < (int)local_288;
    uVar29 = uVar29 - (int)local_288;
    if (bVar10) goto LAB_004802b4;
LAB_004802d4:
    lVar22 = (long)(int)local_288;
    local_288 = CONCAT44(local_288._4_4_,iVar25);
    memset((void *)(local_290 + lVar22 * 4),0,(ulong)uVar29 * 4 + 4);
  }
  iVar7 = iVar19 - (int)param_2[1];
  iVar25 = iVar7 + 1;
  if ((int)(*(uint *)((long)plVar3 + 0xc) & 0x3fffffff) <= iVar7) {
    lVar22 = FUN_00426720(PTR_DAT_048607b8,iVar25,4,*plVar3,(int)plVar3[1]);
    *plVar3 = lVar22;
  }
  lVar22 = local_288;
  uVar29 = local_288._4_4_;
  iVar18 = (int)plVar3[1];
  if ((iVar18 <= iVar7) || (iVar25 < iVar18)) {
    *(int *)(plVar3 + 1) = iVar25;
    iVar18 = iVar25;
  }
  if (0 < iVar18) {
    lVar21 = 0;
    do {
      *(undefined4 *)(*plVar3 + lVar21 * 4) = 0;
      iVar18 = (int)plVar3[1];
      lVar21 = lVar21 + 1;
      lVar14 = (long)iVar18;
    } while (lVar21 < lVar14);
    if (0 < iVar18) {
      lVar21 = lVar14 * 4;
      do {
        lVar21 = lVar21 + -4;
        lVar15 = lVar14 + -1;
        *(undefined4 *)(*plVar3 + lVar15 * 4) = 0;
        uVar23 = 0x1f;
        do {
          uVar20 = (ulong)*(uint *)(param_2 + 1);
          lVar26 = lVar15;
          if ((int)*(uint *)(param_2 + 1) < 0) {
LAB_0048051c:
            *(uint *)(*plVar3 + lVar15 * 4) =
                 *(uint *)(*plVar3 + lVar15 * 4) | 1 << (ulong)(uVar23 & 0x1f);
            if (lVar14 <= (int)lVar26) {
              lVar26 = (long)(int)lVar26;
              do {
                lVar28 = (lVar26 + -1) * 4;
                *(undefined4 *)(*plVar4 + lVar28) = *(undefined4 *)(local_290 + lVar28);
                bVar10 = lVar14 < lVar26;
                lVar26 = lVar26 + -1;
              } while (bVar10);
            }
          }
          else {
            if (uVar23 == 0) {
              bVar10 = false;
              uVar27 = 0;
              do {
                uVar5 = *(uint *)(*plVar4 + lVar21 + uVar27 * 4);
                if (uVar27 == (uVar20 & 0xffffffff)) {
                  uVar11 = 0;
                }
                else {
                  uVar11 = *(uint *)(*param_2 + uVar27 * 4);
                }
                uVar24 = (uVar5 - uVar11) - 1;
                bVar1 = !bVar10;
                bVar10 = uVar5 <= uVar24;
                if (bVar1) {
                  uVar24 = uVar5 - uVar11;
                  bVar10 = uVar5 < uVar11;
                }
                *(uint *)(local_290 + lVar21 + uVar27 * 4) = uVar24;
                uVar20 = (ulong)(int)param_2[1];
                uVar2 = uVar27 + 1;
                bVar1 = (long)uVar27 < (long)uVar20;
                uVar27 = uVar2;
              } while (bVar1);
              lVar26 = lVar14 + uVar2 + -1;
              iVar25 = (int)lVar26;
              if (bVar10 && iVar25 < iVar19) goto LAB_004804e4;
            }
            else {
              bVar10 = false;
              uVar27 = 0;
              do {
                uVar5 = *(uint *)(*plVar4 + lVar21 + uVar27 * 4);
                if (uVar27 == 0) {
                  uVar11 = 0;
                  if ((uVar20 & 0xffffffff) != 0) goto LAB_004803fc;
LAB_004803e8:
                  uVar24 = 0;
                }
                else {
                  uVar11 = *(uint *)(*param_2 + uVar27 * 4 + -4) >> (ulong)(0x20 - uVar23 & 0x1f);
                  if (uVar27 == (uVar20 & 0xffffffff)) goto LAB_004803e8;
LAB_004803fc:
                  uVar24 = *(int *)(*param_2 + uVar27 * 4) << (ulong)(uVar23 & 0x1f);
                }
                uVar8 = uVar5 - (uVar24 | uVar11);
                uVar6 = uVar8 - 1;
                bVar1 = !bVar10;
                bVar10 = uVar5 <= uVar6;
                if (bVar1) {
                  uVar6 = uVar8;
                  bVar10 = uVar5 < (uVar24 | uVar11);
                }
                *(uint *)(local_290 + lVar21 + uVar27 * 4) = uVar6;
                uVar20 = (ulong)(int)param_2[1];
                uVar2 = uVar27 + 1;
                bVar1 = (long)uVar27 < (long)uVar20;
                uVar27 = uVar2;
              } while (bVar1);
              lVar26 = lVar14 + uVar2 + -1;
              iVar25 = (int)lVar26;
              if ((bVar10 && iVar19 != iVar25) && (!bVar10 || iVar25 <= iVar19)) {
LAB_004804e4:
                lVar26 = (long)iVar25;
                do {
                  lVar28 = lVar26 * 4;
                  iVar25 = *(int *)(*plVar4 + lVar28);
                  bVar10 = iVar25 == 0;
                  lVar26 = lVar26 + 1;
                  *(int *)(local_290 + lVar28) = iVar25 + -1;
                } while (iVar25 == 0 && lVar26 < iVar19);
              }
            }
            if (!bVar10) goto LAB_0048051c;
          }
          bVar10 = uVar23 != 0;
          uVar23 = uVar23 - 1;
        } while (bVar10);
        lVar14 = lVar15;
      } while (0 < lVar15);
      iVar18 = (int)plVar3[1];
    }
  }
  if (iVar18 != 0) {
    lVar21 = (long)iVar18;
    do {
      iVar18 = iVar18 + -1;
      if (*(int *)(*plVar3 + -4 + lVar21 * 4) != 0) break;
      lVar21 = lVar21 + -1;
      *(int *)(plVar3 + 1) = iVar18;
    } while (lVar21 != 0);
  }
  iVar19 = (int)plVar4[1];
  lVar21 = (long)iVar19;
  if (iVar19 != 0) {
    do {
      iVar19 = iVar19 + -1;
      if (*(int *)(*plVar4 + -4 + lVar21 * 4) != 0) break;
      lVar21 = lVar21 + -1;
      *(int *)(plVar4 + 1) = iVar19;
    } while (lVar21 != 0);
  }
  local_288 = (ulong)local_288._4_4_ << 0x20;
  if ((-1 < lVar22) && (local_290 != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_290,4,uVar29 & 0x3fffffff);
  }
LAB_00480604:
  if ((plVar3 != param_3) && (param_3 == param_1 || param_3 == param_2)) {
    *(undefined4 *)(param_3 + 1) = 0;
    iVar19 = (int)plVar3[1];
    puVar30 = (undefined4 *)*plVar3;
    if ((int)(*(uint *)((long)param_3 + 0xc) & 0x3fffffff) < iVar19) {
      puVar12 = (undefined4 *)FUN_00426720(PTR_DAT_048607b8,iVar19,4,*param_3,0);
      *param_3 = (long)puVar12;
    }
    else {
      puVar12 = (undefined4 *)*param_3;
    }
    if (iVar19 != 0) {
      uVar20 = (long)iVar19 * 4 - 4;
      uVar29 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
      puVar17 = puVar30;
      if ((uVar29 & 3) != 0) {
        lVar22 = -((ulong)uVar29 & 3);
        puVar13 = puVar12;
        puVar16 = puVar30;
        do {
          puVar17 = puVar16 + 1;
          lVar22 = lVar22 + 1;
          puVar12 = puVar13 + 1;
          *puVar13 = *puVar16;
          puVar13 = puVar12;
          puVar16 = puVar17;
        } while (lVar22 != 0);
      }
      if (0xb < uVar20) {
        do {
          *puVar12 = *puVar17;
          puVar12[1] = puVar17[1];
          puVar12[2] = puVar17[2];
          puVar13 = puVar17 + 3;
          puVar17 = puVar17 + 4;
          puVar12[3] = *puVar13;
          puVar12 = puVar12 + 4;
        } while (puVar17 != puVar30 + iVar19);
      }
    }
    *(int *)(param_3 + 1) = iVar19;
  }
  if ((plVar4 != param_4) && (param_4 == param_1 || param_4 == param_2)) {
    *(undefined4 *)(param_4 + 1) = 0;
    puVar30 = (undefined4 *)*plVar4;
    iVar19 = (int)plVar4[1];
    if ((int)(*(uint *)((long)param_4 + 0xc) & 0x3fffffff) < iVar19) {
      puVar12 = (undefined4 *)FUN_00426720(PTR_DAT_048607b8,iVar19,4,*param_4,0);
      *param_4 = (long)puVar12;
    }
    else {
      puVar12 = (undefined4 *)*param_4;
    }
    if (iVar19 != 0) {
      uVar20 = (long)iVar19 * 4 - 4;
      uVar29 = ((uint)(uVar20 >> 2) & 0x3fffffff) + 1;
      puVar17 = puVar30;
      if ((uVar29 & 3) != 0) {
        lVar22 = -((ulong)uVar29 & 3);
        puVar13 = puVar12;
        puVar16 = puVar30;
        do {
          puVar17 = puVar16 + 1;
          lVar22 = lVar22 + 1;
          puVar12 = puVar13 + 1;
          *puVar13 = *puVar16;
          puVar13 = puVar12;
          puVar16 = puVar17;
        } while (lVar22 != 0);
      }
      if (0xb < uVar20) {
        do {
          *puVar12 = *puVar17;
          puVar12[1] = puVar17[1];
          puVar12[2] = puVar17[2];
          puVar13 = puVar17 + 3;
          puVar17 = puVar17 + 4;
          puVar12[3] = *puVar13;
          puVar12 = puVar12 + 4;
        } while (puVar17 != puVar30 + iVar19);
      }
    }
    *(int *)(param_4 + 1) = iVar19;
  }
  lVar22 = local_80;
  puVar9 = PTR_DAT_048607b8;
  uVar29 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar22) && (local_88 != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_88,4,uVar29 & 0x3fffffff);
  }
  lVar22 = local_70;
  uVar29 = local_70._4_4_;
  local_70 = (ulong)local_70._4_4_ << 0x20;
  if ((-1 < lVar22) && (local_78 != 0)) {
    FUN_00421f90(puVar9,local_78,4,uVar29 & 0x3fffffff);
  }
  return;
}

