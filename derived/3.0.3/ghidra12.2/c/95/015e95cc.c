
/* WARNING: Removing unreachable block (ram,0x015e9634) */

void FUN_015e95cc(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_390;
  undefined1 local_388 [144];
  undefined8 local_2f8;
  long local_2f0;
  long local_2e8;
  long lStack_2e0;
  undefined4 local_2d8;
  ulong local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined1 auStack_2a0 [180];
  float local_1ec;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  
  puVar1 = PTR_DAT_04bb2200;
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  local_2d0 = local_2d0 & 0xffffffff00000000;
  lVar9 = *(long *)PTR_DAT_04bb2200;
  lVar8 = *(long *)(lVar9 + 0x58);
  if (lVar8 == 0) {
    return;
  }
  memcpy(&local_2d0,(void *)(lVar8 + 0x138),0x238);
  local_390 = (undefined *)((ulong)local_390._4_4_ << 0x20);
  if (*(long *)(lVar9 + 0x58) == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = (long *)**(undefined8 **)(*(long *)PTR_DAT_04bbdb78 + 0x28);
  }
  if (((*PTR_DAT_04bbdb68 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbdb68), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bbdb60 = PTR_DAT_04bbdb70 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbdb68);
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  uVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,PTR_DAT_04bbdb60);
  if ((uVar7 & 1) == 0) {
    return;
  }
  lVar9 = plVar10[0xf];
  plVar10 = (long *)plVar10[0x10];
  memcpy(local_388,plVar10 + 1,0x90);
  local_2f8 = plVar10[0x13];
  local_390 = PTR_DAT_04bbd858 + 0x10;
  local_2f0 = plVar10[0x14];
  local_2e8 = plVar10[0x15];
  lStack_2e0 = plVar10[0x16];
  local_2d8 = (undefined4)plVar10[0x17];
  fVar25 = *(float *)(lVar9 + 0x3c);
  fVar24 = *(float *)(lVar9 + 0x40);
  fVar14 = *(float *)(lVar9 + 0x44) - *(float *)(lVar9 + 0x38);
  fVar22 = *(float *)(lVar9 + 0x4c) - fVar24;
  fVar11 = *(float *)(lVar9 + 0x48) - fVar25;
  fVar14 = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar22 * fVar22);
  if (0.0 < fVar14) {
    fVar14 = 1.0 / fVar14;
    fVar11 = fVar11 * fVar14;
    fVar22 = fVar22 * fVar14;
  }
  fVar26 = fVar11 - *(float *)(lVar8 + 0x22c);
  fVar11 = fVar11 + *(float *)(lVar8 + 0x22c);
  fVar14 = fVar11;
  if (*(float *)(param_1 + 0x3c) == 0.0) {
    fVar16 = -5.0;
    fVar18 = 45.0;
    bVar3 = fVar25 < -5.0;
    bVar2 = fVar25 < 45.0;
    fVar14 = -0.01;
    if (fVar11 < 0.0) {
      fVar14 = fVar11;
    }
    goto LAB_015e9bdc;
  }
  fVar13 = 57600.0 / (*(float *)(*(long *)(*(long *)puVar1 + 0x78) + 0x40) * 6.2831855);
  fVar27 = 0.0 - fVar24;
  fVar15 = fVar13 + -5.0;
  fVar16 = SQRT((-fVar13 - fVar25) * (-fVar13 - fVar25) + fVar27 * fVar27);
  fVar12 = fVar13 + 45.0;
  bVar2 = fVar16 < fVar12;
  bVar3 = fVar16 < fVar15;
  fVar16 = SQRT(fVar26 * fVar26 + fVar22 * fVar22);
  fVar18 = fVar22;
  fVar23 = fVar26;
  if (0.0 < fVar16) {
    fVar16 = 1.0 / fVar16;
    fVar18 = fVar22 * fVar16;
    fVar23 = fVar26 * fVar16;
  }
  fVar16 = SQRT(fVar11 * fVar11 + fVar22 * fVar22);
  if (fVar16 <= 0.0) {
    fVar16 = fVar11;
  }
  else {
    fVar16 = 1.0 / fVar16;
    fVar22 = fVar22 * fVar16;
    fVar16 = fVar11 * fVar16;
  }
  fVar17 = fVar25 + fVar13;
  fVar19 = fVar17 * fVar23 + fVar24 * fVar18;
  fVar19 = fVar19 + fVar19;
  fVar20 = fVar17 * fVar17 + fVar24 * fVar24;
  fVar12 = (fVar20 - fVar12 * fVar12) * -4.0 + fVar19 * fVar19;
  if (fVar12 <= 0.0) {
    fVar18 = 45.0;
    if (((0.0 < fVar19) || (fVar12 < -1.1920929e-07)) || (1.1920929e-07 < fVar12))
    goto LAB_015e99b0;
    fVar18 = fVar19 * -0.5;
LAB_015e9960:
    fVar18 = fVar25 + fVar23 * fVar18;
    fVar13 = 57600.0 / (*(float *)(*(long *)(*(long *)puVar1 + 0x78) + 0x40) * 6.2831855);
    fVar17 = fVar25 + fVar13;
    fVar15 = fVar13 + -5.0;
    fVar20 = fVar17 * fVar17 + fVar24 * fVar24;
  }
  else {
    fVar21 = fVar19 * fVar19;
    if ((fVar19 <= 0.0) || (fVar21 <= fVar12)) {
      fVar18 = SQRT(fVar12);
      if (NAN(fVar18)) {
        fVar18 = sqrtf(fVar12);
        if (fVar12 > fVar21 || fVar19 > 0.0) goto LAB_015e98ec;
LAB_015e9950:
        fVar18 = -fVar19 - fVar18;
      }
      else {
        if (fVar12 <= fVar21 && fVar19 <= 0.0) goto LAB_015e9950;
LAB_015e98ec:
        fVar18 = fVar18 - fVar19;
      }
      fVar18 = fVar18 * 0.5;
      goto LAB_015e9960;
    }
    fVar18 = 45.0;
  }
LAB_015e99b0:
  fVar22 = fVar16 * fVar17 + fVar24 * fVar22;
  fVar22 = fVar22 + fVar22;
  fVar23 = (fVar20 - fVar15 * fVar15) * -4.0 + fVar22 * fVar22;
  if (fVar23 <= 0.0) {
    if (fVar22 <= 0.0) {
      bVar4 = false;
      bVar5 = true;
      if (-1.1920929e-07 <= fVar23) {
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar23)) {
          bVar4 = fVar23 == 1.1920929e-07;
          bVar5 = 1.1920929e-07 <= fVar23;
        }
      }
      if (!bVar5 || bVar4) {
        fVar24 = fVar22 * -0.5;
        goto LAB_015e9bd0;
      }
    }
LAB_015e9a3c:
    fVar16 = -fVar13 - fVar25;
    fVar22 = SQRT(fVar16 * fVar16 + fVar27 * fVar27);
    if (0.0 < fVar22) {
      fVar27 = fVar27 * (1.0 / fVar22);
      fVar16 = fVar16 * (1.0 / fVar22);
    }
    if (fVar22 == 0.0) {
      fVar16 = -5.0;
      goto LAB_015e9bdc;
    }
    fVar14 = asinf(fVar15 / fVar22);
    fVar13 = sinf(fVar14);
    fVar23 = cosf(fVar14);
    fVar14 = fVar16 * fVar23 - fVar13 * fVar27;
    fVar22 = 57600.0 / (*(float *)(*(long *)(*(long *)puVar1 + 0x78) + 0x40) * 6.2831855);
    fVar12 = fVar22 + 45.0;
    fVar22 = fVar25 + fVar22;
    fVar16 = fVar14 * fVar22 + fVar24 * (fVar16 * fVar13 + fVar23 * fVar27);
    fVar16 = fVar16 + fVar16;
    fVar22 = ((fVar22 * fVar22 + fVar24 * fVar24) - fVar12 * fVar12) * -4.0 + fVar16 * fVar16;
    if (fVar22 <= 0.0) {
      if (((0.0 < fVar16) || (fVar22 < -1.1920929e-07)) || (1.1920929e-07 < fVar22))
      goto LAB_015e9b9c;
      fVar16 = fVar16 * -0.5;
    }
    else {
      if ((0.0 < fVar16) && (fVar22 < fVar16 * fVar16)) {
LAB_015e9b9c:
        fVar16 = -5.0;
        fVar14 = fVar11;
        goto LAB_015e9bdc;
      }
      fVar24 = SQRT(fVar22);
      if (NAN(fVar24)) {
        fVar24 = sqrtf(fVar22);
      }
      fVar16 = (fVar24 - fVar16) * 0.5;
    }
    fVar16 = fVar14 * fVar16;
  }
  else {
    fVar12 = fVar22 * fVar22;
    if ((0.0 < fVar22) && (fVar23 < fVar12)) goto LAB_015e9a3c;
    fVar24 = SQRT(fVar23);
    if (NAN(fVar24)) {
      fVar24 = sqrtf(fVar23);
      if (fVar23 > fVar12 || 0.0 < fVar22) goto LAB_015e9a08;
LAB_015e9bc4:
      fVar24 = -fVar22 - fVar24;
    }
    else {
      if (fVar23 <= fVar12 && fVar22 <= 0.0) goto LAB_015e9bc4;
LAB_015e9a08:
      fVar24 = fVar24 - fVar22;
    }
    fVar24 = fVar24 * 0.5;
LAB_015e9bd0:
    fVar16 = fVar16 * fVar24;
  }
  fVar16 = fVar25 + fVar16;
LAB_015e9bdc:
  fVar22 = 0.0;
  fVar24 = 0.0;
  if (fVar26 != 0.0) {
    fVar24 = (fVar18 - *(float *)(lVar9 + 0x3c)) / fVar26;
  }
  if (fVar14 != 0.0) {
    fVar22 = (fVar16 - *(float *)(lVar9 + 0x3c)) / fVar14;
  }
  fVar25 = (float)(**(code **)(*plVar10 + 0x30))(plVar10);
  fVar25 = cosf(fVar25 * 0.5);
  if (fVar11 != fVar14) {
    fVar11 = (float)(**(code **)(*plVar10 + 0x30))(plVar10);
    fVar11 = cosf(fVar11 * 0.5);
    fVar22 = fVar22 * fVar11;
  }
  fVar11 = fVar24 * fVar25;
  if (fVar26 <= 0.0) {
    fVar11 = fVar22;
  }
  fVar14 = 0.0;
  if (!bVar2) {
    fVar14 = fVar24 * fVar25;
  }
  if (!bVar3) {
    local_1ec = fVar11;
  }
  if (fVar14 <= (float)local_2f8) {
    fVar14 = (float)local_2f8;
  }
  local_388[0] = 1;
  if (local_1ec <= local_2f8._4_4_) {
    local_2f8._4_4_ = local_1ec;
  }
  fVar11 = fVar14 + 0.1;
  if (fVar14 + 0.1 <= local_1ec) {
    fVar11 = local_2f8._4_4_;
  }
  local_2f8 = CONCAT44(fVar11,fVar14);
  uStack_2c8 = *(undefined8 *)(lVar9 + 0x10);
  local_2d0 = *(ulong *)(lVar9 + 8);
  uStack_2b8 = *(undefined8 *)(lVar9 + 0x20);
  uStack_2c0 = *(undefined8 *)(lVar9 + 0x18);
  uStack_2a8 = *(undefined8 *)(lVar9 + 0x30);
  local_2b0 = *(undefined8 *)(lVar9 + 0x28);
  FUN_007535b4(auStack_2a0,(ulong *)(lVar9 + 8));
  FUN_03983a20(&local_2d0,&local_390);
  *(undefined4 *)(param_2 + 1) = local_ac;
  *param_2 = local_b4;
  *(undefined8 *)((long)param_2 + 0xc) = local_a8;
  *(undefined4 *)((long)param_2 + 0x14) = local_a0;
  return;
}

