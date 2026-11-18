
void FUN_034d3ba0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  long *plVar4;
  long lVar5;
  
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
  param_1[0x46] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *param_1 = (long)&PTR_FUN_04b31908;
  puVar1 = PTR_DAT_04bc9ca8 + 0x10;
  param_1[0x3e] = -1;
  param_1[0x48] = (long)puVar1;
  puVar1 = PTR_DAT_04bc9be0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4c] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4d,0,0x1bf30);
  lVar5 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar4 = param_1;
  do {
    FUN_03463544(plVar4 + 0x4d,0);
    *(undefined4 *)(plVar4 + 0x78) = 0x40;
    lVar5 = lVar5 + -1;
    plVar4[0x77] = (long)plVar4 + 0x3c4;
    *(undefined1 *)((long)plVar4 + 0x403) = 0;
    *(undefined1 *)((long)plVar4 + 0x3c4) = 0;
    plVar4[0x76] = (long)puVar1;
    *(undefined4 *)(plVar4 + 0x81) = 0;
    plVar4 = plVar4 + 0x35;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0x3835) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3836) = 0;
  param_1[0x3837] = 0xffffffff;
  param_1[0x3838] = 0;
  param_1[0x3833] = (long)(puVar1 + 0x10);
  param_1[0x3834] = -1;
  lVar5 = 200;
  plVar4 = param_1 + 0x383c;
  do {
    plVar4[-3] = (long)&PTR_LAB_04b31b30;
    lVar5 = lVar5 + -2;
    *(undefined4 *)(plVar4 + -2) = 0xffffffff;
    plVar4[-1] = (long)&PTR_LAB_04b31b30;
    *(undefined4 *)plVar4 = 0xffffffff;
    plVar4 = plVar4 + 4;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0x39c9) = 0;
  param_1[0x39ca] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  return;
}

