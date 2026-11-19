
float * FUN_03b33850(long param_1,long param_2,long param_3)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  float fVar8;
  undefined *puVar9;
  float *pfVar10;
  bool bVar11;
  undefined4 uVar12;
  long lVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  float *pfVar19;
  long lVar20;
  long *plVar21;
  float fVar22;
  undefined2 uVar23;
  undefined2 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_22c;
  float fStack_228;
  float local_224;
  float fStack_220;
  uint local_21c;
  uint local_218;
  undefined *local_1a8;
  char *pcStack_1a0;
  undefined1 auStack_158 [116];
  undefined2 local_e4;
  undefined1 local_e2;
  undefined2 local_e1;
  undefined1 local_df;
  undefined4 local_d8;
  uint local_d4;
  byte local_d0;
  short local_ce;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined8 local_ac;
  float local_a0;
  float fStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  
  plVar17 = *(long **)(param_3 + 0x1a0);
  if (plVar17 == (long *)0x0) {
    return (float *)0x0;
  }
  if (*(char *)(param_1 + 0x15e) < '\0') {
    return (float *)0x0;
  }
  fVar27 = *(float *)(param_2 + 0x70) * *(float *)(param_2 + 0x50);
  lVar16 = *(long *)(*plVar17 + 0x20);
  uVar3 = *(ushort *)(lVar16 + 0x38);
  uVar4 = *(ushort *)(lVar16 + 0x3a);
  fVar28 = -(*(float *)(param_2 + 0x70) * *(float *)(param_2 + 0x50));
  if (0.0 <= fVar27) {
    fVar28 = fVar27;
  }
  fVar22 = *(float *)(param_2 + 0x84) * *(float *)(param_2 + 0x54);
  fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x158));
  fVar27 = -(*(float *)(param_2 + 0x84) * *(float *)(param_2 + 0x54));
  if (0.0 <= fVar22) {
    fVar27 = fVar22;
  }
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  fVar28 = fVar28 + fVar25;
  uVar1 = uVar4;
  if (*(short *)(lVar16 + 0x42) != 3) {
    uVar1 = 1;
  }
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  lVar13 = *(long *)(param_3 + 0xc0);
  fVar22 = (fVar28 * (float)uVar3) / *(float *)(lVar13 + 0x28);
  if (fVar22 == 0.0) {
    return (float *)0x0;
  }
  fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0x15a));
  fVar27 = fVar27 + fVar25;
  fVar25 = (fVar27 * (float)uVar1) / *(float *)(lVar13 + 0x2c);
  if (fVar25 == 0.0) {
    return (float *)0x0;
  }
  uVar2 = *(uint *)(lVar16 + 0x58);
  if (uVar2 != 0xffffffff) {
    lVar15 = *(long *)PTR_DAT_04bc1010;
    lVar18 = plVar17[4];
    if ((*(uint *)(lVar15 + 0x5c8) >> 3 & 1) == 0) {
      uVar7 = uVar2 - *(ushort *)(lVar15 + 0x3da);
      if (*(uint *)(lVar15 + 0x368) <= uVar7) {
        uVar7 = 0;
      }
      if ((*(uint *)(*(long *)(lVar15 + 0x370) + (long)(int)uVar7 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar18 + 0x100) = *(ulong *)(lVar18 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
        goto LAB_03b339e4;
      }
    }
    if ((*(uint *)(lVar15 + 0x5c8) >> 5 & 1) == 0) {
      uVar12 = 0x112;
      uVar14 = 0x12;
    }
    else {
      uVar12 = 0x111;
      uVar14 = 0x11;
    }
    if ((*(uint *)(lVar15 + 800) & 2) != 0) {
      uVar14 = uVar12;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar18 + 0xb8),uVar14);
    *(undefined8 *)(lVar18 + 0x100) = 0;
  }
LAB_03b339e4:
  lVar18 = plVar17[4];
  lVar20 = *(long *)PTR_DAT_04bbd510;
  uVar23 = *(undefined2 *)(lVar16 + 0xa0);
  local_1a8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_1a0 = "FrameBufferMultiFilter";
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar15 == 0) {
    local_21c = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_21c = (int)lVar15 - 1;
  }
  pfVar10 = (float *)FUN_03948e10(lVar20,lVar18,lVar20 + (long)(int)local_21c * 0x290 + 0x10,
                                  &local_1a8,uVar23,1,(int)fVar22,(int)fVar25,1,0,1,0,1,0,0,0);
  FUN_01560750(param_1 + 0x78,pfVar10,*(undefined1 *)(param_1 + 0x136),
               *(undefined2 *)(param_1 + 0x134));
  plVar21 = (long *)(param_1 + 0x10);
  *(float *)(param_1 + 0x18) = fVar28;
  *(float *)(param_1 + 0x1c) = fVar27;
  fVar26 = fVar22;
  fVar8 = 0.0;
  if (fVar22 <= 0.0) {
    fVar26 = 0.0;
    fVar8 = fVar22;
  }
  fVar22 = 0.0;
  if (fVar25 <= 0.0) {
    fVar22 = fVar25;
  }
  *(float *)(param_1 + 0x20) = fVar8;
  *(float *)(param_1 + 0x24) = fVar22;
  *(float *)(param_1 + 0x28) = fVar26;
  *(float *)(param_1 + 0x2c) = fVar25;
  (**(code **)(*plVar21 + 0x38))(plVar21,plVar17[4]);
  local_b8 = 0xff7fffffff7fffff;
  local_c8 = PTR_DAT_04bd0f08 + 0x10;
  local_c0 = 0x7f7fffff7f7fffff;
  local_b0 = *(uint *)PTR_DAT_04bd0ea8;
  local_ac = 0x3f80000000000000;
  if (local_b0 < 6) {
    if ((1 << (ulong)(local_b0 & 0x1f) & 0x39U) == 0) {
      uVar23 = (undefined2)*(undefined4 *)(param_1 + 0x18);
      uVar24 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x18) >> 0x10);
      fVar22 = *(float *)(param_1 + 0x1c);
    }
    else {
      fVar22 = *(float *)(param_1 + 0x18);
      uVar23 = (undefined2)*(undefined4 *)(param_1 + 0x1c);
      uVar24 = (undefined2)((uint)*(undefined4 *)(param_1 + 0x1c) >> 0x10);
    }
    fVar25 = 0.0;
    if (fVar22 <= 0.0) {
      fVar25 = fVar22;
    }
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    uVar14 = 0;
    if ((float)CONCAT22(uVar24,uVar23) == 0.0 || (float)CONCAT22(uVar24,uVar23) < 0.0) {
      uVar14 = CONCAT22(uVar24,uVar23);
    }
    if ((float)CONCAT22(uVar24,uVar23) <= 0.0) {
      uVar23 = 0;
      uVar24 = 0;
    }
    local_c0 = CONCAT44(uVar14,fVar25);
    local_b8 = CONCAT44(CONCAT22(uVar24,uVar23),fVar22);
  }
  FUN_038e77e4(&local_c8,plVar17[4],plVar21);
  FUN_0390d120(&local_1a8,lVar16 + 8);
  puVar9 = PTR_DAT_04bc1010;
  local_d8 = 0x1040302;
  local_d0 = local_d0 | 2;
  do {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(&local_d4,0x10);
    if (bVar11) {
      cVar5 = ExclusiveMonitorsStatus();
      local_d4 = local_d4 | 1;
    }
  } while (cVar5 != '\0');
  local_e4 = 0x101;
  local_e2 = 1;
  do {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(&local_d4,0x10);
    if (bVar11) {
      cVar5 = ExclusiveMonitorsStatus();
      local_d4 = local_d4 & 0xfffffffb | 4;
    }
  } while (cVar5 != '\0');
  local_e1 = 0x707;
  local_df = 7;
  do {
    cVar5 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(&local_d4,0x10);
    if (bVar11) {
      cVar5 = ExclusiveMonitorsStatus();
      local_d4 = local_d4 & 0xfffffffd | 2;
    }
  } while (cVar5 != '\0');
  FUN_038e4cec(&local_21c);
  local_21c = local_21c & 0xffffff00;
  local_218 = local_218 & 0xfffffffe;
  FUN_038e4d90(&local_21c,plVar17[4]);
  uVar4 = *(ushort *)(lVar16 + 0x3a);
  uVar3 = *(ushort *)(lVar16 + 0x38);
  fStack_9c = fVar27 / *(float *)(lVar13 + 0x2c);
  if (uVar3 < 2) {
    uVar3 = 1;
  }
  local_a0 = fVar28 / *(float *)(lVar13 + 0x28);
  local_224 = *(float *)(param_2 + 0x7c) / fVar28;
  fStack_220 = -*(float *)(param_2 + 0x8c) / fVar27;
  uVar1 = uVar4;
  if (*(short *)(lVar16 + 0x42) != 3) {
    uVar1 = 1;
  }
  if (uVar1 <= uVar4) {
    uVar1 = uVar4;
  }
  local_22c = fVar28 / (float)uVar3;
  fStack_228 = fVar27 / (float)uVar1;
  FUN_0394a8e0(0,plVar17[4],&local_1a8,&local_c8,&local_a0,&local_224,&local_22c,PTR_DAT_04bb2f48);
  uVar2 = *(uint *)(param_1 + 0xd0);
  if (uVar2 != 0xffffffff) {
    lVar16 = *(long *)puVar9;
    lVar13 = plVar17[4];
    if ((*(uint *)(lVar16 + 0x5c8) >> 3 & 1) == 0) {
      uVar7 = uVar2 - *(ushort *)(lVar16 + 0x3da);
      if (*(uint *)(lVar16 + 0x368) <= uVar7) {
        uVar7 = 0;
      }
      if ((*(uint *)(*(long *)(lVar16 + 0x370) + (long)(int)uVar7 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar13 + 0x100) = *(ulong *)(lVar13 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
        goto LAB_03b33d64;
      }
    }
    if ((*(uint *)(lVar16 + 0x5c8) >> 5 & 1) == 0) {
      uVar12 = 0x112;
      uVar14 = 0x12;
    }
    else {
      uVar12 = 0x111;
      uVar14 = 0x11;
    }
    if ((*(uint *)(lVar16 + 800) & 2) != 0) {
      uVar14 = uVar12;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar13 + 0xb8),uVar14);
    *(undefined8 *)(lVar13 + 0x100) = 0;
  }
LAB_03b33d64:
  if ((*(long *)(param_1 + 8) != 0) &&
     (FUN_039a1880(*(long *)(param_1 + 8),plVar17[4],pfVar10),
     *(long *)(*(long *)(param_1 + 8) + 0x570) != 0)) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,pfVar10);
    if ((*(long *)(param_1 + 8) != 0) &&
       (pfVar19 = *(float **)(*(long *)(param_1 + 8) + 0x570), pfVar19 != (float *)0x0))
    goto LAB_03b33dac;
  }
  pfVar19 = pfVar10;
LAB_03b33dac:
  if (*(ushort *)(param_1 + 0x15c) != 5) {
    *(uint *)((long)pfVar19 + 0x4a) = (uint)*(ushort *)(param_1 + 0x15c) << 0x18 | 0x40302;
    if ((*(byte *)((long)pfVar19 + 0x4e) >> 1 & 1) == 0) {
      bVar11 = false;
    }
    else {
      bVar11 = 0x11 < *(ushort *)(pfVar19 + 0x26) && *(ushort *)(pfVar19 + 0x26) - 0x59 < 0xffffffd6
      ;
    }
    local_a0 = *pfVar19;
    fStack_9c = pfVar19[1];
    local_98 = *(undefined8 *)(pfVar19 + 2);
    uStack_90 = *(undefined8 *)(pfVar19 + 4);
    FUN_038fd3e0(pfVar19 + 0x14,&local_a0,pfVar19 + 0xc,0,*(undefined8 *)(pfVar19 + 0x24),bVar11,0);
  }
  FUN_03b2c1e4(plVar17);
  FUN_00365038(param_3);
  if (local_ce != -1) {
    lVar16 = *(long *)puVar9;
    nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
    uVar2 = (int)local_ce - (uint)*(ushort *)(lVar16 + 0x5c0);
    if (*(uint *)(lVar16 + 0x5a0) <= uVar2) {
      uVar2 = 0;
    }
    lVar13 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar2 * 0x80;
    sVar6 = *(short *)(lVar13 + 0x76) + -1;
    *(short *)(lVar13 + 0x76) = sVar6;
    if (sVar6 == 0) {
      *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
    local_ce = -1;
  }
  FUN_038fd0e0(auStack_158);
  return pfVar19;
}

