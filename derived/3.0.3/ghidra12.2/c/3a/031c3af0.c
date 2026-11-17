
void FUN_031c3af0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  
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
    bVar3 = *(byte *)(param_3 + 0xe);
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar3;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b0a478;
  param_1[0x42] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x43,0,0x1bf30);
  lVar4 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar5 = param_1;
  do {
    FUN_03463544(plVar5 + 0x43,0);
    *(undefined4 *)(plVar5 + 0x6e) = 0x40;
    lVar4 = lVar4 + -1;
    plVar5[0x6d] = (long)plVar5 + 0x374;
    *(undefined1 *)((long)plVar5 + 0x3b3) = 0;
    *(undefined1 *)((long)plVar5 + 0x374) = 0;
    plVar5[0x6c] = (long)puVar1;
    *(undefined4 *)(plVar5 + 0x77) = 0;
    plVar5 = plVar5 + 0x35;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x382b) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x382c) = 0;
  *(undefined4 *)(param_1 + 0x382d) = 0;
  param_1[0x382e] = 0;
  param_1[0x382f] = -1;
  param_1[0x3830] = -1;
  param_1[0x3829] = (long)(puVar1 + 0x10);
  param_1[0x382a] = -1;
  puVar1 = PTR_DAT_04bcb4d0 + 0x10;
  *(undefined8 *)((long)param_1 + 0x1c1bc) = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x383a) = 0;
  param_1[0x3831] = 0;
  param_1[0x3832] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x3837) = 0;
  param_1[0x3833] = 0;
  param_1[0x3834] = 0;
  param_1[0x3835] = 0;
  param_1[0x3836] = 0;
  puVar1 = PTR_DAT_04bc87d0 + 0x10;
  *(undefined8 *)((long)param_1 + 0x1c1d4) = 0xffffffffffffffff;
  param_1[0x3839] = (long)puVar1;
  param_1[0x383c] = 0;
  param_1[0x383d] = 0x41280000;
  param_1[0x3840] = -1;
  param_1[0x3841] = -1;
  param_1[0x383e] = -1;
  param_1[0x383f] = -1;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  return;
}

