
void FUN_01588310(long *param_1,long param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  void *pvVar13;
  undefined4 uVar14;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined8 local_138;
  undefined *puStack_130;
  undefined *local_128;
  undefined8 *puStack_120;
  undefined4 local_118;
  undefined1 local_f5;
  undefined1 local_b5;
  undefined *local_b0;
  char *pcStack_a8;
  undefined *local_a0;
  undefined8 *puStack_98;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined4 local_80;
  
  lVar10 = *(long *)(param_2 + 8);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = PTR_DAT_04bb60a0;
  plVar12 = param_1 + 5;
  *plVar12 = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = lVar10;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x143) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  puVar1 = PTR_DAT_04bb21f8;
  *(undefined4 *)(param_1 + 8) = 0x100;
  *param_1 = (long)&PTR_FUN_049ac018;
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
  lVar10 = param_1[5];
  if (param_1[5] != 0) {
    do {
      lVar11 = lVar10;
      lVar10 = *(long *)(lVar11 + 0x10);
    } while (lVar10 != 0);
    plVar12 = (long *)(lVar11 + 0x10);
  }
  *plVar12 = (long)(param_1 + 0x2b);
  param_1[0x2e] = (long)param_1;
  puVar8 = (undefined1 *)(**(code **)(param_1[0x2b] + 0xf0))();
  *puVar8 = 1;
  if ((*(uint *)(param_1 + 0x2f) >> 7 & 1) == 0) {
    param_1[0x30] = 0;
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  puVar1 = PTR_DAT_04bb2020;
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) & 0xfeffffff;
  puVar1 = puVar1 + 0x10;
  puStack_98 = (undefined8 *)&DAT_040ca03d;
  pcStack_a8 = "mName";
  pvVar2 = (void *)((long)&local_138 + 4);
  puStack_88 = &DAT_0407ebb1;
  local_138 = (undefined *)CONCAT44(local_138._4_4_,0x40);
  local_80 = 0;
  local_f5 = 0;
  local_148 = PTR_DAT_04bb2f70 + 0x10;
  puStack_140 = pvVar2;
  local_b0 = puVar1;
  local_a0 = puVar1;
  local_90 = puVar1;
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar13 = (void *)param_3[1];
  if (pvVar2 != pvVar13) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar10 = 0;
    do {
      if (*(char *)(param_3[1] + lVar10) == '\0') goto LAB_015884fc;
      lVar11 = param_3[1] + lVar10;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_015884fc;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_015884fc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_015884fc:
    iVar5 = (int)lVar10;
    if ((int)local_138 <= (int)lVar10) {
      iVar5 = (int)local_138 + -1;
    }
    memcpy(pvVar2,pvVar13,(long)iVar5);
    *(undefined1 *)((long)pvVar2 + (long)iVar5) = 0;
  }
  local_148 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_00744dd0(param_1 + 0x31,&local_b0,&local_148,param_1);
  puVar7 = PTR_PTR_04bb2238;
  local_80 = 0;
  pcStack_a8 = "mResName";
  pvVar2 = (void *)((long)&local_138 + 4);
  puStack_98 = (undefined8 *)&DAT_04081580;
  puStack_88 = &DAT_0407ebb1;
  puVar3 = PTR_DAT_04bb2e90 + 0x10;
  local_138 = (undefined *)CONCAT44(local_138._4_4_,0x80);
  local_b5 = 0;
  local_148 = puVar3;
  puStack_140 = pvVar2;
  local_b0 = puVar1;
  local_a0 = puVar1;
  local_90 = puVar1;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pvVar13 = *(void **)(puVar7 + 8);
  if (pvVar2 != pvVar13) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar7 + 8) + lVar10) == '\0') goto LAB_01588610;
      lVar11 = *(long *)(puVar7 + 8) + lVar10;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_01588610;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_01588610;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_01588610:
    iVar5 = (int)lVar10;
    if ((int)local_138 <= (int)lVar10) {
      iVar5 = (int)local_138 + -1;
    }
    memcpy(pvVar2,pvVar13,(long)iVar5);
    *(undefined1 *)((long)pvVar2 + (long)iVar5) = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  local_148 = puVar1;
  FUN_0072a900(param_1 + 0x42,&local_b0,&local_148,param_1);
  local_80 = 0;
  local_b5 = 0;
  pvVar2 = (void *)((long)&local_138 + 4);
  local_138 = (undefined *)CONCAT44(local_138._4_4_,0x80);
  puVar4 = PTR_DAT_04bb2020 + 0x10;
  pcStack_a8 = "mModelName";
  puStack_98 = &DAT_0407c4ad;
  puStack_88 = &DAT_0407ebb1;
  local_148 = puVar3;
  puStack_140 = pvVar2;
  local_b0 = puVar4;
  local_a0 = puVar4;
  local_90 = puVar4;
  (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
  pvVar13 = *(void **)(puVar7 + 8);
  if (pvVar2 != pvVar13) {
    (**(code **)(*(long *)puVar7 + 0x18))(puVar7);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar7 + 8) + lVar10) == '\0') goto LAB_0158871c;
      lVar11 = *(long *)(puVar7 + 8) + lVar10;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_0158871c;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_0158871c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0158871c:
    iVar5 = (int)lVar10;
    if ((int)local_138 <= (int)lVar10) {
      iVar5 = (int)local_138 + -1;
    }
    memcpy(pvVar2,pvVar13,(long)iVar5);
    *(undefined1 *)((long)pvVar2 + (long)iVar5) = 0;
  }
  local_148 = puVar1;
  FUN_0072a900(param_1 + 0x5b,&local_b0,&local_148,param_1);
  local_118 = 0;
  puStack_140 = &DAT_04061857;
  puStack_130 = &DAT_040bff0f;
  puStack_120 = &DAT_0407ebb1;
  local_148 = puVar4;
  local_138 = puVar4;
  local_128 = puVar4;
  FUN_006fdfc0(param_1 + 0x74,&local_148,PTR_DAT_04bb2150,param_1);
  param_1[0x7d] = 0;
  param_1[0x7c] = (long)"mScale";
  param_1[0x7e] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = 0;
  param_1[0x7b] = (long)(puVar1 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x7b);
  uVar14 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x7f) & 0x800) != 0) {
    uVar14 = 0x3c8efa35;
  }
  puVar9 = (undefined4 *)(**(code **)(param_1[0x7b] + 0xf0))(param_1 + 0x7b);
  *puVar9 = uVar14;
  uVar6 = *(uint *)(param_1 + 0x7f);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x80] = 0;
    uVar14 = 0x3f800000;
    if ((uVar6 & 0x800) != 0) {
      uVar14 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x80) = uVar14;
  }
  *(undefined4 *)(param_1 + 0x81) = 0;
  param_1[0x82] = 0;
  *(uint *)(param_1 + 0x7f) = uVar6 & 0xfeffffff;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)(param_1 + 0x85) = 1;
  puVar1 = PTR_DAT_04bdf0c8 + 0x10;
  *(undefined4 *)((long)param_1 + 0x42c) = 0;
  param_1[0x86] = 0;
  param_1[0x84] = (long)puVar1;
  puVar1 = PTR_DAT_04bdf1d8;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x87] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x8b) = 0xffffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
  (**(code **)(param_1[0x31] + 0xf0))(param_1 + 0x31);
  return;
}

