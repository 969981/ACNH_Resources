
void FUN_030df940(long *param_1,undefined8 param_2,long param_3)

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
  *param_1 = (long)&PTR_FUN_04afebe8;
  param_1[0x42] = 0;
  param_1[0x43] = (long)(PTR_DAT_04bc9bd0 + 0x10);
  memset(param_1 + 0x44,0,0x300);
  FUN_03411908(param_1 + 0x44);
  param_1[0xa5] = -1;
  puVar2 = PTR_DAT_04bc8e10;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xa6) = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = (long)(param_1 + 0xad);
  param_1[0xbb] = 0;
  param_1[0xab] = (long)(param_1 + 0xad);
  param_1[0xa4] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0xc9) = 0;
  *(undefined4 *)((long)param_1 + 0x564) = 2;
  param_1[0xad] = (long)(param_1 + 0xbb);
  param_1[0xca] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0xcb,0,0x1bf30);
  lVar4 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar5 = param_1;
  do {
    FUN_03463544(plVar5 + 0xcb,0);
    *(undefined4 *)(plVar5 + 0xf6) = 0x40;
    lVar4 = lVar4 + -1;
    plVar5[0xf5] = (long)plVar5 + 0x7b4;
    *(undefined1 *)((long)plVar5 + 0x7f3) = 0;
    *(undefined1 *)((long)plVar5 + 0x7b4) = 0;
    plVar5[0xf4] = (long)puVar1;
    *(undefined4 *)(plVar5 + 0xff) = 0;
    plVar5 = plVar5 + 0x35;
  } while (lVar4 != 0);
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x38b3) = 0;
  param_1[0x38b1] = (long)puVar2;
  param_1[0x38b2] = -1;
  *(undefined4 *)(param_1 + 0x38b4) = 0;
  param_1[0x38b9] = 0;
  param_1[0x38ba] = 0;
  *(undefined2 *)((long)param_1 + 0x1c5ca) = 0;
  param_1[0x38b7] = 0;
  param_1[0x38b8] = 0;
  param_1[0x38b5] = 0;
  param_1[0x38b6] = 0;
  *(undefined4 *)(param_1 + 0x38b6) = 0xffffffff;
  param_1[0x38b7] = (long)puVar2;
  param_1[0x38b8] = -1;
  if (param_3 != 0) {
    param_1[0x42] = *(long *)(param_3 + 0x18);
  }
  return;
}

