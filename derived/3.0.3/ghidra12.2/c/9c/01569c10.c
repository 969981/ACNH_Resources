
/* WARNING: Removing unreachable block (ram,0x01569cd8) */
/* WARNING: Removing unreachable block (ram,0x01569ff4) */

void FUN_01569c10(long param_1,long param_2)

{
  uint *puVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_ec;
  float fStack_e8;
  float local_e4;
  float local_e0;
  undefined8 local_dc;
  float local_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0 [3];
  undefined4 local_94;
  undefined8 local_90;
  float local_88;
  char local_84 [4];
  char local_28 [4];
  undefined4 local_24;
  
  puVar4 = PTR_DAT_04bbd588;
  puVar3 = PTR_DAT_04bb2200;
  lVar11 = *(long *)PTR_DAT_04bb2200;
  if (0x19999998 <
      (*(int *)(lVar11 + 0x150) * -0x33333333 + 0x19999998U >> 1 |
      *(int *)(lVar11 + 0x150) * -0x80000000)) {
    return;
  }
  if (*(char *)(*(long *)(lVar11 + 0x70) + 0xdd) != '\0') {
    return;
  }
  if (*(long *)PTR_DAT_04bbd588 != 0) {
    *(undefined4 *)(*(long *)PTR_DAT_04bbd588 + 0xa8) = 1;
  }
  local_28[0] = '\0';
  local_84[0] = '\0';
  local_88 = 0.0;
  local_90 = 0;
  local_94 = 0;
  local_d0 = 0.0;
  uVar7 = FUN_015bc318(*(undefined8 *)(*(long *)(lVar11 + 0x50) + 0x118),local_28,local_84,&local_90
                       ,&local_94,param_2);
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar11 = *(long *)(*(long *)puVar3 + 0x78);
  if (lVar11 == 0) {
    fVar13 = 0.0;
  }
  else {
    fVar16 = *(float *)(lVar11 + 0x58);
    fVar13 = atan2f(57600.0 / (*(float *)(lVar11 + 0x40) * 6.2831855) + *(float *)(lVar11 + 0x54),
                    fVar16);
    fVar13 = 1.5707964 - fVar13;
    fVar14 = cosf(fVar13);
    bVar5 = false;
    if ((fVar14 != 0.0) && (bVar5 = false, !NAN(ABS(fVar13)))) {
      bVar5 = ABS(fVar13) == INFINITY;
    }
    if (bVar5) {
      cosf(fVar13);
    }
    lVar11 = *(long *)(*(long *)puVar3 + 0x78);
    fVar13 = *(float *)(lVar11 + 0x3c) *
             ((fVar13 / (*(float *)(lVar11 + 0x40) * 0.017453292)) * 160.0 -
             *(float *)(lVar11 + 0x38)) + (1.0 - *(float *)(lVar11 + 0x3c)) * fVar16;
  }
  if (local_88 <= fVar13) {
    return;
  }
  local_a0[1] = 0.0;
  fVar13 = (float)NEON_ucvtf(local_94);
  fVar13 = fVar13 * 1.4629181e-09 + 3.1415927;
  fVar14 = fVar13 * 0.15915494;
  uVar12 = 0;
  if (fVar14 != (float)(int)fVar14) {
    uVar12 = (uint)(fVar14 < 0.0);
  }
  fVar13 = fVar13 + (float)(int)((int)fVar14 - uVar12) * -6.2831855;
  bVar5 = false;
  bVar6 = false;
  if (fVar13 < 6.2831855) {
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar13)) {
      bVar5 = fVar13 == 0.0;
      bVar6 = 0.0 <= fVar13;
    }
  }
  if (!bVar6 || bVar5) {
    fVar13 = 0.0;
  }
  local_a0[0] = (float)*(int *)(param_2 + 8) * 10.0 + 5.0;
  local_a0[2] = (float)*(int *)(param_2 + 0xc) * 10.0 + 5.0;
  fVar14 = (float)FUN_015cb8d4(local_a0,0);
  local_90._4_4_ = fVar14;
  if ((local_28[0] == '\0') && (local_84[0] != '\0')) {
    fVar16 = sinf(fVar13 + 1.5707964);
    fVar15 = cosf(fVar13 + 1.5707964);
    fVar14 = -fVar16;
    if (0.0 <= fVar16) {
      fVar14 = fVar16;
    }
    fVar17 = -fVar15;
    if (0.0 <= fVar15) {
      fVar17 = fVar15;
    }
    if (fVar17 < fVar14) {
      fVar14 = -10.0;
      if (fVar16 <= 0.0) {
        fVar14 = 10.0;
      }
      local_88 = local_88 + fVar14 * 0.25;
    }
    else {
      fVar14 = 10.0;
      if (fVar15 <= 0.0) {
        fVar14 = -10.0;
      }
      local_90._0_4_ = (float)local_90 + fVar14 * 0.25;
    }
  }
  else {
    local_90._0_4_ = (float)local_90 + (local_a0[0] - (float)local_90) * 0.4;
    local_88 = local_88 + (local_a0[2] - local_88) * 0.4;
  }
  fVar14 = 0.0;
  fVar15 = (float)local_90 + 0.0;
  fVar18 = local_88 + 0.0;
  fVar17 = local_90._4_4_ + 0.1;
  fVar16 = sinf(fVar13);
  local_d0 = cosf(fVar13);
  fStack_cc = fVar16 * 0.0;
  local_c8 = fVar16 + 0.0;
  local_dc = 0;
  local_d4 = 0.0;
  fStack_e8 = local_90._4_4_ + 0.1;
  fStack_bc = fStack_cc * 0.0 + 1.0;
  local_c0 = local_d0 * 0.0;
  local_ec = (float)local_90 + 0.0;
  local_e4 = local_88 + 0.0;
  local_b0 = -fVar16;
  fStack_c4 = fVar15;
  local_b8 = fStack_cc;
  fStack_b4 = fVar17;
  fStack_ac = local_c0;
  local_a8 = local_d0;
  fStack_a4 = fVar18;
  if ((*(long *)puVar3 != 0) && (lVar11 = *(long *)(*(long *)puVar3 + 0x50), lVar11 != 0)) {
    local_24 = 0;
    lVar11 = *(long *)(lVar11 + 0x118);
    if (lVar11 != 0) {
      FUN_015bca00(lVar11,&local_dc,&local_ec,0,1,1);
      fVar14 = (float)local_dc;
      if ((float)local_dc != 0.0) {
        fVar16 = atanf(local_d4 / (float)local_dc);
        fVar14 = (float)local_dc;
        goto LAB_0156a05c;
      }
    }
  }
  fVar16 = -1.5707964;
  if (local_d4 <= 0.0) {
    fVar16 = 1.5707964;
  }
LAB_0156a05c:
  lVar11 = *(long *)(param_1 + 0x40);
  fVar15 = 1.5707964;
  if (fVar14 <= 0.0) {
    fVar15 = -1.5707964;
  }
  fVar14 = (fVar16 + fVar15) * -0.15915494;
  uVar12 = 0;
  if (fVar14 != (float)(int)fVar14) {
    uVar12 = (uint)(fVar14 < 0.0);
  }
  fVar14 = (float)(int)((int)fVar14 - uVar12) * -6.2831855 - (fVar16 + fVar15);
  bVar5 = false;
  bVar6 = false;
  if (fVar14 < 6.2831855) {
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar14)) {
      bVar5 = fVar14 == 0.0;
      bVar6 = 0.0 <= fVar14;
    }
  }
  if (!bVar6 || bVar5) {
    fVar14 = 0.0;
  }
  fVar16 = (fVar14 - fVar13) * 0.15915494;
  uVar12 = 0;
  if (fVar16 != (float)(int)fVar16) {
    uVar12 = (uint)(fVar16 < 0.0);
  }
  fVar13 = (fVar14 - fVar13) + (float)(int)((int)fVar16 - uVar12) * -6.2831855;
  bVar5 = false;
  bVar6 = false;
  if (fVar13 < 6.2831855) {
    bVar5 = false;
    bVar6 = true;
    if (!NAN(fVar13)) {
      bVar5 = fVar13 == 0.0;
      bVar6 = 0.0 <= fVar13;
    }
  }
  if (!bVar6 || bVar5) {
    fVar13 = 0.0;
  }
  if (3.1415927 <= fVar13) {
    fVar13 = fVar13 + -6.2831855;
  }
  fVar14 = -fVar13;
  if (0.0 <= fVar13) {
    fVar14 = fVar13;
  }
  pfVar8 = (float *)(**(code **)(*(long *)(lVar11 + 0x540) + 0xf0))(lVar11 + 0x540);
  fVar13 = *pfVar8;
  pfVar8 = (float *)(**(code **)(*(long *)(lVar11 + 0x540) + 0xf0))(lVar11 + 0x540);
  puVar1 = (uint *)(param_1 + 0x1a0c);
  fVar14 = *pfVar8 + (fVar14 / 1.5707964) * (1.0 - *pfVar8);
  do {
    uVar12 = *puVar1;
    uVar7 = (ulong)uVar12;
    cVar2 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar12 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1 = param_1 + 0xa6c;
  lVar11 = param_1 + uVar7 * 4;
  if (999 < uVar12) {
    uVar7 = 0;
    lVar11 = param_1;
  }
  if ((int)uVar12 < 1000) {
    fVar16 = 1.0;
    if (fVar14 <= 1.0) {
      fVar16 = fVar14;
    }
    if (fVar13 <= fVar14) {
      fVar13 = fVar16;
    }
    *(float *)(param_1 + uVar7 * 4) = fVar13;
    if (local_28[0] == '\0') {
      pcVar10 = "Env_RiverRippleRightAngle";
      if (local_84[0] != '\0') {
        pcVar10 = "Env_RiverRippleDents";
      }
    }
    else {
      pcVar10 = "Env_RiverRippleCorner";
      if (0.5 <= *(float *)(*(long *)(*(long *)puVar3 + 0x70) + 0x104)) {
        pcVar10 = "Env_RiverRippleCornerNight";
      }
    }
    lVar9 = FUN_03bd1300(DAT_05aec208 + 0xa20,pcVar10);
    if (lVar9 != 0) {
      local_ec = 1.0;
      fStack_e8 = 1.0;
      local_e4 = 1.0;
      FUN_03bd0f20(lVar9,&local_d0,PTR_DAT_04bbd570,&local_ec,lVar11);
    }
    if (*(long *)puVar4 != 0) {
      local_ec = (float)CONCAT31(local_ec._1_3_,1);
      fStack_e8 = (float)local_90;
      local_e4 = local_90._4_4_;
      local_e0 = local_88;
      FUN_03824b10(*(long *)puVar4,&local_ec);
    }
  }
  return;
}

