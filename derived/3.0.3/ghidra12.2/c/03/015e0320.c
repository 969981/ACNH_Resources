
void FUN_015e0320(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  size_t __size;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  long *plVar15;
  int *piVar16;
  long lVar17;
  void *pvVar18;
  void *__src;
  undefined4 uVar19;
  undefined1 *local_1b0;
  undefined1 *puStack_1a8;
  undefined *local_1a0;
  char *local_198;
  undefined8 local_190;
  undefined *puStack_188;
  undefined *local_180;
  undefined8 *puStack_178;
  undefined4 local_170;
  undefined1 local_8d;
  
  puVar6 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    plVar9 = malloc(0x10);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar11 = (undefined8 *)(lVar17 + 8);
    if (lVar8 != 0) {
      puVar11 = (undefined8 *)(lVar8 + 0xa8);
    }
    plVar9 = (long *)(**(code **)(*(long *)*puVar11 + 0x30))((long *)*puVar11,0x10,8);
  }
  *plVar9 = (long)(PTR_DAT_04bb3048 + 0x10);
  plVar9[1] = 0;
  *(long **)(param_1 + 0x280) = plVar9;
  lVar17 = *(long *)puVar1;
  if (lVar17 == 0) {
    plVar10 = malloc(0x1510);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar10 = (long *)(lVar17 + 8);
    if (lVar8 != 0) {
      plVar10 = (long *)(lVar8 + 0xa8);
    }
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0x0;
    }
    else {
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1510,8);
    }
  }
  puVar6 = PTR_DAT_04bb2020;
  local_170 = 0;
  local_1a0 = PTR_DAT_04bb2020 + 0x10;
  local_198 = "CloudDrawer";
  puStack_178 = &DAT_0407ebb1;
  puStack_188 = &DAT_040bb0ea;
  *plVar10 = (long)(PTR_DAT_04bb3050 + 0x10);
  local_190 = local_1a0;
  local_180 = local_1a0;
  (**(code **)(puVar6 + 0x28))(&local_1a0);
  plVar10[2] = 0;
  plVar10[3] = 0;
  *(undefined1 *)((long)plVar10 + 0x44) = 0;
  plVar10[1] = (long)local_198;
  plVar15 = plVar10 + 5;
  *plVar15 = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(plVar10 + 8) = 0x100;
  *(undefined1 *)((long)plVar10 + 0x143) = 0;
  *(undefined1 *)(plVar10 + 0x29) = 0;
  *(undefined4 *)(plVar10 + 4) = local_170;
  plVar10[0x2e] = 0;
  plVar10[6] = (long)(puVar1 + 0x10);
  plVar10[7] = (long)plVar10 + 0x44;
  *plVar10 = (long)&PTR_FUN_049afb50;
  plVar10[0x2c] = (long)"mFbSize";
  plVar10[0x2d] = 0;
  puVar1 = PTR_DAT_04bbd520 + 0x10;
  *(undefined4 *)(plVar10 + 0x2f) = 0;
  plVar10[0x31] = 0;
  plVar10[0x2a] = (long)plVar10;
  plVar10[0x2b] = (long)puVar1;
  lVar17 = *plVar15;
  if (*plVar15 != 0) {
    do {
      lVar8 = lVar17;
      lVar17 = *(long *)(lVar8 + 0x10);
    } while (lVar17 != 0);
    plVar15 = (long *)(lVar8 + 0x10);
  }
  *plVar15 = (long)(plVar10 + 0x2b);
  plVar10[0x2e] = (long)plVar10;
  puVar11 = (undefined8 *)(**(code **)(plVar10[0x2b] + 0xf0))();
  *puVar11 = 0x3f80000044800000;
  if ((*(uint *)(plVar10 + 0x2f) >> 7 & 1) == 0) {
    plVar10[0x31] = 0x3f80000044800000;
  }
  plVar10[0x34] = 0;
  plVar10[0x35] = 0;
  *(uint *)(plVar10 + 0x2f) = *(uint *)(plVar10 + 0x2f) & 0xfeffffff;
  *(undefined4 *)(plVar10 + 0x36) = 0;
  puVar1 = PTR_DAT_04bb62c0;
  plVar10[0x37] = 0;
  plVar10[0x32] = (long)(puVar1 + 0x10);
  plVar10[0x33] = (long)"mUnitMax";
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x32);
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x32] + 0xf0))(plVar10 + 0x32);
  *puVar12 = 0x200;
  if ((*(uint *)(plVar10 + 0x36) >> 7 & 1) == 0) {
    plVar10[0x37] = 0;
    *(undefined4 *)(plVar10 + 0x37) = 0x200;
  }
  *(undefined4 *)(plVar10 + 0x3c) = 0;
  *(uint *)(plVar10 + 0x36) = *(uint *)(plVar10 + 0x36) & 0xfeffffff;
  plVar10[0x3a] = 0;
  plVar10[0x3b] = 0;
  plVar10[0x3d] = 0;
  plVar10[0x38] = (long)(puVar1 + 0x10);
  plVar10[0x39] = (long)"mActivieUnitNum";
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x38);
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x38] + 0xf0))(plVar10 + 0x38);
  *puVar12 = 0x200;
  if ((*(uint *)(plVar10 + 0x3c) >> 7 & 1) == 0) {
    plVar10[0x3d] = 0;
    *(undefined4 *)(plVar10 + 0x3d) = 0x200;
  }
  plVar10[0x40] = 0;
  *(uint *)(plVar10 + 0x3c) = *(uint *)(plVar10 + 0x3c) & 0xfeffffff;
  plVar10[0x41] = 0;
  *(undefined4 *)(plVar10 + 0x42) = 0;
  puVar1 = PTR_DAT_04bb31d0;
  plVar10[0x43] = 0;
  plVar10[0x3e] = (long)(puVar1 + 0x10);
  plVar10[0x3f] = (long)"mCloudScale";
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x3e);
  uVar19 = 0x3f800000;
  if ((*(uint *)(plVar10 + 0x42) & 0x800) != 0) {
    uVar19 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x3e] + 0xf0))(plVar10 + 0x3e);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x42);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[0x43] = 0;
    uVar19 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar10 + 0x43) = uVar19;
  }
  plVar10[0x46] = 0;
  *(uint *)(plVar10 + 0x42) = uVar4 & 0xfeffffff;
  plVar10[0x45] = (long)"mCloudThreshold";
  plVar10[0x47] = 0;
  *(undefined4 *)(plVar10 + 0x48) = 0;
  plVar10[0x44] = (long)(puVar1 + 0x10);
  plVar10[0x49] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x44);
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x44] + 0xf0))(plVar10 + 0x44);
  *puVar12 = 0;
  if ((*(uint *)(plVar10 + 0x48) >> 7 & 1) == 0) {
    plVar10[0x49] = 0;
    *(undefined4 *)(plVar10 + 0x49) = 0;
  }
  plVar10[0x4c] = 0;
  *(uint *)(plVar10 + 0x48) = *(uint *)(plVar10 + 0x48) & 0xfeffffff;
  plVar10[0x4b] = (long)"mCloudSpecialIntensity";
  plVar10[0x4d] = 0;
  *(undefined4 *)(plVar10 + 0x4e) = 0;
  plVar10[0x4a] = (long)(puVar1 + 0x10);
  plVar10[0x4f] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x4a);
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x4a] + 0xf0))(plVar10 + 0x4a);
  *puVar12 = 0;
  if ((*(uint *)(plVar10 + 0x4e) >> 7 & 1) == 0) {
    plVar10[0x4f] = 0;
    *(undefined4 *)(plVar10 + 0x4f) = 0;
  }
  puVar2 = puVar6 + 0x10;
  *(uint *)(plVar10 + 0x4e) = *(uint *)(plVar10 + 0x4e) & 0xfeffffff;
  local_198 = "mCloudCumulonimbusParam";
  local_170 = 0x10000;
  puStack_188 = &DAT_040621df;
  puStack_178 = &DAT_0407ebb1;
  local_1a0 = puVar2;
  local_190 = puVar2;
  local_180 = puVar2;
  FUN_015e40ec(plVar10 + 0x50,&local_1a0,plVar10);
  local_170 = 0x10000;
  local_198 = "mCloudMackerelParam";
  puStack_188 = &DAT_040b07cf;
  puStack_178 = &DAT_0407ebb1;
  local_1a0 = puVar2;
  local_190 = puVar2;
  local_180 = puVar2;
  FUN_015e40ec(plVar10 + 0xad,&local_1a0,plVar10);
  local_170 = 0x10000;
  local_198 = "mCloudCirrusParam";
  puStack_188 = &DAT_0406cb9a;
  puStack_178 = &DAT_0407ebb1;
  local_1a0 = puVar2;
  local_190 = puVar2;
  local_180 = puVar2;
  FUN_015e40ec(plVar10 + 0x10a,&local_1a0,plVar10);
  local_170 = 0x10000;
  local_198 = "mCloudCirrostratusParam";
  puStack_188 = &DAT_04071e9e;
  puStack_178 = &DAT_0407ebb1;
  local_1a0 = puVar2;
  local_190 = puVar2;
  local_180 = puVar2;
  FUN_015e40ec(plVar10 + 0x167,&local_1a0,plVar10);
  local_170 = 0x10000;
  local_198 = "mCloudUndulatusParam";
  puStack_188 = &DAT_040ca0d2;
  puStack_178 = &DAT_0407ebb1;
  local_1a0 = puVar2;
  local_190 = puVar2;
  local_180 = puVar2;
  FUN_015e40ec(plVar10 + 0x1c4,&local_1a0,plVar10);
  local_170 = 0;
  local_198 = "mWindDir";
  puStack_188 = &DAT_0408c6f4;
  puStack_178 = &DAT_0407ebb1;
  local_1a0 = puVar2;
  local_190 = puVar2;
  local_180 = puVar2;
  FUN_006fdfc0(plVar10 + 0x221,&local_1a0,PTR_DAT_04bb2150,plVar10);
  plVar10[0x229] = (long)"mWindInfluence";
  plVar10[0x22a] = 0;
  plVar10[0x22b] = 0;
  *(undefined4 *)(plVar10 + 0x22c) = 0;
  plVar10[0x228] = (long)(puVar1 + 0x10);
  plVar10[0x22d] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x228);
  uVar19 = 0x3f800000;
  if ((*(uint *)(plVar10 + 0x22c) & 0x800) != 0) {
    uVar19 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x228] + 0xf0))(plVar10 + 0x228);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x22c);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[0x22d] = 0;
    uVar19 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar10 + 0x22d) = uVar19;
  }
  plVar10[0x230] = 0;
  *(uint *)(plVar10 + 0x22c) = uVar4 & 0xfeffffff;
  plVar10[0x22f] = (long)"mWindInfluenceSpecialCloud";
  plVar10[0x231] = 0;
  *(undefined4 *)(plVar10 + 0x232) = 0;
  plVar10[0x22e] = (long)(puVar1 + 0x10);
  plVar10[0x233] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x22e);
  uVar19 = 0x3a83126f;
  if ((*(uint *)(plVar10 + 0x232) & 0x800) != 0) {
    uVar19 = 0x379268a9;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x22e] + 0xf0))(plVar10 + 0x22e);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x232);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[0x233] = 0;
    uVar19 = 0x3a83126f;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x379268a9;
    }
    *(undefined4 *)(plVar10 + 0x233) = uVar19;
  }
  *(uint *)(plVar10 + 0x232) = uVar4 & 0xfeffffff;
  plVar10[0x235] = (long)"mProjectionShadowScrollSpeedX";
  plVar10[0x236] = 0;
  plVar10[0x237] = 0;
  *(undefined4 *)(plVar10 + 0x238) = 0;
  plVar10[0x234] = (long)(puVar1 + 0x10);
  plVar10[0x239] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x234);
  uVar19 = 0x40000000;
  if ((*(uint *)(plVar10 + 0x238) & 0x800) != 0) {
    uVar19 = 0x3d0efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x234] + 0xf0))(plVar10 + 0x234);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x238);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[0x239] = 0;
    uVar19 = 0x40000000;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x3d0efa35;
    }
    *(undefined4 *)(plVar10 + 0x239) = uVar19;
  }
  plVar10[0x23c] = 0;
  *(uint *)(plVar10 + 0x238) = uVar4 & 0xfeffffff;
  plVar10[0x23b] = (long)"mProjectionShadowScrollSpeedZ";
  plVar10[0x23d] = 0;
  *(undefined4 *)(plVar10 + 0x23e) = 0;
  plVar10[0x23a] = (long)(puVar1 + 0x10);
  plVar10[0x23f] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x23a);
  uVar19 = 0x3f800000;
  if ((*(uint *)(plVar10 + 0x23e) & 0x800) != 0) {
    uVar19 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x23a] + 0xf0))(plVar10 + 0x23a);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x23e);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[0x23f] = 0;
    uVar19 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar10 + 0x23f) = uVar19;
  }
  *(uint *)(plVar10 + 0x23e) = uVar4 & 0xfeffffff;
  plVar10[0x241] = (long)"mWindScrollSpeedZ";
  plVar10[0x242] = 0;
  plVar10[0x243] = 0;
  *(undefined4 *)(plVar10 + 0x244) = 0;
  plVar10[0x240] = (long)(puVar1 + 0x10);
  plVar10[0x245] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x240);
  uVar19 = 0x3c23d70a;
  if ((*(uint *)(plVar10 + 0x244) & 0x800) != 0) {
    uVar19 = 0x393702d3;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x240] + 0xf0))(plVar10 + 0x240);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x244);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[0x245] = 0;
    uVar19 = 0x3c23d70a;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x393702d3;
    }
    *(undefined4 *)(plVar10 + 0x245) = uVar19;
  }
  plVar10[0x248] = 0;
  *(uint *)(plVar10 + 0x244) = uVar4 & 0xfeffffff;
  plVar10[0x247] = (long)"mScrollSpeed";
  plVar10[0x249] = 0;
  *(undefined4 *)(plVar10 + 0x24a) = 0;
  plVar10[0x246] = (long)(puVar1 + 0x10);
  plVar10[0x24b] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x246);
  uVar19 = 0x3c23d70a;
  if ((*(uint *)(plVar10 + 0x24a) & 0x800) != 0) {
    uVar19 = 0x393702d3;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x246] + 0xf0))(plVar10 + 0x246);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x24a);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[0x24b] = 0;
    uVar19 = 0x3c23d70a;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x393702d3;
    }
    *(undefined4 *)(plVar10 + 0x24b) = uVar19;
  }
  *(uint *)(plVar10 + 0x24a) = uVar4 & 0xfeffffff;
  plVar10[0x24d] = (long)"mCloudMieIntensity";
  plVar10[0x24e] = 0;
  plVar10[0x24f] = 0;
  *(undefined4 *)(plVar10 + 0x250) = 0;
  plVar10[0x24c] = (long)(puVar1 + 0x10);
  plVar10[0x251] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x24c);
  uVar19 = 0x3f800000;
  if ((*(uint *)(plVar10 + 0x250) & 0x800) != 0) {
    uVar19 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x24c] + 0xf0))(plVar10 + 0x24c);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x250);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[0x251] = 0;
    uVar19 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar10 + 0x251) = uVar19;
  }
  plVar10[0x254] = 0;
  *(uint *)(plVar10 + 0x250) = uVar4 & 0xfeffffff;
  plVar10[0x253] = (long)"mCloudEirthLightIntensity";
  plVar10[0x255] = 0;
  *(undefined4 *)(plVar10 + 0x256) = 0;
  plVar10[0x252] = (long)(puVar1 + 0x10);
  plVar10[599] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x252);
  uVar19 = 0x3f800000;
  if ((*(uint *)(plVar10 + 0x256) & 0x800) != 0) {
    uVar19 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x252] + 0xf0))(plVar10 + 0x252);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x256);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[599] = 0;
    uVar19 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar10 + 599) = uVar19;
  }
  *(uint *)(plVar10 + 0x256) = uVar4 & 0xfeffffff;
  plVar10[0x259] = (long)"mCloudScatterLightIntensity";
  plVar10[0x25a] = 0;
  plVar10[0x25b] = 0;
  *(undefined4 *)(plVar10 + 0x25c) = 0;
  plVar10[600] = (long)(puVar1 + 0x10);
  plVar10[0x25d] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 600);
  uVar19 = 0x3f800000;
  if ((*(uint *)(plVar10 + 0x25c) & 0x800) != 0) {
    uVar19 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[600] + 0xf0))(plVar10 + 600);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x25c);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[0x25d] = 0;
    uVar19 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar10 + 0x25d) = uVar19;
  }
  plVar10[0x260] = 0;
  *(uint *)(plVar10 + 0x25c) = uVar4 & 0xfeffffff;
  plVar10[0x25f] = (long)"mCloudShadeIntensity";
  plVar10[0x261] = 0;
  *(undefined4 *)(plVar10 + 0x262) = 0;
  plVar10[0x25e] = (long)(puVar1 + 0x10);
  plVar10[0x263] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x25e);
  uVar19 = 0x3f000000;
  if ((*(uint *)(plVar10 + 0x262) & 0x800) != 0) {
    uVar19 = 0x3c0efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x25e] + 0xf0))(plVar10 + 0x25e);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x262);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[0x263] = 0;
    uVar19 = 0x3f000000;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x3c0efa35;
    }
    *(undefined4 *)(plVar10 + 0x263) = uVar19;
  }
  *(uint *)(plVar10 + 0x262) = uVar4 & 0xfeffffff;
  plVar10[0x265] = (long)"mCloudShadeOffset";
  plVar10[0x266] = 0;
  plVar10[0x267] = 0;
  *(undefined4 *)(plVar10 + 0x268) = 0;
  plVar10[0x264] = (long)(puVar1 + 0x10);
  plVar10[0x269] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x264);
  uVar19 = 0x3d4ccccd;
  if ((*(uint *)(plVar10 + 0x268) & 0x800) != 0) {
    uVar19 = 0x3a64c388;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x264] + 0xf0))(plVar10 + 0x264);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x268);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[0x269] = 0;
    uVar19 = 0x3d4ccccd;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x3a64c388;
    }
    *(undefined4 *)(plVar10 + 0x269) = uVar19;
  }
  puVar2 = puVar6 + 0x10;
  local_170 = 0;
  *(uint *)(plVar10 + 0x268) = uVar4 & 0xfeffffff;
  local_198 = "mCloudColorBase";
  puStack_188 = &DAT_040f988e;
  puStack_178 = &DAT_0407ebb1;
  local_1b0 = &DAT_3f8000003f800000;
  puStack_1a8 = &DAT_3f8000003f800000;
  local_1a0 = puVar2;
  local_190 = puVar2;
  local_180 = puVar2;
  FUN_00744b60(plVar10 + 0x26a,&local_1a0,&local_1b0,plVar10);
  local_170 = 0;
  local_198 = "mCloudColorHigh";
  puStack_188 = &DAT_0407c57f;
  puStack_178 = &DAT_0407ebb1;
  local_1b0 = &DAT_3f8000003f800000;
  puStack_1a8 = &DAT_3f8000003f800000;
  local_1a0 = puVar2;
  local_190 = puVar2;
  local_180 = puVar2;
  FUN_00744b60(plVar10 + 0x272,&local_1a0,&local_1b0,plVar10);
  local_170 = 0;
  local_198 = "mCloudColorSpecialMul";
  puStack_188 = &DAT_040a613f;
  puStack_178 = &DAT_0407ebb1;
  local_1b0 = &DAT_3f8000003f800000;
  puStack_1a8 = &DAT_3f8000003f800000;
  local_1a0 = puVar2;
  local_190 = puVar2;
  local_180 = puVar2;
  FUN_00744b60(plVar10 + 0x27a,&local_1a0,&local_1b0,plVar10);
  plVar10[0x283] = (long)"mScaleProgram";
  plVar10[0x284] = 0;
  plVar10[0x285] = 0;
  puVar2 = PTR_DAT_04bb33a8;
  *(undefined4 *)(plVar10 + 0x286) = 0;
  plVar10[0x287] = 0;
  plVar10[0x282] = (long)(puVar2 + 0x10);
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x282);
  puVar13 = (undefined1 *)(**(code **)(plVar10[0x282] + 0xf0))(plVar10 + 0x282);
  *puVar13 = 1;
  if ((*(uint *)(plVar10 + 0x286) >> 7 & 1) == 0) {
    plVar10[0x287] = 0;
    *(undefined1 *)(plVar10 + 0x287) = 1;
  }
  *(uint *)(plVar10 + 0x286) = *(uint *)(plVar10 + 0x286) & 0xfeffffff;
  plVar10[0x289] = (long)"mIsEnableCloudDrum";
  plVar10[0x28a] = 0;
  plVar10[0x28b] = 0;
  *(undefined4 *)(plVar10 + 0x28c) = 0;
  plVar10[0x288] = (long)(puVar2 + 0x10);
  plVar10[0x28d] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x288);
  puVar13 = (undefined1 *)(**(code **)(plVar10[0x288] + 0xf0))(plVar10 + 0x288);
  *puVar13 = 1;
  if ((*(uint *)(plVar10 + 0x28c) >> 7 & 1) == 0) {
    plVar10[0x28d] = 0;
    *(undefined1 *)(plVar10 + 0x28d) = 1;
  }
  local_1a0 = puVar6 + 0x10;
  local_170 = 0;
  *(uint *)(plVar10 + 0x28c) = *(uint *)(plVar10 + 0x28c) & 0xfeffffff;
  local_198 = "mSpecialBackCloudColor";
  puStack_188 = &DAT_04071eda;
  puStack_178 = &DAT_0407ebb1;
  local_1b0 = &DAT_3f8000003f800000;
  puStack_1a8 = &DAT_3f8000003f800000;
  local_190 = local_1a0;
  local_180 = local_1a0;
  FUN_00744b60(plVar10 + 0x28e,&local_1a0,&local_1b0,plVar10);
  plVar10[0x298] = 0;
  plVar10[0x297] = (long)"mSpecialBackCloudIntensity";
  plVar10[0x299] = 0;
  *(undefined4 *)(plVar10 + 0x29a) = 0;
  plVar10[0x296] = (long)(puVar1 + 0x10);
  plVar10[0x29b] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x296);
  uVar19 = 0x3f800000;
  if ((*(uint *)(plVar10 + 0x29a) & 0x800) != 0) {
    uVar19 = 0x3c8efa35;
  }
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x296] + 0xf0))(plVar10 + 0x296);
  *puVar12 = uVar19;
  uVar4 = *(uint *)(plVar10 + 0x29a);
  if ((uVar4 >> 7 & 1) == 0) {
    plVar10[0x29b] = 0;
    uVar19 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar19 = 0x3c8efa35;
    }
    *(undefined4 *)(plVar10 + 0x29b) = uVar19;
  }
  *(uint *)(plVar10 + 0x29a) = uVar4 & 0xfeffffff;
  plVar10[0x29d] = (long)"mSpecialBackCloudOffset";
  plVar10[0x29e] = 0;
  plVar10[0x29f] = 0;
  *(undefined4 *)(plVar10 + 0x2a0) = 0;
  plVar10[0x29c] = (long)(puVar1 + 0x10);
  plVar10[0x2a1] = 0;
  (**(code **)(*plVar10 + 0x140))(plVar10,plVar10 + 0x29c);
  puVar12 = (undefined4 *)(**(code **)(plVar10[0x29c] + 0xf0))(plVar10 + 0x29c);
  *puVar12 = 0;
  if ((*(uint *)(plVar10 + 0x2a0) >> 7 & 1) == 0) {
    plVar10[0x2a1] = 0;
    *(undefined4 *)(plVar10 + 0x2a1) = 0;
  }
  *(uint *)(plVar10 + 0x2a0) = *(uint *)(plVar10 + 0x2a0) & 0xfeffffff;
  plVar9[1] = (long)plVar10;
  pvVar18 = (void *)plVar10[7];
  (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
  __src = *(void **)(param_1 + 0x10);
  if (pvVar18 != __src) {
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1 + 8);
    lVar17 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x10) + lVar17) == '\0') goto LAB_015e12fc;
      lVar8 = *(long *)(param_1 + 0x10) + lVar17;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_015e12fc;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_015e12fc;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_015e12fc:
    iVar3 = (int)lVar17;
    if ((int)plVar10[8] <= (int)lVar17) {
      iVar3 = (int)plVar10[8] + -1;
    }
    memcpy(pvVar18,__src,(long)iVar3);
    *(undefined1 *)((long)pvVar18 + (long)iVar3) = 0;
  }
  plVar10 = (long *)plVar9[1];
  local_8d = 0;
  local_190 = (undefined *)CONCAT35(local_190._5_3_,0x100);
  local_198 = (char *)((long)&local_190 + 4);
  local_1a0 = PTR_DAT_04bb21f8 + 0x10;
  uVar14 = (**(code **)(*plVar10 + 0xf0))(plVar10,&local_1a0,1);
  if ((uVar14 & 1) != 0) {
    FUN_03c27e60(plVar10,&local_1a0,0);
  }
  puVar12 = (undefined4 *)(**(code **)(*(long *)(plVar9[1] + 400) + 0xf0))(plVar9[1] + 400);
  *(undefined4 *)(param_1 + 0x4f4) = *puVar12;
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    plVar9 = malloc(0x40);
  }
  else {
    plVar9 = param_3;
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar17 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_015e1400;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x40,8);
  }
LAB_015e1400:
  puVar7 = PTR_DAT_04bd1840;
  *(undefined4 *)(plVar9 + 4) = 0;
  plVar9[2] = (long)&DAT_0407ebb1;
  plVar9[3] = 0;
  plVar9[5] = 0;
  plVar9[6] = 0;
  *(undefined4 *)(plVar9 + 7) = 0;
  *plVar9 = (long)(puVar7 + 0x10);
  plVar9[1] = (long)(puVar6 + 0x10);
  *(undefined4 *)((long)plVar9 + 0x3c) = 0;
  lVar17 = *(long *)puVar1;
  *(long **)(param_1 + 0x480) = plVar9;
  uVar4 = *(int *)(param_1 + 0x4f4) + 7U & 0xfffffff8;
  __size = (ulong)uVar4 << 3;
  if ((int)uVar4 < 0) {
    __size = 0xffffffffffffffff;
  }
  if (lVar17 == 0) {
    pvVar18 = malloc(__size);
  }
  else {
    plVar10 = param_3;
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      plVar10 = (long *)(lVar17 + 8);
      if (lVar8 != 0) {
        plVar10 = (long *)(lVar8 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      pvVar18 = (void *)0x0;
      if (plVar10 == (long *)0x0) goto LAB_015e149c;
    }
    pvVar18 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,__size,0x40);
  }
LAB_015e149c:
  plVar9[5] = (long)pvVar18;
  plVar9[6] = (long)pvVar18;
  *(uint *)(plVar9 + 7) = uVar4;
  *(undefined4 *)((long)plVar9 + 0x3c) = 0;
  FUN_0390d714(param_1 + 0x2f0,5,param_3);
  piVar16 = (int *)(**(long **)(param_1 + 0x2f8) +
                   (ulong)*(ushort *)((long)*(long **)(param_1 + 0x2f8) + 10) * 0xc);
  *(undefined1 *)(piVar16 + 2) = 4;
  *(undefined2 *)((long)piVar16 + 6) = 2;
  *piVar16 = 1;
  uVar4 = *(int *)(param_1 + 800) + 7U & 0xfffffff8;
  *(uint *)(param_1 + 800) = uVar4;
  *(short *)(piVar16 + 1) = (short)uVar4;
  *(uint *)(param_1 + 800) =
       *(int *)(param_1 + 800) + (uint)*(ushort *)((long)piVar16 + 6) * *piVar16 * 4;
  *(short *)(*(long *)(param_1 + 0x2f8) + 10) = *(short *)(*(long *)(param_1 + 0x2f8) + 10) + 1;
  plVar9 = *(long **)(param_1 + 0x2f8);
  uVar5 = *(ushort *)((long)plVar9 + 10);
  if (uVar5 == *(ushort *)(plVar9 + 1)) {
    *(uint *)(param_1 + 800) = *(int *)(param_1 + 800) + 0x1fU & 0xffffffe0;
    uVar5 = *(ushort *)((long)plVar9 + 10);
  }
  piVar16 = (int *)(*plVar9 + (ulong)uVar5 * 0xc);
  *(undefined1 *)(piVar16 + 2) = 3;
  *piVar16 = 1;
  *(undefined2 *)((long)piVar16 + 6) = 1;
  uVar4 = *(int *)(param_1 + 800) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 800) = uVar4;
  *(short *)(piVar16 + 1) = (short)uVar4;
  *(uint *)(param_1 + 800) =
       *(int *)(param_1 + 800) + (uint)*(ushort *)((long)piVar16 + 6) * *piVar16 * 4;
  *(short *)(*(long *)(param_1 + 0x2f8) + 10) = *(short *)(*(long *)(param_1 + 0x2f8) + 10) + 1;
  plVar9 = *(long **)(param_1 + 0x2f8);
  uVar5 = *(ushort *)((long)plVar9 + 10);
  if (uVar5 == *(ushort *)(plVar9 + 1)) {
    *(uint *)(param_1 + 800) = *(int *)(param_1 + 800) + 0x1fU & 0xffffffe0;
    uVar5 = *(ushort *)((long)plVar9 + 10);
  }
  piVar16 = (int *)(*plVar9 + (ulong)uVar5 * 0xc);
  *(undefined1 *)(piVar16 + 2) = 5;
  *piVar16 = 1;
  *(undefined2 *)((long)piVar16 + 6) = 3;
  uVar4 = *(int *)(param_1 + 800) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 800) = uVar4;
  *(short *)(piVar16 + 1) = (short)uVar4;
  *(uint *)(param_1 + 800) =
       *(int *)(param_1 + 800) + (uint)*(ushort *)((long)piVar16 + 6) * *piVar16 * 4;
  *(short *)(*(long *)(param_1 + 0x2f8) + 10) = *(short *)(*(long *)(param_1 + 0x2f8) + 10) + 1;
  plVar9 = *(long **)(param_1 + 0x2f8);
  uVar5 = *(ushort *)((long)plVar9 + 10);
  if (uVar5 == *(ushort *)(plVar9 + 1)) {
    *(uint *)(param_1 + 800) = *(int *)(param_1 + 800) + 0x1fU & 0xffffffe0;
    uVar5 = *(ushort *)((long)plVar9 + 10);
  }
  piVar16 = (int *)(*plVar9 + (ulong)uVar5 * 0xc);
  *(undefined1 *)(piVar16 + 2) = 3;
  *piVar16 = 1;
  *(undefined2 *)((long)piVar16 + 6) = 1;
  uVar4 = *(int *)(param_1 + 800) + 3U & 0xfffffffc;
  *(uint *)(param_1 + 800) = uVar4;
  *(short *)(piVar16 + 1) = (short)uVar4;
  *(uint *)(param_1 + 800) =
       *(int *)(param_1 + 800) + (uint)*(ushort *)((long)piVar16 + 6) * *piVar16 * 4;
  *(short *)(*(long *)(param_1 + 0x2f8) + 10) = *(short *)(*(long *)(param_1 + 0x2f8) + 10) + 1;
  plVar9 = *(long **)(param_1 + 0x2f8);
  uVar5 = *(ushort *)((long)plVar9 + 10);
  if (uVar5 == *(ushort *)(plVar9 + 1)) {
    *(uint *)(param_1 + 800) = *(int *)(param_1 + 800) + 0x1fU & 0xffffffe0;
    uVar5 = *(ushort *)((long)plVar9 + 10);
  }
  piVar16 = (int *)(*plVar9 + (ulong)uVar5 * 0xc);
  *(undefined1 *)(piVar16 + 2) = 5;
  *piVar16 = 1;
  *(undefined2 *)((long)piVar16 + 6) = 3;
  uVar4 = *(int *)(param_1 + 800) + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 800) = uVar4;
  *(short *)(piVar16 + 1) = (short)uVar4;
  *(uint *)(param_1 + 800) =
       *(int *)(param_1 + 800) + (uint)*(ushort *)((long)piVar16 + 6) * *piVar16 * 4;
  *(short *)(*(long *)(param_1 + 0x2f8) + 10) = *(short *)(*(long *)(param_1 + 0x2f8) + 10) + 1;
  if (*(short *)(*(long *)(param_1 + 0x2f8) + 10) == *(short *)(*(long *)(param_1 + 0x2f8) + 8)) {
    *(uint *)(param_1 + 800) = *(int *)(param_1 + 800) + 0x1fU & 0xffffffe0;
  }
  FUN_0390d990(param_1 + 0x2f0,param_3,2,1);
  return;
}

