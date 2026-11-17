
void FUN_02d891a0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
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
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar4 = *(byte *)(param_3 + 0xe);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar4;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  puVar2 = PTR_DAT_04bc9ca8;
  *param_1 = (long)&PTR_LAB_04ac2920;
  puVar1 = PTR_DAT_04bc9be0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x3e] = -1;
  param_1[0x47] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x4b] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4c,0,0x1bf30);
  lVar7 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar8 = param_1;
  do {
    FUN_03463544(plVar8 + 0x4c,0);
    *(undefined4 *)(plVar8 + 0x77) = 0x40;
    lVar7 = lVar7 + -1;
    plVar8[0x76] = (long)plVar8 + 0x3bc;
    *(undefined1 *)((long)plVar8 + 0x3fb) = 0;
    *(undefined1 *)((long)plVar8 + 0x3bc) = 0;
    plVar8[0x75] = (long)puVar1;
    *(undefined4 *)(plVar8 + 0x80) = 0;
    puVar2 = PTR_DAT_04bc8e10;
    plVar8 = plVar8 + 0x35;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x3834) = 0;
  puVar1 = PTR_DAT_04bc5b58;
  *(undefined4 *)(param_1 + 0x3835) = 0;
  *(undefined4 *)(param_1 + 0x3836) = 0xffffffff;
  param_1[0x3832] = (long)(puVar2 + 0x10);
  param_1[0x3833] = -1;
  plVar8 = param_1 + 0x3837;
  *plVar8 = (long)(puVar1 + 0x10);
  FUN_02c8cfc4(param_1 + 0x3838);
  piVar3 = (int *)(**(code **)(*plVar8 + 0x10))(plVar8);
  if (0 < *piVar3) {
    lVar7 = 0;
    puVar5 = *(undefined8 **)(piVar3 + 4);
    do {
      puVar6 = *(undefined8 **)(*(long *)(piVar3 + 2) + lVar7 * 8);
      lVar7 = lVar7 + 1;
      *puVar6 = puVar5;
      *(undefined8 **)(piVar3 + 4) = puVar6;
      puVar5 = puVar6;
    } while (lVar7 < *piVar3);
  }
  *piVar3 = 0;
  return;
}

