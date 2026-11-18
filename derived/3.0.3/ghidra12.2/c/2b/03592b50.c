
void FUN_03592b50(long *param_1,undefined8 param_2,long param_3)

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
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined8 *)((long)param_1 + 0x22c) = 0x240;
  param_1[0x44] = (long)(param_1 + 0x43);
  puVar1 = PTR_DAT_04bc82e0;
  *param_1 = (long)&PTR_LAB_04b3d540;
  param_1[0x43] = (long)(param_1 + 0x43);
  param_1[0x3e] = -1;
  param_1[0x47] = 0;
  param_1[0x49] = -1;
  param_1[0x42] = (long)(puVar1 + 0x10);
  puVar2 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[0x48] = (long)(puVar2 + 0x10);
  param_1[0x4c] = -0x100000000;
  puVar1 = PTR_DAT_04bc9be0;
  *(undefined4 *)(param_1 + 0x4d) = 0xffffffff;
  param_1[0x4e] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4f,0,0x1bf30);
  lVar4 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar5 = param_1;
  do {
    FUN_03463544(plVar5 + 0x4f,0);
    *(undefined4 *)(plVar5 + 0x7a) = 0x40;
    lVar4 = lVar4 + -1;
    plVar5[0x79] = (long)plVar5 + 0x3d4;
    *(undefined1 *)((long)plVar5 + 0x413) = 0;
    *(undefined1 *)((long)plVar5 + 0x3d4) = 0;
    plVar5[0x78] = (long)puVar1;
    *(undefined4 *)(plVar5 + 0x83) = 0;
    plVar5 = plVar5 + 0x35;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x383b) = 0xffffffff;
  puVar1 = PTR_DAT_04bca3e8;
  *(undefined4 *)(param_1 + 0x3837) = 0;
  *(undefined4 *)(param_1 + 0x3838) = 0;
  param_1[0x3835] = (long)(puVar2 + 0x10);
  param_1[0x3836] = -1;
  *(undefined8 *)((long)param_1 + 0x1c1dc) = 0;
  *(undefined8 *)((long)param_1 + 0x1c1e4) = 0;
  *(undefined4 *)((long)param_1 + 0x1c1ec) = 0;
  param_1[0x3839] = -1;
  param_1[0x383a] = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x383e) = 1;
  return;
}

