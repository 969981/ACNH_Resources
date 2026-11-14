
void FUN_0165a7a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *__src;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  size_t __n;
  long *plVar15;
  int *piVar16;
  long lVar17;
  uint uVar18;
  void *__dest;
  void *__src_00;
  undefined2 *puVar19;
  undefined4 uVar20;
  undefined1 *local_1a0;
  undefined1 *puStack_198;
  undefined *local_190;
  char *local_188;
  undefined8 local_180;
  undefined *puStack_178;
  undefined *local_170;
  undefined8 *puStack_168;
  undefined4 local_160;
  undefined1 local_7d;
  
  puVar7 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    plVar10 = malloc(0x10);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar12 = (undefined8 *)(lVar17 + 8);
    if (lVar9 != 0) {
      puVar12 = (undefined8 *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,0x10,8);
  }
  *plVar10 = (long)(PTR_DAT_04bb3048 + 0x10);
  plVar10[1] = 0;
  *(long **)(param_1 + 0x280) = plVar10;
  lVar17 = *(long *)puVar1;
  if (lVar17 == 0) {
    plVar11 = malloc(0x350);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
    plVar11 = (long *)(lVar17 + 8);
    if (lVar9 != 0) {
      plVar11 = (long *)(lVar9 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x350,8);
    }
  }
  puVar7 = PTR_DAT_04bb2020;
  local_160 = 0;
  local_190 = PTR_DAT_04bb2020 + 0x10;
  local_188 = "SkyScatter";
  puStack_168 = &DAT_0407ebb1;
  puStack_178 = &DAT_040f99a3;
  *plVar11 = (long)(PTR_DAT_04bb3050 + 0x10);
  local_180 = local_190;
  local_170 = local_190;
  (**(code **)(puVar7 + 0x28))(&local_190);
  plVar11[2] = 0;
  plVar11[3] = 0;
  *(undefined1 *)((long)plVar11 + 0x44) = 0;
  plVar11[1] = (long)local_188;
  plVar15 = plVar11 + 5;
  *plVar15 = 0;
  puVar8 = PTR_DAT_04bb21f8;
  *(undefined4 *)(plVar11 + 8) = 0x100;
  *(undefined1 *)((long)plVar11 + 0x143) = 0;
  *(undefined1 *)(plVar11 + 0x29) = 0;
  *(undefined4 *)(plVar11 + 4) = local_160;
  plVar11[0x2e] = 0;
  plVar11[6] = (long)(puVar8 + 0x10);
  plVar11[7] = (long)plVar11 + 0x44;
  *plVar11 = (long)&PTR_LAB_049b9980;
  plVar11[0x2c] = (long)"mFbSize";
  plVar11[0x2d] = 0;
  puVar1 = PTR_DAT_04bbd520 + 0x10;
  *(undefined4 *)(plVar11 + 0x2f) = 0;
  plVar11[0x31] = 0;
  plVar11[0x2a] = (long)plVar11;
  plVar11[0x2b] = (long)puVar1;
  lVar17 = *plVar15;
  if (*plVar15 != 0) {
    do {
      lVar9 = lVar17;
      lVar17 = *(long *)(lVar9 + 0x10);
    } while (lVar17 != 0);
    plVar15 = (long *)(lVar9 + 0x10);
  }
  *plVar15 = (long)(plVar11 + 0x2b);
  plVar11[0x2e] = (long)plVar11;
  puVar12 = (undefined8 *)(**(code **)(plVar11[0x2b] + 0xf0))();
  *puVar12 = 0x4300000043800000;
  if ((*(uint *)(plVar11 + 0x2f) >> 7 & 1) == 0) {
    plVar11[0x31] = 0x4300000043800000;
  }
  plVar11[0x34] = 0;
  plVar11[0x35] = 0;
  *(uint *)(plVar11 + 0x2f) = *(uint *)(plVar11 + 0x2f) & 0xfeffffff;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  puVar1 = PTR_DAT_04bb62c0;
  plVar11[0x37] = 0;
  plVar11[0x32] = (long)(puVar1 + 0x10);
  plVar11[0x33] = (long)"mMaxMipLevel";
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x32);
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x32] + 0xf0))(plVar11 + 0x32);
  *puVar13 = 1;
  if ((*(uint *)(plVar11 + 0x36) >> 7 & 1) == 0) {
    plVar11[0x37] = 0;
    *(undefined4 *)(plVar11 + 0x37) = 1;
  }
  plVar11[0x3a] = 0;
  plVar11[0x3b] = 0;
  *(uint *)(plVar11 + 0x36) = *(uint *)(plVar11 + 0x36) & 0xfeffffff;
  *(undefined4 *)(plVar11 + 0x3c) = 0;
  puVar1 = PTR_DAT_04bb31d0;
  plVar11[0x3d] = 0;
  plVar11[0x38] = (long)(puVar1 + 0x10);
  plVar11[0x39] = (long)"mVirtualCameraHeight";
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x38);
  uVar20 = 0x41200000;
  if ((*(uint *)(plVar11 + 0x3c) & 0x800) != 0) {
    uVar20 = 0x3e32b8c2;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x38] + 0xf0))(plVar11 + 0x38);
  *puVar13 = uVar20;
  uVar18 = *(uint *)(plVar11 + 0x3c);
  if ((uVar18 >> 7 & 1) == 0) {
    plVar11[0x3d] = 0;
    uVar20 = 0x41200000;
    if ((uVar18 & 0x800) != 0) {
      uVar20 = 0x3e32b8c2;
    }
    *(undefined4 *)(plVar11 + 0x3d) = uVar20;
  }
  plVar11[0x41] = 0;
  *(uint *)(plVar11 + 0x3c) = uVar18 & 0xfeffffff;
  plVar11[0x3f] = (long)"mRayleighIntensity";
  plVar11[0x40] = 0;
  *(undefined4 *)(plVar11 + 0x42) = 0;
  plVar11[0x3e] = (long)(puVar1 + 0x10);
  plVar11[0x43] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x3e);
  uVar20 = 0x3d4ccccd;
  if ((*(uint *)(plVar11 + 0x42) & 0x800) != 0) {
    uVar20 = 0x3a64c388;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x3e] + 0xf0))(plVar11 + 0x3e);
  *puVar13 = uVar20;
  uVar18 = *(uint *)(plVar11 + 0x42);
  if ((uVar18 >> 7 & 1) == 0) {
    plVar11[0x43] = 0;
    uVar20 = 0x3d4ccccd;
    if ((uVar18 & 0x800) != 0) {
      uVar20 = 0x3a64c388;
    }
    *(undefined4 *)(plVar11 + 0x43) = uVar20;
  }
  plVar11[0x46] = 0;
  *(uint *)(plVar11 + 0x42) = uVar18 & 0xfeffffff;
  plVar11[0x45] = (long)"mMieIntensity";
  plVar11[0x47] = 0;
  *(undefined4 *)(plVar11 + 0x48) = 0;
  plVar11[0x44] = (long)(puVar1 + 0x10);
  plVar11[0x49] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x44);
  uVar20 = 0x40800000;
  if ((*(uint *)(plVar11 + 0x48) & 0x800) != 0) {
    uVar20 = 0x3d8efa35;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x44] + 0xf0))(plVar11 + 0x44);
  *puVar13 = uVar20;
  uVar18 = *(uint *)(plVar11 + 0x48);
  if ((uVar18 >> 7 & 1) == 0) {
    plVar11[0x49] = 0;
    uVar20 = 0x40800000;
    if ((uVar18 & 0x800) != 0) {
      uVar20 = 0x3d8efa35;
    }
    *(undefined4 *)(plVar11 + 0x49) = uVar20;
  }
  plVar11[0x4c] = 0;
  *(uint *)(plVar11 + 0x48) = uVar18 & 0xfeffffff;
  plVar11[0x4b] = (long)"mEirthColorIntensity";
  plVar11[0x4d] = 0;
  *(undefined4 *)(plVar11 + 0x4e) = 0;
  plVar11[0x4a] = (long)(puVar1 + 0x10);
  plVar11[0x4f] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x4a);
  uVar20 = 0x40a00000;
  if ((*(uint *)(plVar11 + 0x4e) & 0x800) != 0) {
    uVar20 = 0x3db2b8c2;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x4a] + 0xf0))(plVar11 + 0x4a);
  *puVar13 = uVar20;
  uVar18 = *(uint *)(plVar11 + 0x4e);
  if ((uVar18 >> 7 & 1) == 0) {
    plVar11[0x4f] = 0;
    uVar20 = 0x40a00000;
    if ((uVar18 & 0x800) != 0) {
      uVar20 = 0x3db2b8c2;
    }
    *(undefined4 *)(plVar11 + 0x4f) = uVar20;
  }
  *(uint *)(plVar11 + 0x4e) = uVar18 & 0xfeffffff;
  local_190 = puVar7 + 0x10;
  local_160 = 0;
  local_188 = "mSunColor";
  puStack_178 = &DAT_04071ef4;
  puStack_168 = &DAT_0407ebb1;
  local_1a0 = &DAT_3f8000003f800000;
  puStack_198 = &DAT_3f8000003f800000;
  local_180 = local_190;
  local_170 = local_190;
  FUN_00744b60(plVar11 + 0x50,&local_190,&local_1a0,plVar11);
  plVar11[0x5a] = 0;
  plVar11[0x59] = (long)"mSunIntensity";
  plVar11[0x5b] = 0;
  *(undefined4 *)(plVar11 + 0x5c) = 0;
  plVar11[0x58] = (long)(puVar1 + 0x10);
  plVar11[0x5d] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x58);
  uVar20 = 0x3f800000;
  if ((*(uint *)(plVar11 + 0x5c) & 0x800) != 0) {
    uVar20 = 0x3c8efa35;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x58] + 0xf0))(plVar11 + 0x58);
  *puVar13 = uVar20;
  uVar18 = *(uint *)(plVar11 + 0x5c);
  if ((uVar18 >> 7 & 1) == 0) {
    plVar11[0x5d] = 0;
    uVar20 = 0x3f800000;
    if ((uVar18 & 0x800) != 0) {
      uVar20 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar11 + 0x5d) = uVar20;
  }
  plVar11[0x60] = 0;
  *(uint *)(plVar11 + 0x5c) = uVar18 & 0xfeffffff;
  plVar11[0x5f] = (long)"mSunEraserPower";
  plVar11[0x61] = 0;
  *(undefined4 *)(plVar11 + 0x62) = 0;
  plVar11[0x5e] = (long)(puVar1 + 0x10);
  plVar11[99] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x5e);
  uVar20 = 0x3f800000;
  if ((*(uint *)(plVar11 + 0x62) & 0x800) != 0) {
    uVar20 = 0x3c8efa35;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x5e] + 0xf0))(plVar11 + 0x5e);
  *puVar13 = uVar20;
  uVar18 = *(uint *)(plVar11 + 0x62);
  if ((uVar18 >> 7 & 1) == 0) {
    plVar11[99] = 0;
    uVar20 = 0x3f800000;
    if ((uVar18 & 0x800) != 0) {
      uVar20 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar11 + 99) = uVar20;
  }
  plVar11[0x66] = 0;
  *(uint *)(plVar11 + 0x62) = uVar18 & 0xfeffffff;
  plVar11[0x65] = (long)"mSunHorizonOffset";
  plVar11[0x67] = 0;
  *(undefined4 *)(plVar11 + 0x68) = 0;
  plVar11[100] = (long)(puVar1 + 0x10);
  plVar11[0x69] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 100);
  puVar13 = (undefined4 *)(**(code **)(plVar11[100] + 0xf0))(plVar11 + 100);
  *puVar13 = 0;
  if ((*(uint *)(plVar11 + 0x68) >> 7 & 1) == 0) {
    plVar11[0x69] = 0;
    *(undefined4 *)(plVar11 + 0x69) = 0;
  }
  *(uint *)(plVar11 + 0x68) = *(uint *)(plVar11 + 0x68) & 0xfeffffff;
  plVar10[1] = (long)plVar11;
  __dest = (void *)plVar11[7];
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  __src_00 = *(void **)(param_1 + 0x10);
  if (__dest != __src_00) {
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
    lVar17 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x10) + lVar17) == '\0') goto LAB_0165aedc;
      lVar9 = *(long *)(param_1 + 0x10) + lVar17;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_0165aedc;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_0165aedc;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_0165aedc:
    iVar3 = (int)lVar17;
    if ((int)plVar11[8] <= (int)lVar17) {
      iVar3 = (int)plVar11[8] + -1;
    }
    memcpy(__dest,__src_00,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  plVar11 = (long *)plVar10[1];
  local_188 = (char *)((long)&local_180 + 4);
  local_190 = puVar8 + 0x10;
  local_7d = 0;
  local_180 = (undefined *)CONCAT35(local_180._5_3_,0x100);
  uVar14 = (**(code **)(*plVar11 + 0xf0))(plVar11,&local_190,1);
  if ((uVar14 & 1) != 0) {
    FUN_03c27e60(plVar11,&local_190,0);
  }
  lVar17 = plVar10[1];
  puVar13 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 0x158) + 0xf0))(lVar17 + 0x158);
  *(undefined4 *)(param_1 + 0x778) = *puVar13;
  *(undefined4 *)(param_1 + 0x77c) = puVar13[1];
  puVar13 = (undefined4 *)(**(code **)(*(long *)(lVar17 + 400) + 0xf0))(lVar17 + 400);
  *(undefined4 *)(param_1 + 0x780) = *puVar13;
  FUN_01628904(param_1,param_1 + 0x2a8,0x1a,(int)*(float *)(param_1 + 0x778),
               (int)*(float *)(param_1 + 0x77c),1,param_3);
  *(undefined4 *)(param_1 + 0x348) = *(undefined4 *)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x2d0);
  piVar16 = (int *)(param_1 + 0x2f8);
  *(undefined4 *)(param_1 + 0x34c) = *(undefined4 *)(param_1 + 0x2ac);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_1 + 0x2b8);
  *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_1 + 0x2c0);
  *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(param_1 + 0x2c4);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined8 *)(param_1 + 0x38f) = *(undefined8 *)(param_1 + 0x2ef);
  *(undefined8 *)(param_1 + 0x388) = *(undefined8 *)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_1 + 0x2d8);
  FUN_038fd1e0(param_1 + 0x398);
  FUN_038fd2f0(param_1 + 0x398,piVar16);
  *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(param_1 + 0x338);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0x340);
  puVar2 = (uint *)(param_1 + 0x41c);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = *puVar2 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined4 *)(param_1 + 0x408) = 0;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = *puVar2 & 0xfffffff7 | 8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *(undefined2 *)(param_1 + 0x40f) = 0x505;
  *(undefined1 *)(param_1 + 0x411) = 5;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = *puVar2 & 0xfffffffd | 2;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0x3f80000000000000;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar6) {
      *puVar2 = *puVar2 & 0xffffffdf | 0x20;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  (**(code **)(DAT_052311c0 + 0x18))(&DAT_052311c0);
  __src = DAT_052311c8;
  puVar19 = *(undefined2 **)(param_1 + 0x498);
  if (DAT_052311c8 == (char *)0x0) {
    __n = 0;
    uVar14 = 0;
    *puVar19 = 0;
  }
  else {
    __n = strlen(DAT_052311c8);
    *puVar19 = (short)__n;
    if (__n == 0) {
      uVar14 = 0;
    }
    else {
      memmove(puVar19 + 1,__src,__n);
      uVar14 = __n & 0xffff;
    }
  }
  uVar18 = (uint)__n;
  if (0 < (int)(((uVar18 & 0xfffffffe) - (uVar18 & 0xffff)) + 2)) {
    memset((void *)((long)puVar19 + uVar14 + 2),0,(ulong)((uVar18 | 1) - (uVar18 & 0xffff)) + 1);
  }
  if (*piVar16 == -1) {
    lVar17 = -1;
  }
  else {
    lVar17 = *(long *)PTR_DAT_04bc1010;
    uVar18 = *piVar16 - (uint)*(ushort *)(lVar17 + 0x3da);
    if (*(uint *)(lVar17 + 0x368) <= uVar18) {
      uVar18 = 0;
    }
    puVar2 = (uint *)(*(long *)(lVar17 + 0x370) + (long)(int)uVar18 * 0x20 + 4);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar6) {
        *puVar2 = *puVar2 & 0xfffffffb | 4;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    lVar17 = (long)*piVar16;
  }
  *(long *)(param_1 + 0x4c8) = lVar17;
  *(long *)(param_1 + 0x428) = param_1 + 0x438;
  FUN_0390d714(param_1 + 0x700,6,param_3);
  piVar16 = (int *)(**(long **)(param_1 + 0x708) +
                   (ulong)*(ushort *)((long)*(long **)(param_1 + 0x708) + 10) * 0xc);
  *(undefined1 *)(piVar16 + 2) = 4;
  *(undefined2 *)((long)piVar16 + 6) = 2;
  *piVar16 = 1;
  uVar18 = *(int *)(param_1 + 0x730) + 7U & 0xfffffff8;
  *(uint *)(param_1 + 0x730) = uVar18;
  *(short *)(piVar16 + 1) = (short)uVar18;
  *(uint *)(param_1 + 0x730) =
       *(int *)(param_1 + 0x730) + (uint)*(ushort *)((long)piVar16 + 6) * *piVar16 * 4;
  *(short *)(*(long *)(param_1 + 0x708) + 10) = *(short *)(*(long *)(param_1 + 0x708) + 10) + 1;
  plVar10 = *(long **)(param_1 + 0x708);
  uVar4 = *(ushort *)((long)plVar10 + 10);
  if (uVar4 == *(ushort *)(plVar10 + 1)) {
    *(uint *)(param_1 + 0x730) = *(int *)(param_1 + 0x730) + 0x1fU & 0xffffffe0;
    uVar4 = *(ushort *)((long)plVar10 + 10);
  }
  piVar16 = (int *)(*plVar10 + (ulong)uVar4 * 0xc);
  *piVar16 = 1;
  *(undefined1 *)(piVar16 + 2) = 5;
  *(undefined2 *)((long)piVar16 + 6) = 3;
  uVar18 = *(int *)(param_1 + 0x730) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x730) = uVar18;
  *(short *)(piVar16 + 1) = (short)uVar18;
  *(uint *)(param_1 + 0x730) =
       *(int *)(param_1 + 0x730) + (uint)*(ushort *)((long)piVar16 + 6) * *piVar16 * 4;
  *(short *)(*(long *)(param_1 + 0x708) + 10) = *(short *)(*(long *)(param_1 + 0x708) + 10) + 1;
  if (*(short *)(*(long *)(param_1 + 0x708) + 10) == *(short *)(*(long *)(param_1 + 0x708) + 8)) {
    *(uint *)(param_1 + 0x730) = *(int *)(param_1 + 0x730) + 0x1fU & 0xffffffe0;
  }
  FUN_0390d990(param_1 + 0x700,param_3,2,1);
  return;
}

