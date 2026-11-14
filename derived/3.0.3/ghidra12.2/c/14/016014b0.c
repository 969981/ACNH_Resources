
void FUN_016014b0(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined *local_118;
  char *pcStack_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined *local_f8;
  char *pcStack_f0;
  undefined4 local_e8;
  undefined1 local_c5;
  undefined *local_c0;
  char *local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined8 *puStack_98;
  undefined4 local_90;
  
  lVar10 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar5 = PTR_DAT_04bb60a0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  param_1[5] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar10;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  puVar8 = PTR_DAT_04bb21f8;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0x100;
  param_1[0x2a] = (long)param_1;
  *param_1 = (long)&PTR_FUN_049b1a70;
  param_1[6] = (long)(puVar8 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  puVar6 = PTR_DAT_04bb2020;
  local_108._0_4_ = 0x40;
  local_90 = 0x80;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_c5 = 0;
  local_b8 = "mPaletteName";
  puStack_a8 = &DAT_040ca03d;
  pcStack_110 = (char *)((long)&local_108 + 4);
  local_108._4_4_ = s_DefaultName_0405c6e7._0_4_;
  uStack_100 = s_DefaultName_0405c6e7._4_4_;
  uStack_fc = 0x656d61;
  puStack_98 = &DAT_0407ebb1;
  local_118 = PTR_DAT_04bb2bc0 + 0x10;
  local_c0 = puVar1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  FUN_00744dd0(param_1 + 0x2b,&local_c0,&local_118,param_1);
  param_1[0x40] = 0x80;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)&PTR_LAB_049b1bd8;
  param_1[0x3d] = (long)"mReleaseVersion";
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x40) >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  local_e8 = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfeffffff;
  pcStack_110 = "mDirectLightColor";
  uStack_100 = 0x40f4708;
  uStack_fc = 0;
  pcStack_f0 = "Min=0.f, Max=1.f";
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  local_118 = puVar1;
  local_f8 = puVar1;
  local_108 = puVar1;
  FUN_00744b60(param_1 + 0x42,&local_118,&local_c0,param_1);
  param_1[0x4c] = 0;
  param_1[0x4b] = (long)"mDirectLightIntensity";
  param_1[0x4d] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4a);
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x4e) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x4a] + 0xf0))(param_1 + 0x4a);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x4e);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x4f] = 0;
    uVar13 = 0x3f800000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x4f) = uVar13;
  }
  param_1[0x52] = 0;
  *(uint *)(param_1 + 0x4e) = uVar7 & 0xfeffffff;
  param_1[0x51] = (long)"mDirectLightDirLongi";
  param_1[0x53] = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x800;
  param_1[0x50] = (long)(puVar1 + 0x10);
  param_1[0x55] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x50);
  uVar13 = 0xc20f24dd;
  if ((*(uint *)(param_1 + 0x54) & 0x800) != 0) {
    uVar13 = 0xbf1fe4b4;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x50] + 0xf0))(param_1 + 0x50);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x54);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x55] = 0;
    uVar13 = 0xc20f24dd;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0xbf1fe4b4;
    }
    *(undefined4 *)(param_1 + 0x55) = uVar13;
  }
  param_1[0x58] = 0;
  *(uint *)(param_1 + 0x54) = uVar7 & 0xfeffffff;
  param_1[0x57] = (long)"mDirectLightDirLati";
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0x800;
  param_1[0x56] = (long)(puVar1 + 0x10);
  param_1[0x5b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x56);
  uVar13 = 0x42300e56;
  if ((*(uint *)(param_1 + 0x5a) & 0x800) != 0) {
    uVar13 = 0x3f44a80c;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x56] + 0xf0))(param_1 + 0x56);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x5a);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x5b] = 0;
    uVar13 = 0x42300e56;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3f44a80c;
    }
    *(undefined4 *)(param_1 + 0x5b) = uVar13;
  }
  param_1[0x5e] = 0;
  *(uint *)(param_1 + 0x5a) = uVar7 & 0xfeffffff;
  param_1[0x5d] = (long)"mRayleighIntensity";
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x5c] = (long)(puVar1 + 0x10);
  param_1[0x61] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5c);
  uVar13 = 0x3d4ccccd;
  if ((*(uint *)(param_1 + 0x60) & 0x800) != 0) {
    uVar13 = 0x3a64c388;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x5c] + 0xf0))(param_1 + 0x5c);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x60);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x61] = 0;
    uVar13 = 0x3d4ccccd;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3a64c388;
    }
    *(undefined4 *)(param_1 + 0x61) = uVar13;
  }
  param_1[100] = 0;
  *(uint *)(param_1 + 0x60) = uVar7 & 0xfeffffff;
  param_1[99] = (long)"mMieIntensity";
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x62] = (long)(puVar1 + 0x10);
  param_1[0x67] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x62);
  uVar13 = 0x40800000;
  if ((*(uint *)(param_1 + 0x66) & 0x800) != 0) {
    uVar13 = 0x3d8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x62] + 0xf0))(param_1 + 0x62);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x66);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x67] = 0;
    uVar13 = 0x40800000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3d8efa35;
    }
    *(undefined4 *)(param_1 + 0x67) = uVar13;
  }
  *(uint *)(param_1 + 0x66) = uVar7 & 0xfeffffff;
  local_118 = puVar6 + 0x10;
  local_e8 = 0;
  pcStack_110 = "mSunColor";
  uStack_100 = 0x4071ef4;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  local_f8 = local_118;
  local_108 = local_118;
  FUN_00744b60(param_1 + 0x68,&local_118,&local_c0,param_1);
  param_1[0x72] = 0;
  param_1[0x71] = (long)"mSkyLightIntensity";
  param_1[0x73] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x70] = (long)(puVar1 + 0x10);
  param_1[0x75] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x70);
  uVar13 = 0x420c0000;
  if ((*(uint *)(param_1 + 0x74) & 0x800) != 0) {
    uVar13 = 0x3f1c61aa;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x70] + 0xf0))(param_1 + 0x70);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x74);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x75] = 0;
    uVar13 = 0x420c0000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3f1c61aa;
    }
    *(undefined4 *)(param_1 + 0x75) = uVar13;
  }
  param_1[0x78] = 0;
  *(uint *)(param_1 + 0x74) = uVar7 & 0xfeffffff;
  param_1[0x77] = (long)"mEnvMapTintIntensity";
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x76] = (long)(puVar1 + 0x10);
  param_1[0x7b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x76);
  uVar13 = 0x3f19999a;
  if ((*(uint *)(param_1 + 0x7a) & 0x800) != 0) {
    uVar13 = 0x3c2b92a6;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x76] + 0xf0))(param_1 + 0x76);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x7a);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x7b] = 0;
    uVar13 = 0x3f19999a;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c2b92a6;
    }
    *(undefined4 *)(param_1 + 0x7b) = uVar13;
  }
  param_1[0x7e] = 0;
  *(uint *)(param_1 + 0x7a) = uVar7 & 0xfeffffff;
  param_1[0x7d] = (long)"mEnvMapTintIntensityLow";
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x7c] = (long)(puVar1 + 0x10);
  param_1[0x81] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7c);
  uVar13 = 0x3e4ccccd;
  if ((*(uint *)(param_1 + 0x80) & 0x800) != 0) {
    uVar13 = 0x3b64c388;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x7c] + 0xf0))(param_1 + 0x7c);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x80);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x81] = 0;
    uVar13 = 0x3e4ccccd;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3b64c388;
    }
    *(undefined4 *)(param_1 + 0x81) = uVar13;
  }
  param_1[0x84] = 0;
  *(uint *)(param_1 + 0x80) = uVar7 & 0xfeffffff;
  param_1[0x83] = (long)"mEnvMapTintIntensityHigh";
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x82] = (long)(puVar1 + 0x10);
  param_1[0x87] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x82);
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x86) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x82] + 0xf0))(param_1 + 0x82);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x86);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x87] = 0;
    uVar13 = 0x3f800000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x87) = uVar13;
  }
  *(uint *)(param_1 + 0x86) = uVar7 & 0xfeffffff;
  local_118 = puVar6 + 0x10;
  local_e8 = 0;
  pcStack_110 = "mFieldGIOverrideColor";
  uStack_100 = 0x40b083a;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  local_f8 = local_118;
  local_108 = local_118;
  FUN_00744b60(param_1 + 0x88,&local_118,&local_c0,param_1);
  param_1[0x92] = 0;
  param_1[0x91] = (long)"mCloudScale";
  param_1[0x93] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  param_1[0x90] = (long)(puVar1 + 0x10);
  param_1[0x95] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x90);
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x94) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x90] + 0xf0))(param_1 + 0x90);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x94);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x95] = 0;
    uVar13 = 0x3f800000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x95) = uVar13;
  }
  param_1[0x98] = 0;
  *(uint *)(param_1 + 0x94) = uVar7 & 0xfeffffff;
  param_1[0x97] = (long)"mCloudDensity";
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x96] = (long)(puVar1 + 0x10);
  param_1[0x9b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x96);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x96] + 0xf0))(param_1 + 0x96);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x9a) >> 7 & 1) == 0) {
    param_1[0x9b] = 0;
    *(undefined4 *)(param_1 + 0x9b) = 0;
  }
  puVar2 = puVar6 + 0x10;
  local_e8 = 0;
  *(uint *)(param_1 + 0x9a) = *(uint *)(param_1 + 0x9a) & 0xfeffffff;
  pcStack_110 = "mCloudColor";
  uStack_100 = 0x4062253;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  local_118 = puVar2;
  local_f8 = puVar2;
  local_108 = puVar2;
  FUN_00744b60(param_1 + 0x9c,&local_118,&local_c0,param_1);
  local_e8 = 0;
  pcStack_110 = "mCloudColorSpecialMul";
  uStack_100 = 0x40ca121;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  local_118 = puVar2;
  local_f8 = puVar2;
  local_108 = puVar2;
  FUN_00744b60(param_1 + 0xa4,&local_118,&local_c0,param_1);
  local_e8 = 0;
  pcStack_110 = "mCloudLight";
  uStack_100 = 0x408c71d;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  local_118 = puVar2;
  local_f8 = puVar2;
  local_108 = puVar2;
  FUN_00744b60(param_1 + 0xac,&local_118,&local_c0,param_1);
  param_1[0xb6] = 0;
  param_1[0xb5] = (long)"mCloudShadeIntensity";
  param_1[0xb7] = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  param_1[0xb4] = (long)(puVar1 + 0x10);
  param_1[0xb9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb4);
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0xb8) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0xb4] + 0xf0))(param_1 + 0xb4);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0xb8);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0xb9] = 0;
    uVar13 = 0x3f800000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0xb9) = uVar13;
  }
  param_1[0xbc] = 0;
  *(uint *)(param_1 + 0xb8) = uVar7 & 0xfeffffff;
  param_1[0xbb] = (long)"mCloudShadeOffset";
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xba] = (long)(puVar1 + 0x10);
  param_1[0xbf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xba);
  uVar13 = 0x3d23d70a;
  if ((*(uint *)(param_1 + 0xbe) & 0x800) != 0) {
    uVar13 = 0x3a3702d3;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0xba] + 0xf0))(param_1 + 0xba);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0xbe);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0xbf] = 0;
    uVar13 = 0x3d23d70a;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3a3702d3;
    }
    *(undefined4 *)(param_1 + 0xbf) = uVar13;
  }
  param_1[0xc2] = 0;
  *(uint *)(param_1 + 0xbe) = uVar7 & 0xfeffffff;
  param_1[0xc1] = (long)"mCloudShadowIntensity";
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  param_1[0xc0] = (long)(puVar1 + 0x10);
  param_1[0xc5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xc0);
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0xc4) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0xc0] + 0xf0))(param_1 + 0xc0);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0xc4);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0xc5] = 0;
    uVar13 = 0x3f800000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0xc5) = uVar13;
  }
  *(uint *)(param_1 + 0xc4) = uVar7 & 0xfeffffff;
  local_118 = puVar6 + 0x10;
  local_e8 = 0;
  pcStack_110 = "mSpecialBackCloudColor";
  uStack_100 = 0x4071eda;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  local_f8 = local_118;
  local_108 = local_118;
  FUN_00744b60(param_1 + 0xc6,&local_118,&local_c0,param_1);
  param_1[0xd0] = 0;
  param_1[0xcf] = (long)"mSpecialBackCloudIntensity";
  param_1[0xd1] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0;
  param_1[0xce] = (long)(puVar1 + 0x10);
  param_1[0xd3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xce);
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0xd2) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0xce] + 0xf0))(param_1 + 0xce);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0xd2);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0xd3] = 0;
    uVar13 = 0x3f800000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0xd3) = uVar13;
  }
  param_1[0xd6] = 0;
  *(uint *)(param_1 + 0xd2) = uVar7 & 0xfeffffff;
  param_1[0xd5] = (long)"mSpecialBackCloudOffset";
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xd4] = (long)(puVar1 + 0x10);
  param_1[0xd9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xd4);
  puVar9 = (undefined4 *)(**(code **)(param_1[0xd4] + 0xf0))(param_1 + 0xd4);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0xd8) >> 7 & 1) == 0) {
    param_1[0xd9] = 0;
    *(undefined4 *)(param_1 + 0xd9) = 0;
  }
  param_1[0xdc] = 0;
  *(uint *)(param_1 + 0xd8) = *(uint *)(param_1 + 0xd8) & 0xfeffffff;
  param_1[0xdb] = (long)"mStarAmount";
  param_1[0xdd] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  param_1[0xda] = (long)(puVar1 + 0x10);
  param_1[0xdf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xda);
  uVar13 = 0xbe99999a;
  if ((*(uint *)(param_1 + 0xde) & 0x800) != 0) {
    uVar13 = 0xbbab92a6;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0xda] + 0xf0))(param_1 + 0xda);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0xde);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0xdf] = 0;
    uVar13 = 0xbe99999a;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0xbbab92a6;
    }
    *(undefined4 *)(param_1 + 0xdf) = uVar13;
  }
  param_1[0xe2] = 0;
  *(uint *)(param_1 + 0xde) = uVar7 & 0xfeffffff;
  param_1[0xe1] = (long)"mStarBrightness";
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe0] = (long)(puVar1 + 0x10);
  param_1[0xe5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xe0);
  uVar13 = 0x42c80000;
  if ((*(uint *)(param_1 + 0xe4) & 0x800) != 0) {
    uVar13 = 0x3fdf66f3;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0xe0] + 0xf0))(param_1 + 0xe0);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0xe4);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0xe5] = 0;
    uVar13 = 0x42c80000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3fdf66f3;
    }
    *(undefined4 *)(param_1 + 0xe5) = uVar13;
  }
  *(uint *)(param_1 + 0xe4) = uVar7 & 0xfeffffff;
  local_118 = puVar6 + 0x10;
  local_e8 = 0;
  pcStack_110 = "mRoomNightLightPos";
  uStack_100 = 0x40df46f;
  uStack_fc = 0;
  pcStack_f0 = "Min=-200.f, Max=200.f";
  local_c0 = (undefined *)0x42a0000042200000;
  local_b8 = (char *)CONCAT44(local_b8._4_4_,0x42200000);
  local_f8 = local_118;
  local_108 = local_118;
  FUN_006fdfc0(param_1 + 0xe6,&local_118,&local_c0,param_1);
  param_1[0xef] = 0;
  param_1[0xee] = (long)"mRoomNightLightRadiuse";
  param_1[0xed] = (long)(puVar1 + 0x10);
  param_1[0xf0] = 0;
  *(undefined4 *)(param_1 + 0xf1) = 0;
  param_1[0xf2] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xed);
  uVar13 = 0x420c0000;
  if ((*(uint *)(param_1 + 0xf1) & 0x800) != 0) {
    uVar13 = 0x3f1c61aa;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0xed] + 0xf0))(param_1 + 0xed);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0xf1);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0xf2] = 0;
    uVar13 = 0x420c0000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3f1c61aa;
    }
    *(undefined4 *)(param_1 + 0xf2) = uVar13;
  }
  param_1[0xf5] = 0;
  *(uint *)(param_1 + 0xf1) = uVar7 & 0xfeffffff;
  param_1[0xf4] = (long)"mRoomLightPalette";
  plVar3 = param_1 + 0xf3;
  param_1[0xf6] = 0;
  *(undefined4 *)(param_1 + 0xf7) = 0;
  param_1[0xf3] = (long)(puVar5 + 0x10);
  param_1[0xf8] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar3);
  *(undefined1 *)((long)param_1 + 0x8db) = 0;
  param_1[0x11f] = (long)"mRoomPointLight";
  *(undefined1 *)((long)param_1 + 0x7dc) = 0;
  param_1[0xfa] = (long)param_1 + 0x7dc;
  param_1[0xf3] = (long)&PTR_FUN_049b1d28;
  plVar4 = param_1 + 0x11e;
  *(undefined4 *)(param_1 + 0xfb) = 0x100;
  param_1[0xf9] = (long)(puVar8 + 0x10);
  *(undefined1 *)(param_1 + 0x11c) = 0;
  param_1[0x11d] = (long)plVar3;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  *(undefined4 *)(param_1 + 0x122) = 0;
  param_1[0x11e] = (long)(puVar5 + 0x10);
  param_1[0x123] = 0;
  lVar10 = param_1[0xf8];
  if (param_1[0xf8] == 0) {
    plVar12 = param_1 + 0xf8;
  }
  else {
    do {
      lVar11 = lVar10;
      lVar10 = *(long *)(lVar11 + 0x10);
    } while (lVar10 != 0);
    plVar12 = (long *)(lVar11 + 0x10);
  }
  *plVar12 = (long)plVar4;
  *(undefined4 *)(param_1 + 0x126) = 0x100;
  param_1[0x11e] = (long)&PTR_LAB_049b1e90;
  param_1[0x14a] = (long)"mIntensity";
  param_1[0x149] = (long)(puVar1 + 0x10);
  param_1[0x121] = (long)plVar3;
  *(undefined1 *)((long)param_1 + 0xa33) = 0;
  *(undefined1 *)((long)param_1 + 0x934) = 0;
  param_1[0x125] = (long)param_1 + 0x934;
  param_1[0x124] = (long)(puVar8 + 0x10);
  *(undefined1 *)(param_1 + 0x147) = 0;
  param_1[0x148] = (long)plVar4;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  *(undefined4 *)(param_1 + 0x14d) = 0;
  param_1[0x14e] = 0;
  lVar10 = param_1[0x123];
  if (param_1[0x123] == 0) {
    plVar12 = param_1 + 0x123;
  }
  else {
    do {
      lVar11 = lVar10;
      lVar10 = *(long *)(lVar11 + 0x10);
    } while (lVar10 != 0);
    plVar12 = (long *)(lVar11 + 0x10);
  }
  *plVar12 = (long)(param_1 + 0x149);
  param_1[0x14c] = (long)plVar4;
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x14d) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x149] + 0xf0))();
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x14d);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x14e] = 0;
    uVar13 = 0x3f800000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x14e) = uVar13;
  }
  puVar5 = puVar6 + 0x10;
  *(uint *)(param_1 + 0x14d) = uVar7 & 0xfeffffff;
  pcStack_110 = "mAlternateLight";
  uStack_100 = 0x40df4cb;
  uStack_fc = 0;
  local_e8 = 0x10000;
  pcStack_f0 = "";
  local_118 = puVar5;
  local_f8 = puVar5;
  local_108 = puVar5;
  FUN_01604f3c(param_1 + 0x14f,&local_118,&local_108,plVar3);
  param_1[0x1aa] = 0;
  param_1[0x1a9] = (long)"mBloomThreshold";
  param_1[0x1ab] = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  param_1[0x1a8] = (long)(puVar1 + 0x10);
  param_1[0x1ad] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1a8);
  uVar13 = 0x40000000;
  if ((*(uint *)(param_1 + 0x1ac) & 0x800) != 0) {
    uVar13 = 0x3d0efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x1a8] + 0xf0))(param_1 + 0x1a8);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x1ac);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x1ad] = 0;
    uVar13 = 0x40000000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3d0efa35;
    }
    *(undefined4 *)(param_1 + 0x1ad) = uVar13;
  }
  local_e8 = 0;
  *(uint *)(param_1 + 0x1ac) = uVar7 & 0xfeffffff;
  pcStack_110 = "mBloomBlendColor0";
  uStack_100 = 0x40969de;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = (undefined *)0x3f6666663f800000;
  local_b8 = (char *)0x3f8000003f000000;
  local_118 = puVar5;
  local_f8 = puVar5;
  local_108 = puVar5;
  FUN_00744b60(param_1 + 0x1ae,&local_118,&local_c0,param_1);
  local_e8 = 0;
  pcStack_110 = "mBloomBlendColor1";
  uStack_100 = 0x40bff90;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = (undefined *)0x3f4000003f800000;
  local_b8 = (char *)0x3f80000000000000;
  local_118 = puVar5;
  local_f8 = puVar5;
  local_108 = puVar5;
  FUN_00744b60(param_1 + 0x1b6,&local_118,&local_c0,param_1);
  local_e8 = 0;
  pcStack_110 = "mBloomBlendColor2";
  uStack_100 = 0x40969fb;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = (undefined *)0x3f0000003f800000;
  local_b8 = (char *)0x3f80000000000000;
  local_118 = puVar5;
  local_f8 = puVar5;
  local_108 = puVar5;
  FUN_00744b60(param_1 + 0x1be,&local_118,&local_c0,param_1);
  local_e8 = 0;
  pcStack_110 = "mBloomBlendColor3";
  uStack_100 = 0x40ab694;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = (undefined *)0x3f6666663f800000;
  local_b8 = (char *)0x3f000000;
  local_118 = puVar5;
  local_f8 = puVar5;
  local_108 = puVar5;
  FUN_00744b60(param_1 + 0x1c6,&local_118,&local_c0,param_1);
  local_e8 = 0;
  pcStack_110 = "mDofColor";
  uStack_100 = 0x40eef81;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = (undefined *)0x3ecccccd3f000000;
  local_b8 = (char *)0x3e8000003e4ccccd;
  local_118 = puVar5;
  local_f8 = puVar5;
  local_108 = puVar5;
  FUN_00744b60(param_1 + 0x1ce,&local_118,&local_c0,param_1);
  local_e8 = 0;
  pcStack_110 = "mFogColor";
  uStack_100 = 0x40ca14e;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = (undefined *)0x3f8000003f000000;
  local_b8 = (char *)0x3f8000003f666666;
  local_118 = puVar5;
  local_f8 = puVar5;
  local_108 = puVar5;
  FUN_00744b60(param_1 + 0x1d6,&local_118,&local_c0,param_1);
  param_1[0x1e0] = 0;
  param_1[0x1df] = (long)"mFogIntensity";
  param_1[0x1e1] = 0;
  *(undefined4 *)(param_1 + 0x1e2) = 0;
  param_1[0x1de] = (long)(puVar1 + 0x10);
  param_1[0x1e3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1de);
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x1e2) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x1de] + 0xf0))(param_1 + 0x1de);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x1e2);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x1e3] = 0;
    uVar13 = 0x3f800000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x1e3) = uVar13;
  }
  local_118 = puVar6 + 0x10;
  local_e8 = 0;
  *(uint *)(param_1 + 0x1e2) = uVar7 & 0xfeffffff;
  pcStack_110 = "mDarkFogColor";
  uStack_100 = 0x405c7fa;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = (undefined *)0x0;
  local_b8 = (char *)0x3f80000000000000;
  local_f8 = local_118;
  local_108 = local_118;
  FUN_00744b60(param_1 + 0x1e4,&local_118,&local_c0,param_1);
  param_1[0x1ee] = 0;
  param_1[0x1ed] = (long)"mDarkFogIntensity";
  param_1[0x1ef] = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  param_1[0x1ec] = (long)(puVar1 + 0x10);
  param_1[0x1f1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1ec);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x1ec] + 0xf0))(param_1 + 0x1ec);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x1f0) >> 7 & 1) == 0) {
    param_1[0x1f1] = 0;
    *(undefined4 *)(param_1 + 0x1f1) = 0;
  }
  param_1[500] = 0;
  *(uint *)(param_1 + 0x1f0) = *(uint *)(param_1 + 0x1f0) & 0xfeffffff;
  param_1[499] = (long)"mDarkFogZPos";
  param_1[0x1f5] = 0;
  *(undefined4 *)(param_1 + 0x1f6) = 0;
  param_1[0x1f2] = (long)(puVar1 + 0x10);
  param_1[0x1f7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1f2);
  uVar13 = 0xc2af0000;
  if ((*(uint *)(param_1 + 0x1f6) & 0x800) != 0) {
    uVar13 = 0xbfc37a14;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x1f2] + 0xf0))(param_1 + 0x1f2);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x1f6);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x1f7] = 0;
    uVar13 = 0xc2af0000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0xbfc37a14;
    }
    *(undefined4 *)(param_1 + 0x1f7) = uVar13;
  }
  param_1[0x1fa] = 0;
  *(uint *)(param_1 + 0x1f6) = uVar7 & 0xfeffffff;
  param_1[0x1f9] = (long)"mDarkFogNear";
  param_1[0x1fb] = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  param_1[0x1f8] = (long)(puVar1 + 0x10);
  param_1[0x1fd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1f8);
  uVar13 = 0x42c80000;
  if ((*(uint *)(param_1 + 0x1fc) & 0x800) != 0) {
    uVar13 = 0x3fdf66f3;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x1f8] + 0xf0))(param_1 + 0x1f8);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x1fc);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x1fd] = 0;
    uVar13 = 0x42c80000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3fdf66f3;
    }
    *(undefined4 *)(param_1 + 0x1fd) = uVar13;
  }
  param_1[0x200] = 0;
  *(uint *)(param_1 + 0x1fc) = uVar7 & 0xfeffffff;
  param_1[0x1ff] = (long)"mDarkFogFar";
  param_1[0x201] = 0;
  *(undefined4 *)(param_1 + 0x202) = 0;
  param_1[0x1fe] = (long)(puVar1 + 0x10);
  param_1[0x203] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1fe);
  uVar13 = 0x43480000;
  if ((*(uint *)(param_1 + 0x202) & 0x800) != 0) {
    uVar13 = 0x405f66f3;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x1fe] + 0xf0))(param_1 + 0x1fe);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x202);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x203] = 0;
    uVar13 = 0x43480000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x405f66f3;
    }
    *(undefined4 *)(param_1 + 0x203) = uVar13;
  }
  puVar5 = puVar6 + 0x10;
  local_e8 = 0;
  *(uint *)(param_1 + 0x202) = uVar7 & 0xfeffffff;
  uStack_100 = 0x40eefa6;
  uStack_fc = 0;
  pcStack_110 = "mHemiSkyColor";
  pcStack_f0 = "";
  local_c0 = (undefined *)0x3e8000003ecccccd;
  local_b8 = (char *)0x3f8000003dcccccd;
  local_118 = puVar5;
  local_f8 = puVar5;
  local_108 = puVar5;
  FUN_00744b60(param_1 + 0x204,&local_118,&local_c0,param_1);
  pcStack_110 = "mHemiGroundColor";
  local_e8 = 0;
  uStack_100 = 0x40bb148;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = (undefined *)0x3e8000003dcccccd;
  local_b8 = (char *)0x3f8000003dcccccd;
  local_118 = puVar5;
  local_f8 = puVar5;
  local_108 = puVar5;
  FUN_00744b60(param_1 + 0x20c,&local_118,&local_c0,param_1);
  param_1[0x216] = 0;
  param_1[0x215] = (long)"mHemiLightIntensity";
  param_1[0x217] = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  param_1[0x214] = (long)(puVar1 + 0x10);
  param_1[0x219] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x214);
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x218) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x214] + 0xf0))(param_1 + 0x214);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x218);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x219] = 0;
    uVar13 = 0x3f800000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x219) = uVar13;
  }
  param_1[0x21c] = 0;
  *(uint *)(param_1 + 0x218) = uVar7 & 0xfeffffff;
  param_1[0x21b] = (long)"mSub0Longi";
  param_1[0x21d] = 0;
  *(undefined4 *)(param_1 + 0x21e) = 0x800;
  param_1[0x21a] = (long)(puVar1 + 0x10);
  param_1[0x21f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x21a);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x21a] + 0xf0))(param_1 + 0x21a);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x21e) >> 7 & 1) == 0) {
    param_1[0x21f] = 0;
    *(undefined4 *)(param_1 + 0x21f) = 0;
  }
  param_1[0x222] = 0;
  *(uint *)(param_1 + 0x21e) = *(uint *)(param_1 + 0x21e) & 0xfeffffff;
  param_1[0x221] = (long)"mSub0Lati";
  param_1[0x223] = 0;
  *(undefined4 *)(param_1 + 0x224) = 0x800;
  param_1[0x220] = (long)(puVar1 + 0x10);
  param_1[0x225] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x220);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x220] + 0xf0))(param_1 + 0x220);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x224) >> 7 & 1) == 0) {
    param_1[0x225] = 0;
    *(undefined4 *)(param_1 + 0x225) = 0;
  }
  *(uint *)(param_1 + 0x224) = *(uint *)(param_1 + 0x224) & 0xfeffffff;
  param_1[0x227] = (long)"mSub0Size";
  param_1[0x228] = 0;
  param_1[0x229] = 0;
  *(undefined4 *)(param_1 + 0x22a) = 0;
  param_1[0x226] = (long)(puVar1 + 0x10);
  param_1[0x22b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x226);
  uVar13 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x22a) & 0x800) != 0) {
    uVar13 = 0x3c0efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x226] + 0xf0))(param_1 + 0x226);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x22a);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x22b] = 0;
    uVar13 = 0x3f000000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x22b) = uVar13;
  }
  local_118 = puVar6 + 0x10;
  local_e8 = 0;
  *(uint *)(param_1 + 0x22a) = uVar7 & 0xfeffffff;
  pcStack_110 = "mSub0IluColor";
  uStack_100 = 0x40cf45a;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  local_f8 = local_118;
  local_108 = local_118;
  FUN_00744b60(param_1 + 0x22c,&local_118,&local_c0,param_1);
  param_1[0x236] = 0;
  param_1[0x235] = (long)"mSub0IluIntensity";
  param_1[0x237] = 0;
  *(undefined4 *)(param_1 + 0x238) = 0;
  param_1[0x234] = (long)(puVar1 + 0x10);
  param_1[0x239] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x234);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x234] + 0xf0))(param_1 + 0x234);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x238) >> 7 & 1) == 0) {
    param_1[0x239] = 0;
    *(undefined4 *)(param_1 + 0x239) = 0;
  }
  param_1[0x23c] = 0;
  *(uint *)(param_1 + 0x238) = *(uint *)(param_1 + 0x238) & 0xfeffffff;
  param_1[0x23d] = 0;
  param_1[0x23b] = (long)"mSub1Longi";
  *(undefined4 *)(param_1 + 0x23e) = 0x800;
  param_1[0x23a] = (long)(puVar1 + 0x10);
  param_1[0x23f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x23a);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x23a] + 0xf0))(param_1 + 0x23a);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x23e) >> 7 & 1) == 0) {
    param_1[0x23f] = 0;
    *(undefined4 *)(param_1 + 0x23f) = 0;
  }
  param_1[0x242] = 0;
  *(uint *)(param_1 + 0x23e) = *(uint *)(param_1 + 0x23e) & 0xfeffffff;
  param_1[0x241] = (long)"mSub1Lati";
  param_1[0x243] = 0;
  *(undefined4 *)(param_1 + 0x244) = 0x800;
  param_1[0x240] = (long)(puVar1 + 0x10);
  param_1[0x245] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x240);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x240] + 0xf0))(param_1 + 0x240);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x244) >> 7 & 1) == 0) {
    param_1[0x245] = 0;
    *(undefined4 *)(param_1 + 0x245) = 0;
  }
  *(uint *)(param_1 + 0x244) = *(uint *)(param_1 + 0x244) & 0xfeffffff;
  param_1[0x247] = (long)"mSub1Size";
  param_1[0x248] = 0;
  param_1[0x249] = 0;
  *(undefined4 *)(param_1 + 0x24a) = 0;
  param_1[0x246] = (long)(puVar1 + 0x10);
  param_1[0x24b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x246);
  uVar13 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x24a) & 0x800) != 0) {
    uVar13 = 0x3c0efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x246] + 0xf0))(param_1 + 0x246);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x24a);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x24b] = 0;
    uVar13 = 0x3f000000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x24b) = uVar13;
  }
  local_118 = puVar6 + 0x10;
  local_e8 = 0;
  *(uint *)(param_1 + 0x24a) = uVar7 & 0xfeffffff;
  pcStack_110 = "mSub1IluColor";
  uStack_100 = 0x40df48b;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  local_f8 = local_118;
  local_108 = local_118;
  FUN_00744b60(param_1 + 0x24c,&local_118,&local_c0,param_1);
  param_1[0x256] = 0;
  param_1[0x255] = (long)"mSub1IluIntensity";
  param_1[599] = 0;
  *(undefined4 *)(param_1 + 600) = 0;
  param_1[0x254] = (long)(puVar1 + 0x10);
  param_1[0x259] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x254);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x254] + 0xf0))(param_1 + 0x254);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 600) >> 7 & 1) == 0) {
    param_1[0x259] = 0;
    *(undefined4 *)(param_1 + 0x259) = 0;
  }
  param_1[0x25c] = 0;
  *(uint *)(param_1 + 600) = *(uint *)(param_1 + 600) & 0xfeffffff;
  param_1[0x25d] = 0;
  param_1[0x25b] = (long)"mSub2Longi";
  *(undefined4 *)(param_1 + 0x25e) = 0x800;
  param_1[0x25a] = (long)(puVar1 + 0x10);
  param_1[0x25f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25a);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x25a] + 0xf0))(param_1 + 0x25a);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x25e) >> 7 & 1) == 0) {
    param_1[0x25f] = 0;
    *(undefined4 *)(param_1 + 0x25f) = 0;
  }
  param_1[0x262] = 0;
  *(uint *)(param_1 + 0x25e) = *(uint *)(param_1 + 0x25e) & 0xfeffffff;
  param_1[0x261] = (long)"mSub2Lati";
  param_1[0x263] = 0;
  *(undefined4 *)(param_1 + 0x264) = 0x800;
  param_1[0x260] = (long)(puVar1 + 0x10);
  param_1[0x265] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x260);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x260] + 0xf0))(param_1 + 0x260);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x264) >> 7 & 1) == 0) {
    param_1[0x265] = 0;
    *(undefined4 *)(param_1 + 0x265) = 0;
  }
  *(uint *)(param_1 + 0x264) = *(uint *)(param_1 + 0x264) & 0xfeffffff;
  param_1[0x267] = (long)"mSub2Size";
  param_1[0x268] = 0;
  param_1[0x269] = 0;
  *(undefined4 *)(param_1 + 0x26a) = 0;
  param_1[0x266] = (long)(puVar1 + 0x10);
  param_1[0x26b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x266);
  uVar13 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x26a) & 0x800) != 0) {
    uVar13 = 0x3c0efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x266] + 0xf0))(param_1 + 0x266);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x26a);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x26b] = 0;
    uVar13 = 0x3f000000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x26b) = uVar13;
  }
  local_118 = puVar6 + 0x10;
  local_e8 = 0;
  *(uint *)(param_1 + 0x26a) = uVar7 & 0xfeffffff;
  pcStack_110 = "mSub2IluColor";
  uStack_100 = 0x40bb164;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  local_f8 = local_118;
  local_108 = local_118;
  FUN_00744b60(param_1 + 0x26c,&local_118,&local_c0,param_1);
  param_1[0x276] = 0;
  param_1[0x275] = (long)"mSub2IluIntensity";
  param_1[0x277] = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  param_1[0x274] = (long)(puVar1 + 0x10);
  param_1[0x279] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x274);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x274] + 0xf0))(param_1 + 0x274);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x278) >> 7 & 1) == 0) {
    param_1[0x279] = 0;
    *(undefined4 *)(param_1 + 0x279) = 0;
  }
  param_1[0x27c] = 0;
  *(uint *)(param_1 + 0x278) = *(uint *)(param_1 + 0x278) & 0xfeffffff;
  param_1[0x27d] = 0;
  param_1[0x27b] = (long)"mSub3Longi";
  *(undefined4 *)(param_1 + 0x27e) = 0x800;
  param_1[0x27a] = (long)(puVar1 + 0x10);
  param_1[0x27f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x27a);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x27a] + 0xf0))(param_1 + 0x27a);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x27e) >> 7 & 1) == 0) {
    param_1[0x27f] = 0;
    *(undefined4 *)(param_1 + 0x27f) = 0;
  }
  param_1[0x282] = 0;
  *(uint *)(param_1 + 0x27e) = *(uint *)(param_1 + 0x27e) & 0xfeffffff;
  param_1[0x281] = (long)"mSub3Lati";
  param_1[0x283] = 0;
  *(undefined4 *)(param_1 + 0x284) = 0x800;
  param_1[0x280] = (long)(puVar1 + 0x10);
  param_1[0x285] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x280);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x280] + 0xf0))(param_1 + 0x280);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x284) >> 7 & 1) == 0) {
    param_1[0x285] = 0;
    *(undefined4 *)(param_1 + 0x285) = 0;
  }
  *(uint *)(param_1 + 0x284) = *(uint *)(param_1 + 0x284) & 0xfeffffff;
  param_1[0x287] = (long)"mSub3Size";
  param_1[0x288] = 0;
  param_1[0x289] = 0;
  *(undefined4 *)(param_1 + 0x28a) = 0;
  param_1[0x286] = (long)(puVar1 + 0x10);
  param_1[0x28b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x286);
  uVar13 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x28a) & 0x800) != 0) {
    uVar13 = 0x3c0efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x286] + 0xf0))(param_1 + 0x286);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x28a);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x28b] = 0;
    uVar13 = 0x3f000000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x28b) = uVar13;
  }
  local_118 = puVar6 + 0x10;
  local_e8 = 0;
  *(uint *)(param_1 + 0x28a) = uVar7 & 0xfeffffff;
  pcStack_110 = "mSub3IluColor";
  uStack_100 = 0x40b589e;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  local_f8 = local_118;
  local_108 = local_118;
  FUN_00744b60(param_1 + 0x28c,&local_118,&local_c0,param_1);
  param_1[0x296] = 0;
  param_1[0x295] = (long)"mSub3IluIntensity";
  param_1[0x297] = 0;
  *(undefined4 *)(param_1 + 0x298) = 0;
  param_1[0x294] = (long)(puVar1 + 0x10);
  param_1[0x299] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x294);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x294] + 0xf0))(param_1 + 0x294);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x298) >> 7 & 1) == 0) {
    param_1[0x299] = 0;
    *(undefined4 *)(param_1 + 0x299) = 0;
  }
  *(uint *)(param_1 + 0x298) = *(uint *)(param_1 + 0x298) & 0xfeffffff;
  param_1[0x29b] = (long)"mWorldAoIntensity";
  param_1[0x29c] = 0;
  param_1[0x29d] = 0;
  *(undefined4 *)(param_1 + 0x29e) = 0;
  param_1[0x29a] = (long)(puVar1 + 0x10);
  param_1[0x29f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x29a);
  uVar13 = 0x3ecccccd;
  if ((*(uint *)(param_1 + 0x29e) & 0x800) != 0) {
    uVar13 = 0x3be4c388;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x29a] + 0xf0))(param_1 + 0x29a);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x29e);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x29f] = 0;
    uVar13 = 0x3ecccccd;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3be4c388;
    }
    *(undefined4 *)(param_1 + 0x29f) = uVar13;
  }
  param_1[0x2a2] = 0;
  *(uint *)(param_1 + 0x29e) = uVar7 & 0xfeffffff;
  param_1[0x2a1] = (long)"mShadowIntensity";
  param_1[0x2a3] = 0;
  *(undefined4 *)(param_1 + 0x2a4) = 0;
  param_1[0x2a0] = (long)(puVar1 + 0x10);
  param_1[0x2a5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2a0);
  uVar13 = 0x3f4ccccd;
  if ((*(uint *)(param_1 + 0x2a4) & 0x800) != 0) {
    uVar13 = 0x3c64c388;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x2a0] + 0xf0))(param_1 + 0x2a0);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x2a4);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x2a5] = 0;
    uVar13 = 0x3f4ccccd;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c64c388;
    }
    *(undefined4 *)(param_1 + 0x2a5) = uVar13;
  }
  local_118 = puVar6 + 0x10;
  local_e8 = 0;
  *(uint *)(param_1 + 0x2a4) = uVar7 & 0xfeffffff;
  pcStack_110 = "mMoonlightEdgeLightColor";
  uStack_100 = 0x40eefc9;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_c0 = &DAT_3f8000003f800000;
  local_b8 = &DAT_3f8000003f800000;
  local_f8 = local_118;
  local_108 = local_118;
  FUN_00744b60(param_1 + 0x2a6,&local_118,&local_c0,param_1);
  param_1[0x2af] = (long)"mMoonlightEdgeLightIntensity";
  param_1[0x2b0] = 0;
  param_1[0x2b1] = 0;
  *(undefined4 *)(param_1 + 0x2b2) = 0;
  param_1[0x2ae] = (long)(puVar1 + 0x10);
  param_1[0x2b3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2ae);
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x2b2) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x2ae] + 0xf0))(param_1 + 0x2ae);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x2b2);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x2b3] = 0;
    uVar13 = 0x3f800000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x2b3) = uVar13;
  }
  param_1[0x2b6] = 0;
  *(uint *)(param_1 + 0x2b2) = uVar7 & 0xfeffffff;
  param_1[0x2b5] = (long)"mMoonLightEdgeParamMoon";
  param_1[0x2b7] = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  param_1[0x2b4] = (long)(puVar1 + 0x10);
  param_1[0x2b9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2b4);
  uVar13 = 0x437a0000;
  if ((*(uint *)(param_1 + 0x2b8) & 0x800) != 0) {
    uVar13 = 0x408ba058;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x2b4] + 0xf0))(param_1 + 0x2b4);
  *puVar9 = uVar13;
  uVar7 = *(uint *)(param_1 + 0x2b8);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x2b9] = 0;
    uVar13 = 0x437a0000;
    if ((uVar7 & 0x800) != 0) {
      uVar13 = 0x408ba058;
    }
    *(undefined4 *)(param_1 + 0x2b9) = uVar13;
  }
  param_1[700] = 0;
  *(uint *)(param_1 + 0x2b8) = uVar7 & 0xfeffffff;
  param_1[699] = (long)"mMoonlightEdgeLightLongi";
  param_1[0x2bd] = 0;
  *(undefined4 *)(param_1 + 0x2be) = 0x800;
  param_1[0x2ba] = (long)(puVar1 + 0x10);
  param_1[0x2bf] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2ba);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x2ba] + 0xf0))(param_1 + 0x2ba);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x2be) >> 7 & 1) == 0) {
    param_1[0x2bf] = 0;
    *(undefined4 *)(param_1 + 0x2bf) = 0;
  }
  param_1[0x2c2] = 0;
  *(uint *)(param_1 + 0x2be) = *(uint *)(param_1 + 0x2be) & 0xfeffffff;
  param_1[0x2c1] = (long)"mMoonlightEdgeLightLati";
  param_1[0x2c3] = 0;
  *(undefined4 *)(param_1 + 0x2c4) = 0x800;
  param_1[0x2c0] = (long)(puVar1 + 0x10);
  param_1[0x2c5] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2c0);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x2c0] + 0xf0))(param_1 + 0x2c0);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x2c4) >> 7 & 1) == 0) {
    param_1[0x2c5] = 0;
    *(undefined4 *)(param_1 + 0x2c5) = 0;
  }
  *(uint *)(param_1 + 0x2c4) = *(uint *)(param_1 + 0x2c4) & 0xfeffffff;
  param_1[0x2c7] = (long)"mMoonlightEdgeLightDirBlendRate";
  param_1[0x2c8] = 0;
  param_1[0x2c9] = 0;
  *(undefined4 *)(param_1 + 0x2ca) = 0;
  param_1[0x2c6] = (long)(puVar1 + 0x10);
  param_1[0x2cb] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2c6);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x2c6] + 0xf0))(param_1 + 0x2c6);
  *puVar9 = 0;
  puVar1 = PTR_DAT_04bb60a0;
  if ((*(uint *)(param_1 + 0x2ca) >> 7 & 1) == 0) {
    param_1[0x2cb] = 0;
    *(undefined4 *)(param_1 + 0x2cb) = 0;
  }
  param_1[0x2ce] = 0;
  *(uint *)(param_1 + 0x2ca) = *(uint *)(param_1 + 0x2ca) & 0xfeffffff;
  plVar3 = param_1 + 0x2cc;
  param_1[0x2cf] = 0;
  param_1[0x2cd] = (long)"mMoonAgePalette";
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  param_1[0x2cc] = (long)(puVar1 + 0x10);
  param_1[0x2d1] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,plVar3);
  puVar6 = puVar6 + 0x10;
  param_1[0x2d3] = (long)param_1 + 0x16a4;
  *(undefined4 *)(param_1 + 0x2d4) = 0x100;
  param_1[0x2d2] = (long)(puVar8 + 0x10);
  param_1[0x2cc] = (long)&PTR_LAB_049b2160;
  pcStack_110 = "mFullMoonParam";
  *(undefined1 *)((long)param_1 + 0x17a3) = 0;
  *(undefined1 *)((long)param_1 + 0x16a4) = 0;
  *(undefined1 *)(param_1 + 0x2f5) = 0;
  param_1[0x2f6] = (long)plVar3;
  local_e8 = 0x10000;
  uStack_100 = 0x40d4c4c;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_118 = puVar6;
  local_f8 = puVar6;
  local_108 = puVar6;
  FUN_016058b0(param_1 + 0x2f7,&local_118,&local_108,plVar3);
  pcStack_110 = "mNewMoonParam";
  local_e8 = 0x10000;
  uStack_100 = 0x4087078;
  uStack_fc = 0;
  pcStack_f0 = "";
  local_118 = puVar6;
  local_f8 = puVar6;
  local_108 = puVar6;
  FUN_016058b0(param_1 + 0x32e,&local_118,&local_108,plVar3);
  param_1[0x365] = 0;
  (**(code **)(param_1[0x2b] + 0xf0))(param_1 + 0x2b);
  return;
}

