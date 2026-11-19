
void FUN_03afcb00(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  char cVar10;
  short sVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined7 uVar14;
  undefined1 uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  long *plVar22;
  bool bVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  long lVar30;
  ulong uVar31;
  ulong uVar32;
  long *plVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 *local_2b0;
  undefined *local_280;
  undefined8 local_278;
  undefined8 local_270;
  uint local_268;
  undefined8 local_264;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  float local_240;
  undefined8 local_23c;
  undefined4 local_234;
  float local_230;
  undefined4 local_22c;
  float local_228;
  float fStack_224;
  undefined4 local_220;
  float local_21c;
  float fStack_218;
  float local_214;
  float local_210;
  float fStack_20c;
  undefined *local_208;
  char *local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long lStack_1e0;
  long local_1d8;
  long local_1d0;
  undefined7 local_1c8;
  undefined1 uStack_1c1;
  undefined7 uStack_1c0;
  undefined1 uStack_1b9;
  undefined1 auStack_1b8 [64];
  long local_178;
  undefined4 local_170;
  uint local_134;
  short local_12e;
  undefined *local_128;
  undefined8 local_120;
  undefined8 local_118;
  uint local_110;
  undefined8 local_10c;
  undefined4 local_fc;
  uint local_f8;
  undefined4 local_e4;
  undefined4 local_d4;
  undefined1 local_96;
  
  if (*(char *)(param_1 + 0x768) != '\0') {
    local_1f0 = param_1 + 0x1200;
    local_200 = (char *)(param_1 + 0x1060);
    local_1e8 = param_1 + 0xec0;
    local_208 = (undefined *)(param_1 + 0x32e0);
    local_1f8 = (long)local_200;
    if (*(int *)(param_1 + 0xdd8) != 0) {
      lVar30 = (long)*(int *)(param_1 + 0xdd8) << 3;
      puVar29 = *(undefined8 **)(param_1 + 0xde0);
      do {
        FUN_039e6ca0(*puVar29,param_2,0,&local_208);
        lVar30 = lVar30 + -8;
        puVar29 = puVar29 + 1;
      } while (lVar30 != 0);
      if (0 < *(int *)(param_1 + 0xdd8)) {
        uVar25 = 0x12;
        if ((*(uint *)(*(long *)PTR_DAT_04bc1010 + 800) & 2) != 0) {
          uVar25 = 0x112;
        }
        (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar25);
        *(undefined8 *)(param_2 + 0x100) = 0;
      }
    }
  }
  puVar12 = PTR_DAT_04bb3508;
  puVar1 = PTR_DAT_04bb2020;
  if (*(long *)(param_1 + 0x58) == 0) {
    return;
  }
  puVar29 = *(undefined8 **)(*(long *)(param_1 + 0x58) + 0x28);
  lVar30 = *(long *)PTR_DAT_04bbd510;
  local_208 = PTR_DAT_04bb2020 + 0x10;
  local_200 = "SnapshotColor";
  uVar5 = *(ushort *)((long)puVar29 + 0x32);
  uVar27 = (uint)*(ushort *)(puVar29 + 6);
  if (*(ushort *)(puVar29 + 6) < 2) {
    uVar27 = 1;
  }
  uVar4 = (uint)uVar5;
  if (*(short *)((long)puVar29 + 0x3a) != 3) {
    uVar4 = 1;
  }
  uVar8 = uVar27 << 1;
  if (uVar4 == uVar5 || uVar4 < uVar5) {
    uVar4 = (uint)uVar5;
  }
  uVar9 = uVar4 << 1;
  lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar16 == 0) {
    local_fc = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_fc = (int)lVar16 + -1;
  }
  lVar16 = lVar30 + 0x10;
  plVar17 = (long *)FUN_03948e10(lVar30,param_2,lVar16 + (long)(int)local_fc * 0x290,&local_208,0x1d
                                 ,1,uVar8,uVar9,1,0,1,0,1,0,0,0);
  local_208 = puVar1 + 0x10;
  local_200 = "SnapshotDepth";
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar12);
  if (lVar18 == 0) {
    local_fc = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_fc = (int)lVar18 + -1;
  }
  uVar19 = FUN_03948e10(lVar30,param_2,lVar16 + (long)(int)local_fc * 0x290,&local_208,0x5a,1,uVar8,
                        uVar9,1,0,1,0,1,0,0,0);
  local_208 = puVar1 + 0x10;
  local_200 = "SnapshotColorExp";
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar12);
  if (lVar18 == 0) {
    local_fc = nn::os::GetCurrentCoreNumber();
  }
  else {
    local_fc = (int)lVar18 - 1;
  }
  plVar20 = (long *)FUN_03948e10(lVar30,param_2,lVar16 + (long)(int)local_fc * 0x290,&local_208,0x1d
                                 ,1,uVar8,uVar9,1,0,1,0,1,0,0,0);
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x1f2) == '\0') {
    local_2b0 = (undefined8 *)0x0;
  }
  else {
    local_208 = puVar1 + 0x10;
    local_200 = "copy_temp";
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)puVar12);
    if (lVar18 == 0) {
      local_fc = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_fc = (int)lVar18 - 1;
    }
    local_2b0 = (undefined8 *)
                FUN_03948e10(lVar30,param_2,lVar16 + (long)(int)local_fc * 0x290,&local_208,0x1d,1,
                             uVar27,uVar4,1,0,1,0,1,0,0,0);
  }
  FUN_01560750(param_1 + 0x1c0,plVar17,*(undefined1 *)(param_1 + 0x27e),
               *(undefined2 *)(param_1 + 0x27c));
  FUN_0155a100(param_1 + 0x2a0,uVar19,*(undefined1 *)(param_1 + 0x35e),
               *(undefined2 *)(param_1 + 0x35c));
  *(undefined8 *)(param_1 + 0x390) = 0;
  *(long *)(param_1 + 0x3a0) = param_1 + 0x1c0;
  *(long *)(param_1 + 0x3e0) = param_1 + 0x2a0;
  lVar16 = param_1 + 0x380;
  fVar34 = 0.0;
  if (uVar4 != 0) {
    fVar34 = (float)uVar9;
  }
  *(float *)(param_1 + 0x398) = (float)uVar8;
  *(float *)(param_1 + 0x388) = (float)uVar8;
  *(float *)(param_1 + 0x38c) = (float)uVar9;
  *(float *)(param_1 + 0x39c) = fVar34;
  (**(code **)(*(long *)(param_1 + 0x380) + 0x38))(lVar16,param_2);
  local_278 = 0x7f7fffff7f7fffff;
  local_270 = 0xff7fffffff7fffff;
  local_280 = PTR_DAT_04bd0f08 + 0x10;
  local_264 = 0x3f80000000000000;
  local_268 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_268 < 6) {
    if ((1 << (ulong)(local_268 & 0x1f) & 0x39U) == 0) {
      fVar34 = *(float *)(param_1 + 0x38c);
      fVar36 = *(float *)(param_1 + 0x388);
    }
    else {
      fVar34 = *(float *)(param_1 + 0x388);
      fVar36 = *(float *)(param_1 + 0x38c);
    }
    fVar37 = fVar34;
    fVar35 = 0.0;
    if (fVar34 <= 0.0) {
      fVar37 = 0.0;
      fVar35 = fVar34;
    }
    fVar39 = fVar36;
    fVar34 = 0.0;
    if (fVar36 <= 0.0) {
      fVar39 = 0.0;
      fVar34 = fVar36;
    }
    local_278 = CONCAT44(fVar34,fVar35);
    local_270 = CONCAT44(fVar39,fVar37);
  }
  FUN_038e77e4(&local_280,param_2,lVar16);
  FUN_039025b0(0x3f800000,lVar16,param_2,0,3,*(long *)(param_1 + 0x58) + 0x6c,0,&local_280,1);
  puVar1 = puVar1 + 0x10;
  local_200 = "Model(SnapShot/Opa+AlphaMask)";
  local_1f8 = *(undefined8 *)(param_1 + 0x48);
  local_1f0 = 0x20000000;
  local_1e8 = 0x400000000;
  lStack_1e0 = 0xffff00000000;
  local_1d8 = 0x10000000f;
  local_1d0 = 0xffffffff00000000;
  local_1c8 = 0xffffffff;
  uStack_1c1 = 0;
  uStack_1c0 = SUB87(PTR_DAT_04bd1830 + 0x10,0);
  uVar14 = uStack_1c0;
  uStack_1b9 = (undefined1)((ulong)(PTR_DAT_04bd1830 + 0x10) >> 0x38);
  uVar15 = uStack_1b9;
  local_208 = puVar1;
  FUN_039eec04(param_3,param_2,&local_208);
  local_1f8 = *(undefined8 *)(param_1 + 0x50);
  local_200 = "Model(SnapShot/Xlu)";
  local_1e8 = 0x400000000;
  lStack_1e0 = 0xffff00000000;
  local_1f0 = 0x20000000;
  local_1d8 = 0x10000000f;
  local_1d0 = 0xffffffff00000000;
  local_1c8 = 0xffffffff;
  uStack_1c1 = 0;
  local_208 = puVar1;
  uStack_1c0 = uVar14;
  uStack_1b9 = uVar15;
  FUN_039eec04(param_3,param_2,&local_208);
  local_1f8 = *(long *)(param_1 + 0x48);
  local_200 = "Model(SnapShot/Opa+AlphaMask/AlphaOnly)";
  local_1d8 = 0x10000000f;
  local_1d0 = -0x100000000;
  local_1e8 = 0x400000000;
  lStack_1e0 = 0xffff00000200;
  local_1f0 = 0x20000000;
  local_1c8 = 0xffffffff;
  uStack_1c1 = 0;
  local_208 = puVar1;
  uStack_1c0 = uVar14;
  uStack_1b9 = uVar15;
  FUN_039eec04(param_3,param_2,&local_208);
  plVar33 = (long *)PTR_DAT_04bc1010;
  uVar8 = *(uint *)(param_1 + 0x218);
  if (uVar8 != 0xffffffff) {
    lVar16 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar16 + 0x5c8) >> 3 & 1) == 0) {
      uVar9 = uVar8 - *(ushort *)(lVar16 + 0x3da);
      if (*(uint *)(lVar16 + 0x368) <= uVar9) {
        uVar9 = 0;
      }
      if ((*(uint *)(*(long *)(lVar16 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar8 & 0x3f);
        goto LAB_03afd110;
      }
    }
    if ((*(uint *)(lVar16 + 0x5c8) >> 5 & 1) == 0) {
      uVar26 = 0x112;
      uVar25 = 0x12;
    }
    else {
      uVar26 = 0x111;
      uVar25 = 0x11;
    }
    if ((*(uint *)(lVar16 + 800) & 2) != 0) {
      uVar25 = uVar26;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar25);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03afd110:
  plVar22 = plVar17;
  if (plVar20 != (long *)0x0) {
    *(int *)(param_1 + 0x39f8) = (int)*plVar20;
    *(undefined4 *)(param_1 + 0x39fc) = *(undefined4 *)((long)plVar20 + 4);
    *(long *)(param_1 + 0x3a00) = plVar20[1];
    *(long *)(param_1 + 0x3a08) = plVar20[2];
    *(int *)(param_1 + 0x3a10) = (int)plVar20[3];
    *(undefined4 *)(param_1 + 0x3a14) = *(undefined4 *)((long)plVar20 + 0x1c);
    *(long *)(param_1 + 0x3a18) = plVar20[4];
    *(long *)(param_1 + 0x3a20) = plVar20[5];
    uVar28 = *(undefined8 *)((long)plVar20 + 0x47);
    lVar16 = plVar20[7];
    lVar18 = plVar20[8];
    *(long *)(param_1 + 0x3a28) = plVar20[6];
    *(undefined8 *)(param_1 + 0x3a3f) = uVar28;
    *(long *)(param_1 + 0x3a38) = lVar18;
    *(long *)(param_1 + 0x3a30) = lVar16;
    FUN_038fd1e0(param_1 + 0x3a48,plVar17);
    FUN_038fd2f0(param_1 + 0x3a48,plVar20 + 10);
    lVar16 = plVar20[0x13];
    *(long *)(param_1 + 0x3a88) = plVar20[0x12];
    *(int *)(param_1 + 0x3a90) = (int)lVar16;
    puVar2 = (uint *)(param_1 + 0x3acc);
    do {
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar23) {
        *puVar2 = *puVar2 | 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    uVar5 = *(ushort *)(plVar20 + 6);
    uVar6 = *(ushort *)((long)plVar20 + 0x32);
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    fVar34 = (float)uVar5;
    uVar5 = uVar6;
    if (*(short *)((long)plVar20 + 0x3a) != 3) {
      uVar5 = 1;
    }
    if (uVar5 <= uVar6) {
      uVar5 = uVar6;
    }
    fVar36 = (float)uVar5;
    FUN_01560750(param_1 + 0x38b0,plVar20,*(undefined1 *)(param_1 + 0x396e),
                 *(undefined2 *)(param_1 + 0x396c));
    *(undefined8 *)(param_1 + 0x39a0) = 0;
    *(float *)(param_1 + 0x39a8) = fVar34;
    *(float *)(param_1 + 0x39ac) = fVar36;
    *(float *)(param_1 + 0x3998) = fVar34;
    *(float *)(param_1 + 0x399c) = fVar36;
    *(long *)(param_1 + 0x39b0) = param_1 + 0x38b0;
    (**(code **)(*(long *)(param_1 + 0x3990) + 0x38))(param_1 + 0x3990,param_2);
    FUN_038e4cec(&local_fc);
    local_fc = local_fc & 0xffff0000;
    local_f8 = local_f8 & 0xfffffffe;
    FUN_038e4d90(&local_fc,param_2);
    local_118 = 0xff7fffffff7fffff;
    local_128 = PTR_DAT_04bd0f08 + 0x10;
    local_120 = 0x7f7fffff7f7fffff;
    local_10c = 0x3f80000000000000;
    local_110 = *(uint *)PTR_DAT_04bd0ea8;
    if (local_110 < 6) {
      if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
        fVar35 = *(float *)(param_1 + 0x399c);
        fVar37 = *(float *)(param_1 + 0x3998);
      }
      else {
        fVar35 = *(float *)(param_1 + 0x3998);
        fVar37 = *(float *)(param_1 + 0x399c);
      }
      fVar40 = fVar35;
      fVar39 = 0.0;
      if (fVar35 <= 0.0) {
        fVar40 = 0.0;
        fVar39 = fVar35;
      }
      fVar38 = fVar37;
      fVar35 = 0.0;
      if (fVar37 <= 0.0) {
        fVar38 = 0.0;
        fVar35 = fVar37;
      }
      local_120 = CONCAT44(fVar35,fVar39);
      local_118 = CONCAT44(fVar38,fVar40);
    }
    FUN_038e77e4(&local_128,param_2,param_1 + 0x3990);
    lVar16 = *(long *)(*(long *)PTR_DAT_04bd1650 + 0x40) + 0x7e0;
    if (*(uint *)(*(long *)PTR_DAT_04bd1650 + 0x38) < 7) {
      lVar16 = 0;
    }
    FUN_03907810(lVar16,param_2);
    FUN_0390cee0(&local_208);
    local_208 = (undefined *)*plVar17;
    local_1d8 = plVar17[6];
    local_200 = (char *)plVar17[1];
    local_1f8 = plVar17[2];
    local_1f0 = plVar17[3];
    local_1e8 = plVar17[4];
    lStack_1e0 = plVar17[5];
    local_1d0 = plVar17[7];
    uStack_1c0 = (undefined7)((ulong)*(undefined8 *)((long)plVar17 + 0x47) >> 8);
    local_1c8 = (undefined7)plVar17[8];
    uStack_1c1 = (undefined1)((ulong)plVar17[8] >> 0x38);
    FUN_038fd1e0(auStack_1b8);
    FUN_038fd2f0(auStack_1b8,plVar17 + 10);
    local_178 = plVar17[0x12];
    local_170 = (undefined4)plVar17[0x13];
    do {
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(&local_134,0x10);
      if (bVar23) {
        cVar10 = ExclusiveMonitorsStatus();
        local_134 = local_134 | 1;
      }
    } while (cVar10 != '\0');
    local_230 = 1.0 / fVar34;
    puVar2 = (uint *)(lVar16 + 0x14);
    local_23c = 0;
    local_234 = 0;
    local_22c = 0;
    local_220 = 0;
    local_240 = -local_230;
    fStack_224 = 1.0 / fVar36;
    fVar34 = -fStack_224;
    local_258 = (undefined *)CONCAT44(fVar34,local_240);
    local_250 = (ulong)(uint)fVar34 << 0x20;
    local_248 = CONCAT44(fVar34,local_230);
    do {
      uVar8 = *puVar2;
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar23) {
        *puVar2 = uVar8 | 0x80000000;
        cVar10 = ExclusiveMonitorsStatus();
      }
      puVar1 = PTR_DAT_04bb29d0;
    } while (cVar10 != '\0');
    fStack_20c = fStack_224;
    local_210 = local_230;
    local_214 = fStack_224;
    fStack_218 = local_230;
    local_21c = fStack_224;
    local_228 = local_240;
    if ((uVar8 & 0x7fffffff) != 0) {
      if ((int)uVar8 < 0) {
        if ((int)*puVar2 < 0) {
          lVar18 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar18 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar2 < 0);
        }
      }
      else {
        FUN_03907b80(lVar16);
      }
    }
    do {
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar23) {
        *puVar2 = 0;
        cVar10 = ExclusiveMonitorsStatus();
      }
      puVar13 = PTR_DAT_04bd0fc8;
      puVar12 = PTR_DAT_04bcf2e0;
    } while (cVar10 != '\0');
    if (**(int **)(lVar16 + 0x38) != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                 *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)**(int **)(lVar16 + 0x38),8
                 ,&local_210);
    }
    do {
      uVar8 = *puVar2;
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar23) {
        *puVar2 = uVar8 | 0x80000000;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((uVar8 & 0x7fffffff) != 0) {
      if ((int)uVar8 < 0) {
        if ((int)*puVar2 < 0) {
          lVar18 = *(long *)puVar1;
          do {
            nn::os::ConvertToTimeSpan(lVar18 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar2 < 0);
        }
      }
      else {
        FUN_03907b80(lVar16);
      }
    }
    do {
      cVar10 = '\x01';
      bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar23) {
        *puVar2 = 0;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    FUN_0390d290(&local_208,param_2,*(undefined8 *)(lVar16 + 0x68),0xffffffff,0);
    lVar18 = *(long *)puVar1;
    uVar32 = 0;
    do {
      do {
        uVar8 = *puVar2;
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar23) {
          *puVar2 = uVar8 | 0x80000000;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      if ((uVar8 & 0x7fffffff) != 0) {
        if ((int)uVar8 < 0) {
          while ((int)*puVar2 < 0) {
            nn::os::ConvertToTimeSpan(lVar18 / 1000000);
            nn::os::SleepThread();
          }
        }
        else {
          FUN_03907b80(lVar16);
        }
      }
      puVar3 = &local_258 + uVar32;
      uVar32 = uVar32 + 1;
      do {
        cVar10 = '\x01';
        bVar23 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar23) {
          *puVar2 = 0;
          cVar10 = ExclusiveMonitorsStatus();
        }
      } while (cVar10 != '\0');
      uVar31 = uVar32;
      if (*(uint *)(lVar16 + 0x30) <= uVar32) {
        uVar31 = 0;
      }
      iVar7 = *(int *)(*(long *)(lVar16 + 0x38) + uVar31 * 0x18);
      if (iVar7 != -1) {
        (**(code **)puVar12)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar13 + 0x70),
                   *(undefined8 *)(*(long *)puVar13 + 0x18),(long)iVar7,8,puVar3);
      }
    } while (uVar32 != 9);
    uVar28 = *(undefined8 *)(param_2 + 0xb8);
    lVar16 = *(long *)PTR_DAT_04bbd7e0;
    (**(code **)PTR_DAT_04bcf1a8)(uVar28,0x10,lVar16 + 0xe44);
    (**(code **)PTR_DAT_04bcf1b0)(uVar28,0x10,lVar16 + 0xe88);
    puVar12 = PTR_DAT_04bcf1e8;
    puVar1 = PTR_DAT_04bbd560;
    iVar7 = *(int *)(lVar16 + 0xe30);
    if (iVar7 != 0) {
      lVar16 = *(long *)(lVar16 + 0xe38);
      uVar32 = 0;
      uVar31 = 0;
      do {
        lVar18 = *(long *)(lVar16 + (-(uVar31 >> 0x1f) & 0xfffffff800000000 | uVar31 << 3));
        if (lVar18 != 0) {
          uVar21 = (**(code **)puVar1)(lVar18 + 8);
          (**(code **)puVar12)(uVar28,uVar32 & 0xffffffff,uVar21,*(undefined4 *)(lVar18 + 0x118));
        }
        uVar32 = uVar31 + 1;
        uVar31 = uVar32 & 0xffffffff;
      } while (iVar7 != (int)uVar32);
    }
    lVar16 = *(long *)PTR_DAT_04bbd7e8;
    iVar7 = *(int *)(lVar16 + 0x1f8);
    if (iVar7 != 0) {
      uVar25 = *(undefined4 *)(lVar16 + 0x1dc);
      uVar21 = *(undefined8 *)(param_2 + 0xb8);
      uVar28 = (**(code **)puVar1)(lVar16 + 0x200);
      (**(code **)PTR_DAT_04bbd568)(uVar21,uVar25,*(undefined4 *)(lVar16 + 0x1d8),iVar7,uVar28);
    }
    local_d4 = 0x2010102;
    local_fc._0_3_ = CONCAT12(1,(undefined2)local_fc);
    local_96 = 3;
    local_e4 = 0x3f800000;
    local_f8 = local_f8 | 1;
    FUN_038e4d90(&local_fc,param_2);
    uVar28 = *(undefined8 *)
              (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x18);
    FUN_03907810(uVar28,param_2);
    FUN_03949e90(param_2,uVar28,&local_208,&local_128,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
    plVar33 = (long *)PTR_DAT_04bc1010;
    uVar8 = *(uint *)(param_1 + 0x3908);
    if (uVar8 != 0xffffffff) {
      lVar16 = *(long *)PTR_DAT_04bc1010;
      if ((*(uint *)(lVar16 + 0x5c8) >> 3 & 1) == 0) {
        uVar9 = uVar8 - *(ushort *)(lVar16 + 0x3da);
        if (*(uint *)(lVar16 + 0x368) <= uVar9) {
          uVar9 = 0;
        }
        if ((*(uint *)(*(long *)(lVar16 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar8 & 0x3f);
          goto LAB_03afd84c;
        }
      }
      if ((*(uint *)(lVar16 + 0x5c8) >> 5 & 1) == 0) {
        uVar26 = 0x112;
        uVar25 = 0x12;
      }
      else {
        uVar26 = 0x111;
        uVar25 = 0x11;
      }
      if ((*(uint *)(lVar16 + 800) & 2) != 0) {
        uVar25 = uVar26;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar25);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
LAB_03afd84c:
    if (local_12e != -1) {
      lVar16 = *plVar33;
      nn::os::LockMutex((MutexType *)(lVar16 + 0x580));
      uVar8 = (int)local_12e - (uint)*(ushort *)(lVar16 + 0x5c0);
      if (*(uint *)(lVar16 + 0x5a0) <= uVar8) {
        uVar8 = 0;
      }
      lVar18 = *(long *)(lVar16 + 0x5a8) + (long)(int)uVar8 * 0x80;
      sVar11 = *(short *)(lVar18 + 0x76) + -1;
      *(short *)(lVar18 + 0x76) = sVar11;
      if (sVar11 == 0) {
        *(short *)(lVar16 + 0x5c4) = *(short *)(lVar16 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar16 + 0x580));
      local_12e = -1;
    }
    FUN_038fd0e0(auStack_1b8);
    FUN_039499cc(lVar30,plVar20);
    plVar22 = plVar20;
  }
  FUN_0390d120(&local_208,plVar22);
  puVar3 = puVar29;
  if (local_2b0 != (undefined8 *)0x0) {
    puVar3 = local_2b0;
  }
  FUN_01560750(param_1 + 1000,puVar3,*(undefined1 *)(param_1 + 0x4a6),
               *(undefined2 *)(param_1 + 0x4a4));
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(long *)(param_1 + 0x4e8) = param_1 + 1000;
  plVar20 = (long *)(param_1 + 0x4c8);
  *(undefined8 *)(param_1 + 0x528) = 0;
  *(float *)(param_1 + 0x4e4) = (float)uVar4;
  *(float *)(param_1 + 0x4d4) = (float)uVar4;
  *(float *)(param_1 + 0x4e0) = (float)uVar27;
  *(float *)(param_1 + 0x4d0) = (float)uVar27;
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x1f1) == '\0') {
    (**(code **)(*plVar20 + 0x38))(plVar20,param_2);
  }
  else {
    FUN_03901c40(plVar20,param_2,0xff);
  }
  local_248 = 0xff7fffffff7fffff;
  local_258 = PTR_DAT_04bd0f08 + 0x10;
  local_250 = 0x7f7fffff7f7fffff;
  local_23c = 0x3f80000000000000;
  local_240 = *(float *)PTR_DAT_04bd0ea8;
  if ((uint)local_240 < 6) {
    if ((1 << (ulong)((uint)local_240 & 0x1f) & 0x39U) == 0) {
      fVar34 = *(float *)(param_1 + 0x4d4);
      fVar36 = *(float *)(param_1 + 0x4d0);
    }
    else {
      fVar34 = *(float *)(param_1 + 0x4d0);
      fVar36 = *(float *)(param_1 + 0x4d4);
    }
    fVar37 = fVar34;
    fVar35 = 0.0;
    if (fVar34 <= 0.0) {
      fVar37 = 0.0;
      fVar35 = fVar34;
    }
    fVar39 = fVar36;
    fVar34 = 0.0;
    if (fVar36 <= 0.0) {
      fVar39 = 0.0;
      fVar34 = fVar36;
    }
    local_250 = CONCAT44(fVar34,fVar35);
    local_248 = CONCAT44(fVar39,fVar37);
  }
  FUN_038e77e4(&local_258,param_2,plVar20);
  FUN_038e4cec(&local_fc);
  local_fc = local_fc & 0xffff0000;
  local_f8 = local_f8 & 0xfffffffe;
  FUN_038e4d90(&local_fc,param_2);
  FUN_0394abf0(0x3f800000,param_2,&local_208,&local_258,1,PTR_DAT_04bb2f48);
  uVar27 = *(uint *)(param_1 + 0x440);
  if (uVar27 != 0xffffffff) {
    lVar16 = *plVar33;
    if ((*(uint *)(lVar16 + 0x5c8) >> 3 & 1) == 0) {
      uVar4 = uVar27 - *(ushort *)(lVar16 + 0x3da);
      if (*(uint *)(lVar16 + 0x368) <= uVar4) {
        uVar4 = 0;
      }
      if ((*(uint *)(*(long *)(lVar16 + 0x370) + (long)(int)uVar4 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar27 & 0x3f);
        goto LAB_03afdad8;
      }
    }
    if ((*(uint *)(lVar16 + 0x5c8) >> 5 & 1) == 0) {
      uVar26 = 0x112;
      uVar25 = 0x12;
    }
    else {
      uVar26 = 0x111;
      uVar25 = 0x11;
    }
    if ((*(uint *)(lVar16 + 800) & 2) != 0) {
      uVar25 = uVar26;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar25);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03afdad8:
  if (local_2b0 != (undefined8 *)0x0) {
    FUN_0390b940(local_2b0,param_2,puVar29);
    FUN_039499cc(lVar30,local_2b0);
  }
  FUN_039499cc(lVar30,plVar17);
  FUN_039499cc(lVar30,uVar19);
  uVar25 = *(undefined4 *)((long)puVar29 + 4);
  local_128 = (undefined *)*puVar29;
  local_120 = puVar29[1];
  local_118 = puVar29[2];
  puVar24 = *(undefined4 **)(*(long *)(param_1 + 0x58) + 0x30);
  *puVar24 = *(undefined4 *)puVar29;
  puVar24[1] = uVar25;
  *(undefined8 *)(puVar24 + 2) = local_120;
  *(undefined8 *)(puVar24 + 4) = local_118;
  if ((*(byte *)((long)puVar24 + 0x4e) >> 1 & 1) == 0) {
    bVar23 = false;
  }
  else {
    bVar23 = 0x11 < *(ushort *)(puVar24 + 0x26) && *(ushort *)(puVar24 + 0x26) - 0x59 < 0xffffffd6;
  }
  FUN_038fd3e0(puVar24 + 0x14,&local_128,puVar24 + 0xc,0,*(undefined8 *)(puVar24 + 0x24),bVar23,1);
  lVar30 = *(long *)(param_1 + 0x58);
  if (*(char *)(lVar30 + 0x1f0) == '\0') {
    lVar16 = *(long *)(lVar30 + 0x170);
    plVar17 = (long *)(param_1 + 0x18);
    puVar29 = (undefined8 *)(lVar30 + 0x158);
    if (lVar16 != 0) {
      *(undefined8 *)(lVar30 + 0x170) = 0;
      if (*(long *)(lVar30 + 0x158) != 0) {
        *(undefined8 *)(*(long *)(lVar30 + 0x158) + 8) = *(undefined8 *)(lVar30 + 0x160);
      }
      if (*(undefined8 **)(lVar30 + 0x160) != (undefined8 *)0x0) {
        **(undefined8 **)(lVar30 + 0x160) = *puVar29;
      }
      *puVar29 = 0;
      *(undefined8 *)(lVar30 + 0x160) = 0;
      *(int *)(lVar16 + 0x10) = *(int *)(lVar16 + 0x10) + -1;
    }
    *(long **)(lVar30 + 0x170) = plVar17;
    lVar16 = *plVar17;
    *plVar17 = (long)puVar29;
    *(long *)(lVar30 + 0x158) = lVar16;
    *(long **)(lVar30 + 0x160) = plVar17;
    if (lVar16 != 0) {
      *(undefined8 **)(lVar16 + 8) = puVar29;
    }
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  else {
    FUN_03afc9cc(*(undefined8 *)(lVar30 + 0xe0),lVar30);
    *(undefined4 *)(lVar30 + 0xc0) = *(undefined4 *)(lVar30 + 0x50);
    *(undefined8 *)(lVar30 + 0xb8) = *(undefined8 *)(lVar30 + 0x48);
    *(undefined8 *)(lVar30 + 0xc4) = *(undefined8 *)(lVar30 + 0x54);
    *(undefined4 *)(lVar30 + 0xcc) = *(undefined4 *)(lVar30 + 0x5c);
    (**(code **)(*(long *)(lVar30 + 0x80) + 0x20))((long *)(lVar30 + 0x80),lVar30 + 0x88);
  }
  *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x20) = 1;
  *(undefined1 *)(*(long *)(param_1 + 0x58) + 499) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (local_12e != -1) {
    lVar30 = *plVar33;
    nn::os::LockMutex((MutexType *)(lVar30 + 0x580));
    uVar27 = (int)local_12e - (uint)*(ushort *)(lVar30 + 0x5c0);
    if (*(uint *)(lVar30 + 0x5a0) <= uVar27) {
      uVar27 = 0;
    }
    lVar16 = *(long *)(lVar30 + 0x5a8) + (long)(int)uVar27 * 0x80;
    sVar11 = *(short *)(lVar16 + 0x76) + -1;
    *(short *)(lVar16 + 0x76) = sVar11;
    if (sVar11 == 0) {
      *(short *)(lVar30 + 0x5c4) = *(short *)(lVar30 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar30 + 0x580));
    local_12e = -1;
  }
  FUN_038fd0e0(auStack_1b8);
  return;
}

