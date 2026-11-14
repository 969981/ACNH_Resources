
void FUN_015727c0(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  void *pvVar14;
  undefined4 uVar15;
  undefined *local_1c8;
  char *pcStack_1c0;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined *local_1a8;
  undefined8 *puStack_1a0;
  undefined4 local_198;
  undefined1 local_175;
  undefined1 local_b5;
  undefined *local_b0;
  char *pcStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined4 local_80;
  
  lVar11 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  plVar13 = param_1 + 5;
  *plVar13 = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar11;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *param_1 = (long)&PTR_FUN_049ab5c0;
  param_1[0x2c] = (long)"mIsEnable";
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  puVar1 = PTR_DAT_04bb33a8 + 0x10;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  param_1[0x2a] = (long)param_1;
  param_1[0x2b] = (long)puVar1;
  lVar11 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar12 = lVar11;
      lVar11 = *(long *)(lVar12 + 0x10);
    } while (lVar11 != 0);
    plVar13 = (long *)(lVar12 + 0x10);
  }
  *plVar13 = (long)(param_1 + 0x2b);
  param_1[0x2e] = (long)param_1;
  puVar9 = (undefined1 *)(**(code **)(param_1[0x2b] + 0xf0))();
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x2f) >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  puVar2 = PTR_DAT_04bb2020;
  uVar7 = s_DefaultName_0405c6e7._0_8_;
  local_1b8._0_4_ = 0x40;
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfeffffff;
  puVar1 = puVar2 + 0x10;
  local_80 = 0;
  pcStack_a8 = "mName";
  puStack_98 = &DAT_040ca03d;
  puStack_88 = &DAT_0407ebb1;
  pcStack_1c0 = (char *)((long)&local_1b8 + 4);
  local_175 = 0;
  local_1b8._4_4_ = (undefined4)uVar7;
  uStack_1b0 = SUB84(uVar7,4);
  uStack_1ac = 0x656d61;
  local_1c8 = PTR_DAT_04bb2bc0 + 0x10;
  local_b0 = puVar1;
  local_a0 = puVar1;
  local_90 = puVar1;
  FUN_00744dd0(param_1 + 0x31,&local_b0,&local_1c8,param_1);
  local_198 = 0;
  pcStack_1c0 = "mColor";
  uStack_1b0 = 0x40da0ab;
  uStack_1ac = 0;
  puStack_1a0 = &DAT_0407ebb1;
  local_b0 = &DAT_3f8000003f800000;
  pcStack_a8 = &DAT_3f8000003f800000;
  local_1c8 = puVar1;
  local_1a8 = puVar1;
  local_1b8 = puVar1;
  FUN_00744b60(param_1 + 0x42,&local_1c8,&local_b0,param_1);
  param_1[0x4c] = 0;
  param_1[0x4b] = (long)"mIntensity";
  param_1[0x4d] = 0;
  puVar8 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x4a] = (long)(puVar8 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4a);
  uVar15 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x4e) & 0x800) != 0) {
    uVar15 = 0x3c8efa35;
  }
  puVar10 = (undefined4 *)(**(code **)(param_1[0x4a] + 0xf0))(param_1 + 0x4a);
  *puVar10 = uVar15;
  uVar6 = *(uint *)(param_1 + 0x4e);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x4f] = 0;
    uVar15 = 0x3f800000;
    if ((uVar6 & 0x800) != 0) {
      uVar15 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x4f) = uVar15;
  }
  local_198 = 0;
  *(uint *)(param_1 + 0x4e) = uVar6 & 0xfeffffff;
  pcStack_1c0 = "mPos";
  uStack_1b0 = 0x40bff0f;
  uStack_1ac = 0;
  puStack_1a0 = &DAT_0407ebb1;
  local_1c8 = puVar1;
  local_1a8 = puVar1;
  local_1b8 = puVar1;
  FUN_006fdfc0(param_1 + 0x50,&local_1c8,PTR_DAT_04bb2150,param_1);
  param_1[0x59] = 0;
  param_1[0x58] = (long)"mSize";
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x57] = (long)(puVar8 + 0x10);
  param_1[0x5c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x57);
  puVar10 = (undefined4 *)(**(code **)(param_1[0x57] + 0xf0))(param_1 + 0x57);
  *puVar10 = 0;
  if ((*(uint *)(param_1 + 0x5b) >> 7 & 1) == 0) {
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  puVar2 = puVar2 + 0x10;
  local_80 = 0;
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) & 0xfeffffff;
  puVar8 = PTR_PTR_04bb2238;
  pcStack_a8 = "mBindModelName";
  puStack_98 = &DAT_040f4627;
  pvVar3 = (void *)((long)&local_1b8 + 4);
  puStack_88 = &DAT_0407ebb1;
  puVar1 = PTR_DAT_04bb4520 + 0x10;
  local_1b8._0_4_ = 0x100;
  local_b5 = 0;
  local_1c8 = puVar1;
  pcStack_1c0 = pvVar3;
  local_b0 = puVar2;
  local_a0 = puVar2;
  local_90 = puVar2;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pvVar14 = *(void **)(puVar8 + 8);
  if (pvVar3 != pvVar14) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar8 + 8) + lVar11) == '\0') goto LAB_01572ba0;
      lVar12 = *(long *)(puVar8 + 8) + lVar11;
      if (*(char *)(lVar12 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01572ba0;
      }
      if (*(char *)(lVar12 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01572ba0;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01572ba0:
    iVar5 = (int)lVar11;
    if ((int)local_1b8 <= (int)lVar11) {
      iVar5 = (int)local_1b8 + -1;
    }
    memcpy(pvVar3,pvVar14,(long)iVar5);
    *(undefined1 *)((long)pvVar3 + (long)iVar5) = 0;
  }
  puVar4 = PTR_DAT_04bb21f8 + 0x10;
  local_1c8 = puVar4;
  FUN_01573030(param_1 + 0x5d,&local_b0,&local_1c8,param_1);
  local_80 = 0;
  pcStack_a8 = "mBindBoneName";
  pvVar3 = (void *)((long)&local_1b8 + 4);
  puStack_98 = &DAT_040cf2ec;
  local_b5 = 0;
  local_1b8._0_4_ = 0x100;
  puStack_88 = &DAT_0407ebb1;
  local_1c8 = puVar1;
  pcStack_1c0 = pvVar3;
  local_b0 = puVar2;
  local_a0 = puVar2;
  local_90 = puVar2;
  (**(code **)(*(long *)puVar8 + 0x18))(puVar8);
  pvVar14 = *(void **)(puVar8 + 8);
  if (pvVar3 != pvVar14) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar8 + 8) + lVar11) == '\0') goto LAB_01572c9c;
      lVar12 = *(long *)(puVar8 + 8) + lVar11;
      if (*(char *)(lVar12 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_01572c9c;
      }
      if (*(char *)(lVar12 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_01572c9c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_01572c9c:
    iVar5 = (int)lVar11;
    if ((int)local_1b8 <= (int)lVar11) {
      iVar5 = (int)local_1b8 + -1;
    }
    memcpy(pvVar3,pvVar14,(long)iVar5);
    *(undefined1 *)((long)pvVar3 + (long)iVar5) = 0;
  }
  local_1c8 = puVar4;
  FUN_01573030(param_1 + 0x86,&local_b0,&local_1c8,param_1);
  param_1[0xb1] = 0;
  param_1[0xb0] = (long)"mIsNightLight";
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  puVar1 = PTR_DAT_04bb33a8 + 0x10;
  param_1[0xb4] = 0;
  param_1[0xaf] = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xaf);
  puVar9 = (undefined1 *)(**(code **)(param_1[0xaf] + 0xf0))(param_1 + 0xaf);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0xb3) >> 7 & 1) == 0) {
    param_1[0xb4] = 0;
    *(undefined1 *)(param_1 + 0xb4) = 0;
  }
  *(uint *)(param_1 + 0xb3) = *(uint *)(param_1 + 0xb3) & 0xfeffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
  return;
}

