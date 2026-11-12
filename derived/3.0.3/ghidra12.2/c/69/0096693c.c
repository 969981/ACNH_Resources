
uint FUN_0096693c(long param_1,float *param_2,float *param_3,undefined8 *param_4,undefined8 *param_5
                 ,uint param_6,undefined4 param_7,undefined8 param_8,byte param_9,byte param_10,
                 byte param_11)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_120;
  float local_118;
  undefined8 local_110;
  float local_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float fStack_dc;
  undefined8 local_d8;
  float local_d0;
  undefined *local_c8;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined5 local_a4;
  undefined3 uStack_9f;
  undefined4 uStack_9c;
  byte local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  byte local_7c;
  undefined8 local_78;
  
  bVar1 = param_11 & 1;
  local_100 = PTR_DAT_04bb5b98 + 0x10;
  puStack_f8 = PTR_DAT_04bb2cc0 + 0x10;
  uStack_b0 = 7;
  local_a4 = 0;
  local_c8 = PTR_DAT_04bb2ca0 + 0x10;
  uStack_9f = 0;
  uStack_9c = 0;
  local_80 = 0;
  param_9 = param_9 & 1;
  local_90 = PTR_DAT_04bb2010 + 0x10;
  uStack_88 = 0;
  uVar7 = *param_4;
  local_108 = *(float *)(param_4 + 1);
  uVar8 = *param_5;
  local_118 = *(float *)(param_5 + 1);
  local_120 = uVar8;
  local_110 = uVar7;
  if ((param_6 >> 2 & 1) == 0) {
    if ((param_6 >> 3 & 1) == 0) {
      if ((param_6 & 0x2000410) == 0) goto LAB_00966aac;
      fVar11 = 50.0;
    }
    else {
      fVar11 = 20.0;
    }
LAB_00966a94:
    local_110._4_4_ = (float)((ulong)uVar7 >> 0x20);
    local_110._0_4_ = (float)uVar7;
    local_110 = CONCAT44(fVar11 + local_110._4_4_,(float)local_110);
    local_120._4_4_ = (float)((ulong)uVar8 >> 0x20);
    local_120._0_4_ = (float)uVar8;
    local_120 = CONCAT44(fVar11 + local_120._4_4_,(float)local_120);
  }
  else {
    fVar15 = *(float *)(param_1 + 0xc);
    fVar14 = *(float *)(param_1 + 0x38);
    if (*(char *)(param_1 + 0x4cc3) != '\0') {
      fVar15 = 0.01;
      fVar14 = *(float *)(param_1 + 0xc);
    }
    fVar11 = 20.0;
    if (((fVar14 + fVar15 < param_2[1] + 20.0) || (fVar14 + fVar15 < param_3[1] + 20.0)) &&
       ((*(char *)(param_1 + 0x4c98) != '\0' || ((param_10 & 1) != 0)))) goto LAB_00966a94;
  }
LAB_00966aac:
  fVar11 = param_2[1];
  uVar5 = 0;
  fVar14 = local_110._4_4_;
  fVar12 = param_3[1];
  fVar15 = fVar11;
  if (local_110._4_4_ <= fVar11) {
    fVar15 = local_110._4_4_;
  }
  fVar16 = fVar11;
  if (fVar11 <= local_110._4_4_) {
    fVar16 = local_110._4_4_;
  }
  fVar13 = fVar12;
  if (local_110._4_4_ <= fVar12) {
    fVar13 = local_110._4_4_;
  }
  fVar10 = fVar12;
  if (fVar12 <= local_110._4_4_) {
    fVar10 = local_110._4_4_;
  }
  if (fVar12 <= fVar11) {
    fVar15 = fVar13;
  }
  if (fVar11 <= fVar12) {
    fVar16 = fVar10;
  }
  fVar9 = *(float *)(param_1 + 0xc);
  fVar10 = fVar9;
  fVar13 = *(float *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x4cc3) != '\0') {
    fVar10 = 0.01;
    fVar13 = fVar9;
  }
  local_a8 = param_7;
  local_78 = param_8;
  local_98 = param_9;
  local_7c = bVar1;
  if ((fVar15 <= fVar13 + fVar10) && (fVar13 + fVar10 <= fVar16)) {
    fVar15 = *param_2 - *param_3;
    fVar16 = param_2[2] - param_3[2];
    fVar15 = SQRT((fVar11 - fVar12) * (fVar11 - fVar12) + fVar15 * fVar15 + fVar16 * fVar16);
    bVar2 = false;
    bVar3 = true;
    if (-3.8146973e-06 <= fVar15) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar15)) {
        bVar2 = fVar15 == 3.8146973e-06;
        bVar3 = 3.8146973e-06 <= fVar15;
      }
    }
    if (bVar3 && !bVar2) {
      fVar15 = *param_3 - (float)local_110;
      fVar16 = param_3[2] - local_108;
      fVar15 = SQRT((fVar12 - local_110._4_4_) * (fVar12 - local_110._4_4_) + fVar15 * fVar15 +
                    fVar16 * fVar16);
      bVar2 = false;
      bVar3 = true;
      if (-3.8146973e-06 <= fVar15) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar15)) {
          bVar2 = fVar15 == 3.8146973e-06;
          bVar3 = 3.8146973e-06 <= fVar15;
        }
      }
      if ((bVar3 && !bVar2) &&
         ((fVar15 = (float)local_110 - *param_2, fVar12 = local_108 - param_2[2],
          fVar15 = SQRT((local_110._4_4_ - fVar11) * (local_110._4_4_ - fVar11) + fVar15 * fVar15 +
                        fVar12 * fVar12), fVar15 < -3.8146973e-06 || (3.8146973e-06 < fVar15)))) {
        local_e8 = param_2[2];
        uVar7 = *(undefined8 *)param_2;
        fStack_e4 = (float)*(undefined8 *)param_3;
        local_e0 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
        fStack_dc = param_3[2];
        local_f0._0_4_ = (float)uVar7;
        local_f0._4_4_ = (float)((ulong)uVar7 >> 0x20);
        local_d8 = local_110;
        fVar15 = -((fStack_dc - local_e8) * (local_110._4_4_ - local_f0._4_4_)) +
                 (local_108 - local_e8) * (local_e0 - local_f0._4_4_);
        fVar12 = -((fStack_e4 - (float)local_f0) * (local_108 - local_e8)) +
                 ((float)local_110 - (float)local_f0) * (fStack_dc - local_e8);
        fVar11 = -((local_e0 - local_f0._4_4_) * ((float)local_110 - (float)local_f0)) +
                 (local_110._4_4_ - local_f0._4_4_) * (fStack_e4 - (float)local_f0);
        fVar16 = SQRT(fVar12 * fVar12 + fVar15 * fVar15 + fVar11 * fVar11);
        if (0.0 < fVar16) {
          fVar16 = 1.0 / fVar16;
          fVar15 = fVar15 * fVar16;
          fVar12 = fVar12 * fVar16;
          fVar11 = fVar11 * fVar16;
        }
        fVar16 = local_f0._4_4_ * fVar12 + (float)local_f0 * fVar15;
        _local_c0 = CONCAT44(fVar12,fVar15);
        _local_b8 = CONCAT44(-(fVar11 * local_e8) - fVar16,fVar11);
        if ((-2.5 < (fVar9 * fVar12 + *(float *)(param_1 + 8) * fVar15 +
                    *(float *)(param_1 + 0x10) * fVar11) - (fVar16 + local_e8 * fVar11)) &&
           ((uStack_b0 = CONCAT44(param_6,7), local_f0 = uVar7, local_d0 = local_108,
            (param_11 & 1) == 0 || (uVar6 = FUN_0093cac0(param_1,param_2), (uVar6 & 1) == 0)))) {
          uVar5 = FUN_0093c910(param_1,&local_100);
          goto LAB_00966ce0;
        }
      }
    }
    uVar5 = 0;
  }
LAB_00966ce0:
  fVar11 = param_2[1];
  fVar15 = fVar11;
  if (local_120._4_4_ <= fVar11) {
    fVar15 = local_120._4_4_;
  }
  fVar12 = fVar11;
  if (fVar11 <= local_120._4_4_) {
    fVar12 = local_120._4_4_;
  }
  fVar16 = fVar14;
  if (local_120._4_4_ <= fVar14) {
    fVar16 = local_120._4_4_;
  }
  fVar13 = fVar14;
  if (fVar14 <= local_120._4_4_) {
    fVar13 = local_120._4_4_;
  }
  if (fVar14 <= fVar11) {
    fVar15 = fVar16;
  }
  if (fVar11 <= fVar14) {
    fVar12 = fVar13;
  }
  fVar10 = *(float *)(param_1 + 0xc);
  fVar13 = fVar10;
  fVar16 = *(float *)(param_1 + 0x38);
  if (*(char *)(param_1 + 0x4cc3) != '\0') {
    fVar13 = 0.01;
    fVar16 = fVar10;
  }
  if ((fVar15 <= fVar16 + fVar13) && (fVar16 + fVar13 <= fVar12)) {
    fVar15 = *param_2 - (float)local_110;
    fVar12 = param_2[2] - local_108;
    fVar15 = SQRT((fVar11 - fVar14) * (fVar11 - fVar14) + fVar15 * fVar15 + fVar12 * fVar12);
    bVar2 = false;
    bVar3 = true;
    if (-3.8146973e-06 <= fVar15) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar15)) {
        bVar2 = fVar15 == 3.8146973e-06;
        bVar3 = 3.8146973e-06 <= fVar15;
      }
    }
    if (bVar3 && !bVar2) {
      fVar14 = SQRT((fVar14 - local_120._4_4_) * (fVar14 - local_120._4_4_) +
                    ((float)local_110 - (float)local_120) * ((float)local_110 - (float)local_120) +
                    (local_108 - local_118) * (local_108 - local_118));
      if (((fVar14 < -3.8146973e-06) || (3.8146973e-06 < fVar14)) &&
         ((fVar15 = (float)local_120 - *param_2, fVar14 = local_118 - param_2[2],
          fVar14 = SQRT((local_120._4_4_ - fVar11) * (local_120._4_4_ - fVar11) + fVar15 * fVar15 +
                        fVar14 * fVar14), fVar14 < -3.8146973e-06 || (3.8146973e-06 < fVar14)))) {
        local_e8 = param_2[2];
        uVar7 = *(undefined8 *)param_2;
        local_e0 = (float)((ulong)local_110 >> 0x20);
        local_f0._0_4_ = (float)uVar7;
        local_f0._4_4_ = (float)((ulong)uVar7 >> 0x20);
        fStack_dc = local_108;
        local_d8 = local_120;
        local_d0 = local_118;
        fVar14 = -((local_108 - local_e8) * (local_120._4_4_ - local_f0._4_4_)) +
                 (local_118 - local_e8) * (local_e0 - local_f0._4_4_);
        fVar11 = -(((float)local_110 - (float)local_f0) * (local_118 - local_e8)) +
                 ((float)local_120 - (float)local_f0) * (local_108 - local_e8);
        fVar15 = -((local_e0 - local_f0._4_4_) * ((float)local_120 - (float)local_f0)) +
                 (local_120._4_4_ - local_f0._4_4_) * ((float)local_110 - (float)local_f0);
        fVar12 = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar15 * fVar15);
        if (0.0 < fVar12) {
          fVar12 = 1.0 / fVar12;
          fVar14 = fVar14 * fVar12;
          fVar11 = fVar11 * fVar12;
          fVar15 = fVar15 * fVar12;
        }
        fVar12 = local_f0._4_4_ * fVar11 + (float)local_f0 * fVar14;
        _local_c0 = CONCAT44(fVar11,fVar14);
        _local_b8 = CONCAT44(-(fVar15 * local_e8) - fVar12,fVar15);
        if (-2.5 < (fVar10 * fVar11 + *(float *)(param_1 + 8) * fVar14 +
                   *(float *)(param_1 + 0x10) * fVar15) - (fVar12 + local_e8 * fVar15)) {
          uStack_b0 = CONCAT44(uStack_b0._4_4_ | param_6,(undefined4)uStack_b0);
          local_f0 = uVar7;
          fStack_e4 = (float)local_110;
          local_98 = param_9;
          local_7c = bVar1;
          if (((param_11 & 1) == 0) ||
             (uVar6 = FUN_0093cac0(param_1,&local_110,&local_120), (uVar6 & 1) == 0)) {
            uVar4 = FUN_0093c910(param_1,&local_100);
            uVar5 = uVar5 | uVar4;
          }
        }
      }
    }
  }
  return uVar5 & 1;
}

