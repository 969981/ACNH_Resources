
void FUN_033c6980(long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined4 *puVar9;
  long lVar10;
  void *pvVar11;
  undefined4 uVar12;
  undefined *local_108;
  char *pcStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined *local_e8;
  char *pcStack_e0;
  undefined4 local_d8;
  undefined1 local_b5;
  undefined *local_b0;
  char *pcStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined4 local_80;
  
  lVar10 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  param_1[5] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar10;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(param_1 + 8) = 0x100;
  param_1[0x2a] = (long)param_1;
  *param_1 = (long)&PTR_FUN_04b261b0;
  param_1[6] = (long)(puVar1 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  puVar2 = PTR_DAT_04bb2020;
  local_f8._0_4_ = 0x40;
  local_80 = 0;
  local_b5 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  uStack_ec = 0x656d61;
  pcStack_a8 = "mParamName";
  local_f8._4_4_ = s_DefaultName_0405c6e7._0_4_;
  uStack_f0 = s_DefaultName_0405c6e7._4_4_;
  puStack_98 = &DAT_040ca03d;
  pcStack_100 = (char *)((long)&local_f8 + 4);
  puStack_88 = &DAT_0407ebb1;
  local_108 = PTR_DAT_04bb2bc0 + 0x10;
  local_b0 = puVar1;
  local_a0 = puVar1;
  local_90 = puVar1;
  FUN_00744dd0(param_1 + 0x2b,&local_b0,&local_108,param_1);
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0x80;
  puVar4 = PTR_DAT_04bbd958;
  param_1[0x41] = 0;
  param_1[0x3c] = (long)(puVar4 + 0x10);
  param_1[0x3d] = (long)"mReleaseVersion";
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x3c);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x3c] + 0xf0))(param_1 + 0x3c);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x40) >> 7 & 1) == 0) {
    param_1[0x41] = 0;
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  local_d8 = 0;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfeffffff;
  pcStack_100 = "mPosition";
  uStack_f0 = 0x40dbef5;
  uStack_ec = 0;
  pcStack_e0 = "Min=-990.0f, Max=990.0f";
  local_108 = puVar1;
  local_e8 = puVar1;
  local_f8 = puVar1;
  FUN_006fdfc0(param_1 + 0x42,&local_108,PTR_DAT_04bb2150,param_1);
  param_1[0x4b] = 0;
  param_1[0x4a] = (long)"mScale";
  param_1[0x4c] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4e] = 0;
  param_1[0x49] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x49);
  uVar12 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x4d) & 0x800) != 0) {
    uVar12 = 0x3c8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x49] + 0xf0))(param_1 + 0x49);
  *puVar9 = uVar12;
  uVar7 = *(uint *)(param_1 + 0x4d);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x4e] = 0;
    uVar12 = 0x3f800000;
    if ((uVar7 & 0x800) != 0) {
      uVar12 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x4e) = uVar12;
  }
  param_1[0x51] = 0;
  *(uint *)(param_1 + 0x4d) = uVar7 & 0xfeffffff;
  param_1[0x50] = (long)"mVirtualCameraAngleX";
  param_1[0x52] = 0;
  *(undefined4 *)(param_1 + 0x53) = 0x800;
  param_1[0x4f] = (long)(puVar1 + 0x10);
  param_1[0x54] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x4f);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x4f] + 0xf0))(param_1 + 0x4f);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x53) >> 7 & 1) == 0) {
    param_1[0x54] = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  param_1[0x57] = 0;
  *(uint *)(param_1 + 0x53) = *(uint *)(param_1 + 0x53) & 0xfeffffff;
  param_1[0x56] = (long)"mVirtualCameraAngleY";
  param_1[0x58] = 0;
  *(undefined4 *)(param_1 + 0x59) = 0x800;
  param_1[0x55] = (long)(puVar1 + 0x10);
  param_1[0x5a] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x55);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x55] + 0xf0))(param_1 + 0x55);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x59) >> 7 & 1) == 0) {
    param_1[0x5a] = 0;
    *(undefined4 *)(param_1 + 0x5a) = 0;
  }
  param_1[0x5d] = 0;
  *(uint *)(param_1 + 0x59) = *(uint *)(param_1 + 0x59) & 0xfeffffff;
  param_1[0x5c] = (long)"mVirtualCameraAngleZ";
  *(undefined4 *)(param_1 + 0x5f) = 0x800;
  param_1[0x5e] = 0;
  param_1[0x5b] = (long)(puVar1 + 0x10);
  param_1[0x60] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5b);
  puVar9 = (undefined4 *)(**(code **)(param_1[0x5b] + 0xf0))(param_1 + 0x5b);
  *puVar9 = 0;
  if ((*(uint *)(param_1 + 0x5f) >> 7 & 1) == 0) {
    param_1[0x60] = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  param_1[99] = 0;
  *(uint *)(param_1 + 0x5f) = *(uint *)(param_1 + 0x5f) & 0xfeffffff;
  param_1[0x62] = (long)"mPerspectiveProjectionFovy";
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  param_1[0x61] = (long)(puVar1 + 0x10);
  param_1[0x66] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x61);
  uVar12 = 0x40a00000;
  if ((*(uint *)(param_1 + 0x65) & 0x800) != 0) {
    uVar12 = 0x3db2b8c2;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x61] + 0xf0))(param_1 + 0x61);
  *puVar9 = uVar12;
  uVar7 = *(uint *)(param_1 + 0x65);
  if ((uVar7 >> 7 & 1) == 0) {
    param_1[0x66] = 0;
    uVar12 = 0x40a00000;
    if ((uVar7 & 0x800) != 0) {
      uVar12 = 0x3db2b8c2;
    }
    *(undefined4 *)(param_1 + 0x66) = uVar12;
  }
  puVar2 = puVar2 + 0x10;
  local_80 = 0;
  *(uint *)(param_1 + 0x65) = uVar7 & 0xfeffffff;
  pcStack_a8 = "mEnvPaletteName";
  puStack_98 = &DAT_040ad330;
  pvVar3 = (void *)((long)&local_f8 + 4);
  puStack_88 = &DAT_0407ebb1;
  local_f8._0_4_ = 0x40;
  local_b5 = 0;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  local_108 = puVar1;
  pcStack_100 = pvVar3;
  local_b0 = puVar2;
  local_a0 = puVar2;
  local_90 = puVar2;
  (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
  pvVar11 = DAT_05743420;
  if (pvVar3 != DAT_05743420) {
    (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
    lVar10 = 0;
    do {
      if (*(char *)((long)DAT_05743420 + lVar10) == '\0') goto LAB_033c6e9c;
      if (*(char *)((long)DAT_05743420 + lVar10 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_033c6e9c;
      }
      if (*(char *)((long)DAT_05743420 + lVar10 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_033c6e9c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_033c6e9c:
    iVar6 = (int)lVar10;
    if ((int)local_f8 <= (int)lVar10) {
      iVar6 = (int)local_f8 + -1;
    }
    memcpy(pvVar3,pvVar11,(long)iVar6);
    *(undefined1 *)((long)pvVar3 + (long)iVar6) = 0;
  }
  puVar4 = PTR_DAT_04bb2bc0 + 0x10;
  local_108 = puVar4;
  FUN_00744dd0(param_1 + 0x67,&local_b0,&local_108,param_1);
  puVar8 = PTR_PTR_04bb2238;
  local_80 = 0;
  local_f8._0_4_ = 0x40;
  pcStack_a8 = "mSpecialEnvPaletteName";
  pvVar3 = (void *)((long)&local_f8 + 4);
  local_b5 = 0;
  puStack_98 = &DAT_040e124b;
  puStack_88 = &DAT_0407ebb1;
  local_108 = puVar1;
  pcStack_100 = pvVar3;
  local_b0 = puVar2;
  local_a0 = puVar2;
  local_90 = puVar2;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  puVar1 = PTR_DAT_04bb2020;
  pvVar11 = *(void **)(puVar8 + 8);
  if (pvVar3 != pvVar11) {
    (**(code **)(*(long *)puVar8 + 0x18))(puVar8);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar8 + 8) + lVar10) == '\0') goto LAB_033c6f9c;
      lVar5 = *(long *)(puVar8 + 8) + lVar10;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_033c6f9c;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_033c6f9c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_033c6f9c:
    iVar6 = (int)lVar10;
    if ((int)local_f8 <= (int)lVar10) {
      iVar6 = (int)local_f8 + -1;
    }
    memcpy(pvVar3,pvVar11,(long)iVar6);
    *(undefined1 *)((long)pvVar3 + (long)iVar6) = 0;
  }
  local_108 = puVar4;
  FUN_00744dd0(param_1 + 0x78,&local_b0,&local_108,param_1);
  local_108 = puVar1 + 0x10;
  pcStack_100 = "mPlayerLookPos";
  uStack_f0 = 0x40bce61;
  uStack_ec = 0;
  pcStack_e0 = "Min=-5000.0f, Max=5000.0f";
  local_d8 = 0;
  local_e8 = local_108;
  local_f8 = local_108;
  FUN_006fdfc0(param_1 + 0x89,&local_108,PTR_DAT_04bb2150,param_1);
  (**(code **)(param_1[0x2b] + 0xf0))(param_1 + 0x2b);
  return;
}

