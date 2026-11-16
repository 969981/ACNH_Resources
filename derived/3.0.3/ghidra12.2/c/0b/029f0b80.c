
void FUN_029f0b80(long param_1)

{
  long *plVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  undefined8 *puVar8;
  undefined2 uVar9;
  uint uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  float local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar13 = *(long *)(param_1 + 0x16d0);
  pcVar2 = (char *)(param_1 + 0x16b8);
  if ((lVar13 == 0) || (*(int *)(param_1 + 0x16d8) != *(int *)(lVar13 + 0x10))) {
    uVar16 = *(undefined4 *)(param_1 + 0x16c0);
    *pcVar2 = '\0';
    bVar7 = *(byte *)(param_1 + 0x16b9);
    uVar9 = *(undefined2 *)(param_1 + 0x16ba);
    uVar12 = *(uint *)(param_1 + 0x16bc);
  }
  else {
    *pcVar2 = '\x01';
    bVar7 = *(byte *)(lVar13 + 0x1d0) >> 5 & 1;
    *(byte *)(param_1 + 0x16b9) = bVar7;
    uVar9 = *(undefined2 *)(lVar13 + 0x1d2);
    *(undefined2 *)(param_1 + 0x16ba) = uVar9;
    uVar12 = (uint)*(ushort *)(lVar13 + 0xe8);
    *(uint *)(param_1 + 0x16bc) = (uint)*(ushort *)(lVar13 + 0xe8);
    uVar16 = *(undefined4 *)(*(long *)(lVar13 + 0xd8) + 0x38);
    *(undefined4 *)(param_1 + 0x16c0) = uVar16;
    *(undefined8 *)(param_1 + 0x16c8) = *(undefined8 *)(lVar13 + 0x1b8);
  }
  local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar7);
  local_80 = *(undefined8 *)(param_1 + 0x1738);
  lVar13 = param_1 + 0x18;
  local_90 = (undefined *)CONCAT44(uVar12,CONCAT22(uVar9,(undefined2)local_90));
  local_88 = (undefined8 *)CONCAT44(local_88._4_4_,uVar16);
  uStack_78 = 0;
  FUN_02a06880(lVar13,&local_90);
  nn::os::LockMutex((MutexType *)(param_1 + 0x1700));
  if (*(long *)(param_1 + 0x1728) != param_1 + 0x1720) {
    lVar14 = (long)*(int *)(param_1 + 0x1734);
    lVar15 = *(long *)(param_1 + 0x1728) - lVar14;
    do {
      local_90 = (undefined *)
                 CONCAT44(*(undefined4 *)(lVar15 + 0x2c),*(undefined4 *)(lVar15 + 0x1c));
      local_88 = (undefined8 *)CONCAT44(local_88._4_4_,*(undefined4 *)(lVar15 + 0x3c));
      FUN_02a06e90(*(undefined4 *)(lVar15 + 0x40),lVar13,&local_90,0,lVar15 + 0x10,0);
      lVar15 = *(long *)(lVar15 + lVar14 + 8) - lVar14;
    } while (lVar15 != (param_1 + 0x1720) - lVar14);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1700));
  puVar5 = PTR_DAT_04bb26a8;
  lVar15 = *(long *)PTR_DAT_04bb26a8;
  if (*(long *)(*(long *)(lVar15 + 0xb4510) + 0x50) == 0) {
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar19 = 0.0;
    cVar4 = *pcVar2;
  }
  else {
    fVar19 = *(float *)(lVar15 + 0xb44d4);
    fVar18 = *(float *)(lVar15 + 0xb44d8);
    fVar17 = *(float *)(lVar15 + 0xb44dc);
    cVar4 = *pcVar2;
  }
  if (cVar4 != '\0') {
    local_80 = CONCAT44(DAT_055f0034,0x3c23d70a);
    local_88 = (undefined8 *)CONCAT44(DAT_055f0034,0x3c23d70a);
    local_90 = (undefined *)CONCAT44(DAT_055f0034,0x3c23d70a);
    FUN_02a069d0(lVar13,&local_90);
  }
  if (*(int *)(param_1 + 0x16b4) == 0) {
    fVar18 = 3.4028235e+38;
  }
  else {
    local_ac = *(undefined4 *)(param_1 + 0x9c);
    uStack_a8 = *(undefined4 *)(param_1 + 0xa0);
    local_98 = 0.0;
    local_a4 = *(undefined4 *)(param_1 + 0xa4);
    local_a0 = 0;
    lVar13 = *(long *)(param_1 + 0x10);
    if (lVar13 != 0) {
      *(undefined4 *)(lVar13 + 0xc0) = local_ac;
      *(undefined4 *)(lVar13 + 0xc4) = uStack_a8;
      *(undefined4 *)(lVar13 + 200) = local_a4;
      *(ushort *)(lVar13 + 0x98) = *(ushort *)(lVar13 + 0x98) | 0x200;
      *(ushort *)(lVar13 + 0x9a) = *(ushort *)(lVar13 + 0x9a) | 0x200;
    }
    lVar13 = *(long *)(*(long *)puVar5 + 0xb4510);
    local_90 = *(undefined **)(lVar13 + 0x130);
    local_88 = (undefined8 *)CONCAT44(local_88._4_4_,(int)*(undefined8 *)(lVar13 + 0x138));
    FUN_02a1e144(lVar13,&local_a0,&local_ac,&local_90,0);
    fVar18 = (float)NEON_fminnm((local_a0._4_4_ - fVar18) * (local_a0._4_4_ - fVar18) +
                                ((float)local_a0 - fVar19) * ((float)local_a0 - fVar19) +
                                (local_98 - fVar17) * (local_98 - fVar17),0x7f7fffff);
  }
  fVar19 = SQRT(fVar18);
  if (NAN(fVar19)) {
    fVar19 = sqrtf(fVar18);
  }
  lVar13 = *(long *)puVar5;
  uVar12 = *(uint *)(FUN_0011e5e0 + lVar13);
  if ((uVar12 == 0xffffffff) || (*(long *)(lVar13 + 0x11e610) == 0)) {
    bVar6 = false;
    if (*(char *)(param_1 + 8) == '\0') goto LAB_029f0ec0;
  }
  else {
    if (*(uint *)(lVar13 + 0x11e608) <= uVar12) {
      uVar12 = 0;
    }
    uVar3 = *(uint *)(*(long *)(lVar13 + 0x11e610) + (long)(int)uVar12 * 0x80 + 8);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar3);
    uVar12 = uVar3 - 0x20;
    if ((int)uVar3 < 0x20) {
      uVar12 = uVar3;
    }
    uVar10 = 0x1ffbf;
    if ((int)uVar3 < 0x20) {
      uVar10 = 0xfffffff8;
    }
    uVar10 = uVar10 & 1 << (ulong)(uVar12 & 0x1f);
    bVar6 = uVar10 != 0;
    if (*(char *)(param_1 + 8) == '\0') {
LAB_029f0ec0:
      if (22.5 <= fVar19) {
        return;
      }
      if (bVar6) {
        return;
      }
      uVar16 = FUN_006bd550(&DAT_04068bd5,0);
      lVar13 = *(long *)puVar5;
      plVar1 = (long *)(lVar13 + 0xb3b78);
      nn::os::LockMutex((MutexType *)(lVar13 + 0xb3b58));
      if (*(int *)(lVar13 + 0xb3b88) < *(int *)(lVar13 + 0xb3ba0)) {
        puVar8 = *(undefined8 **)(lVar13 + 0xb3b90);
        if (puVar8 != (undefined8 *)0x0) {
          *(undefined8 *)(lVar13 + 0xb3b90) = *puVar8;
        }
        *(undefined2 *)puVar8 = 0;
        plVar11 = puVar8 + 2;
        *plVar11 = 0;
        *(undefined1 *)((long)puVar8 + 2) = 0;
        *(undefined4 *)((long)puVar8 + 4) = uVar16;
        *(undefined4 *)(puVar8 + 1) = 0x3f800000;
        puVar8[3] = 0;
        lVar15 = *plVar1;
        *plVar1 = (long)plVar11;
        puVar8[3] = plVar1;
        *plVar11 = lVar15;
        if (lVar15 != 0) {
          *(long **)(lVar15 + 8) = plVar11;
        }
        *(int *)(lVar13 + 0xb3b88) = *(int *)(lVar13 + 0xb3b88) + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar13 + 0xb3b58));
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
    if (uVar10 != 0) goto LAB_029f0e94;
  }
  if (fVar19 < 22.5) {
    return;
  }
LAB_029f0e94:
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_88 = &DAT_04068bd5;
  FUN_02a55844(&local_90,0);
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}

