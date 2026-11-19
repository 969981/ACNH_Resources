
void FUN_03842330(long param_1)

{
  code *pcVar1;
  byte *pbVar2;
  MutexType *pMVar3;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  long lVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  float *pfVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar7 = DAT_05aec208;
  lVar20 = *(long *)PTR_DAT_04bb49b0;
  if ((DAT_05231900 != 0) && (lVar19 = *(long *)(DAT_05231900 + 0x70), lVar19 != 0)) {
    lVar16 = *(long *)(lVar19 + 0x1b8);
    if (lVar16 == 0) {
      fVar21 = 0.0;
      cVar8 = *(char *)(DAT_05aec208 + 0x78);
    }
    else {
      pfVar11 = (float *)(**(code **)(*(long *)(lVar16 + 0x278) + 0xf0))(lVar16 + 0x278);
      fVar21 = *pfVar11;
      cVar8 = *(char *)(lVar7 + 0x78);
    }
    if ((((cVar8 != '\0') && (lVar16 = *(long *)(lVar7 + 0x48), lVar16 != 0)) &&
        (2 < *(uint *)(lVar7 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x10) + 0x60) == 2 &&
        (fVar21 = (float)(((int)(fVar21 * 100.0) % 100) * 0x3c) / 10000.0 +
                  (float)((int)(fVar21 * 100.0) / 100), *(float *)(lVar16 + 8) != fVar21)))) {
      *(float *)(lVar16 + 8) = fVar21;
      *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 4;
    }
    fVar21 = (float)FUN_016408c0(lVar19);
    if (((*(char *)(lVar20 + 0x78) != '\0') && (lVar16 = *(long *)(lVar20 + 0x48), lVar16 != 0)) &&
       ((0x15 < *(uint *)(lVar20 + 0x3c) &&
        ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0xa8) + 0x60) == 2 &&
         (*(float *)(lVar16 + 0x54) != fVar21)))))) {
      *(float *)(lVar16 + 0x54) = fVar21;
      *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x200000;
    }
    if (*(char *)(lVar7 + 0x78) != '\0') {
      lVar16 = *(long *)(lVar7 + 0x48);
      if ((((lVar16 == 0) || (*(uint *)(lVar7 + 0x3c) < 0x16)) ||
          (*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0xa8) + 0x60) != 2)) ||
         (*(float *)(lVar16 + 0x54) == fVar21)) {
        bVar6 = *(byte *)(lVar19 + 0xd0);
      }
      else {
        *(float *)(lVar16 + 0x54) = fVar21;
        *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x200000;
        bVar6 = *(byte *)(lVar19 + 0xd0);
        if (*(char *)(lVar7 + 0x78) == '\0') goto LAB_0384256c;
      }
      lVar19 = *(long *)(lVar7 + 0x48);
      if (((lVar19 != 0) && (0x16 < *(uint *)(lVar7 + 0x3c))) &&
         ((*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0xb0) + 0x60) != 2 &&
          (*(uint *)(lVar19 + 0x58) != (uint)bVar6)))) {
        *(uint *)(lVar19 + 0x58) = (uint)bVar6;
        *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x400000;
      }
    }
  }
LAB_0384256c:
  uVar17 = local_70._4_4_;
  lVar19 = DAT_055f6860;
  pcVar1 = FUN_0011e5e0 + DAT_055f6860;
  uVar15 = *(uint *)pcVar1;
  if (uVar15 == 0xffffffff) {
    local_70 = (ulong)local_70._4_4_ << 0x20;
  }
  else {
    local_70 = (ulong)local_70._4_4_ << 0x20;
    if (*(long *)(DAT_055f6860 + 0x11e610) != 0) {
      if (*(uint *)(DAT_055f6860 + 0x11e608) <= uVar15) {
        uVar15 = 0;
      }
      local_70 = CONCAT44(uVar17,*(undefined4 *)
                                  (*(long *)(DAT_055f6860 + 0x11e610) + (long)(int)uVar15 * 0x80 + 8
                                  ));
    }
  }
  cVar8 = '\0';
  if (*(char *)(lVar20 + 0x78) != '\0') {
    lVar16 = *(long *)(lVar20 + 0x48);
    cVar8 = '\x01';
    if ((lVar16 != 0) && (0x17 < *(uint *)(lVar20 + 0x3c))) {
      if ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0xb8) + 0x60) == 2) ||
         (*(uint *)(lVar16 + 0x5c) == (uint)local_70)) {
        cVar8 = '\x01';
      }
      else {
        *(uint *)(lVar16 + 0x5c) = (uint)local_70;
        *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x800000;
        cVar8 = *(char *)(lVar20 + 0x78);
      }
    }
  }
  uVar15 = (uint)local_70 - 0x20;
  if ((int)(uint)local_70 < 0x20) {
    uVar15 = (uint)local_70;
  }
  uVar17 = 0x1ffbf;
  if ((int)(uint)local_70 < 0x20) {
    uVar17 = 0xfffffff8;
  }
  if ((((cVar8 != '\0') && (lVar16 = *(long *)(lVar20 + 0x48), lVar16 != 0)) &&
      (0x16 < *(uint *)(lVar20 + 0x3c))) &&
     ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0xb0) + 0x60) != 2 &&
      (uVar15 = uVar17 >> (ulong)(uVar15 & 0x1f) & 1, *(uint *)(lVar16 + 0x58) != uVar15)))) {
    *(uint *)(lVar16 + 0x58) = uVar15;
    *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x400000;
  }
  if (DAT_04c487d4 == -1) {
    uVar15 = 0;
  }
  else {
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar15 = *puVar4 >> 0x1e & 1;
  }
  if (((*(char *)(lVar20 + 0x78) != '\0') && (lVar16 = *(long *)(lVar20 + 0x48), lVar16 != 0)) &&
     ((0x19 < *(uint *)(lVar20 + 0x3c) &&
      ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 200) + 0x60) != 2 &&
       (*(uint *)(lVar16 + 100) != uVar15)))))) {
    *(uint *)(lVar16 + 100) = uVar15;
    *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x2000000;
  }
  if ((((*(char *)(lVar7 + 0x78) != '\0') && (lVar16 = *(long *)(lVar7 + 0x48), lVar16 != 0)) &&
      (0x19 < *(uint *)(lVar7 + 0x3c))) &&
     ((*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 200) + 0x60) != 2 &&
      (*(uint *)(lVar16 + 100) != uVar15)))) {
    *(uint *)(lVar16 + 100) = uVar15;
    *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x2000000;
  }
  iVar5 = *(int *)(lVar19 + 0x63804);
  local_68 = CONCAT44(local_68._4_4_,iVar5);
  if (((*(char *)(lVar20 + 0x78) != '\0') && (lVar16 = *(long *)(lVar20 + 0x48), lVar16 != 0)) &&
     ((0x1a < *(uint *)(lVar20 + 0x3c) &&
      ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0xd0) + 0x60) != 2 &&
       (*(int *)(lVar16 + 0x68) != iVar5)))))) {
    *(int *)(lVar16 + 0x68) = iVar5;
    *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x4000000;
  }
  lVar16 = DAT_04da7238;
  if (((*(uint *)pcVar1 == 0xffffffff) || (*(long *)(lVar19 + 0x11e610) == 0)) ||
     (DAT_04da7238 == 0)) goto LAB_03842af8;
  pbVar2 = (byte *)(DAT_04da7238 + 0x651dc);
  iVar5 = *(int *)(DAT_04da7238 + 0x65340);
  local_70 = FUN_00a8c31c(DAT_04da7238);
  if ((char)(local_70 >> 0x20) < '\x05') {
    lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    local_68 = lVar19 + -0x15180;
    local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
  }
  uVar12 = local_70 >> 0x10;
  uVar13 = local_70 >> 0x30;
  uVar14 = local_70 >> 0x18;
  local_70._0_6_ = CONCAT24(5,(uint)local_70);
  local_70 = CONCAT26((short)uVar13,(undefined6)local_70) & 0xff00ffffffffffff;
  cVar8 = FUN_00a8ae20(lVar16,uVar12,uVar14,4);
  uVar15 = (uint)(cVar8 == '\x02');
  fVar21 = *(float *)(lVar16 + 0x65344);
  if (*(int *)(lVar16 + 0x65410) == 0) {
    iVar9 = FUN_00a86724(lVar16);
    if ((*(int *)(lVar16 + 0x65410) == 0) || (0xf < *(int *)(lVar16 + 0x65410) - 1U)) {
      uVar13 = (ulong)*pbVar2;
    }
    else {
      local_70 = *(ulong *)(lVar16 + 0x65438);
      if ((local_70 & 0xffff) != 0) {
        lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        local_68 = lVar19 + -0xe10;
        local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_68);
      }
      uVar13 = local_70 >> 0x20;
    }
    uVar10 = FUN_00a868d0(lVar16,uVar13);
    local_68 = CONCAT44(local_68._4_4_,uVar10);
    uVar10 = FUN_00a867c8(lVar16);
    lVar19 = DAT_05ae2a30;
    local_70 = CONCAT44(local_70._4_4_,uVar10);
    fVar23 = 0.0;
    if (iVar9 == 4) {
      fVar24 = 32.0;
    }
    else {
      if (iVar9 != 5) goto LAB_038428a8;
      fVar24 = 128.0;
    }
    pMVar3 = (MutexType *)(DAT_05ae2a30 + 0x40);
    nn::os::LockMutex(pMVar3);
    uVar13 = *(ulong *)(lVar19 + 0x10);
    nn::os::UnlockMutex(pMVar3);
    if ((uVar13 & 0xff) != 0) {
      uVar17 = ((int)(uVar13 >> 8) >> 0x18) * 0x3c + ((int)(uVar13 >> 0x10) >> 0x18);
      if (uVar17 == *(uint *)(param_1 + 0x5d8)) {
        uVar18 = *(byte *)(param_1 + 0x5dc) + 1 & 0xff;
        if (0x1c < uVar18) {
          uVar18 = 0x1d;
        }
      }
      else {
        uVar18 = 0;
        *(uint *)(param_1 + 0x5d8) = uVar17;
      }
      *(char *)(param_1 + 0x5dc) = (char)uVar18;
      if ((int)uVar17 < 0x1e) {
        fVar22 = 128.0;
        if ((int)local_68 != 5) {
          fVar22 = 0.0;
        }
        iVar9 = uVar18 + uVar17 * 0x1e;
        fVar23 = 32.0;
        if ((int)local_68 != 4) {
          fVar23 = fVar22;
        }
        fVar22 = 900.0;
      }
      else {
        if (uVar17 < 0xa8c) {
          fVar23 = fVar24;
          goto LAB_038428a8;
        }
        fVar23 = (float)(int)fVar24;
        iVar9 = (uVar17 * -0x1e - uVar18) + 0x1a5e0;
        if (((uint)local_70 & 0xfffffffe) != 4) {
          fVar23 = 0.0;
        }
        fVar22 = 27000.0;
      }
      fVar23 = (1.0 - (float)iVar9 / fVar22) * fVar23 + ((float)iVar9 / fVar22) * fVar24;
    }
  }
  else {
    iVar9 = FUN_00a8656c(lVar16);
    fVar23 = (float)iVar9;
  }
LAB_038428a8:
  if (*(char *)(lVar20 + 0x78) != '\0') {
    lVar19 = *(long *)(lVar20 + 0x48);
    if (((lVar19 != 0) && (9 < *(uint *)(lVar20 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0x48) + 0x60) == 2 &&
        (*(float *)(lVar19 + 0x24) != fVar23)))) {
      *(float *)(lVar19 + 0x24) = fVar23;
      *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x200;
      if (*(char *)(lVar20 + 0x78) == '\0') goto LAB_038429cc;
    }
    lVar19 = *(long *)(lVar20 + 0x48);
    if ((((lVar19 != 0) && (10 < *(uint *)(lVar20 + 0x3c))) &&
        (*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0x50) + 0x60) != 2)) &&
       (*(int *)(lVar19 + 0x28) != iVar5)) {
      *(int *)(lVar19 + 0x28) = iVar5;
      *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x400;
      if (*(char *)(lVar20 + 0x78) == '\0') goto LAB_038429cc;
    }
    lVar19 = *(long *)(lVar20 + 0x48);
    if (((lVar19 != 0) && (0xc < *(uint *)(lVar20 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0x60) + 0x60) != 2 &&
        (*(uint *)(lVar19 + 0x30) != uVar15)))) {
      *(uint *)(lVar19 + 0x30) = uVar15;
      *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x1000;
      if (*(char *)(lVar20 + 0x78) == '\0') goto LAB_038429cc;
    }
    lVar19 = *(long *)(lVar20 + 0x48);
    if (((lVar19 != 0) && (0xe < *(uint *)(lVar20 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0x70) + 0x60) == 2 &&
        (*(float *)(lVar19 + 0x38) != fVar21)))) {
      *(float *)(lVar19 + 0x38) = fVar21;
      *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x4000;
    }
  }
LAB_038429cc:
  if (*(char *)(lVar7 + 0x78) != '\0') {
    lVar19 = *(long *)(lVar7 + 0x48);
    if ((((lVar19 != 0) && (9 < *(uint *)(lVar7 + 0x3c))) &&
        (*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x48) + 0x60) == 2)) &&
       (*(float *)(lVar19 + 0x24) != fVar23)) {
      *(float *)(lVar19 + 0x24) = fVar23;
      *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x200;
      if (*(char *)(lVar7 + 0x78) == '\0') goto LAB_03842af0;
    }
    lVar19 = *(long *)(lVar7 + 0x48);
    if (((lVar19 != 0) && (10 < *(uint *)(lVar7 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x50) + 0x60) != 2 &&
        (*(int *)(lVar19 + 0x28) != iVar5)))) {
      *(int *)(lVar19 + 0x28) = iVar5;
      *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x400;
      if (*(char *)(lVar7 + 0x78) == '\0') goto LAB_03842af0;
    }
    lVar19 = *(long *)(lVar7 + 0x48);
    if (((lVar19 != 0) && (0xc < *(uint *)(lVar7 + 0x3c))) &&
       ((*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x60) + 0x60) != 2 &&
        (*(uint *)(lVar19 + 0x30) != uVar15)))) {
      *(uint *)(lVar19 + 0x30) = uVar15;
      *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x1000;
      if (*(char *)(lVar7 + 0x78) == '\0') goto LAB_03842af0;
    }
    lVar19 = *(long *)(lVar7 + 0x48);
    if ((((lVar19 != 0) && (0xe < *(uint *)(lVar7 + 0x3c))) &&
        (*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x70) + 0x60) == 2)) &&
       (*(float *)(lVar19 + 0x38) != fVar21)) {
      *(float *)(lVar19 + 0x38) = fVar21;
      *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x4000;
    }
  }
LAB_03842af0:
  lVar19 = DAT_055f6860;
  if (DAT_055f6860 == 0) {
    return;
  }
LAB_03842af8:
  fVar21 = *(float *)(lVar19 + 0x19df60);
  fVar23 = *(float *)(lVar19 + 0x19df54);
  if (((*(char *)(lVar20 + 0x78) != '\0') && (lVar16 = *(long *)(lVar20 + 0x48), lVar16 != 0)) &&
     ((0xf < *(uint *)(lVar20 + 0x3c) &&
      ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0x78) + 0x60) == 2 &&
       (*(float *)(lVar16 + 0x3c) != fVar21 + fVar23)))))) {
    *(float *)(lVar16 + 0x3c) = fVar21 + fVar23;
    *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x8000;
    fVar23 = *(float *)(lVar19 + 0x19df54);
  }
  if ((((*(char *)(lVar7 + 0x78) != '\0') && (lVar16 = *(long *)(lVar7 + 0x48), lVar16 != 0)) &&
      (0xf < *(uint *)(lVar7 + 0x3c))) &&
     ((*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x78) + 0x60) == 2 &&
      (*(float *)(lVar16 + 0x3c) != fVar23)))) {
    *(float *)(lVar16 + 0x3c) = fVar23;
    *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x8000;
  }
  fVar23 = *(float *)(lVar19 + 0x19df74);
  if (((*(char *)(lVar20 + 0x78) != '\0') && (lVar16 = *(long *)(lVar20 + 0x48), lVar16 != 0)) &&
     ((0x10 < *(uint *)(lVar20 + 0x3c) &&
      ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0x80) + 0x60) == 2 &&
       (*(float *)(lVar16 + 0x40) != fVar23)))))) {
    *(float *)(lVar16 + 0x40) = fVar23;
    *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x10000;
    fVar23 = *(float *)(lVar19 + 0x19df74);
  }
  if ((((*(char *)(lVar7 + 0x78) != '\0') && (lVar16 = *(long *)(lVar7 + 0x48), lVar16 != 0)) &&
      (0x10 < *(uint *)(lVar7 + 0x3c))) &&
     ((*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x80) + 0x60) == 2 &&
      (*(float *)(lVar16 + 0x40) != fVar23)))) {
    *(float *)(lVar16 + 0x40) = fVar23;
    *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x10000;
  }
  fVar24 = *(float *)(lVar19 + 0x19df78);
  fVar23 = -fVar24;
  if (0.0 <= fVar24) {
    fVar23 = fVar24;
  }
  if (((*(char *)(lVar20 + 0x78) != '\0') && (lVar16 = *(long *)(lVar20 + 0x48), lVar16 != 0)) &&
     ((0x11 < *(uint *)(lVar20 + 0x3c) &&
      ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0x88) + 0x60) == 2 &&
       (*(float *)(lVar16 + 0x44) != fVar21 + fVar23)))))) {
    *(float *)(lVar16 + 0x44) = fVar21 + fVar23;
    *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x20000;
  }
  if ((((*(char *)(lVar7 + 0x78) != '\0') && (lVar16 = *(long *)(lVar7 + 0x48), lVar16 != 0)) &&
      (0x11 < *(uint *)(lVar7 + 0x3c))) &&
     ((*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x88) + 0x60) == 2 &&
      (*(float *)(lVar16 + 0x44) != fVar23)))) {
    *(float *)(lVar16 + 0x44) = fVar23;
    *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x20000;
  }
  fVar23 = *(float *)(lVar19 + 0x19df5c);
  if (((*(char *)(lVar20 + 0x78) != '\0') && (lVar16 = *(long *)(lVar20 + 0x48), lVar16 != 0)) &&
     ((0x12 < *(uint *)(lVar20 + 0x3c) &&
      ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0x90) + 0x60) == 2 &&
       (*(float *)(lVar16 + 0x48) != fVar21 + fVar23)))))) {
    *(float *)(lVar16 + 0x48) = fVar21 + fVar23;
    *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x40000;
  }
  if ((((*(char *)(lVar7 + 0x78) != '\0') && (lVar16 = *(long *)(lVar7 + 0x48), lVar16 != 0)) &&
      (0x12 < *(uint *)(lVar7 + 0x3c))) &&
     ((*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x90) + 0x60) == 2 &&
      (*(float *)(lVar16 + 0x48) != fVar23)))) {
    *(float *)(lVar16 + 0x48) = fVar23;
    *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x40000;
  }
  fVar21 = *(float *)(lVar19 + 0x146e08);
  if (((*(char *)(lVar20 + 0x78) != '\0') && (lVar16 = *(long *)(lVar20 + 0x48), lVar16 != 0)) &&
     ((0x13 < *(uint *)(lVar20 + 0x3c) &&
      ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0x98) + 0x60) == 2 &&
       (*(float *)(lVar16 + 0x4c) != fVar21)))))) {
    *(float *)(lVar16 + 0x4c) = fVar21;
    *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x80000;
  }
  if ((((*(char *)(lVar7 + 0x78) != '\0') && (lVar16 = *(long *)(lVar7 + 0x48), lVar16 != 0)) &&
      (0x13 < *(uint *)(lVar7 + 0x3c))) &&
     ((*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0x98) + 0x60) == 2 &&
      (*(float *)(lVar16 + 0x4c) != fVar21)))) {
    *(float *)(lVar16 + 0x4c) = fVar21;
    *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x80000;
  }
  fVar21 = *(float *)(lVar19 + 0x1474d8);
  if (((*(char *)(lVar20 + 0x78) != '\0') && (lVar19 = *(long *)(lVar20 + 0x48), lVar19 != 0)) &&
     ((0x14 < *(uint *)(lVar20 + 0x3c) &&
      ((*(int *)(*(long *)(*(long *)(lVar20 + 0x40) + 0xa0) + 0x60) == 2 &&
       (*(float *)(lVar19 + 0x50) != fVar21)))))) {
    *(float *)(lVar19 + 0x50) = fVar21;
    *(ulong *)(lVar20 + 0x50) = *(ulong *)(lVar20 + 0x50) | 0x100000;
  }
  if ((((*(char *)(lVar7 + 0x78) != '\0') && (lVar20 = *(long *)(lVar7 + 0x48), lVar20 != 0)) &&
      (0x14 < *(uint *)(lVar7 + 0x3c))) &&
     ((*(int *)(*(long *)(*(long *)(lVar7 + 0x40) + 0xa0) + 0x60) == 2 &&
      (*(float *)(lVar20 + 0x50) != fVar21)))) {
    *(float *)(lVar20 + 0x50) = fVar21;
    *(ulong *)(lVar7 + 0x50) = *(ulong *)(lVar7 + 0x50) | 0x100000;
  }
  return;
}

