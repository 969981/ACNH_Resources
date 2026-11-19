
void FUN_039020b4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 **ppuVar3;
  ushort uVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_3a0 [80];
  undefined1 auStack_350 [138];
  short local_2c6;
  undefined1 *local_2c0;
  undefined1 auStack_2b8 [16];
  undefined *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  uint local_290;
  undefined8 local_28c;
  undefined *local_280;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  undefined2 local_25c [2];
  uint local_258;
  undefined *local_1e8;
  undefined1 local_1e0 [8];
  undefined8 local_1d8;
  undefined8 local_130;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined2 local_ef;
  long local_e8;
  undefined8 local_28;
  
  local_1e8 = PTR_DAT_04bd0d18 + 0x10;
  FUN_00347d68(local_1e0);
  puVar10 = PTR_DAT_04bc1010;
  local_1e0[0] = 2;
  local_1d8 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x48);
  local_130 = *(undefined8 *)(param_2 + 0xb8);
  local_f0 = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_1e8 = PTR_DAT_04bd0f88 + 0x10;
  local_ef = 4;
  uVar5 = *(uint *)(*(long *)(param_1 + 0x20) + 0x58);
  if (uVar5 != 0xffffffff) {
    lVar13 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar13 + 0x5c8) >> 3 & 1) == 0) {
      uVar9 = uVar5 - *(ushort *)(lVar13 + 0x3da);
      if (*(uint *)(lVar13 + 0x368) <= uVar9) {
        uVar9 = 0;
      }
      if ((*(uint *)(*(long *)(lVar13 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) == 0) {
        local_e8 = 1L << ((ulong)uVar5 & 0x3f);
        goto LAB_039021d8;
      }
    }
    if ((*(uint *)(lVar13 + 0x5c8) >> 5 & 1) == 0) {
      uVar11 = 0x112;
      uVar12 = 0x12;
    }
    else {
      uVar11 = 0x111;
      uVar12 = 0x11;
    }
    if ((*(uint *)(lVar13 + 800) & 2) != 0) {
      uVar12 = uVar11;
    }
    (**(code **)PTR_DAT_04bcf2a8)(local_130,uVar12);
    local_e8 = 0;
  }
LAB_039021d8:
  FUN_038e4cec(local_25c);
  local_25c[0] = 0;
  local_258 = local_258 & 0xfffffffe;
  FUN_038e4d90(local_25c,&local_1e8);
  local_298 = 0xff7fffffff7fffff;
  lVar13 = *(long *)(param_1 + 0x20);
  uVar6 = *(ushort *)(lVar13 + 0x38);
  local_270 = (float)*(int *)(param_3 + 0x4c);
  uVar7 = *(ushort *)(lVar13 + 0x3a);
  fVar15 = (float)*(int *)(param_3 + 0x54);
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  local_26c = (float)*(int *)(param_3 + 0x50);
  uVar4 = uVar7;
  if (*(short *)(lVar13 + 0x42) != 3) {
    uVar4 = 1;
  }
  fVar16 = (float)*(int *)(param_3 + 0x58);
  local_278 = (float)uVar6;
  if (uVar4 <= uVar7) {
    uVar4 = uVar7;
  }
  local_280 = PTR_DAT_04bc95a8 + 0x10;
  local_274 = (float)uVar4;
  local_290 = *(uint *)PTR_DAT_04bd0ea8;
  local_268 = fVar15;
  if (fVar15 <= local_270) {
    local_268 = local_270;
    local_270 = fVar15;
  }
  local_2a8 = PTR_DAT_04bd0f08 + 0x10;
  local_2a0 = 0x7f7fffff7f7fffff;
  local_28c = 0x3f80000000000000;
  local_264 = fVar16;
  if (fVar16 <= local_26c) {
    local_264 = local_26c;
    local_26c = fVar16;
  }
  if (local_290 < 6) {
    if ((1 << (ulong)(local_290 & 0x1f) & 0x39U) == 0) {
      fVar15 = local_278;
      fVar16 = local_274;
    }
    else {
      fVar15 = local_274;
      fVar16 = local_278;
    }
    local_2a0 = 0;
    local_298 = CONCAT44(fVar15,fVar16);
  }
  FUN_038e77e4(&local_2a8,&local_1e8,&local_280);
  (**(code **)PTR_DAT_04bcf220)(auStack_2b8);
  (**(code **)PTR_DAT_04bcf820)(auStack_2b8,0x38);
  puVar2 = (undefined8 *)(param_3 + 0x28) + *(uint *)(param_3 + 0x20);
  if (2 < *(uint *)(param_3 + 0x20)) {
    puVar2 = (undefined8 *)(param_3 + 0x28);
  }
  local_28 = *puVar2;
  ppuVar3 = (undefined1 **)0x0;
  if (DAT_05ae7948 != '\0') {
    ppuVar3 = &local_2c0;
  }
  local_2c0 = auStack_2b8;
  (**(code **)PTR_DAT_04bcf1e0)(local_130,1,&local_28,ppuVar3,0,0);
  FUN_0390d120(auStack_3a0,lVar13 + 8);
  uVar14 = *(undefined8 *)
            (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x18);
  FUN_03907810(uVar14,&local_1e8);
  FUN_03949e90(&local_1e8,uVar14,auStack_3a0,&local_2a8,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
  if (local_2c6 != -1) {
    lVar13 = *(long *)puVar10;
    nn::os::LockMutex((MutexType *)(lVar13 + 0x580));
    uVar5 = (int)local_2c6 - (uint)*(ushort *)(lVar13 + 0x5c0);
    if (*(uint *)(lVar13 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar1 = *(long *)(lVar13 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar8 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar8;
    if (sVar8 == 0) {
      *(short *)(lVar13 + 0x5c4) = *(short *)(lVar13 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar13 + 0x580));
    local_2c6 = -1;
  }
  FUN_038fd0e0(auStack_350);
  FUN_038f43d0(&local_1e8);
  return;
}

