
void FUN_03026730(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  long lVar6;
  long *plVar7;
  
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
    bVar5 = *(byte *)(param_3 + 0xe);
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar5;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  puVar3 = PTR_DAT_04bb3170;
  param_1[0x42] = 0;
  puVar4 = PTR_DAT_04bc8e10;
  *param_1 = (long)&PTR_LAB_04af3d78;
  *(undefined4 *)(param_1 + 0x46) = 0;
  uVar2 = *(undefined2 *)puVar3;
  param_1[0x44] = (long)(puVar4 + 0x10);
  *(undefined2 *)(param_1 + 0x43) = uVar2;
  puVar1 = PTR_DAT_04bc9be0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x3e] = -1;
  param_1[0x45] = -1;
  param_1[0x48] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x49,0,0x1bf30);
  lVar6 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar7 = param_1;
  do {
    FUN_03463544(plVar7 + 0x49,0);
    *(undefined4 *)(plVar7 + 0x74) = 0x40;
    lVar6 = lVar6 + -1;
    plVar7[0x73] = (long)plVar7 + 0x3a4;
    *(undefined1 *)((long)plVar7 + 0x3e3) = 0;
    *(undefined1 *)((long)plVar7 + 0x3a4) = 0;
    plVar7[0x72] = (long)puVar1;
    *(undefined4 *)(plVar7 + 0x7d) = 0;
    plVar7 = plVar7 + 0x35;
  } while (lVar6 != 0);
  *(undefined4 *)(param_1 + 0x3831) = 0;
  *(undefined4 *)(param_1 + 0x3832) = 0;
  param_1[0x3833] = 0;
  param_1[0x382f] = (long)(puVar4 + 0x10);
  param_1[0x3830] = -1;
  uVar2 = *(undefined2 *)puVar3;
  param_1[0x3835] = 0;
  *(undefined2 *)(param_1 + 0x3836) = 0;
  *(undefined2 *)(param_1 + 0x3834) = uVar2;
  param_1[0x3837] = 0;
  param_1[0x3838] = 0;
  return;
}

