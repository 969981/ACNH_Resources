
void FUN_0391cd60(long param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  ushort uVar7;
  float fVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  uint local_1c8;
  undefined8 local_1c4;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined7 uStack_178;
  undefined1 local_171;
  undefined7 uStack_170;
  undefined1 auStack_168 [64];
  undefined8 local_128;
  undefined4 local_120;
  uint local_e4;
  short local_de;
  undefined2 local_d4 [2];
  uint local_d0;
  undefined1 local_6f;
  
  puVar9 = PTR_DAT_04bc1010;
  if ((*(byte *)(param_1 + 0x550) >> 5 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x1b0) == 0) goto LAB_0391d234;
  uVar2 = *(uint *)(param_1 + 1000);
  if (uVar2 != 0xffffffff) {
    lVar12 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar12 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar2 - *(ushort *)(lVar12 + 0x3da);
      if (*(uint *)(lVar12 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(lVar12 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
        goto LAB_0391ce40;
      }
    }
    if ((*(uint *)(lVar12 + 0x5c8) >> 5 & 1) == 0) {
      uVar10 = 0x112;
      uVar11 = 0x12;
    }
    else {
      uVar10 = 0x111;
      uVar11 = 0x11;
    }
    if ((*(uint *)(lVar12 + 800) & 2) != 0) {
      uVar11 = uVar10;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar11);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_0391ce40:
  FUN_038e4cec(local_d4);
  FUN_0390cee0(&local_1b8);
  local_1b8 = *(undefined4 *)(param_1 + 0x1b8);
  uStack_1b4 = *(undefined4 *)(param_1 + 0x1bc);
  local_1b0 = *(undefined8 *)(param_1 + 0x1c0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x1c8);
  local_1a0 = *(undefined4 *)(param_1 + 0x1d0);
  uStack_19c = *(undefined4 *)(param_1 + 0x1d4);
  local_198 = *(undefined8 *)(param_1 + 0x1d8);
  uStack_190 = *(undefined8 *)(param_1 + 0x1e0);
  uStack_170 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x1ff) >> 8);
  local_180 = *(undefined8 *)(param_1 + 0x1f0);
  uStack_178 = (undefined7)*(undefined8 *)(param_1 + 0x1f8);
  local_171 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x1f8) >> 0x38);
  local_188 = *(undefined8 *)(param_1 + 0x1e8);
  FUN_038fd1e0(auStack_168);
  FUN_038fd2f0(auStack_168,param_1 + 0x208);
  local_128 = *(undefined8 *)(param_1 + 0x248);
  local_120 = *(undefined4 *)(param_1 + 0x250);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&local_e4,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      local_e4 = local_e4 | 1;
    }
  } while (cVar3 != '\0');
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x368) = 0;
  uVar7 = *(ushort *)(param_1 + 0x110) >> (ulong)(*(uint *)(param_1 + 800) & 0x1f);
  *(undefined8 *)(param_1 + 0x370) = 0;
  *(undefined8 *)(param_1 + 0x378) = 0;
  *(undefined8 *)(param_1 + 0x380) = 0;
  *(undefined8 *)(param_1 + 0x388) = 0;
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  fVar17 = (float)uVar7;
  FUN_01560750(param_1 + 0x390,param_1 + 0xe0,*(uint *)(param_1 + 800),
               *(int *)(param_1 + 0x31c) + *(int *)(param_1 + 0x318) * 6);
  uVar2 = *(uint *)(param_1 + 1000);
  *(long *)(param_1 + 0x348) = param_1 + 0x390;
  if (uVar2 != 0xffffffff) {
    lVar12 = *(long *)puVar9;
    if ((*(uint *)(lVar12 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar2 - *(ushort *)(lVar12 + 0x3da);
      if (*(uint *)(lVar12 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(lVar12 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
        goto LAB_0391cfd4;
      }
    }
    if ((*(uint *)(lVar12 + 0x5c8) >> 5 & 1) == 0) {
      uVar10 = 0x112;
      uVar11 = 0x12;
    }
    else {
      uVar10 = 0x111;
      uVar11 = 0x11;
    }
    if ((*(uint *)(lVar12 + 800) & 2) != 0) {
      uVar11 = uVar10;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar11);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_0391cfd4:
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(float *)(param_1 + 0x340) = fVar17;
  *(float *)(param_1 + 0x344) = fVar17;
  *(float *)(param_1 + 0x330) = fVar17;
  *(float *)(param_1 + 0x334) = fVar17;
  (**(code **)(*(long *)(param_1 + 0x328) + 0x38))(param_1 + 0x328,param_2);
  local_d4[0] = 0;
  local_6f = 0;
  local_d0 = local_d0 & 0xfffffffe;
  FUN_038e4d90(local_d4,param_2);
  local_1d0 = 0xff7fffffff7fffff;
  local_1e0 = PTR_DAT_04bd0f08 + 0x10;
  local_1d8 = (undefined1 *)0x7f7fffff7f7fffff;
  local_1c8 = *(uint *)PTR_DAT_04bd0ea8;
  local_1c4 = 0x3f80000000000000;
  if (local_1c8 < 6) {
    if ((1 << (ulong)(local_1c8 & 0x1f) & 0x39U) == 0) {
      fVar17 = *(float *)(param_1 + 0x334);
      fVar14 = *(float *)(param_1 + 0x330);
    }
    else {
      fVar17 = *(float *)(param_1 + 0x330);
      fVar14 = *(float *)(param_1 + 0x334);
    }
    fVar16 = fVar17;
    fVar8 = 0.0;
    if (fVar17 <= 0.0) {
      fVar16 = 0.0;
      fVar8 = fVar17;
    }
    fVar15 = fVar14;
    fVar17 = 0.0;
    if (fVar14 <= 0.0) {
      fVar15 = 0.0;
      fVar17 = fVar14;
    }
    local_1d8 = (undefined1 *)CONCAT44(fVar17,fVar8);
    local_1d0 = CONCAT44(fVar15,fVar16);
  }
  FUN_038e77e4(&local_1e0,param_2,param_1 + 0x328);
  local_1e0 = &DAT_3f8000003f800000;
  local_1d8 = &DAT_3f8000003f800000;
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 6) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28);
  }
  FUN_03907810(uVar13,param_2);
  FUN_039466e0(param_2,uVar13,&local_1b8,&UNK_041b37ec + (param_3 & 1) * 0x30,PTR_DAT_04bbd558,
               &local_1e0);
  uVar2 = *(uint *)(param_1 + 1000);
  if (uVar2 != 0xffffffff) {
    lVar12 = *(long *)puVar9;
    if ((*(uint *)(lVar12 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar2 - *(ushort *)(lVar12 + 0x3da);
      if (*(uint *)(lVar12 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(lVar12 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
        goto LAB_0391d1bc;
      }
    }
    if ((*(uint *)(lVar12 + 0x5c8) >> 5 & 1) == 0) {
      uVar10 = 0x112;
      uVar11 = 0x12;
    }
    else {
      uVar10 = 0x111;
      uVar11 = 0x11;
    }
    if ((*(uint *)(lVar12 + 800) & 2) != 0) {
      uVar11 = uVar10;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar11);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_0391d1bc:
  if (local_de != -1) {
    lVar12 = *(long *)puVar9;
    nn::os::LockMutex((MutexType *)(lVar12 + 0x580));
    uVar2 = (int)local_de - (uint)*(ushort *)(lVar12 + 0x5c0);
    if (*(uint *)(lVar12 + 0x5a0) <= uVar2) {
      uVar2 = 0;
    }
    lVar1 = *(long *)(lVar12 + 0x5a8) + (long)(int)uVar2 * 0x80;
    sVar5 = *(short *)(lVar1 + 0x76) + -1;
    *(short *)(lVar1 + 0x76) = sVar5;
    if (sVar5 == 0) {
      *(short *)(lVar12 + 0x5c4) = *(short *)(lVar12 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar12 + 0x580));
    local_de = -1;
  }
  FUN_038fd0e0(auStack_168);
LAB_0391d234:
  *(undefined8 *)(param_1 + 0x318) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 800) = 0xffffffff;
  return;
}

