
void FUN_029f8444(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  MutexType *pMVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  short sVar8;
  bool bVar9;
  byte *pbVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  long lVar15;
  char *pcVar16;
  uint uVar17;
  uint uVar18;
  byte bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_9c;
  float local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  
  if (*(int *)(param_1 + 0x14) != 1) {
    return;
  }
  if (*(uint **)(param_4 + 0x30) == (uint *)0x0) {
    pcVar13 = PTR_DAT_04bb2120;
  }
  else {
    uVar12 = (ulong)**(uint **)(param_4 + 0x30);
    pcVar16 = (char *)(*(ulong *)PTR_DAT_04bb38c8 | uVar12);
    pcVar13 = pcVar16 + 0x100000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= uVar12) {
      pcVar13 = pcVar16;
    }
  }
  if (*pcVar13 != -0x1a) {
    return;
  }
  if (pcVar13[1] != -0x53) {
    return;
  }
  if (pcVar13[2] != -0x74) {
    return;
  }
  if (pcVar13[3] != '_') {
    return;
  }
  if ((*(ushort *)(param_4 + 0x98) >> 9 & 1) == 0) {
    local_9c = 0;
    local_94 = 0.0;
    if (param_3 != 0) {
      puVar14 = *(undefined8 **)(param_3 + 0x50);
      if (puVar14 == (undefined8 *)0x0) {
        lVar15 = *(long *)(param_3 + 0x40);
        if (lVar15 != 0) {
          if (*(char *)(param_3 + 0x48) == '\0') {
            local_94 = *(float *)(lVar15 + 0x2c);
            local_9c = CONCAT44(*(undefined4 *)(lVar15 + 0x1c),*(undefined4 *)(lVar15 + 0xc));
          }
          else {
            local_9c = *(undefined8 *)(lVar15 + 0x30);
            local_94 = (float)*(undefined8 *)(lVar15 + 0x38);
          }
        }
      }
      else {
        local_94 = *(float *)(puVar14 + 1);
        local_9c = *puVar14;
      }
    }
  }
  else {
    local_9c = *(undefined8 *)(param_4 + 0xc0);
    local_94 = *(float *)(param_4 + 200);
  }
  uVar12 = FUN_029f68c0(*DAT_055f18d0,&local_9c);
  puVar1 = PTR_DAT_04bb26a8;
  if ((uVar12 & 1) == 0) {
    return;
  }
  lVar15 = *(long *)PTR_DAT_04bb26a8;
  uVar18 = *(uint *)(FUN_0011e5e0 + lVar15);
  if ((uVar18 == 0xffffffff) || (*(long *)(lVar15 + 0x11e610) == 0)) {
    bVar19 = 0;
    bVar9 = false;
    uVar18 = 0;
  }
  else {
    if (*(uint *)(lVar15 + 0x11e608) <= uVar18) {
      uVar18 = 0;
    }
    uVar6 = *(uint *)(*(long *)(lVar15 + 0x11e610) + (long)(int)uVar18 * 0x80 + 8);
    uVar18 = uVar6 - 0x20;
    if ((int)uVar6 < 0x20) {
      uVar18 = uVar6;
    }
    uVar17 = 0x1ffbf;
    if ((int)uVar6 < 0x20) {
      uVar17 = 0xfffffff8;
    }
    uVar18 = uVar17 >> (ulong)(uVar18 & 0x1f) & 1;
    pbVar10 = (byte *)(*(long *)PTR_DAT_04bb28b0 + 0x1f60) + (ulong)uVar6 * 0x50;
    if (0x32 < uVar6) {
      pbVar10 = (byte *)(*(long *)PTR_DAT_04bb28b0 + 0x1f60);
    }
    bVar9 = pbVar10[1] == 1;
    bVar19 = *pbVar10 >> 5 & 1;
  }
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 == -1) {
LAB_029f8710:
    local_b0 = (char *)0x0;
    uStack_a8 = 0;
    local_b8 = (undefined *)0x0;
    lVar15 = *(long *)(lVar15 + 0xb4510);
    local_90 = 0;
    local_80 = *(undefined8 *)(lVar15 + 0x130);
    local_88 = 0;
    local_78 = (undefined4)*(undefined8 *)(lVar15 + 0x138);
    FUN_02a1e144(lVar15,&local_90,&local_9c,&local_80,0);
    FUN_02a1e4c0(local_90,local_88,lVar15,&local_b8);
    if (bVar9) {
      uVar6 = 0x19d598;
      uVar17 = 0xdb58;
    }
    else {
      uVar6 = 0x19d2b8;
      uVar17 = 0xd878;
    }
    uVar17 = uVar17 | 0x190000;
    if (bVar19 == 0) {
      uVar17 = uVar6;
    }
    lVar15 = *(long *)puVar1 + (ulong)uVar17;
    pbVar10 = (byte *)(lVar15 + 0x20);
    bVar19 = *pbVar10;
    fVar23 = *(float *)(lVar15 + 8);
    uVar11 = *(undefined8 *)(lVar15 + 0x18);
    fVar24 = (local_b0._4_4_ / 10.0) / fVar23;
  }
  else {
    puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8;
    if (0xff < (uint)(int)sVar8) {
      puVar3 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_029f8710;
    local_b0 = (char *)0x0;
    uStack_a8 = 0;
    local_b8 = (undefined *)0x0;
    lVar15 = *(long *)(lVar15 + 0xb4510);
    local_90 = 0;
    local_80 = *(undefined8 *)(lVar15 + 0x130);
    local_88 = 0;
    local_78 = (undefined4)*(undefined8 *)(lVar15 + 0x138);
    FUN_02a1e144(lVar15,&local_90,&local_9c,&local_80,0);
    FUN_02a1e4c0(local_90,local_88,lVar15,&local_b8);
    puVar3 = PTR_PTR_04bb4f70;
    fVar23 = 10.0;
    fVar20 = 10.0;
    fVar24 = local_b0._4_4_ / 10.0;
    lVar15 = *(long *)puVar1;
    if (!bVar9) {
      fVar23 = fVar24 / *(float *)(lVar15 + 0x19d2c0);
      (**(code **)(PTR_PTR_04bb4f70 + (ulong)*(byte *)(lVar15 + 0x19d2d8) * 8))
                (fVar23,(byte *)(lVar15 + 0x19d2d8),*(undefined8 *)(lVar15 + 0x19d2d0));
      fVar22 = fVar20;
      (**(code **)(puVar3 + (ulong)*(byte *)(lVar15 + 0x19d388) * 8))
                (fVar23,(byte *)(lVar15 + 0x19d388),*(undefined8 *)(lVar15 + 0x19d380));
      lVar15 = *(long *)puVar1;
      fVar24 = fVar24 / *(float *)(lVar15 + 0x19d880);
      fVar25 = fVar22;
      (**(code **)(puVar3 + (ulong)(byte)FUN_0019d894[lVar15 + 4] * 8))
                (fVar24,FUN_0019d894 + lVar15 + 4,*(undefined8 *)(lVar15 + 0x19d890));
      fVar23 = fVar25;
      (**(code **)(puVar3 + (ulong)*(byte *)(lVar15 + 0x19d948) * 8))
                (fVar24,(byte *)(lVar15 + 0x19d948),*(undefined8 *)(lVar15 + 0x19d940));
      lVar15 = *(long *)puVar1;
      pMVar2 = (MutexType *)(lVar15 + 0x89660);
      nn::os::LockMutex(pMVar2);
      iVar7 = *(int *)(lVar15 + 0x8963c);
      nn::os::UnlockMutex(pMVar2);
      lVar15 = *(long *)puVar1;
      fVar24 = 0.0;
      if (599 < iVar7) {
        fVar21 = ((float)iVar7 + -600.0) / 300.0;
        fVar23 = 1.0;
        if (fVar21 <= 1.0) {
          fVar23 = fVar21;
        }
        fVar24 = 0.0;
        if (0.0 <= fVar21) {
          fVar24 = fVar23;
        }
      }
      (**(code **)(puVar3 + (ulong)*(byte *)(lVar15 + 0x19dcd8) * 8))
                (fVar24,(byte *)(lVar15 + 0x19dcd8),*(undefined8 *)(lVar15 + 0x19dcd0));
      fVar21 = fVar23;
      (**(code **)(puVar3 + (ulong)*(byte *)(lVar15 + 0x19dd88) * 8))
                (fVar24,(byte *)(lVar15 + 0x19dd88),*(undefined8 *)(lVar15 + 0x19dd80));
      fVar23 = fVar20 * fVar23;
      fVar25 = fVar25 * fVar21;
      goto LAB_029f87f8;
    }
    lVar4 = 0x19db58;
    if (bVar19 == 0) {
      lVar4 = 0x19d598;
    }
    lVar15 = lVar15 + lVar4;
    pbVar10 = (byte *)(lVar15 + 0x20);
    bVar19 = *pbVar10;
    uVar11 = *(undefined8 *)(lVar15 + 0x18);
    fVar24 = fVar24 / *(float *)(lVar15 + 8);
  }
  puVar1 = PTR_PTR_04bb4f70;
  (**(code **)(PTR_PTR_04bb4f70 + (ulong)bVar19 * 8))(fVar24,pbVar10,uVar11);
  fVar22 = fVar23;
  (**(code **)(puVar1 + (ulong)*(byte *)(lVar15 + 0xd0) * 8))
            (fVar24,(byte *)(lVar15 + 0xd0),*(undefined8 *)(lVar15 + 200));
  fVar25 = 0.0;
LAB_029f87f8:
  lVar15 = 0;
  if (*(long *)PTR_DAT_04bc3ee8 != 0) {
    lVar15 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x20);
  }
  if ((0 < *(int *)(lVar15 + 0x10)) && (lVar15 = **(long **)(lVar15 + 0x18), lVar15 != 0)) {
    lVar4 = 0xf8;
    lVar5 = lVar15 + 0xf8;
    if (*(char *)(lVar15 + 0xe8) != '\0') {
      lVar4 = 0x158;
      lVar5 = lVar15 + 0x158;
    }
    fVar24 = *(float *)(lVar5 + 0x2c) +
             local_9c._4_4_ * *(float *)(lVar5 + 0x24) + (float)local_9c * *(float *)(lVar5 + 0x20)
             + local_94 * *(float *)(lVar5 + 0x28);
    if (*(char *)(lVar15 + 0xe0) != '\0') {
      fVar24 = 0.0;
    }
    fVar24 = atan2f(fVar24,*(float *)(lVar5 + 0xc) +
                           local_9c._4_4_ * *(float *)(lVar5 + 4) +
                           (float)local_9c * *(float *)(lVar15 + lVar4) +
                           local_94 * *(float *)(lVar5 + 8));
    FUN_03b4ecc0(0,&local_b8,(int)(long)(fVar24 * 6.8356525e+08) + 0x40000000,0,0);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_b0 = "LayerReverbFar";
    fVar20 = (local_b8._0_4_ + local_b8._0_4_) * (local_b8._0_4_ + local_b8._0_4_);
    fVar24 = 1.0;
    if (fVar20 <= 1.0) {
      fVar24 = fVar20;
    }
    fVar20 = 0.0;
    if (uVar18 == 0) {
      fVar20 = fVar24;
    }
    local_b8 = puVar1;
    FUN_03b3e860(fVar22,param_2,&local_b8);
    local_b0 = "LayerReverbNear";
    local_b8 = puVar1;
    FUN_03b3e860(fVar23,param_2,&local_b8);
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
      local_b0 = "LayerReverbNearYmm";
      local_b8 = puVar1;
      FUN_03b3e860(fVar25,param_2,&local_b8);
    }
    local_b0 = "PingpongSpread";
    local_b8 = puVar1;
    FUN_03b3e860(fVar22 * fVar20,param_2,&local_b8);
    local_b0 = "VoiceDelay";
    local_b8 = puVar1;
    FUN_03b3e860(0x3f4ccccd,param_2,&local_b8);
  }
  return;
}

