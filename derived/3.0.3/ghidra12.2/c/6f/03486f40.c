
void FUN_03486f40(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  byte bVar8;
  long lVar9;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar3 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar8 = *(byte *)(param_3 + 0xe);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar8;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x45] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04b2d8b0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x4d] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x51] = (long)puVar1;
  memset(param_1 + 0x52,0,0x1bf30);
  lVar9 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar6 = param_1;
  do {
    FUN_03463544(plVar6 + 0x52,0);
    *(undefined4 *)(plVar6 + 0x7d) = 0x40;
    lVar9 = lVar9 + -1;
    plVar6[0x7c] = (long)plVar6 + 0x3ec;
    *(undefined1 *)((long)plVar6 + 0x42b) = 0;
    *(undefined1 *)((long)plVar6 + 0x3ec) = 0;
    plVar6[0x7b] = (long)puVar1;
    *(undefined4 *)(plVar6 + 0x86) = 0;
    puVar3 = PTR_DAT_04bc8e10;
    plVar6 = plVar6 + 0x35;
  } while (lVar9 != 0);
  *(undefined4 *)(param_1 + 0x383a) = 0;
  *(undefined4 *)(param_1 + 0x383b) = 0;
  puVar1 = PTR_DAT_04bc9ce0 + 0x10;
  param_1[0x3838] = (long)(puVar3 + 0x10);
  param_1[0x3839] = -1;
  param_1[0x383c] = (long)puVar1;
  memset(param_1 + 0x383d,0,0xc00);
  lVar9 = 0x40;
  plVar6 = param_1 + 0x3842;
  do {
    *(undefined4 *)(plVar6 + -5) = 0xffffffff;
    *(undefined2 *)((long)plVar6 + -0x24) = 0;
    plVar6[-4] = 0;
    plVar6[-3] = 0;
    iVar4 = FUN_015d3550(0);
    *(undefined4 *)(plVar6 + -1) = 0xffffffff;
    iVar2 = 0;
    if (iVar4 != -1) {
      iVar2 = iVar4;
    }
    *(undefined1 *)((long)plVar6 + -4) = 0;
    lVar9 = lVar9 + -1;
    *(int *)(plVar6 + -2) = iVar2;
    *(undefined4 *)plVar6 = 0;
    puVar1 = PTR_DAT_04bc9938;
    plVar6 = plVar6 + 6;
  } while (lVar9 != 0);
  param_1[0x39bd] = (long)(puVar3 + 0x10);
  param_1[0x39be] = -1;
  *(undefined4 *)(param_1 + 0x39bf) = 0;
  *(undefined4 *)(param_1 + 0x39c0) = 0;
  *(undefined1 *)(param_1 + 0x39c1) = 0;
  param_1[0x39c2] = -1;
  *(undefined4 *)(param_1 + 0x39c3) = 0;
  *(undefined4 *)(param_1 + 0x39ca) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1ce73) = 0;
  param_1[0x39c6] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x39cd) = 8;
  param_1[0x39c4] = 0;
  param_1[0x39c5] = -0x100000000;
  *(undefined1 *)((long)param_1 + 0x1ce6c) = 0;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  param_1[0x39cf] = 0;
  *(undefined1 *)(param_1 + 0x39d0) = 0;
  param_1[0x42] = 0;
  param_1[0x39cb] = (long)puVar1;
  param_1[0x39cc] = (long)param_1 + 0x1ce6c;
  (**(code **)(*(long *)(param_3 + 0x18) + 0x10))((long *)(param_3 + 0x18));
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar7 = malloc(4000);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) goto LAB_03487220;
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,4000,8);
  }
  if (pvVar7 != (void *)0x0) {
    param_1[0x39c4] = (long)pvVar7;
    *(undefined4 *)(param_1 + 0x39c3) = 500;
  }
LAB_03487220:
  *(undefined1 *)param_1[0x39cc] = 0;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  return;
}

