
void FUN_029e57f0(long param_1)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  undefined8 *puVar17;
  undefined4 uVar18;
  float __x;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  float local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  float local_90;
  
  lVar13 = *(long *)(param_1 + 0x16d0);
  pcVar2 = (char *)(param_1 + 0x16b8);
  if ((lVar13 == 0) || (*(int *)(param_1 + 0x16d8) != *(int *)(lVar13 + 0x10))) {
    uVar18 = *(undefined4 *)(param_1 + 0x16c0);
    *pcVar2 = '\0';
    bVar8 = *(byte *)(param_1 + 0x16b9);
    uVar10 = *(undefined2 *)(param_1 + 0x16ba);
    uVar12 = *(uint *)(param_1 + 0x16bc);
  }
  else {
    *pcVar2 = '\x01';
    bVar8 = *(byte *)(lVar13 + 0x1d0) >> 5 & 1;
    *(byte *)(param_1 + 0x16b9) = bVar8;
    uVar10 = *(undefined2 *)(lVar13 + 0x1d2);
    *(undefined2 *)(param_1 + 0x16ba) = uVar10;
    uVar12 = (uint)*(ushort *)(lVar13 + 0xe8);
    *(uint *)(param_1 + 0x16bc) = (uint)*(ushort *)(lVar13 + 0xe8);
    uVar18 = *(undefined4 *)(*(long *)(lVar13 + 0xd8) + 0x38);
    *(undefined4 *)(param_1 + 0x16c0) = uVar18;
    *(undefined8 *)(param_1 + 0x16c8) = *(undefined8 *)(lVar13 + 0x1b8);
  }
  local_c8 = 0;
  local_e0 = (undefined *)CONCAT71(local_e0._1_7_,bVar8);
  local_e0 = (undefined *)CONCAT44(uVar12,CONCAT22(uVar10,(undefined2)local_e0));
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar18);
  if ((*(long *)PTR_DAT_04bb38d0 == 0) || (uVar6 = FUN_008a6b24(), (uVar6 & 1) == 0)) {
    lVar13 = 0x1738;
  }
  else {
    lVar13 = 0x1740;
  }
  local_d0 = *(undefined8 *)(param_1 + lVar13);
  FUN_02a06880(param_1 + 0x18,&local_e0);
  puVar4 = PTR_DAT_04bb26a8;
  lVar13 = *(long *)PTR_DAT_04bb26a8;
  if (*(char *)(lVar13 + 0xb3889) == '\0') {
    nn::os::LockMutex((MutexType *)(param_1 + 0x1700));
    if (*(long *)(param_1 + 0x1728) != param_1 + 0x1720) {
      lVar14 = (long)*(int *)(param_1 + 0x1734);
      iVar16 = *(int *)(param_1 + 0x30);
      puVar17 = (undefined8 *)((ulong)&local_e0 | 4);
      lVar13 = *(long *)(param_1 + 0x1728) - lVar14;
      do {
        local_98 = *(undefined8 *)(lVar13 + 0x1c);
        uVar18 = *(undefined4 *)(lVar13 + 0x18);
        local_90 = *(float *)(lVar13 + 0x24);
        local_a8 = *(undefined8 *)(lVar13 + 0x1c);
        local_a0 = *(undefined4 *)(lVar13 + 0x24);
        lVar7 = *(long *)(*(long *)puVar4 + 0xb4510);
        local_e0 = *(undefined **)(lVar7 + 0x130);
        local_d8 = (undefined *)CONCAT44(local_d8._4_4_,(int)*(undefined8 *)(lVar7 + 0x138));
        FUN_02a1e144(lVar7,&local_a8,&local_98,&local_e0,0);
        if (0 < iVar16) {
          iVar15 = 0;
          uVar12 = 0;
          do {
            local_e0 = (undefined *)CONCAT44(local_e0._4_4_,uVar18);
            *(undefined4 *)(puVar17 + 2) = 0;
            *puVar17 = 0;
            puVar17[1] = 0;
            local_c8 = 0;
            local_c0 = local_a8;
            local_b8 = local_a0;
            local_b4 = local_98;
            local_ac = local_90;
            uVar5 = FUN_02a08450(param_1 + 0x38,&local_e0);
            iVar16 = *(int *)(param_1 + 0x30);
            iVar15 = iVar15 + 1;
            uVar12 = uVar5 | uVar12;
          } while (iVar15 < iVar16);
          if ((uVar12 & 1) != 0) {
            *(int *)(param_1 + 0x16b4) = *(int *)(param_1 + 0x16b4) + 1;
          }
        }
        lVar13 = *(long *)(lVar13 + lVar14 + 8) - lVar14;
      } while (lVar13 != (param_1 + 0x1720) - lVar14);
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x1700));
    lVar13 = *(long *)puVar4;
  }
  if (*(long *)(*(long *)(lVar13 + 0xb4510) + 0x50) == 0) {
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    cVar3 = *pcVar2;
  }
  else {
    fVar21 = *(float *)(lVar13 + 0xb44d4);
    fVar20 = *(float *)(lVar13 + 0xb44d8);
    fVar19 = *(float *)(lVar13 + 0xb44dc);
    cVar3 = *pcVar2;
  }
  if (cVar3 != '\0') {
    local_d0 = CONCAT44(DAT_055ee384,0x3c23d70a);
    local_d8 = (undefined *)CONCAT44(DAT_055ee384,0x3c23d70a);
    local_e0 = (undefined *)CONCAT44(DAT_055ee384,0x3c23d70a);
    FUN_02a069d0(param_1 + 0x18,&local_e0);
    lVar13 = *(long *)puVar4;
  }
  uVar12 = *(uint *)(FUN_0011e5e0 + lVar13);
  if ((uVar12 == 0xffffffff) || (*(long *)(lVar13 + 0x11e610) == 0)) {
    __x = 3.4028235e+38;
  }
  else {
    if (*(uint *)(lVar13 + 0x11e608) <= uVar12) {
      uVar12 = 0;
    }
    __x = 3.4028235e+38;
    if ((-1 < *(int *)(*(long *)(lVar13 + 0x11e610) + (long)(int)uVar12 * 0x80 + 0x14)) &&
       (*(int *)(param_1 + 0x16b4) != 0)) {
      uVar18 = *(undefined4 *)(param_1 + 0xa0);
      local_a8 = *(undefined8 *)(param_1 + 0x9c);
      local_a0 = *(undefined4 *)(param_1 + 0xa4);
      local_90 = 0.0;
      lVar14 = *(long *)(param_1 + 0x10);
      local_98 = 0;
      if (lVar14 != 0) {
        *(undefined4 *)(lVar14 + 0xc0) = *(undefined4 *)(param_1 + 0x9c);
        *(undefined4 *)(lVar14 + 0xc4) = uVar18;
        *(undefined4 *)(lVar14 + 200) = local_a0;
        *(ushort *)(lVar14 + 0x98) = *(ushort *)(lVar14 + 0x98) | 0x200;
        *(ushort *)(lVar14 + 0x9a) = *(ushort *)(lVar14 + 0x9a) | 0x200;
      }
      lVar13 = *(long *)(lVar13 + 0xb4510);
      local_e0 = *(undefined **)(lVar13 + 0x130);
      local_d8 = (undefined *)CONCAT44(local_d8._4_4_,(int)*(undefined8 *)(lVar13 + 0x138));
      FUN_02a1e144(lVar13,&local_98,&local_a8,&local_e0,0);
      __x = (float)NEON_fminnm((local_98._4_4_ - fVar20) * (local_98._4_4_ - fVar20) +
                               ((float)local_98 - fVar21) * ((float)local_98 - fVar21) +
                               (local_90 - fVar19) * (local_90 - fVar19),0x7f7fffff);
    }
  }
  fVar20 = SQRT(__x);
  if (NAN(fVar20)) {
    fVar20 = sqrtf(__x);
    cVar3 = *(char *)(param_1 + 8);
  }
  else {
    cVar3 = *(char *)(param_1 + 8);
  }
  if (cVar3 == '\0') {
    if (60.0 <= fVar20) {
      return;
    }
    uVar18 = FUN_006bd550(&DAT_0406df8d,0);
    lVar13 = *(long *)puVar4;
    plVar1 = (long *)(lVar13 + 0xb3b78);
    nn::os::LockMutex((MutexType *)(lVar13 + 0xb3b58));
    if (*(int *)(lVar13 + 0xb3b88) < *(int *)(lVar13 + 0xb3ba0)) {
      puVar17 = *(undefined8 **)(lVar13 + 0xb3b90);
      if (puVar17 != (undefined8 *)0x0) {
        *(undefined8 *)(lVar13 + 0xb3b90) = *puVar17;
      }
      *(undefined2 *)puVar17 = 0;
      plVar11 = puVar17 + 2;
      *plVar11 = 0;
      *(undefined1 *)((long)puVar17 + 2) = 0;
      *(undefined4 *)((long)puVar17 + 4) = uVar18;
      *(undefined4 *)(puVar17 + 1) = 0x3f800000;
      puVar17[3] = 0;
      lVar14 = *plVar1;
      *plVar1 = (long)plVar11;
      puVar17[3] = plVar1;
      *plVar11 = lVar14;
      if (lVar14 != 0) {
        *(long **)(lVar14 + 8) = plVar11;
      }
      *(int *)(lVar13 + 0xb3b88) = *(int *)(lVar13 + 0xb3b88) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar13 + 0xb3b58));
    uVar9 = 1;
  }
  else {
    if (fVar20 < 60.0) {
      return;
    }
    local_e0 = PTR_DAT_04bb2020 + 0x10;
    local_d8 = &DAT_0406df8d;
    FUN_02a55844(&local_e0,0);
    uVar9 = 0;
  }
  *(undefined1 *)(param_1 + 8) = uVar9;
  return;
}

