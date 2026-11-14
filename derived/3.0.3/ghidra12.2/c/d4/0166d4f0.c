
void FUN_0166d4f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long *plVar14;
  int *piVar15;
  long lVar16;
  void *__dest;
  void *__src;
  undefined4 uVar17;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined *local_190;
  char *local_188;
  undefined8 local_180;
  undefined *puStack_178;
  undefined *local_170;
  char *pcStack_168;
  undefined4 local_160;
  undefined1 local_7d;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar16 = *(long *)PTR_DAT_04bb2698;
  if (lVar16 == 0) {
    plVar8 = malloc(0x10);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar11 = (undefined8 *)(lVar16 + 8);
    if (lVar7 != 0) {
      puVar11 = (undefined8 *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,0x10,8);
  }
  *plVar8 = (long)(PTR_DAT_04bb3048 + 0x10);
  plVar8[1] = 0;
  *(long **)(param_1 + 0x280) = plVar8;
  lVar16 = *(long *)puVar1;
  if (lVar16 == 0) {
    plVar9 = malloc(0x5f0);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar9 = (long *)(lVar16 + 8);
    if (lVar7 != 0) {
      plVar9 = (long *)(lVar7 + 0xa8);
    }
    plVar9 = (long *)*plVar9;
    if (plVar9 == (long *)0x0) {
      plVar9 = (long *)0x0;
    }
    else {
      plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x5f0,8);
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  local_160 = 0;
  local_190 = PTR_DAT_04bb2020 + 0x10;
  local_188 = "VolumetricEffect";
  pcStack_168 = "";
  puStack_178 = &DAT_040a0e51;
  *plVar9 = (long)(PTR_DAT_04bb3050 + 0x10);
  local_180 = local_190;
  local_170 = local_190;
  (**(code **)(puVar2 + 0x28))(&local_190);
  plVar9[2] = 0;
  plVar9[3] = 0;
  *(undefined1 *)((long)plVar9 + 0x44) = 0;
  plVar9[1] = (long)local_188;
  plVar14 = plVar9 + 5;
  *plVar14 = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(plVar9 + 8) = 0x100;
  *(undefined1 *)((long)plVar9 + 0x143) = 0;
  *(undefined1 *)(plVar9 + 0x29) = 0;
  *(undefined4 *)(plVar9 + 4) = local_160;
  plVar9[0x2e] = 0;
  plVar9[6] = (long)(puVar1 + 0x10);
  plVar9[7] = (long)plVar9 + 0x44;
  *plVar9 = (long)&PTR_FUN_049bab50;
  plVar9[0x2c] = (long)"mIsEnable";
  plVar9[0x2d] = 0;
  puVar6 = PTR_DAT_04bb33a8;
  puVar1 = PTR_DAT_04bb33a8 + 0x10;
  *(undefined4 *)(plVar9 + 0x2f) = 0;
  plVar9[0x30] = 0;
  plVar9[0x2a] = (long)plVar9;
  plVar9[0x2b] = (long)puVar1;
  lVar16 = *plVar14;
  if (*plVar14 != 0) {
    do {
      lVar7 = lVar16;
      lVar16 = *(long *)(lVar7 + 0x10);
    } while (lVar16 != 0);
    plVar14 = (long *)(lVar7 + 0x10);
  }
  *plVar14 = (long)(plVar9 + 0x2b);
  plVar9[0x2e] = (long)plVar9;
  puVar10 = (undefined1 *)(**(code **)(plVar9[0x2b] + 0xf0))();
  *puVar10 = 1;
  if ((*(uint *)(plVar9 + 0x2f) >> 7 & 1) == 0) {
    plVar9[0x30] = 0;
    *(undefined1 *)(plVar9 + 0x30) = 1;
  }
  puVar1 = puVar6 + 0x10;
  *(uint *)(plVar9 + 0x2f) = *(uint *)(plVar9 + 0x2f) & 0xfeffffff;
  plVar9[0x33] = 0;
  plVar9[0x34] = 0;
  *(undefined4 *)(plVar9 + 0x35) = 0;
  plVar9[0x31] = (long)puVar1;
  plVar9[0x32] = (long)"mIsScatterFogEnable";
  plVar9[0x36] = 0;
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x31);
  puVar10 = (undefined1 *)(**(code **)(plVar9[0x31] + 0xf0))(plVar9 + 0x31);
  *puVar10 = 1;
  if ((*(uint *)(plVar9 + 0x35) >> 7 & 1) == 0) {
    plVar9[0x36] = 0;
    *(undefined1 *)(plVar9 + 0x36) = 1;
  }
  *(undefined4 *)(plVar9 + 0x3b) = 0;
  *(uint *)(plVar9 + 0x35) = *(uint *)(plVar9 + 0x35) & 0xfeffffff;
  plVar9[0x39] = 0;
  plVar9[0x3a] = 0;
  plVar9[0x3c] = 0;
  plVar9[0x37] = (long)puVar1;
  plVar9[0x38] = (long)"mIsDarkFogEnable";
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x37);
  puVar10 = (undefined1 *)(**(code **)(plVar9[0x37] + 0xf0))(plVar9 + 0x37);
  *puVar10 = 1;
  if ((*(uint *)(plVar9 + 0x3b) >> 7 & 1) == 0) {
    plVar9[0x3c] = 0;
    *(undefined1 *)(plVar9 + 0x3c) = 1;
  }
  plVar9[0x3f] = 0;
  plVar9[0x40] = 0;
  *(uint *)(plVar9 + 0x3b) = *(uint *)(plVar9 + 0x3b) & 0xfeffffff;
  *(undefined4 *)(plVar9 + 0x41) = 0;
  puVar1 = PTR_DAT_04bbd520;
  plVar9[0x43] = 0;
  plVar9[0x3d] = (long)(puVar1 + 0x10);
  plVar9[0x3e] = (long)"mFbSize";
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x3d);
  puVar11 = (undefined8 *)(**(code **)(plVar9[0x3d] + 0xf0))(plVar9 + 0x3d);
  *puVar11 = 0x3f80000044800000;
  if ((*(uint *)(plVar9 + 0x41) >> 7 & 1) == 0) {
    plVar9[0x43] = 0x3f80000044800000;
  }
  plVar9[0x46] = 0;
  *(uint *)(plVar9 + 0x41) = *(uint *)(plVar9 + 0x41) & 0xfeffffff;
  plVar9[0x45] = (long)"mUnitMax";
  plVar9[0x47] = 0;
  puVar1 = PTR_DAT_04bb62c0;
  *(undefined4 *)(plVar9 + 0x48) = 0;
  plVar9[0x49] = 0;
  plVar9[0x44] = (long)(puVar1 + 0x10);
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x44);
  puVar12 = (undefined4 *)(**(code **)(plVar9[0x44] + 0xf0))(plVar9 + 0x44);
  *puVar12 = 1;
  if ((*(uint *)(plVar9 + 0x48) >> 7 & 1) == 0) {
    plVar9[0x49] = 0;
    *(undefined4 *)(plVar9 + 0x49) = 1;
  }
  plVar9[0x4c] = 0;
  *(uint *)(plVar9 + 0x48) = *(uint *)(plVar9 + 0x48) & 0xfeffffff;
  plVar9[0x4b] = (long)"mNear";
  plVar9[0x4d] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(plVar9 + 0x4e) = 0;
  plVar9[0x4f] = 0;
  plVar9[0x4a] = (long)(puVar1 + 0x10);
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x4a);
  uVar17 = 0x3f800000;
  if ((*(uint *)(plVar9 + 0x4e) & 0x800) != 0) {
    uVar17 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar9[0x4a] + 0xf0))(plVar9 + 0x4a);
  *puVar12 = uVar17;
  uVar4 = *(uint *)(plVar9 + 0x4e);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar9[0x4f] = 0;
    uVar17 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar17 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar9 + 0x4f) = uVar17;
  }
  plVar9[0x52] = 0;
  *(uint *)(plVar9 + 0x4e) = uVar4 & 0xfeffffff;
  plVar9[0x51] = (long)&DAT_040e8f48;
  plVar9[0x53] = 0;
  *(undefined4 *)(plVar9 + 0x54) = 0;
  plVar9[0x50] = (long)(puVar1 + 0x10);
  plVar9[0x55] = 0;
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x50);
  uVar17 = 0x43480000;
  if ((*(uint *)(plVar9 + 0x54) & 0x800) != 0) {
    uVar17 = 0x405f66f3;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar9[0x50] + 0xf0))(plVar9 + 0x50);
  *puVar12 = uVar17;
  uVar4 = *(uint *)(plVar9 + 0x54);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar9[0x55] = 0;
    uVar17 = 0x43480000;
    if ((uVar4 & 0x800) != 0) {
      uVar17 = 0x405f66f3;
    }
    *(undefined4 *)(plVar9 + 0x55) = uVar17;
  }
  *(uint *)(plVar9 + 0x54) = uVar4 & 0xfeffffff;
  local_190 = puVar2 + 0x10;
  local_160 = 0;
  local_188 = "mColor";
  puStack_178 = &DAT_04062353;
  pcStack_168 = "";
  local_1a0 = &DAT_3f8000003f800000;
  local_198 = &DAT_3f8000003f800000;
  local_180 = local_190;
  local_170 = local_190;
  FUN_00744b60(plVar9 + 0x56,&local_190,&local_1a0,plVar9);
  plVar9[0x60] = 0;
  plVar9[0x5f] = (long)"mIntensity";
  plVar9[0x61] = 0;
  *(undefined4 *)(plVar9 + 0x62) = 0;
  plVar9[0x5e] = (long)(puVar1 + 0x10);
  plVar9[99] = 0;
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x5e);
  uVar17 = 0x3f800000;
  if ((*(uint *)(plVar9 + 0x62) & 0x800) != 0) {
    uVar17 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar9[0x5e] + 0xf0))(plVar9 + 0x5e);
  *puVar12 = uVar17;
  uVar4 = *(uint *)(plVar9 + 0x62);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar9[99] = 0;
    uVar17 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar17 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar9 + 99) = uVar17;
  }
  plVar9[0x66] = 0;
  *(uint *)(plVar9 + 0x62) = uVar4 & 0xfeffffff;
  plVar9[0x65] = (long)"mDarkNear";
  plVar9[0x67] = 0;
  *(undefined4 *)(plVar9 + 0x68) = 0;
  plVar9[100] = (long)(puVar1 + 0x10);
  plVar9[0x69] = 0;
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 100);
  uVar17 = 0x3f800000;
  if ((*(uint *)(plVar9 + 0x68) & 0x800) != 0) {
    uVar17 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar9[100] + 0xf0))(plVar9 + 100);
  *puVar12 = uVar17;
  uVar4 = *(uint *)(plVar9 + 0x68);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar9[0x69] = 0;
    uVar17 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar17 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar9 + 0x69) = uVar17;
  }
  plVar9[0x6c] = 0;
  *(uint *)(plVar9 + 0x68) = uVar4 & 0xfeffffff;
  plVar9[0x6b] = (long)"mDarkFar";
  plVar9[0x6d] = 0;
  *(undefined4 *)(plVar9 + 0x6e) = 0;
  plVar9[0x6a] = (long)(puVar1 + 0x10);
  plVar9[0x6f] = 0;
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x6a);
  uVar17 = 0x43480000;
  if ((*(uint *)(plVar9 + 0x6e) & 0x800) != 0) {
    uVar17 = 0x405f66f3;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar9[0x6a] + 0xf0))(plVar9 + 0x6a);
  *puVar12 = uVar17;
  uVar4 = *(uint *)(plVar9 + 0x6e);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar9[0x6f] = 0;
    uVar17 = 0x43480000;
    if ((uVar4 & 0x800) != 0) {
      uVar17 = 0x405f66f3;
    }
    *(undefined4 *)(plVar9 + 0x6f) = uVar17;
  }
  *(uint *)(plVar9 + 0x6e) = uVar4 & 0xfeffffff;
  local_190 = puVar2 + 0x10;
  local_160 = 0;
  local_188 = "mDarkColor";
  puStack_178 = &DAT_040cf5da;
  pcStack_168 = "";
  local_1a0 = &DAT_3f8000003f800000;
  local_198 = &DAT_3f8000003f800000;
  local_180 = local_190;
  local_170 = local_190;
  FUN_00744b60(plVar9 + 0x70,&local_190,&local_1a0,plVar9);
  plVar9[0x7a] = 0;
  plVar9[0x79] = (long)"mDarkIntensity";
  plVar9[0x7b] = 0;
  *(undefined4 *)(plVar9 + 0x7c) = 0;
  plVar9[0x78] = (long)(puVar1 + 0x10);
  plVar9[0x7d] = 0;
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x78);
  uVar17 = 0x3f800000;
  if ((*(uint *)(plVar9 + 0x7c) & 0x800) != 0) {
    uVar17 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar9[0x78] + 0xf0))(plVar9 + 0x78);
  *puVar12 = uVar17;
  uVar4 = *(uint *)(plVar9 + 0x7c);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar9[0x7d] = 0;
    uVar17 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar17 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar9 + 0x7d) = uVar17;
  }
  plVar9[0x80] = 0;
  *(uint *)(plVar9 + 0x7c) = uVar4 & 0xfeffffff;
  plVar9[0x7f] = (long)"mRayleighIntensity";
  plVar9[0x81] = 0;
  *(undefined4 *)(plVar9 + 0x82) = 0;
  plVar9[0x7e] = (long)(puVar1 + 0x10);
  plVar9[0x83] = 0;
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x7e);
  uVar17 = 0x3d4ccccd;
  if ((*(uint *)(plVar9 + 0x82) & 0x800) != 0) {
    uVar17 = 0x3a64c388;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar9[0x7e] + 0xf0))(plVar9 + 0x7e);
  *puVar12 = uVar17;
  uVar4 = *(uint *)(plVar9 + 0x82);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar9[0x83] = 0;
    uVar17 = 0x3d4ccccd;
    if ((uVar4 & 0x800) != 0) {
      uVar17 = 0x3a64c388;
    }
    *(undefined4 *)(plVar9 + 0x83) = uVar17;
  }
  plVar9[0x86] = 0;
  *(uint *)(plVar9 + 0x82) = uVar4 & 0xfeffffff;
  plVar9[0x85] = (long)"mMieIntensity";
  plVar9[0x87] = 0;
  *(undefined4 *)(plVar9 + 0x88) = 0;
  plVar9[0x84] = (long)(puVar1 + 0x10);
  plVar9[0x89] = 0;
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x84);
  uVar17 = 0x3dcccccd;
  if ((*(uint *)(plVar9 + 0x88) & 0x800) != 0) {
    uVar17 = 0x3ae4c388;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar9[0x84] + 0xf0))(plVar9 + 0x84);
  *puVar12 = uVar17;
  uVar4 = *(uint *)(plVar9 + 0x88);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar9[0x89] = 0;
    uVar17 = 0x3dcccccd;
    if ((uVar4 & 0x800) != 0) {
      uVar17 = 0x3ae4c388;
    }
    *(undefined4 *)(plVar9 + 0x89) = uVar17;
  }
  plVar9[0x8c] = 0;
  *(uint *)(plVar9 + 0x88) = uVar4 & 0xfeffffff;
  plVar9[0x8b] = (long)"mDirectinalLightIntensity";
  plVar9[0x8d] = 0;
  *(undefined4 *)(plVar9 + 0x8e) = 0;
  plVar9[0x8a] = (long)(puVar1 + 0x10);
  plVar9[0x8f] = 0;
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x8a);
  uVar17 = 0x3f800000;
  if ((*(uint *)(plVar9 + 0x8e) & 0x800) != 0) {
    uVar17 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar9[0x8a] + 0xf0))(plVar9 + 0x8a);
  *puVar12 = uVar17;
  uVar4 = *(uint *)(plVar9 + 0x8e);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar9[0x8f] = 0;
    uVar17 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar17 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar9 + 0x8f) = uVar17;
  }
  plVar9[0x92] = 0;
  *(uint *)(plVar9 + 0x8e) = uVar4 & 0xfeffffff;
  plVar9[0x91] = (long)"mPointLightIntensity";
  plVar9[0x93] = 0;
  *(undefined4 *)(plVar9 + 0x94) = 0;
  plVar9[0x90] = (long)(puVar1 + 0x10);
  plVar9[0x95] = 0;
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x90);
  uVar17 = 0x3ecccccd;
  if ((*(uint *)(plVar9 + 0x94) & 0x800) != 0) {
    uVar17 = 0x3be4c388;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar9[0x90] + 0xf0))(plVar9 + 0x90);
  *puVar12 = uVar17;
  uVar4 = *(uint *)(plVar9 + 0x94);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar9[0x95] = 0;
    uVar17 = 0x3ecccccd;
    if ((uVar4 & 0x800) != 0) {
      uVar17 = 0x3be4c388;
    }
    *(undefined4 *)(plVar9 + 0x95) = uVar17;
  }
  plVar9[0x98] = 0;
  *(uint *)(plVar9 + 0x94) = uVar4 & 0xfeffffff;
  plVar9[0x97] = (long)"mSpotLightIntensity";
  plVar9[0x99] = 0;
  *(undefined4 *)(plVar9 + 0x9a) = 0;
  plVar9[0x96] = (long)(puVar1 + 0x10);
  plVar9[0x9b] = 0;
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0x96);
  uVar17 = 0x3f800000;
  if ((*(uint *)(plVar9 + 0x9a) & 0x800) != 0) {
    uVar17 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar9[0x96] + 0xf0))(plVar9 + 0x96);
  *puVar12 = uVar17;
  uVar4 = *(uint *)(plVar9 + 0x9a);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar9[0x9b] = 0;
    uVar17 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar17 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar9 + 0x9b) = uVar17;
  }
  puVar2 = puVar2 + 0x10;
  local_160 = 0;
  *(uint *)(plVar9 + 0x9a) = uVar4 & 0xfeffffff;
  puVar1 = PTR_DAT_04bb2150;
  local_188 = "mAABBPos";
  puStack_178 = &DAT_0405c884;
  pcStack_168 = "Min=0.f";
  local_190 = puVar2;
  local_180 = puVar2;
  local_170 = puVar2;
  FUN_006fdfc0(plVar9 + 0x9c,&local_190,PTR_DAT_04bb2150,plVar9);
  local_160 = 0;
  local_188 = "mAABBRange";
  local_1a0 = (undefined1 *)0x4220000042c80000;
  local_198._0_4_ = 0x42c80000;
  puStack_178 = &DAT_040a0e8a;
  pcStack_168 = "Min=0.f";
  local_190 = puVar2;
  local_180 = puVar2;
  local_170 = puVar2;
  FUN_006fdfc0(plVar9 + 0xa3,&local_190,&local_1a0,plVar9);
  local_160 = 0;
  local_188 = "mDarkAABBPos";
  puStack_178 = &DAT_0407c601;
  pcStack_168 = "Min=0.f";
  local_190 = puVar2;
  local_180 = puVar2;
  local_170 = puVar2;
  FUN_006fdfc0(plVar9 + 0xaa,&local_190,puVar1,plVar9);
  local_160 = 0;
  local_188 = "mDarkAABBRange";
  local_1a0 = (undefined1 *)0x4220000042c80000;
  puStack_178 = &DAT_040a0ea9;
  local_198 = (undefined1 *)CONCAT44(local_198._4_4_,0x42c80000);
  pcStack_168 = "Min=0.f";
  local_190 = puVar2;
  local_180 = puVar2;
  local_170 = puVar2;
  FUN_006fdfc0(plVar9 + 0xb1,&local_190,&local_1a0,plVar9);
  plVar9[0xba] = 0;
  plVar9[0xb9] = (long)"mIsEnableTraceAABB";
  plVar9[0xb8] = (long)(puVar6 + 0x10);
  plVar9[0xbb] = 0;
  *(undefined4 *)(plVar9 + 0xbc) = 0;
  plVar9[0xbd] = 0;
  (**(code **)(*plVar9 + 0x140))(plVar9,plVar9 + 0xb8);
  puVar10 = (undefined1 *)(**(code **)(plVar9[0xb8] + 0xf0))(plVar9 + 0xb8);
  *puVar10 = 1;
  if ((*(uint *)(plVar9 + 0xbc) >> 7 & 1) == 0) {
    plVar9[0xbd] = 0;
    *(undefined1 *)(plVar9 + 0xbd) = 1;
  }
  *(uint *)(plVar9 + 0xbc) = *(uint *)(plVar9 + 0xbc) & 0xfeffffff;
  plVar8[1] = (long)plVar9;
  __dest = (void *)plVar9[7];
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  __src = *(void **)(param_1 + 0x10);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
    lVar16 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x10) + lVar16) == '\0') goto LAB_0166e1dc;
      lVar7 = *(long *)(param_1 + 0x10) + lVar16;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_0166e1dc;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_0166e1dc;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_0166e1dc:
    iVar3 = (int)lVar16;
    if ((int)plVar9[8] <= (int)lVar16) {
      iVar3 = (int)plVar9[8] + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  plVar9 = (long *)plVar8[1];
  local_7d = 0;
  local_180 = (undefined *)CONCAT35(local_180._5_3_,0x100);
  local_188 = (char *)((long)&local_180 + 4);
  local_190 = PTR_DAT_04bb21f8 + 0x10;
  uVar13 = (**(code **)(*plVar9 + 0xf0))(plVar9,&local_190,1);
  if ((uVar13 & 1) != 0) {
    FUN_03c27e60(plVar9,&local_190,0);
  }
  puVar12 = (undefined4 *)(**(code **)(*(long *)(plVar8[1] + 0x220) + 0xf0))(plVar8[1] + 0x220);
  *(undefined4 *)(param_1 + 0x380) = *puVar12;
  FUN_0390d714(param_1 + 0x298,8,param_3);
  piVar15 = (int *)(**(long **)(param_1 + 0x2a0) +
                   (ulong)*(ushort *)((long)*(long **)(param_1 + 0x2a0) + 10) * 0xc);
  *(undefined1 *)(piVar15 + 2) = 4;
  *piVar15 = 1;
  *(undefined2 *)((long)piVar15 + 6) = 2;
  uVar4 = *(int *)(param_1 + 0x2c8) + 7U & 0xfffffff8;
  *(uint *)(param_1 + 0x2c8) = uVar4;
  *(short *)(piVar15 + 1) = (short)uVar4;
  *(uint *)(param_1 + 0x2c8) =
       *(int *)(param_1 + 0x2c8) + (uint)*(ushort *)((long)piVar15 + 6) * *piVar15 * 4;
  *(short *)(*(long *)(param_1 + 0x2a0) + 10) = *(short *)(*(long *)(param_1 + 0x2a0) + 10) + 1;
  plVar8 = *(long **)(param_1 + 0x2a0);
  uVar5 = *(ushort *)((long)plVar8 + 10);
  if (uVar5 == *(ushort *)(plVar8 + 1)) {
    *(uint *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 0x1fU & 0xffffffe0;
    uVar5 = *(ushort *)((long)plVar8 + 10);
  }
  piVar15 = (int *)(*plVar8 + (ulong)uVar5 * 0xc);
  *(undefined1 *)(piVar15 + 2) = 3;
  *piVar15 = 1;
  *(undefined2 *)((long)piVar15 + 6) = 1;
  uVar4 = *(int *)(param_1 + 0x2c8) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x2c8) = uVar4;
  *(short *)(piVar15 + 1) = (short)uVar4;
  *(uint *)(param_1 + 0x2c8) =
       *(int *)(param_1 + 0x2c8) + (uint)*(ushort *)((long)piVar15 + 6) * *piVar15 * 4;
  *(short *)(*(long *)(param_1 + 0x2a0) + 10) = *(short *)(*(long *)(param_1 + 0x2a0) + 10) + 1;
  plVar8 = *(long **)(param_1 + 0x2a0);
  uVar5 = *(ushort *)((long)plVar8 + 10);
  if (uVar5 == *(ushort *)(plVar8 + 1)) {
    *(uint *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 0x1fU & 0xffffffe0;
    uVar5 = *(ushort *)((long)plVar8 + 10);
  }
  piVar15 = (int *)(*plVar8 + (ulong)uVar5 * 0xc);
  *(undefined1 *)(piVar15 + 2) = 3;
  *piVar15 = 1;
  *(undefined2 *)((long)piVar15 + 6) = 1;
  uVar4 = *(int *)(param_1 + 0x2c8) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x2c8) = uVar4;
  *(short *)(piVar15 + 1) = (short)uVar4;
  *(uint *)(param_1 + 0x2c8) =
       *(int *)(param_1 + 0x2c8) + (uint)*(ushort *)((long)piVar15 + 6) * *piVar15 * 4;
  *(short *)(*(long *)(param_1 + 0x2a0) + 10) = *(short *)(*(long *)(param_1 + 0x2a0) + 10) + 1;
  plVar8 = *(long **)(param_1 + 0x2a0);
  uVar5 = *(ushort *)((long)plVar8 + 10);
  if (uVar5 == *(ushort *)(plVar8 + 1)) {
    *(uint *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 0x1fU & 0xffffffe0;
    uVar5 = *(ushort *)((long)plVar8 + 10);
  }
  piVar15 = (int *)(*plVar8 + (ulong)uVar5 * 0xc);
  *(undefined1 *)(piVar15 + 2) = 5;
  *piVar15 = 1;
  *(undefined2 *)((long)piVar15 + 6) = 3;
  uVar4 = *(int *)(param_1 + 0x2c8) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x2c8) = uVar4;
  *(short *)(piVar15 + 1) = (short)uVar4;
  *(uint *)(param_1 + 0x2c8) =
       *(int *)(param_1 + 0x2c8) + (uint)*(ushort *)((long)piVar15 + 6) * *piVar15 * 4;
  *(short *)(*(long *)(param_1 + 0x2a0) + 10) = *(short *)(*(long *)(param_1 + 0x2a0) + 10) + 1;
  plVar8 = *(long **)(param_1 + 0x2a0);
  uVar5 = *(ushort *)((long)plVar8 + 10);
  if (uVar5 == *(ushort *)(plVar8 + 1)) {
    *(uint *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 0x1fU & 0xffffffe0;
    uVar5 = *(ushort *)((long)plVar8 + 10);
  }
  piVar15 = (int *)(*plVar8 + (ulong)uVar5 * 0xc);
  *(undefined1 *)(piVar15 + 2) = 5;
  *piVar15 = 1;
  *(undefined2 *)((long)piVar15 + 6) = 3;
  uVar4 = *(int *)(param_1 + 0x2c8) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x2c8) = uVar4;
  *(short *)(piVar15 + 1) = (short)uVar4;
  *(uint *)(param_1 + 0x2c8) =
       *(int *)(param_1 + 0x2c8) + (uint)*(ushort *)((long)piVar15 + 6) * *piVar15 * 4;
  *(short *)(*(long *)(param_1 + 0x2a0) + 10) = *(short *)(*(long *)(param_1 + 0x2a0) + 10) + 1;
  plVar8 = *(long **)(param_1 + 0x2a0);
  uVar5 = *(ushort *)((long)plVar8 + 10);
  if (uVar5 == *(ushort *)(plVar8 + 1)) {
    *(uint *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 0x1fU & 0xffffffe0;
    uVar5 = *(ushort *)((long)plVar8 + 10);
  }
  piVar15 = (int *)(*plVar8 + (ulong)uVar5 * 0xc);
  *(undefined1 *)(piVar15 + 2) = 6;
  *(undefined2 *)((long)piVar15 + 6) = 4;
  *piVar15 = 1;
  uVar4 = *(int *)(param_1 + 0x2c8) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 0x2c8) = uVar4;
  *(short *)(piVar15 + 1) = (short)uVar4;
  *(uint *)(param_1 + 0x2c8) =
       *(int *)(param_1 + 0x2c8) + (uint)*(ushort *)((long)piVar15 + 6) * *piVar15 * 4;
  *(short *)(*(long *)(param_1 + 0x2a0) + 10) = *(short *)(*(long *)(param_1 + 0x2a0) + 10) + 1;
  plVar8 = *(long **)(param_1 + 0x2a0);
  uVar5 = *(ushort *)((long)plVar8 + 10);
  if (uVar5 == *(ushort *)(plVar8 + 1)) {
    *(uint *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 0x1fU & 0xffffffe0;
    uVar5 = *(ushort *)((long)plVar8 + 10);
  }
  piVar15 = (int *)(*plVar8 + (ulong)uVar5 * 0xc);
  *(undefined1 *)(piVar15 + 2) = 3;
  *piVar15 = 1;
  *(undefined2 *)((long)piVar15 + 6) = 1;
  uVar4 = *(int *)(param_1 + 0x2c8) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x2c8) = uVar4;
  *(short *)(piVar15 + 1) = (short)uVar4;
  *(uint *)(param_1 + 0x2c8) =
       *(int *)(param_1 + 0x2c8) + (uint)*(ushort *)((long)piVar15 + 6) * *piVar15 * 4;
  *(short *)(*(long *)(param_1 + 0x2a0) + 10) = *(short *)(*(long *)(param_1 + 0x2a0) + 10) + 1;
  plVar8 = *(long **)(param_1 + 0x2a0);
  uVar5 = *(ushort *)((long)plVar8 + 10);
  if (uVar5 == *(ushort *)(plVar8 + 1)) {
    *(uint *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 0x1fU & 0xffffffe0;
    uVar5 = *(ushort *)((long)plVar8 + 10);
  }
  piVar15 = (int *)(*plVar8 + (ulong)uVar5 * 0xc);
  *(undefined1 *)(piVar15 + 2) = 3;
  *piVar15 = 1;
  *(undefined2 *)((long)piVar15 + 6) = 1;
  uVar4 = *(int *)(param_1 + 0x2c8) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 0x2c8) = uVar4;
  *(short *)(piVar15 + 1) = (short)uVar4;
  *(uint *)(param_1 + 0x2c8) =
       *(int *)(param_1 + 0x2c8) + (uint)*(ushort *)((long)piVar15 + 6) * *piVar15 * 4;
  *(short *)(*(long *)(param_1 + 0x2a0) + 10) = *(short *)(*(long *)(param_1 + 0x2a0) + 10) + 1;
  if (*(short *)(*(long *)(param_1 + 0x2a0) + 10) == *(short *)(*(long *)(param_1 + 0x2a0) + 8)) {
    *(uint *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c8) + 0x1fU & 0xffffffe0;
  }
  FUN_0390d990(param_1 + 0x298,param_3,2,1);
  return;
}

