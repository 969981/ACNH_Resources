
void FUN_02e72990(long *param_1,undefined8 param_2,long param_3)

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
  *param_1 = (long)&PTR_FUN_04ad9348;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0x46,0,0x1bf30);
  lVar4 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar5 = param_1;
  do {
    FUN_03463544(plVar5 + 0x46,0);
    *(undefined4 *)(plVar5 + 0x71) = 0x40;
    lVar4 = lVar4 + -1;
    plVar5[0x70] = (long)plVar5 + 0x38c;
    *(undefined1 *)((long)plVar5 + 0x3cb) = 0;
    *(undefined1 *)((long)plVar5 + 0x38c) = 0;
    plVar5[0x6f] = (long)puVar1;
    *(undefined4 *)(plVar5 + 0x7a) = 0;
    plVar5 = plVar5 + 0x35;
  } while (lVar4 != 0);
  *(undefined4 *)(param_1 + 0x382e) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x382f) = 0;
  param_1[0x3830] = 0;
  param_1[0x3831] = 0;
  param_1[0x383a] = 0;
  plVar5 = param_1 + 0x3834;
  *plVar5 = (long)(param_1 + 0x383a);
  param_1[0x382c] = (long)(puVar1 + 0x10);
  param_1[0x382d] = -1;
  param_1[0x3832] = (long)plVar5;
  param_1[0x3833] = (long)plVar5;
  if (param_1 + 0x3840 != (long *)0x0) {
    param_1[0x3831] = (long)(param_1 + 0x3840);
    *(undefined4 *)((long)param_1 + 0x1c184) = 2;
  }
  param_1[0x3842] = (long)(PTR_DAT_04bc9bd0 + 0x10);
  memset(param_1 + 0x3843,0,0x300);
  FUN_03411908(param_1 + 0x3843);
  *(undefined4 *)(param_1 + 0x38a5) = 0;
  param_1[0x38a3] = (long)(puVar1 + 0x10);
  param_1[0x38a4] = -1;
  param_1[0x38aa] = 0;
  param_1[0x38ab] = 0;
  *(undefined4 *)(param_1 + 0x38a6) = 0;
  *(undefined1 *)(param_1 + 0x38a7) = 0;
  param_1[0x38d6] = 0;
  param_1[0x38e5] = -1;
  *(undefined1 *)(param_1 + 0x38e6) = 0;
  *(undefined4 *)((long)param_1 + 0x1c734) = 0;
  param_1[0x38a8] = 0;
  param_1[0x38a9] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x38ba] = (long)(param_1 + 0x38c8);
  *(undefined4 *)((long)param_1 + 0x1c55c) = 4;
  plVar5 = param_1 + 0x38ac;
  *plVar5 = (long)(param_1 + 0x38ba);
  param_1[0x38c8] = (long)(param_1 + 0x38d6);
  param_1[0x38a9] = (long)plVar5;
  param_1[0x38aa] = (long)plVar5;
  param_1[0x38e4] = -0x100000000;
  return;
}

