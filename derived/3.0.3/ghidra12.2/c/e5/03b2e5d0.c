
undefined8
FUN_03b2e5d0(long param_1,long param_2,byte *param_3,long param_4,long *param_5,long param_6,
            long param_7,undefined8 param_8)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  short sVar7;
  float fVar8;
  undefined *puVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_238;
  long lStack_230;
  undefined **local_228;
  undefined8 uStack_220;
  long local_218;
  undefined1 local_210;
  float local_208;
  float fStack_204;
  ulong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined8 local_12c;
  undefined8 uStack_124;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined8 local_10c;
  undefined8 uStack_104;
  uint local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined2 local_c1;
  undefined1 local_bf;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  uint local_b4;
  byte local_b0;
  short local_ae;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_8c;
  
  fVar27 = *(float *)(param_1 + 0x50);
  fVar26 = *(float *)(param_1 + 0x54);
  bVar4 = *param_3;
  plVar19 = *(long **)(param_2 + 0x1a0);
  lVar20 = *(long *)(param_1 + 0x18);
  if ((char)bVar4 < '\0') {
    fVar27 = fVar27 * *(float *)(lVar20 + 0x70) * *(float *)(param_1 + 0x48);
    fVar26 = fVar26 * *(float *)(lVar20 + 0x84) * *(float *)(param_1 + 0x4c);
    if ((bVar4 >> 4 & 1) != 0) goto LAB_03b2e690;
LAB_03b2e61c:
    uVar21 = (uint)fVar27;
    uVar17 = (uint)fVar26;
    if ((bVar4 >> 5 & 1) != 0) {
      lVar16 = *plVar19;
      uVar14 = (uint)((fVar27 * (*(float *)(lVar16 + 0x18) - *(float *)(lVar16 + 0x10))) /
                     *(float *)(*(long *)(param_2 + 0xc0) + 0x28));
      if (uVar21 <= uVar14) {
        uVar21 = uVar14;
      }
      uVar14 = (uint)((fVar26 * (*(float *)(lVar16 + 0x1c) - *(float *)(lVar16 + 0x14))) /
                     *(float *)(*(long *)(param_2 + 0xc0) + 0x2c));
      if (uVar17 <= uVar14) {
        uVar17 = uVar14;
      }
    }
  }
  else {
    if ((bVar4 >> 4 & 1) == 0) goto LAB_03b2e61c;
LAB_03b2e690:
    lVar16 = *plVar19;
    uVar21 = (uint)((fVar27 * (*(float *)(lVar16 + 0x18) - *(float *)(lVar16 + 0x10))) /
                   *(float *)(*(long *)(param_2 + 0xc0) + 0x28));
    uVar17 = (uint)((fVar26 * (*(float *)(lVar16 + 0x1c) - *(float *)(lVar16 + 0x14))) /
                   *(float *)(*(long *)(param_2 + 0xc0) + 0x2c));
  }
  if (uVar21 == 0 || uVar17 == 0) {
    return 0;
  }
  lVar18 = plVar19[4];
  lVar16 = *(long *)PTR_DAT_04bbd510;
  local_188 = PTR_DAT_04bb2020 + 0x10;
  local_180 = "CapturePaneWork";
  uVar13 = 0x1d;
  if ((bVar4 & 4) != 0) {
    uVar13 = 0x22;
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar11 == 0) {
    iVar10 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar10 = (int)lVar11 + -1;
  }
  local_200 = CONCAT44(local_200._4_4_,iVar10);
  uVar12 = FUN_03948e10(lVar16,lVar18,lVar16 + (long)iVar10 * 0x290 + 0x10,&local_188,uVar13,1,
                        uVar21,uVar17,1,0,1,0,1,0,0,0);
  FUN_01560750(param_6,uVar12,*(undefined1 *)(param_6 + 0xbe),*(undefined2 *)(param_6 + 0xbc));
  param_5[2] = 0;
  *(float *)(param_5 + 1) = fVar27;
  *(float *)((long)param_5 + 0xc) = fVar26;
  *(float *)(param_5 + 3) = (float)uVar21;
  *(float *)((long)param_5 + 0x1c) = (float)uVar17;
  (**(code **)(*param_5 + 0x38))(param_5,plVar19[4]);
  puVar9 = PTR_DAT_04bc1010;
  local_98 = 0xff7fffffff7fffff;
  local_a8 = PTR_DAT_04bd0f08 + 0x10;
  local_a0 = 0x7f7fffff7f7fffff;
  local_90 = *(uint *)PTR_DAT_04bd0ea8;
  local_8c = 0x3f80000000000000;
  if (local_90 < 6) {
    if ((1 << (ulong)(local_90 & 0x1f) & 0x39U) == 0) {
      fVar23 = *(float *)(param_5 + 1);
      fVar22 = *(float *)((long)param_5 + 0xc);
    }
    else {
      fVar22 = *(float *)(param_5 + 1);
      fVar23 = *(float *)((long)param_5 + 0xc);
    }
    fVar25 = fVar22;
    fVar8 = 0.0;
    if (fVar22 <= 0.0) {
      fVar25 = 0.0;
      fVar8 = fVar22;
    }
    fVar24 = fVar23;
    fVar22 = 0.0;
    if (fVar23 <= 0.0) {
      fVar24 = 0.0;
      fVar22 = fVar23;
    }
    local_a0 = CONCAT44(fVar22,fVar8);
    local_98 = CONCAT44(fVar24,fVar25);
  }
  if (param_7 == 0) {
    FUN_038e77e4(&local_a8,plVar19[4],param_5);
    lVar16 = *(long *)(*plVar19 + 0x20);
    uVar21 = *(uint *)(lVar16 + 0x58);
    if (uVar21 != 0xffffffff) {
      lVar18 = *(long *)puVar9;
      lVar11 = plVar19[4];
      if ((*(uint *)(lVar18 + 0x5c8) >> 3 & 1) == 0) {
        uVar17 = uVar21 - *(ushort *)(lVar18 + 0x3da);
        if (*(uint *)(lVar18 + 0x368) <= uVar17) {
          uVar17 = 0;
        }
        if ((*(uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar17 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(lVar11 + 0x100) = *(ulong *)(lVar11 + 0x100) | 1L << ((ulong)uVar21 & 0x3f);
          goto LAB_03b2e948;
        }
      }
      if ((*(uint *)(lVar18 + 0x5c8) >> 5 & 1) == 0) {
        uVar15 = 0x112;
        uVar13 = 0x12;
      }
      else {
        uVar15 = 0x111;
        uVar13 = 0x11;
      }
      if ((*(uint *)(lVar18 + 800) & 2) != 0) {
        uVar13 = uVar15;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar11 + 0xb8),uVar13);
      *(undefined8 *)(lVar11 + 0x100) = 0;
    }
LAB_03b2e948:
    FUN_0390d120(&local_188,lVar16 + 8);
    local_b8 = 0x302;
    local_b6 = 4;
    if ((*param_3 >> 1 & 1) == 0) {
      local_b5 = 0;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(&local_b4,0x10);
        if (bVar6) {
          cVar5 = ExclusiveMonitorsStatus();
          local_b4 = local_b4 | 1;
        }
      } while (cVar5 != '\0');
    }
    else {
      local_b5 = 1;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(&local_b4,0x10);
        if (bVar6) {
          cVar5 = ExclusiveMonitorsStatus();
          local_b4 = local_b4 | 1;
        }
      } while (cVar5 != '\0');
    }
    local_b0 = local_b0 | 2;
    local_c4 = 0x101;
    local_c2 = 1;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(&local_b4,0x10);
      if (bVar6) {
        cVar5 = ExclusiveMonitorsStatus();
        local_b4 = local_b4 & 0xfffffffb | 4;
      }
    } while (cVar5 != '\0');
    local_c1 = 0x707;
    local_bf = 7;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(&local_b4,0x10);
      if (bVar6) {
        cVar5 = ExclusiveMonitorsStatus();
        local_b4 = local_b4 & 0xfffffffd | 2;
      }
    } while (cVar5 != '\0');
    FUN_038e4cec(&local_200);
    local_200 = local_200 & 0xfffffffeffffff00;
    FUN_038e4d90(&local_200,plVar19[4]);
    uVar2 = *(ushort *)(lVar16 + 0x3a);
    uVar3 = *(ushort *)(lVar16 + 0x38);
    if (uVar3 < 2) {
      uVar3 = 1;
    }
    local_280 = CONCAT44(fVar26 / *(float *)(*(long *)(param_2 + 0xc0) + 0x2c),
                         fVar27 / *(float *)(*(long *)(param_2 + 0xc0) + 0x28));
    local_238 = (long *)CONCAT44(-(*(float *)(lVar20 + 0x8c) +
                                  *(float *)(param_1 + 0x34) * *(float *)(lVar20 + 0x84) +
                                  *(float *)(param_1 + 0x38) * *(float *)(lVar20 + 0x88) +
                                  *(float *)(param_1 + 0x30) * *(float *)(lVar20 + 0x80)) / fVar26,
                                 (*(float *)(lVar20 + 0x74) * *(float *)(param_1 + 0x34) +
                                  *(float *)(param_1 + 0x38) * *(float *)(lVar20 + 0x78) +
                                  *(float *)(param_1 + 0x30) * *(float *)(lVar20 + 0x70) +
                                 *(float *)(lVar20 + 0x7c)) / fVar27);
    uVar1 = uVar2;
    if (*(short *)(lVar16 + 0x42) != 3) {
      uVar1 = 1;
    }
    if (uVar1 <= uVar2) {
      uVar1 = uVar2;
    }
    local_208 = fVar27 / (float)uVar3;
    fStack_204 = fVar26 / (float)uVar1;
    FUN_0394a8e0(0,plVar19[4],&local_188,&local_a8,&local_280,&local_238,&local_208,PTR_DAT_04bb2f48
                );
    if (local_ae != -1) {
      lVar20 = *(long *)puVar9;
      nn::os::LockMutex((MutexType *)(lVar20 + 0x580));
      uVar21 = (int)local_ae - (uint)*(ushort *)(lVar20 + 0x5c0);
      if (*(uint *)(lVar20 + 0x5a0) <= uVar21) {
        uVar21 = 0;
      }
      lVar16 = *(long *)(lVar20 + 0x5a8) + (long)(int)uVar21 * 0x80;
      sVar7 = *(short *)(lVar16 + 0x76) + -1;
      *(short *)(lVar16 + 0x76) = sVar7;
      if (sVar7 == 0) {
        *(short *)(lVar20 + 0x5c4) = *(short *)(lVar20 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar20 + 0x580));
      local_ae = -1;
    }
    FUN_038fd0e0((long)&local_13c + 4);
  }
  else {
    FUN_039025b0(0,param_5,plVar19[4],0,1,param_7,0,&local_a8,1);
  }
  FUN_038e4d90(plVar19[1],plVar19[4]);
  FUN_00365038(param_2);
  local_1e0 = *(undefined8 *)(param_2 + 0x30);
  uStack_1d8 = *(undefined8 *)(param_2 + 0x38);
  local_1f0 = *(undefined8 *)(param_2 + 0x20);
  uStack_1e8 = *(undefined8 *)(param_2 + 0x28);
  local_1d0 = *(undefined8 *)(param_2 + 0x40);
  uStack_1c8 = *(undefined8 *)(param_2 + 0x48);
  local_200 = *(ulong *)(param_2 + 0x10);
  uStack_1f8 = *(undefined8 *)(param_2 + 0x18);
  local_f8 = *(undefined4 *)PTR_DAT_04bd0eb0;
  local_228 = &local_a8;
  local_f4 = *(undefined4 *)PTR_DAT_04bd0eb8;
  local_f0 = 0x4396000000000000;
  local_fc = local_90;
  local_180 = (char *)CONCAT62(local_180._2_6_,0x100);
  local_180 = (char *)CONCAT71(local_180._1_7_,1);
  local_e8 = (local_98._4_4_ - local_a0._4_4_) * 0.5;
  local_e4 = (local_98._4_4_ - local_a0._4_4_) * -0.5;
  local_e0 = ((float)local_98 - (float)local_a0) * -0.5;
  local_dc = ((float)local_98 - (float)local_a0) * 0.5;
  local_218 = plVar19[4];
  local_188 = PTR_DAT_04bd0ec0 + 0x10;
  lStack_230 = plVar19[1];
  local_210 = 1;
  uStack_220 = 0;
  *(undefined8 **)(param_2 + 0x1a0) = &local_238;
  local_238 = param_5;
  FUN_038e5b6c(&local_188,(long)&local_180 + 4);
  local_180 = (char *)CONCAT62(local_180._2_6_,0x100);
  (**(code **)(local_188 + 0x60))(&local_188,&local_13c,(long)&local_180 + 4,local_fc);
  local_180._0_2_ = (ushort)(byte)local_180;
  uStack_278 = uStack_134;
  local_280 = local_13c;
  uStack_268 = uStack_124;
  uStack_270 = local_12c;
  uStack_258 = uStack_114;
  local_260 = local_11c;
  uStack_248 = uStack_104;
  uStack_250 = local_10c;
  FUN_00365100(param_2,&local_280);
  FUN_0037e140(param_1,param_2,param_8);
  *(long **)(param_2 + 0x1a0) = plVar19;
  FUN_00365100(param_2,&local_200);
  uVar21 = *(uint *)(param_6 + 0x58);
  if (uVar21 != 0xffffffff) {
    lVar20 = *(long *)puVar9;
    lVar16 = plVar19[4];
    if ((*(uint *)(lVar20 + 0x5c8) >> 3 & 1) == 0) {
      uVar17 = uVar21 - *(ushort *)(lVar20 + 0x3da);
      if (*(uint *)(lVar20 + 0x368) <= uVar17) {
        uVar17 = 0;
      }
      if ((*(uint *)(*(long *)(lVar20 + 0x370) + (long)(int)uVar17 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar16 + 0x100) = *(ulong *)(lVar16 + 0x100) | 1L << ((ulong)uVar21 & 0x3f);
        goto LAB_03b2ed7c;
      }
    }
    if ((*(uint *)(lVar20 + 0x5c8) >> 5 & 1) == 0) {
      uVar15 = 0x112;
      uVar13 = 0x12;
    }
    else {
      uVar15 = 0x111;
      uVar13 = 0x11;
    }
    if ((*(uint *)(lVar20 + 800) & 2) != 0) {
      uVar13 = uVar15;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar16 + 0xb8),uVar13);
    *(undefined8 *)(lVar16 + 0x100) = 0;
  }
LAB_03b2ed7c:
  if ((param_4 != 0) && (FUN_039a1880(param_4,plVar19[4],uVar12), *(long *)(param_4 + 0x570) != 0))
  {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,uVar12);
    uVar12 = *(undefined8 *)(param_4 + 0x570);
  }
  return uVar12;
}

