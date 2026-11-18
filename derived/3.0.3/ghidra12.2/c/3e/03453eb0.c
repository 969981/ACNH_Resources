
undefined8
FUN_03453eb0(float *param_1,int *param_2,float *param_3,undefined8 param_4,long *param_5,
            long *param_6)

{
  float *pfVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte bVar12;
  long lVar13;
  long lVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  ulong uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long *plVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float local_e0 [3];
  undefined4 local_d4;
  undefined4 local_d0;
  float local_cc;
  undefined4 local_c8;
  float local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  
  fVar30 = *(float *)(param_5 + 0x13);
  if (*(float *)(param_5 + 0x13) <= *(float *)(param_6 + 0x13)) {
    fVar30 = *(float *)(param_6 + 0x13);
  }
  fVar31 = *(float *)((long)param_5 + 0x9c);
  if (*(float *)((long)param_5 + 0x9c) <= *(float *)((long)param_6 + 0x9c)) {
    fVar31 = *(float *)((long)param_6 + 0x9c);
  }
  fVar29 = *(float *)(param_5 + 0x14);
  if (*(float *)(param_6 + 0x14) <= *(float *)(param_5 + 0x14)) {
    fVar29 = *(float *)(param_6 + 0x14);
  }
  fVar32 = *(float *)((long)param_5 + 0xa4);
  if (*(float *)((long)param_6 + 0xa4) <= *(float *)((long)param_5 + 0xa4)) {
    fVar32 = *(float *)((long)param_6 + 0xa4);
  }
  bVar15 = false;
  bVar16 = false;
  if (fVar30 < fVar29) {
    bVar15 = false;
    bVar16 = true;
    if (!NAN(fVar32) && !NAN(fVar31)) {
      bVar15 = fVar32 == fVar31;
      bVar16 = fVar31 <= fVar32;
    }
  }
  if (!bVar16 || bVar15) {
    return 1;
  }
  bVar15 = false;
  bVar16 = false;
  bVar17 = false;
  if (fVar30 <= fVar29) {
    bVar15 = false;
    bVar16 = false;
    bVar17 = true;
    if (!NAN(fVar31) && !NAN(fVar32)) {
      bVar15 = fVar31 < fVar32;
      bVar16 = fVar31 == fVar32;
      bVar17 = false;
    }
  }
  if (!bVar16 && bVar15 == bVar17) {
    return 1;
  }
  fVar24 = *(float *)(param_5 + 0xc);
  fVar28 = *(float *)(param_6 + 0xc);
  if (fVar24 == fVar28) {
    (**(code **)(*param_6 + 0x28))(param_6);
    fVar24 = fVar28;
    (**(code **)(*param_5 + 0x28))(param_5);
    bVar15 = fVar28 < fVar24;
  }
  else {
    bVar15 = false;
    if (!NAN(fVar28) && !NAN(fVar24)) {
      bVar15 = fVar28 < fVar24;
    }
  }
  plVar3 = param_6;
  plVar22 = param_5;
  if (!bVar15) {
    plVar3 = param_5;
    plVar22 = param_6;
  }
  plVar23 = plVar3;
  if (((*(byte *)(plVar22 + 6) >> 3 & 1) != 0) && ((*(uint *)(plVar3 + 6) & 4) != 0)) {
    plVar23 = plVar22;
    plVar22 = plVar3;
  }
  fVar24 = *(float *)((long)param_5 + 0x5c);
  fVar28 = *(float *)((long)param_6 + 0x5c);
  iVar8 = *(int *)((long)plVar22 + 0x54);
  iVar9 = *(int *)((long)plVar23 + 0x4c);
  if (fVar24 == fVar28) {
    fVar24 = (float)(**(code **)(*param_6 + 0x28))(param_6);
    fVar28 = (float)(**(code **)(*param_5 + 0x28))(param_5);
    bVar15 = fVar24 < fVar28;
  }
  else {
    bVar15 = false;
    if (!NAN(fVar28) && !NAN(fVar24)) {
      bVar15 = fVar28 < fVar24;
    }
  }
  plVar3 = param_6;
  if (!bVar15) {
    plVar3 = param_5;
    param_5 = param_6;
  }
  if (((*(byte *)(param_5 + 6) >> 5 & 1) != 0) && ((*(byte *)(plVar3 + 6) & 0x10) != 0)) {
    param_5 = plVar3;
  }
  iVar9 = iVar9 + iVar8;
  lVar13 = param_5[10];
  lVar14 = plVar3[9];
  iVar8 = *param_2;
  uVar10 = *(uint *)(plVar22 + 6);
  uVar11 = *(uint *)(plVar23 + 6);
  iVar20 = (int)*param_3;
  iVar19 = iVar20;
  if (((uVar10 >> 3 & 1) == 0) || ((uVar11 >> 2 & 1) == 0)) {
    if ((uVar11 >> 2 & 1) == 0) {
      bVar15 = (uVar10 & 8) != 0;
      fVar25 = *(float *)((long)plVar22 + 0x9c);
      fVar24 = (fVar31 + fVar32) * 0.5;
      if (bVar15) {
        fVar24 = fVar25;
      }
      fVar31 = 2.0;
      if (bVar15) {
        fVar31 = 0.0;
      }
      fVar32 = -2.0;
      fVar28 = *(float *)((long)plVar23 + 0xa4);
    }
    else {
      fVar24 = *(float *)((long)plVar23 + 0xa4);
      fVar31 = 2.0;
      fVar32 = 0.0;
      fVar25 = *(float *)((long)plVar22 + 0x9c);
      fVar28 = fVar24;
    }
    lVar4 = plVar22[0x13];
    lVar6 = plVar22[0x14];
    fVar31 = (fVar24 - fVar25) + fVar31;
    local_b0._0_4_ = (float)lVar4;
    local_b0._4_4_ = (float)((ulong)lVar4 >> 0x20);
    fVar33 = fVar31 + local_b0._4_4_;
    if (((float)local_b0 + 0.0 < *param_1) ||
       (local_a8._0_4_ = (float)lVar6, param_1[2] < (float)local_a8 + 0.0)) {
      bVar15 = true;
    }
    else {
      bVar15 = false;
    }
    fVar32 = fVar32 + (fVar24 - fVar28);
    fVar24 = param_1[1];
    if (fVar24 <= fVar33) {
      local_a8._4_4_ = (float)((ulong)lVar6 >> 0x20);
      if (param_1[3] < fVar31 + local_a8._4_4_) {
        bVar15 = true;
        fVar33 = param_1[3] - ((fVar31 + local_a8._4_4_) - fVar33);
      }
    }
    else {
      bVar15 = true;
      fVar33 = fVar24;
    }
    lVar5 = plVar23[0x13];
    lVar7 = plVar23[0x14];
    local_c0._0_4_ = (float)lVar5;
    local_c0._4_4_ = (float)((ulong)lVar5 >> 0x20);
    fVar34 = fVar32 + local_c0._4_4_;
    local_b8._4_4_ = (float)((ulong)lVar7 >> 0x20);
    local_b8._4_4_ = fVar32 + local_b8._4_4_;
    if (((float)local_c0 + 0.0 < *param_1) ||
       (local_b8._0_4_ = (float)lVar7, param_1[2] < (float)local_b8 + 0.0)) {
      bVar12 = 1;
    }
    else {
      bVar12 = 0;
    }
    if (fVar24 <= fVar34) {
      fVar24 = param_1[3];
      if (fVar24 < local_b8._4_4_) {
        fVar34 = fVar24 - (local_b8._4_4_ - fVar34);
        bVar12 = 1;
        local_b8._4_4_ = fVar24;
      }
    }
    else {
      bVar12 = 1;
      local_b8._4_4_ = fVar24 + (local_b8._4_4_ - fVar34);
      fVar34 = fVar24;
    }
    if (iVar8 < iVar9) goto LAB_03454198;
    fVar24 = fVar31 - fVar32;
    iVar21 = iVar9;
    if ((iVar8 != iVar9) || (fVar24 <= (float)iVar20)) {
      if ((bool)(bVar15 | bVar12)) {
        if (!(bool)(bVar15 & bVar12)) {
          if (bVar15) {
            if ((uVar11 >> 2 & 1) == 0) {
              fVar32 = (fVar33 - fVar28) + -2.0;
              local_c0 = CONCAT44(fVar32 + *(float *)((long)plVar23 + 0x9c),
                                  *(float *)(plVar23 + 0x13) + 0.0);
              local_b8 = CONCAT44(fVar28 + fVar32,*(float *)(plVar23 + 0x14) + 0.0);
              local_b0 = lVar4;
              local_a8 = lVar6;
              uVar18 = FUN_03453ce4(param_1,&local_c0);
              if ((uVar18 & 1) == 0) {
                local_c4 = fVar33 - *(float *)((long)plVar22 + 0x9c);
                goto LAB_03454664;
              }
            }
          }
          else if ((uVar10 >> 3 & 1) == 0) {
            fVar31 = (local_b8._4_4_ - fVar25) + 2.0;
            local_b0 = CONCAT44(fVar25 + fVar31,*(float *)(plVar22 + 0x13) + 0.0);
            local_a8 = CONCAT44(*(float *)((long)plVar22 + 0xa4) + fVar31,
                                *(float *)(plVar22 + 0x14) + 0.0);
            local_c0 = lVar5;
            local_b8 = lVar7;
            uVar18 = FUN_03453ce4(param_1,&local_b0);
            if ((uVar18 & 1) == 0) {
              fVar32 = fVar34 - *(float *)((long)plVar23 + 0x9c);
              local_c4 = fVar31;
LAB_03454664:
              goto LAB_03454538;
            }
          }
        }
        goto LAB_03454198;
      }
      local_c4 = fVar31;
LAB_03454538:
      local_c8 = 0;
      iVar19 = (int)fVar24;
      bVar15 = true;
      local_d0 = 0;
      fVar31 = local_c4;
      local_cc = fVar32;
    }
    else {
      bVar15 = false;
    }
  }
  else {
LAB_03454198:
    bVar15 = false;
    iVar21 = iVar8;
  }
  pfVar1 = (float *)(param_5 + 0x13);
  uVar10 = *(uint *)(plVar3 + 6);
  if ((*(uint *)(param_5 + 6) >> 5 & 1) == 0) {
    bVar16 = (uVar10 & 0x10) != 0;
    local_e0[0] = 2.0;
    fVar24 = *(float *)(plVar3 + 0x14);
    fVar30 = (fVar30 + fVar29) * 0.5;
    if (bVar16) {
      fVar30 = fVar24;
    }
    fVar28 = -2.0;
    if (bVar16) {
      fVar28 = 0.0;
    }
    fVar29 = *pfVar1;
LAB_034541f8:
    lVar4 = *(long *)pfVar1;
    lVar6 = param_5[0x14];
    fVar33 = *param_1;
    local_e0[0] = local_e0[0] + (fVar30 - fVar29);
    local_b0._0_4_ = (float)lVar4;
    local_b0._4_4_ = (float)((ulong)lVar4 >> 0x20);
    fVar25 = local_e0[0] + (float)local_b0;
    if (fVar33 <= fVar25) {
      local_a8._0_4_ = (float)lVar6;
      if (local_e0[0] + (float)local_a8 <= param_1[2]) {
        bVar16 = false;
      }
      else {
        bVar16 = true;
        fVar25 = param_1[2] - ((local_e0[0] + (float)local_a8) - fVar25);
      }
    }
    else {
      bVar16 = true;
      fVar25 = fVar33;
    }
    fVar28 = fVar28 + (fVar30 - fVar24);
    if ((local_b0._4_4_ + 0.0 < param_1[1]) ||
       (local_a8._4_4_ = (float)((ulong)lVar6 >> 0x20), param_1[3] < local_a8._4_4_ + 0.0)) {
      bVar16 = true;
    }
    lVar5 = plVar3[0x13];
    lVar7 = plVar3[0x14];
    local_c0._0_4_ = (float)lVar5;
    local_c0._4_4_ = (float)((ulong)lVar5 >> 0x20);
    fVar34 = fVar28 + (float)local_c0;
    local_b8._0_4_ = (float)lVar7;
    fVar30 = fVar28 + (float)local_b8;
    if (fVar33 <= fVar34) {
      fVar33 = param_1[2];
      if (fVar30 <= fVar33) {
        bVar12 = 0;
      }
      else {
        fVar34 = fVar33 - (fVar30 - fVar34);
        bVar12 = 1;
        fVar30 = fVar33;
      }
    }
    else {
      bVar12 = 1;
      fVar30 = fVar33 + (fVar30 - fVar34);
      fVar34 = fVar33;
    }
    iVar2 = (int)lVar14 + (int)lVar13;
    if ((local_c0._4_4_ + 0.0 < param_1[1]) ||
       (local_b8._4_4_ = (float)((ulong)lVar7 >> 0x20), param_1[3] < local_b8._4_4_ + 0.0)) {
      bVar12 = 1;
    }
    if ((iVar2 <= iVar8) &&
       ((fVar33 = local_e0[0] - fVar28, iVar8 != iVar2 || (fVar33 <= (float)iVar20)))) {
      local_c0 = lVar5;
      local_b8 = lVar7;
      local_b0 = lVar4;
      local_a8 = lVar6;
      if (!(bool)(bVar16 | bVar12)) {
LAB_03454420:
LAB_03454428:
        fVar24 = local_e0[0];
        local_e0[1] = 0.0;
        local_d4 = 0;
        if (bVar15) {
          if (iVar9 == iVar2) {
            local_e0[2] = fVar28;
            fVar25 = (float)FUN_034427c4(plVar22,&local_c8);
            fVar34 = (float)FUN_034427c4(plVar23,&local_d0);
            fVar26 = (float)FUN_034427c4(param_5,local_e0);
            fVar27 = (float)FUN_034427c4(plVar3,local_e0 + 2);
            fVar30 = 0.0;
            fVar29 = 0.0;
            if (fVar25 + fVar34 < fVar26 + fVar27) goto LAB_03454358;
          }
          else {
            fVar30 = 0.0;
            fVar29 = 0.0;
            if (iVar9 < iVar2) goto LAB_03454358;
          }
        }
        iVar19 = (int)fVar33;
        fVar31 = 0.0;
        fVar32 = 0.0;
        plVar22 = param_5;
        plVar23 = plVar3;
        iVar21 = iVar2;
        fVar30 = fVar24;
        fVar29 = fVar28;
        goto LAB_03454358;
      }
      if (!(bool)(bVar16 & bVar12)) {
        if (bVar16) {
          if ((uVar10 >> 4 & 1) == 0) {
            fVar28 = (fVar25 - fVar24) + -2.0;
            local_c0 = CONCAT44(*(float *)((long)plVar3 + 0x9c) + 0.0,
                                *(float *)(plVar3 + 0x13) + fVar28);
            local_b8 = CONCAT44(*(float *)((long)plVar3 + 0xa4) + 0.0,fVar24 + fVar28);
            uVar18 = FUN_03453ce4(param_1,&local_c0);
            if ((uVar18 & 1) == 0) {
              local_e0[0] = fVar25 - *pfVar1;
              goto LAB_03454420;
            }
          }
        }
        else if ((*(uint *)(param_5 + 6) >> 5 & 1) == 0) {
          fVar30 = (fVar30 - fVar29) + 2.0;
          local_b0 = CONCAT44(*(float *)((long)param_5 + 0x9c) + 0.0,fVar29 + fVar30);
          local_a8 = CONCAT44(*(float *)((long)param_5 + 0xa4) + 0.0,
                              fVar30 + *(float *)(param_5 + 0x14));
          uVar18 = FUN_03453ce4(param_1,&local_b0);
          if ((uVar18 & 1) == 0) {
            fVar28 = fVar34 - *(float *)(plVar3 + 0x13);
            local_e0[0] = fVar30;
            goto LAB_03454428;
          }
        }
      }
    }
  }
  else if ((uVar10 >> 4 & 1) == 0) {
    fVar30 = *pfVar1;
    local_e0[0] = 0.0;
    fVar28 = -2.0;
    fVar24 = *(float *)(plVar3 + 0x14);
    fVar29 = fVar30;
    goto LAB_034541f8;
  }
  fVar30 = 0.0;
  fVar29 = 0.0;
  if (!bVar15) {
    return 0;
  }
LAB_03454358:
  *(float *)((long)plVar22 + 100) = fVar30;
  *(float *)(plVar22 + 0xd) = fVar31;
  *(float *)((long)plVar23 + 100) = fVar29;
  *(float *)(plVar23 + 0xd) = fVar32;
  *param_2 = iVar21;
  *param_3 = (float)iVar19;
  return 1;
}

