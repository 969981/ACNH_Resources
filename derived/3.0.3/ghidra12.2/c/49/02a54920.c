
void FUN_02a54920(byte *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  short sVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 uVar16;
  byte bVar17;
  long *plVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  uint local_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  ulong local_98;
  undefined8 local_90;
  float local_88;
  
  puVar2 = PTR_DAT_04bb26a8;
  lVar12 = *(long *)PTR_DAT_04bb26a8;
  nn::os::LockMutex((MutexType *)(lVar12 + 0xb4408));
  fVar26 = *(float *)(lVar12 + 0xb4430);
  uVar28 = *(undefined4 *)(lVar12 + 0xb4434);
  uVar27 = *(undefined4 *)(lVar12 + 0xb4438);
  cVar4 = *(char *)(lVar12 + 0xb4428);
  nn::os::UnlockMutex((MutexType *)(lVar12 + 0xb4408));
  if (cVar4 == '\0') {
    return;
  }
  bVar17 = *param_1;
  uVar11 = (uint)bVar17;
  if ((bVar17 & 1) != 0) {
    uVar11 = bVar17 & 0xfe;
    *(undefined4 *)(param_1 + 0x34) = uVar28;
    *(undefined4 *)(param_1 + 0x38) = uVar28;
    *(undefined4 *)(param_1 + 0x44) = uVar27;
    *(undefined4 *)(param_1 + 0x48) = uVar27;
    *param_1 = (byte)uVar11;
  }
  bVar17 = param_1[2];
  if (((uVar11 >> 1 & 1) != 0) && ((bVar17 >> 1 & 1) != 0)) {
    uVar11 = uVar11 & 0xfffffffd;
    *param_1 = (byte)uVar11;
    param_1[3] = 0x14;
  }
  if (((uVar11 >> 1 & 1) == 0) && ((bVar17 & 1) != 0)) {
    param_1[3] = 0;
    *param_1 = (byte)uVar11 | 2;
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x18);
  }
  param_1[2] = bVar17 & 0xfc;
  lVar12 = *(long *)puVar2;
  if (((*(int *)(lVar12 + 0x63804) == 4) &&
      (uVar11 = *(uint *)(FUN_0011e5e0 + lVar12), uVar11 != 0xffffffff)) &&
     (*(long *)(lVar12 + 0x11e610) != 0)) {
    if (*(uint *)(lVar12 + 0x11e608) <= uVar11) {
      uVar11 = 0;
    }
    local_a8 = *(uint *)(*(long *)(lVar12 + 0x11e610) + (long)(int)uVar11 * 0x80 + 8);
    uVar11 = local_a8 - 0x20;
    if ((int)local_a8 < 0x20) {
      uVar11 = local_a8;
    }
    uVar15 = 0x60040;
    if ((int)local_a8 < 0x20) {
      uVar15 = 6;
    }
    if ((uVar15 >> (ulong)(uVar11 & 0x1f) & 1) == 0) goto LAB_02a54a7c;
    uVar27 = 0x3f5eb852;
  }
  else {
LAB_02a54a7c:
    uVar27 = 0x3f4ccccd;
  }
  *(undefined4 *)(param_1 + 0x3c) = uVar27;
  *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x81) = *param_2;
  lVar13 = *(long *)(param_2 + 8);
  uVar16 = *(undefined8 *)(lVar13 + 0x44);
  fVar22 = *(float *)(lVar13 + 0x3c);
  fVar24 = *(float *)(lVar13 + 0x40);
  fVar20 = *(float *)(lVar13 + 0x4c);
  local_90._0_4_ = (float)uVar16;
  fVar23 = (float)local_90;
  local_90._4_4_ = (float)((ulong)uVar16 >> 0x20);
  fVar21 = local_90._4_4_;
  fVar29 = *(float *)(param_1 + 0x38) * 0.017453292 - *(float *)(param_1 + 0x48) * 0.017453292;
  if ((fVar29 < -1.1920929e-07) || (fVar25 = 1.0, 1.1920929e-07 < fVar29)) {
    fVar29 = (*(float *)(param_2 + 4) - *(float *)(param_1 + 0x48) * 0.017453292) / fVar29;
    fVar30 = 1.0;
    if (fVar29 <= 1.0) {
      fVar30 = fVar29;
    }
    fVar25 = 0.0;
    if (0.0 <= fVar29) {
      fVar25 = fVar30;
    }
  }
  fVar29 = *(float *)(param_1 + 0x3c);
  if (param_2[1] != '\0') {
    fVar29 = 1.0;
  }
  fVar29 = *(float *)(param_1 + 0x4c) + fVar25 * (fVar29 - *(float *)(param_1 + 0x4c));
  *(float *)(param_1 + 4) =
       *(float *)(lVar13 + 0x38) + ((float)local_90 - *(float *)(lVar13 + 0x38)) * fVar29;
  *(float *)(param_1 + 8) = fVar22 + (local_90._4_4_ - fVar22) * fVar29;
  *(float *)(param_1 + 0xc) = fVar24 + (fVar20 - fVar24) * fVar29;
  local_90 = uVar16;
  local_88 = fVar20;
  if ((*param_1 >> 1 & 1) != 0) {
    nn::os::LockMutex((MutexType *)(lVar12 + 0x89660));
    iVar9 = *(int *)(lVar12 + 0x89630);
    iVar3 = *(int *)(lVar12 + 0x89634);
    nn::os::UnlockMutex((MutexType *)(lVar12 + 0x89660));
    if ((iVar9 == 2) || (iVar9 == 4 && 0x22 < iVar3)) {
      *(float *)(param_1 + 0x28) = fVar23;
      *(float *)(param_1 + 0x2c) = fVar21;
      *(float *)(param_1 + 0x30) = fVar20;
      fVar20 = (float)FUN_015cb8d4(&local_90,0);
      *(float *)(param_1 + 0x2c) = fVar26 + fVar20;
    }
  }
  bVar17 = param_1[3];
  if ((char)bVar17 < '\x01') {
    if ((*param_1 >> 1 & 1) == 0) {
      *(float *)(param_1 + 0x10) = (float)local_90;
      *(float *)(param_1 + 0x14) = local_90._4_4_;
      fVar20 = local_88;
      fVar23 = local_90._4_4_;
      fVar21 = (float)local_90;
    }
    else {
      fVar21 = *(float *)(param_1 + 0x28);
      fVar23 = *(float *)(param_1 + 0x2c);
      *(float *)(param_1 + 0x14) = fVar23;
      fVar20 = *(float *)(param_1 + 0x30);
      *(float *)(param_1 + 0x10) = fVar21;
    }
  }
  else {
    fVar20 = (float)(int)(char)bVar17;
    if ((*param_1 >> 1 & 1) == 0) {
      fVar25 = *(float *)(param_1 + 0x2c) - local_90._4_4_;
      fVar29 = *(float *)(param_1 + 0x28) - (float)local_90;
      fVar23 = local_90._4_4_;
      fVar22 = *(float *)(param_1 + 0x30);
      fVar21 = (float)local_90;
      fVar24 = local_88;
    }
    else {
      fVar21 = *(float *)(param_1 + 0x28);
      fVar23 = *(float *)(param_1 + 0x2c);
      fVar25 = local_90._4_4_ - fVar23;
      fVar29 = (float)local_90 - fVar21;
      fVar24 = *(float *)(param_1 + 0x30);
      fVar22 = local_88;
    }
    param_1[3] = bVar17 - 1;
    fVar21 = fVar29 * fVar20 * 0.05 + fVar21;
    fVar23 = fVar25 * fVar20 * 0.05 + fVar23;
    *(float *)(param_1 + 0x10) = fVar21;
    *(float *)(param_1 + 0x14) = fVar23;
    fVar20 = (fVar22 - fVar24) * fVar20 * 0.05 + fVar24;
  }
  *(float *)(param_1 + 0x18) = fVar20;
  *(float *)(param_1 + 0x1c) = fVar21;
  *(float *)(param_1 + 0x24) = fVar20;
  *(float *)(param_1 + 0x20) = fVar23 - fVar26;
  plVar18 = *(long **)(*(long *)(param_1 + 0x60) + 0xf0);
  if (plVar18 != (long *)0x0) {
    local_98 = CONCAT44(local_98._4_4_,0x3f490fdb);
    local_a8 = (uint)*(undefined8 *)(param_2 + 8);
    uStack_a4 = (undefined4)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    local_a0 = (float *)(param_1 + 4);
    (**(code **)(*plVar18 + 0x30))(plVar18,&local_a8);
    if ((*PTR_DAT_04bc42f8 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(PTR_DAT_04bc42f8);
      if (iVar9 != 0) {
        *(undefined **)PTR_DAT_04bc42f0 = PTR_DAT_04bc4300 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc42f8);
      }
    }
    uVar10 = (**(code **)(*plVar18 + 0x18))(plVar18,PTR_DAT_04bc42f0);
    if ((uVar10 & 1) != 0) {
      lVar12 = *(long *)(param_1 + 0x10);
      plVar18[0x23] = (ulong)*(uint *)(param_1 + 0x18);
      plVar18[0x22] = lVar12;
    }
  }
  FUN_02a1dcf0(*(undefined8 *)(param_1 + 0x58),&local_a8);
  if (*(long *)(param_1 + 0x60) == 0) goto LAB_02a54d94;
  FUN_03ba9f7c();
  puVar19 = *(undefined8 **)(*(long *)(param_1 + 0x58) + 0x50);
  if ((*PTR_DAT_04bb6208 & 1) == 0) {
    iVar9 = __cxa_guard_acquire(PTR_DAT_04bb6208);
    if (iVar9 != 0) {
      *(undefined **)PTR_DAT_04bb6200 = PTR_DAT_04bb6210 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6208);
    }
  }
  if (puVar19 == (undefined8 *)0x0) {
LAB_02a54d6c:
    lVar12 = *(long *)(param_1 + 0x60);
    puVar14 = (undefined8 *)(lVar12 + 400);
    *(undefined4 *)(lVar12 + 0x1ac) = *(undefined4 *)(lVar12 + 0x188);
    uVar27 = *(undefined4 *)(lVar12 + 0x18c);
  }
  else {
    uVar10 = (**(code **)*puVar19)(puVar19,PTR_DAT_04bb6200);
    if ((uVar10 & 1) == 0) goto LAB_02a54d6c;
    puVar14 = puVar19 + 8;
    lVar12 = *(long *)(param_1 + 0x60);
    *(undefined4 *)(lVar12 + 0x1ac) = *(undefined4 *)(puVar19 + 7);
    uVar27 = *(undefined4 *)((long)puVar19 + 0x3c);
  }
  *(undefined4 *)(lVar12 + 0x1b0) = uVar27;
  uVar27 = *(undefined4 *)puVar14;
  *(undefined1 *)(lVar12 + 0x1a8) = 1;
  *(undefined4 *)(lVar12 + 0x1b4) = uVar27;
LAB_02a54d94:
  lVar12 = *(long *)puVar2;
  uVar11 = *(uint *)(FUN_0011e5e0 + lVar12);
  if ((uVar11 == 0xffffffff) || (*(long *)(lVar12 + 0x11e610) == 0)) {
    bVar17 = 0;
  }
  else {
    if (*(uint *)(lVar12 + 0x11e608) <= uVar11) {
      uVar11 = 0;
    }
    local_a8 = *(uint *)(*(long *)(lVar12 + 0x11e610) + (long)(int)uVar11 * 0x80 + 8);
    pbVar1 = (byte *)(*(long *)PTR_DAT_04bb28b0 + 0x1f60) + (ulong)local_a8 * 0x50;
    if (0x32 < local_a8) {
      pbVar1 = (byte *)(*(long *)PTR_DAT_04bb28b0 + 0x1f60);
    }
    bVar17 = *pbVar1 >> 5 & 1;
  }
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 == -1) {
    uVar11 = 0;
  }
  else {
    local_a8 = 0;
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8;
    if (0xff < (uint)(int)sVar8) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    uVar11 = *(uint *)(puVar2 + 4) & 1;
  }
  bVar5 = param_2[2];
  if (param_1[0x69] == 1) {
    local_a8 = local_a8 & 0xffffff00;
    uStack_a4 = 0;
    local_a0._0_4_ = 0x3f800000;
    local_a0._4_4_ = 0x3f800000;
    local_98 = 0x40000000;
    FUN_029eb6a4(param_1 + 0x78,&local_a8);
  }
  else if ((param_1[0x69] == 0) && (0 < *(int *)(param_1 + 0xa0))) {
    *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xa0) + -1;
  }
  uVar15 = 0x3e088889;
  if (bVar5 != 0) {
    uVar15 = 0x3f2aaaab;
  }
  uVar27 = 0;
  if (bVar5 != 0) {
    uVar27 = 0x3f800000;
  }
  while( true ) {
    while( true ) {
      while( true ) {
        bVar6 = param_1[0x69];
        bVar7 = param_1[0x68];
        if (bVar6 != 2) break;
        if (bVar5 == bVar7) goto LAB_02a54fb4;
        param_1[0x68] = bVar5;
        param_1[0x69] = 0;
        if (bVar5 == 0) {
          param_1[0xa0] = 0x12;
          param_1[0xa1] = 0;
          param_1[0xa2] = 0;
          param_1[0xa3] = 0;
        }
        else {
          param_1[0xa0] = 0;
          param_1[0xa1] = 0;
          param_1[0xa2] = 0;
          param_1[0xa3] = 0;
        }
      }
      if (bVar6 != 1) break;
      if (bVar5 == bVar7) {
        if (*(float *)(param_1 + 0x80) != *(float *)(param_1 + 0x84)) goto LAB_02a54fb4;
        param_1[0x69] = 2;
      }
      else {
        param_1[0x68] = bVar5;
        param_1[0x69] = 0;
        if (bVar5 == 0) {
          param_1[0xa0] = 0x12;
          param_1[0xa1] = 0;
          param_1[0xa2] = 0;
          param_1[0xa3] = 0;
        }
        else {
          param_1[0xa0] = 0;
          param_1[0xa1] = 0;
          param_1[0xa2] = 0;
          param_1[0xa3] = 0;
        }
      }
    }
    if (bVar6 != 0) break;
    if (bVar5 == bVar7) {
      if (0 < *(int *)(param_1 + 0xa0)) break;
      param_1[0x69] = 1;
      local_a8 = CONCAT31(local_a8._1_3_,1);
      uStack_a4 = 0;
      local_a0._0_4_ = 0x3f800000;
      local_98 = (ulong)uVar15;
      local_a0._4_4_ = uVar27;
      FUN_029eb6a4(param_1 + 0x78,&local_a8);
    }
    else {
      param_1[0x68] = bVar5;
      param_1[0x69] = 0;
      if (bVar5 == 0) {
        param_1[0xa0] = 0x12;
        param_1[0xa1] = 0;
        param_1[0xa2] = 0;
        param_1[0xa3] = 0;
      }
      else {
        param_1[0xa0] = 0;
        param_1[0xa1] = 0;
        param_1[0xa2] = 0;
        param_1[0xa3] = 0;
      }
    }
  }
LAB_02a54fb4:
  fVar20 = *(float *)(param_1 + 0x78);
  fVar26 = 0.5;
  if (bVar17 == 0) {
    fVar26 = 0.8;
  }
  *(float *)(param_1 + 0x6c) = fVar20 * 0.0;
  *(float *)(param_1 + 0x70) = fVar26 * fVar20;
  *(float *)(param_1 + 0x74) = fVar20;
  uVar27 = 0x3e99999a;
  if (uVar11 == 0 && bVar17 == 0) {
    uVar27 = 0;
  }
  *(undefined4 *)(param_1 + 0xa4) = uVar27;
  *(undefined4 *)(param_1 + 0xa8) = uVar27;
  return;
}

