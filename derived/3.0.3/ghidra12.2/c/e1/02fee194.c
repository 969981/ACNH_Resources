
void FUN_02fee194(undefined8 *param_1,int param_2,ulong param_3,uint param_4,long param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar6 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar8 = malloc(0x50);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar8 = (long *)(lVar11 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x50,8);
    }
  }
  uVar2 = *(undefined4 *)(PTR_DAT_04bc7ad0 + (long)param_2 * 8);
  uVar1 = *(undefined4 *)(PTR_DAT_04bc7ad0 + (long)param_2 * 8 + 4);
  uVar10 = param_3 & 0xffffffff | (ulong)param_4 << 0x20;
  *plVar8 = (long)(PTR_DAT_04bc7c18 + 0x10);
  FUN_02ff5850(plVar8 + 1,uVar2,uVar1);
  FUN_02ff5850(plVar8 + 4,uVar2,uVar1);
  *(undefined2 *)(plVar8 + 7) = 0;
  *(undefined1 *)((long)plVar8 + 0x3a) = 0;
  puVar5 = PTR_DAT_04bb3170;
  uVar3 = *(undefined2 *)PTR_DAT_04bb3170;
  plVar8[8] = uVar10;
  plVar8[9] = param_5;
  *(undefined2 *)((long)plVar8 + 0x3c) = uVar3;
  *param_1 = plVar8;
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
    pvVar9 = malloc(0x10);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar8 = (long *)(lVar11 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) goto LAB_02fee320;
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x10,8);
  }
  if (pvVar9 != (void *)0x0) {
    param_1[2] = pvVar9;
    *(undefined4 *)(param_1 + 1) = 2;
  }
LAB_02fee320:
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
    plVar8 = malloc(0x50);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar8 = (long *)(lVar11 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x50,8);
    }
  }
  uVar2 = *(undefined4 *)(PTR_DAT_04bc7ad0 + (long)param_2 * 8);
  uVar1 = *(undefined4 *)(PTR_DAT_04bc7ad0 + (long)param_2 * 8 + 4);
  *plVar8 = (long)(PTR_DAT_04bc7c18 + 0x10);
  FUN_02ff5850(plVar8 + 1,uVar2,uVar1);
  FUN_02ff5850(plVar8 + 4,uVar2,uVar1);
  uVar3 = *(undefined2 *)puVar5;
  *(undefined2 *)(plVar8 + 7) = 0;
  *(undefined1 *)((long)plVar8 + 0x3a) = 0;
  *(undefined2 *)((long)plVar8 + 0x3c) = uVar3;
  plVar8[8] = uVar10;
  plVar8[9] = param_5;
  *(long **)param_1[2] = plVar8;
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
    plVar8 = malloc(0x50);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar6 + 0x68));
    plVar8 = (long *)(lVar11 + 8);
    if (lVar7 != 0) {
      plVar8 = (long *)(lVar7 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) {
      plVar8 = (long *)0x0;
    }
    else {
      plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x50,8);
    }
  }
  uVar2 = *(undefined4 *)(PTR_DAT_04bc7ad0 + (long)param_2 * 8);
  uVar1 = *(undefined4 *)(PTR_DAT_04bc7ad0 + (long)param_2 * 8 + 4);
  *plVar8 = (long)(PTR_DAT_04bc7c18 + 0x10);
  FUN_02ff5850(plVar8 + 1,uVar2,uVar1);
  FUN_02ff5850(plVar8 + 4,uVar2,uVar1);
  uVar3 = *(undefined2 *)puVar5;
  *(undefined2 *)(plVar8 + 7) = 0;
  *(undefined1 *)((long)plVar8 + 0x3a) = 0;
  *(undefined2 *)((long)plVar8 + 0x3c) = uVar3;
  plVar8[8] = uVar10;
  plVar8[9] = param_5;
  *(long **)(param_1[2] + (ulong)(1 < *(uint *)(param_1 + 1)) * 8) = plVar8;
  return;
}

