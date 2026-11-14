
void FUN_016707e0(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  bool bVar7;
  size_t __size;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  void *pvVar17;
  void *__src;
  undefined4 uVar18;
  float fVar19;
  undefined *local_190;
  char *local_188;
  undefined8 local_180;
  undefined *puStack_178;
  undefined *local_170;
  undefined8 *puStack_168;
  undefined4 local_160;
  undefined1 local_7d;
  
  puVar1 = PTR_DAT_04bb3350;
  puVar8 = PTR_DAT_04bb2698;
  lVar16 = *(long *)PTR_DAT_04bb2698;
  if (lVar16 == 0) {
    plVar10 = malloc(0x10);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar12 = (undefined8 *)(lVar16 + 8);
    if (lVar9 != 0) {
      puVar12 = (undefined8 *)(lVar9 + 0xa8);
    }
    plVar10 = (long *)(**(code **)(*(long *)*puVar12 + 0x30))((long *)*puVar12,0x10,8);
  }
  *plVar10 = (long)(PTR_DAT_04bb3048 + 0x10);
  plVar10[1] = 0;
  *(long **)(param_1 + 0x280) = plVar10;
  lVar16 = *(long *)puVar8;
  if (lVar16 == 0) {
    plVar11 = malloc(0x410);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    plVar11 = (long *)(lVar16 + 8);
    if (lVar9 != 0) {
      plVar11 = (long *)(lVar9 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x410,8);
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  local_160 = 0;
  local_190 = PTR_DAT_04bb2020 + 0x10;
  local_188 = "WorldAo";
  puStack_168 = &DAT_0407ebb1;
  puStack_178 = &DAT_04091b97;
  *plVar11 = (long)(PTR_DAT_04bb3050 + 0x10);
  local_180 = local_190;
  local_170 = local_190;
  (**(code **)(puVar1 + 0x28))(&local_190);
  plVar11[2] = 0;
  plVar11[3] = 0;
  *(undefined1 *)((long)plVar11 + 0x44) = 0;
  plVar11[1] = (long)local_188;
  plVar15 = plVar11 + 5;
  *plVar15 = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(plVar11 + 8) = 0x100;
  *(undefined1 *)((long)plVar11 + 0x143) = 0;
  *(undefined1 *)(plVar11 + 0x29) = 0;
  *(undefined4 *)(plVar11 + 4) = local_160;
  plVar11[0x2e] = 0;
  plVar11[6] = (long)(puVar1 + 0x10);
  plVar11[7] = (long)plVar11 + 0x44;
  *plVar11 = (long)&PTR_LAB_049badc0;
  plVar11[0x2c] = (long)"mFbSize";
  plVar11[0x2d] = 0;
  puVar2 = PTR_DAT_04bbd520;
  puVar1 = PTR_DAT_04bbd520 + 0x10;
  *(undefined4 *)(plVar11 + 0x2f) = 0;
  plVar11[0x31] = 0;
  plVar11[0x2a] = (long)plVar11;
  plVar11[0x2b] = (long)puVar1;
  lVar16 = *plVar15;
  if (*plVar15 != 0) {
    do {
      lVar9 = lVar16;
      lVar16 = *(long *)(lVar9 + 0x10);
    } while (lVar16 != 0);
    plVar15 = (long *)(lVar9 + 0x10);
  }
  *plVar15 = (long)(plVar11 + 0x2b);
  plVar11[0x2e] = (long)plVar11;
  puVar12 = (undefined8 *)(**(code **)(plVar11[0x2b] + 0xf0))();
  *puVar12 = 0x4400000044000000;
  if ((*(uint *)(plVar11 + 0x2f) >> 7 & 1) == 0) {
    plVar11[0x31] = 0x4400000044000000;
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
  *(undefined4 *)(plVar11 + 0x3c) = 0;
  *(uint *)(plVar11 + 0x36) = *(uint *)(plVar11 + 0x36) & 0xfeffffff;
  plVar11[0x3a] = 0;
  plVar11[0x3b] = 0;
  plVar11[0x3d] = 0;
  plVar11[0x38] = (long)(puVar1 + 0x10);
  plVar11[0x39] = (long)"mUnitMax";
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x38);
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x38] + 0xf0))(plVar11 + 0x38);
  *puVar13 = 0xc;
  if ((*(uint *)(plVar11 + 0x3c) >> 7 & 1) == 0) {
    plVar11[0x3d] = 0;
    *(undefined4 *)(plVar11 + 0x3d) = 0xc;
  }
  plVar11[0x40] = 0;
  *(uint *)(plVar11 + 0x3c) = *(uint *)(plVar11 + 0x3c) & 0xfeffffff;
  plVar11[0x41] = 0;
  *(undefined4 *)(plVar11 + 0x42) = 0;
  puVar1 = PTR_DAT_04bb31d0;
  plVar11[0x43] = 0;
  plVar11[0x3e] = (long)(puVar1 + 0x10);
  plVar11[0x3f] = (long)"mNear";
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x3e);
  uVar18 = 0x3f800000;
  if ((*(uint *)(plVar11 + 0x42) & 0x800) != 0) {
    uVar18 = 0x3c8efa35;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x3e] + 0xf0))(plVar11 + 0x3e);
  *puVar13 = uVar18;
  uVar5 = *(uint *)(plVar11 + 0x42);
  if ((uVar5 >> 7 & 1) == 0) {
    plVar11[0x43] = 0;
    uVar18 = 0x3f800000;
    if ((uVar5 & 0x800) != 0) {
      uVar18 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar11 + 0x43) = uVar18;
  }
  plVar11[0x46] = 0;
  *(uint *)(plVar11 + 0x42) = uVar5 & 0xfeffffff;
  plVar11[0x45] = (long)&DAT_040e8f48;
  plVar11[0x47] = 0;
  *(undefined4 *)(plVar11 + 0x48) = 0;
  plVar11[0x44] = (long)(puVar1 + 0x10);
  plVar11[0x49] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x44);
  uVar18 = 0x43480000;
  if ((*(uint *)(plVar11 + 0x48) & 0x800) != 0) {
    uVar18 = 0x405f66f3;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x44] + 0xf0))(plVar11 + 0x44);
  *puVar13 = uVar18;
  uVar5 = *(uint *)(plVar11 + 0x48);
  if ((uVar5 >> 7 & 1) == 0) {
    plVar11[0x49] = 0;
    uVar18 = 0x43480000;
    if ((uVar5 & 0x800) != 0) {
      uVar18 = 0x405f66f3;
    }
    *(undefined4 *)(plVar11 + 0x49) = uVar18;
  }
  plVar11[0x4c] = 0;
  *(uint *)(plVar11 + 0x48) = uVar5 & 0xfeffffff;
  plVar11[0x4b] = (long)"mRenderSize";
  plVar11[0x4d] = 0;
  *(undefined4 *)(plVar11 + 0x4e) = 0;
  plVar11[0x4a] = (long)(puVar2 + 0x10);
  plVar11[0x50] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x4a);
  puVar12 = (undefined8 *)(**(code **)(plVar11[0x4a] + 0xf0))(plVar11 + 0x4a);
  *puVar12 = 0x42c0000042c00000;
  if ((*(uint *)(plVar11 + 0x4e) >> 7 & 1) == 0) {
    plVar11[0x50] = 0x42c0000042c00000;
  }
  *(uint *)(plVar11 + 0x4e) = *(uint *)(plVar11 + 0x4e) & 0xfeffffff;
  local_160 = 0;
  local_190 = PTR_DAT_04bb2020 + 0x10;
  local_188 = "mCapturePos";
  puStack_168 = &DAT_0407ebb1;
  puStack_178 = &DAT_040c501a;
  local_180 = local_190;
  local_170 = local_190;
  FUN_006fdfc0(plVar11 + 0x51,&local_190,PTR_DAT_04bb2150,plVar11);
  plVar11[0x5a] = 0;
  plVar11[0x59] = (long)"mIntensity";
  plVar11[0x5b] = 0;
  *(undefined4 *)(plVar11 + 0x5c) = 0;
  plVar11[0x58] = (long)(puVar1 + 0x10);
  plVar11[0x5d] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x58);
  uVar18 = 0x3f800000;
  if ((*(uint *)(plVar11 + 0x5c) & 0x800) != 0) {
    uVar18 = 0x3c8efa35;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x58] + 0xf0))(plVar11 + 0x58);
  *puVar13 = uVar18;
  uVar5 = *(uint *)(plVar11 + 0x5c);
  if ((uVar5 >> 7 & 1) == 0) {
    plVar11[0x5d] = 0;
    uVar18 = 0x3f800000;
    if ((uVar5 & 0x800) != 0) {
      uVar18 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar11 + 0x5d) = uVar18;
  }
  plVar11[0x60] = 0;
  *(uint *)(plVar11 + 0x5c) = uVar5 & 0xfeffffff;
  plVar11[0x5f] = (long)"mHeight";
  plVar11[0x61] = 0;
  *(undefined4 *)(plVar11 + 0x62) = 0;
  plVar11[0x5e] = (long)(puVar1 + 0x10);
  plVar11[99] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x5e);
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x5e] + 0xf0))(plVar11 + 0x5e);
  *puVar13 = 0;
  if ((*(uint *)(plVar11 + 0x62) >> 7 & 1) == 0) {
    plVar11[99] = 0;
    *(undefined4 *)(plVar11 + 99) = 0;
  }
  plVar11[0x66] = 0;
  *(uint *)(plVar11 + 0x62) = *(uint *)(plVar11 + 0x62) & 0xfeffffff;
  plVar11[0x65] = (long)"mGaussianLevel";
  plVar11[0x67] = 0;
  *(undefined4 *)(plVar11 + 0x68) = 0;
  puVar2 = PTR_DAT_04bb62c0 + 0x10;
  plVar11[0x69] = 0;
  plVar11[100] = (long)puVar2;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 100);
  puVar13 = (undefined4 *)(**(code **)(plVar11[100] + 0xf0))(plVar11 + 100);
  *puVar13 = 10;
  if ((*(uint *)(plVar11 + 0x68) >> 7 & 1) == 0) {
    plVar11[0x69] = 0;
    *(undefined4 *)(plVar11 + 0x69) = 10;
  }
  plVar11[0x6c] = 0;
  *(uint *)(plVar11 + 0x68) = *(uint *)(plVar11 + 0x68) & 0xfeffffff;
  plVar11[0x6b] = (long)"mGaussianSigma";
  plVar11[0x6d] = 0;
  *(undefined4 *)(plVar11 + 0x6e) = 0;
  plVar11[0x6a] = (long)(puVar1 + 0x10);
  plVar11[0x6f] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x6a);
  uVar18 = 0x40800000;
  if ((*(uint *)(plVar11 + 0x6e) & 0x800) != 0) {
    uVar18 = 0x3d8efa35;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x6a] + 0xf0))(plVar11 + 0x6a);
  *puVar13 = uVar18;
  uVar5 = *(uint *)(plVar11 + 0x6e);
  if ((uVar5 >> 7 & 1) == 0) {
    plVar11[0x6f] = 0;
    uVar18 = 0x40800000;
    if ((uVar5 & 0x800) != 0) {
      uVar18 = 0x3d8efa35;
    }
    *(undefined4 *)(plVar11 + 0x6f) = uVar18;
  }
  plVar11[0x72] = 0;
  *(uint *)(plVar11 + 0x6e) = uVar5 & 0xfeffffff;
  plVar11[0x71] = (long)"mShadowBlur";
  plVar11[0x73] = 0;
  *(undefined4 *)(plVar11 + 0x74) = 0;
  plVar11[0x70] = (long)(puVar1 + 0x10);
  plVar11[0x75] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x70);
  uVar18 = 0x3f000000;
  if ((*(uint *)(plVar11 + 0x74) & 0x800) != 0) {
    uVar18 = 0x3c0efa35;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x70] + 0xf0))(plVar11 + 0x70);
  *puVar13 = uVar18;
  uVar5 = *(uint *)(plVar11 + 0x74);
  if ((uVar5 >> 7 & 1) == 0) {
    plVar11[0x75] = 0;
    uVar18 = 0x3f000000;
    if ((uVar5 & 0x800) != 0) {
      uVar18 = 0x3c0efa35;
    }
    *(undefined4 *)(plVar11 + 0x75) = uVar18;
  }
  plVar11[0x78] = 0;
  *(uint *)(plVar11 + 0x74) = uVar5 & 0xfeffffff;
  plVar11[0x77] = (long)"mGradationRange";
  plVar11[0x79] = 0;
  *(undefined4 *)(plVar11 + 0x7a) = 0;
  plVar11[0x76] = (long)(puVar1 + 0x10);
  plVar11[0x7b] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x76);
  uVar18 = 0x3e99999a;
  if ((*(uint *)(plVar11 + 0x7a) & 0x800) != 0) {
    uVar18 = 0x3bab92a6;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x76] + 0xf0))(plVar11 + 0x76);
  *puVar13 = uVar18;
  uVar5 = *(uint *)(plVar11 + 0x7a);
  if ((uVar5 >> 7 & 1) == 0) {
    plVar11[0x7b] = 0;
    uVar18 = 0x3e99999a;
    if ((uVar5 & 0x800) != 0) {
      uVar18 = 0x3bab92a6;
    }
    *(undefined4 *)(plVar11 + 0x7b) = uVar18;
  }
  plVar11[0x7e] = 0;
  *(uint *)(plVar11 + 0x7a) = uVar5 & 0xfeffffff;
  plVar11[0x7d] = (long)"mSphereAoScale";
  plVar11[0x7f] = 0;
  *(undefined4 *)(plVar11 + 0x80) = 0;
  plVar11[0x7c] = (long)(puVar1 + 0x10);
  plVar11[0x81] = 0;
  (**(code **)(*plVar11 + 0x140))(plVar11,plVar11 + 0x7c);
  uVar18 = 0x3f4ccccd;
  if ((*(uint *)(plVar11 + 0x80) & 0x800) != 0) {
    uVar18 = 0x3c64c388;
  }
  puVar13 = (undefined4 *)(**(code **)(plVar11[0x7c] + 0xf0))(plVar11 + 0x7c);
  *puVar13 = uVar18;
  uVar5 = *(uint *)(plVar11 + 0x80);
  if ((uVar5 >> 7 & 1) == 0) {
    plVar11[0x81] = 0;
    uVar18 = 0x3f4ccccd;
    if ((uVar5 & 0x800) != 0) {
      uVar18 = 0x3c64c388;
    }
    *(undefined4 *)(plVar11 + 0x81) = uVar18;
  }
  *(uint *)(plVar11 + 0x80) = uVar5 & 0xfeffffff;
  plVar10[1] = (long)plVar11;
  pvVar17 = (void *)plVar11[7];
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  __src = *(void **)(param_1 + 0x10);
  if (pvVar17 != __src) {
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
    lVar16 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x10) + lVar16) == '\0') goto LAB_01671120;
      lVar9 = *(long *)(param_1 + 0x10) + lVar16;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_01671120;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_01671120;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_01671120:
    iVar4 = (int)lVar16;
    if ((int)plVar11[8] <= (int)lVar16) {
      iVar4 = (int)plVar11[8] + -1;
    }
    memcpy(pvVar17,__src,(long)iVar4);
    *(undefined1 *)((long)pvVar17 + (long)iVar4) = 0;
  }
  plVar11 = (long *)plVar10[1];
  local_7d = 0;
  local_180 = (undefined *)CONCAT35(local_180._5_3_,0x100);
  local_188 = (char *)((long)&local_180 + 4);
  local_190 = PTR_DAT_04bb21f8 + 0x10;
  uVar14 = (**(code **)(*plVar11 + 0xf0))(plVar11,&local_190,1);
  if ((uVar14 & 1) != 0) {
    FUN_03c27e60(plVar11,&local_190,0);
  }
  lVar16 = plVar10[1];
  puVar13 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 0x158) + 0xf0))(lVar16 + 0x158);
  *(undefined4 *)(param_1 + 0x948) = *puVar13;
  *(undefined4 *)(param_1 + 0x94c) = puVar13[1];
  puVar13 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 400) + 0xf0))(lVar16 + 400);
  *(undefined4 *)(param_1 + 0x950) = *puVar13;
  puVar13 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 0x1c0) + 0xf0))(lVar16 + 0x1c0);
  *(undefined4 *)(param_1 + 0x954) = *puVar13;
  puVar13 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 0x288) + 0xf0))(lVar16 + 0x288);
  *(undefined4 *)(param_1 + 0x734) = *puVar13;
  *(undefined4 *)(param_1 + 0x738) = puVar13[1];
  *(undefined4 *)(param_1 + 0x73c) = puVar13[2];
  FUN_01628904(param_1,param_1 + 0x2a0,0x2b,(int)*(float *)(param_1 + 0x948),
               (int)*(float *)(param_1 + 0x94c),*(undefined4 *)(param_1 + 0x950),param_3);
  *(undefined4 *)(param_1 + 0x340) = *(undefined4 *)(param_1 + 0x2a0);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)(param_1 + 0x2a4);
  *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined8 *)(param_1 + 0x350) = *(undefined8 *)(param_1 + 0x2b0);
  *(undefined4 *)(param_1 + 0x358) = *(undefined4 *)(param_1 + 0x2b8);
  *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(param_1 + 700);
  *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x387) = *(undefined8 *)(param_1 + 0x2e7);
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_1 + 0x2d8);
  *(undefined8 *)(param_1 + 0x370) = *(undefined8 *)(param_1 + 0x2d0);
  FUN_038fd1e0(param_1 + 0x390);
  FUN_038fd2f0(param_1 + 0x390,param_1 + 0x2f0);
  *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_1 + 0x330);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x338);
  puVar3 = (uint *)(param_1 + 0x414);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *puVar3 = *puVar3 | 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined4 *)(param_1 + 0x400) = 0;
  fVar19 = (float)(*(int *)(param_1 + 0x950) - 1);
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  *(float *)(param_1 + 0x3f8) = fVar19;
  *(float *)(param_1 + 0x3fc) = fVar19;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *puVar3 = *puVar3 & 0xfffffff7 | 8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined2 *)(param_1 + 0x407) = 0x505;
  *(undefined1 *)(param_1 + 0x409) = 5;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *puVar3 = *puVar3 & 0xfffffffd | 2;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0x3f80000000000000;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *puVar3 = *puVar3 & 0xffffffdf | 0x20;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  FUN_01628904(param_1,param_1 + 0x460,0x2b,2,2,*(undefined4 *)(param_1 + 0x950),param_3);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x460);
  *(undefined8 *)(param_1 + 0x528) = *(undefined8 *)(param_1 + 0x488);
  *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_1 + 0x464);
  *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_1 + 0x468);
  *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)(param_1 + 0x470);
  *(undefined4 *)(param_1 + 0x518) = *(undefined4 *)(param_1 + 0x478);
  *(undefined4 *)(param_1 + 0x51c) = *(undefined4 *)(param_1 + 0x47c);
  *(undefined8 *)(param_1 + 0x520) = *(undefined8 *)(param_1 + 0x480);
  *(undefined8 *)(param_1 + 0x547) = *(undefined8 *)(param_1 + 0x4a7);
  *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_1 + 0x4a0);
  *(undefined8 *)(param_1 + 0x538) = *(undefined8 *)(param_1 + 0x498);
  *(undefined8 *)(param_1 + 0x530) = *(undefined8 *)(param_1 + 0x490);
  FUN_038fd1e0(param_1 + 0x550);
  FUN_038fd2f0(param_1 + 0x550,param_1 + 0x4b0);
  *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x4f0);
  *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0x4f8);
  puVar3 = (uint *)(param_1 + 0x5d4);
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *puVar3 = *puVar3 | 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined4 *)(param_1 + 0x5c0) = 0;
  fVar19 = (float)(*(int *)(param_1 + 0x950) - 1);
  if (fVar19 <= 0.0) {
    fVar19 = 0.0;
  }
  *(float *)(param_1 + 0x5b8) = fVar19;
  *(float *)(param_1 + 0x5bc) = fVar19;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *puVar3 = *puVar3 & 0xfffffff7 | 8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined1 *)(param_1 + 0x5c9) = 5;
  *(undefined2 *)(param_1 + 0x5c7) = 0x505;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *puVar3 = *puVar3 & 0xfffffffd | 2;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined8 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5b0) = 0x3f80000000000000;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar7) {
      *puVar3 = *puVar3 & 0xffffffdf | 0x20;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  FUN_01628904(param_1,param_1 + 0x5e8,0x2b,(int)*(float *)(param_1 + 0x948),
               (int)*(float *)(param_1 + 0x94c),*(undefined4 *)(param_1 + 0x950),param_3);
  FUN_01628904(param_1,param_1 + 0x688,0x2b,2,2,*(undefined4 *)(param_1 + 0x950),param_3);
  lVar16 = *(long *)puVar8;
  if (lVar16 == 0) {
    plVar10 = malloc(0x40);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar16 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)0x0;
        goto LAB_01671570;
      }
    }
    plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x40,8);
  }
LAB_01671570:
  puVar2 = PTR_DAT_04bd1840;
  puVar1 = PTR_DAT_04bb2020;
  plVar10[2] = (long)&DAT_0407ebb1;
  plVar10[3] = 0;
  *(undefined4 *)(plVar10 + 4) = 0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  *(undefined4 *)(plVar10 + 7) = 0;
  *plVar10 = (long)(puVar2 + 0x10);
  plVar10[1] = (long)(puVar1 + 0x10);
  *(undefined4 *)((long)plVar10 + 0x3c) = 0;
  lVar16 = *(long *)puVar8;
  *(long **)(param_1 + 0x728) = plVar10;
  uVar5 = *(int *)(param_1 + 0x954) + 7U & 0xfffffff8;
  __size = (ulong)uVar5 << 3;
  if ((int)uVar5 < 0) {
    __size = 0xffffffffffffffff;
  }
  if (lVar16 == 0) {
    pvVar17 = malloc(__size);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar16 + 8);
      if (lVar9 != 0) {
        puVar12 = (undefined8 *)(lVar9 + 0xa8);
      }
      param_3 = (long *)*puVar12;
      if (param_3 == (long *)0x0) {
        pvVar17 = (void *)0x0;
        goto LAB_0167162c;
      }
    }
    pvVar17 = (void *)(**(code **)(*param_3 + 0x30))(param_3,__size,0x40);
  }
LAB_0167162c:
  plVar10[5] = (long)pvVar17;
  plVar10[6] = (long)pvVar17;
  *(uint *)(plVar10 + 7) = uVar5;
  *(undefined4 *)((long)plVar10 + 0x3c) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0x728) + 0x18) = 5;
  return;
}

