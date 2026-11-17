
void FUN_02e47470(long *param_1,undefined8 param_2,long param_3)

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
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_FUN_04ad52b0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  FUN_02e411f0(param_1 + 0x48);
  FUN_03135560(param_1 + 0xab);
  *(undefined4 *)(param_1 + 0xce) = 0xffffffff;
  puVar1 = PTR_DAT_04bc9ca8;
  *(undefined8 *)((long)param_1 + 0x6a4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x6ac) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  *(undefined1 *)((long)param_1 + 0x6cc) = 0;
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)((long)param_1 + 0x6b4) = 0xffffffff;
  param_1[0xd0] = (long)(puVar1 + 0x10);
  param_1[0xd8] = (long)param_1 + 0x6cc;
  *(undefined4 *)(param_1 + 0xd9) = 8;
  *(undefined1 *)((long)param_1 + 0x6d3) = 0;
  puVar2 = PTR_DAT_04bbba70;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  *(undefined2 *)((long)param_1 + 0x78c) = 0;
  param_1[0xd7] = (long)puVar1;
  param_1[0xdb] = (long)(puVar2 + 0x10);
  param_1[0xdf] = (long)(puVar2 + 0x10);
  *(undefined2 *)((long)param_1 + 0x74c) = 0;
  param_1[0xe8] = (long)param_1 + 0x74c;
  *(undefined4 *)(param_1 + 0xe9) = 0x21;
  param_1[0xe7] = (long)(PTR_DAT_04bc1428 + 0x10);
  param_1[0xf2] = (long)(PTR_DAT_04bc9be0 + 0x10);
  memset(param_1 + 0xf3,0,0x1bf30);
  lVar5 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar4 = param_1;
  do {
    FUN_03463544(plVar4 + 0xf3,0);
    *(undefined4 *)(plVar4 + 0x11e) = 0x40;
    lVar5 = lVar5 + -1;
    plVar4[0x11d] = (long)plVar4 + 0x8f4;
    *(undefined1 *)((long)plVar4 + 0x933) = 0;
    *(undefined1 *)((long)plVar4 + 0x8f4) = 0;
    plVar4[0x11c] = (long)puVar1;
    *(undefined4 *)(plVar4 + 0x127) = 0;
    plVar4 = plVar4 + 0x35;
  } while (lVar5 != 0);
  *(undefined4 *)(param_1 + 0x38db) = 0;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x38dc) = 0;
  *(undefined4 *)(param_1 + 0x38dd) = 0;
  param_1[0x38de] = 0;
  *(undefined2 *)(param_1 + 0x38df) = 0;
  param_1[0x38d9] = (long)(puVar1 + 0x10);
  param_1[0x38da] = -1;
  return;
}

