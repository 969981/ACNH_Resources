
void FUN_033db1d0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  
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
  param_1[0x42] = 0;
  *(undefined1 *)((long)param_1 + 0x234) = 0;
  param_1[0x45] = (long)param_1 + 0x234;
  *param_1 = (long)&PTR_LAB_04b26618;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0x40;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined4 *)(param_1 + 0x51) = 0x40;
  param_1[0x5b] = (long)&PTR_LAB_04b26850;
  *(undefined4 *)(param_1 + 0x61) = 0x41700000;
  *(undefined1 *)((long)param_1 + 0x273) = 0;
  *(undefined1 *)((long)param_1 + 0x2cb) = 0;
  *(undefined1 *)((long)param_1 + 0x28c) = 0;
  param_1[0x44] = (long)puVar1;
  param_1[0x50] = (long)param_1 + 0x28c;
  param_1[0x4f] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)((long)param_1 + 0x324) = 0;
  param_1[0x65] = 0;
  *(undefined8 *)((long)param_1 + 0x30c) = 0;
  *(undefined8 *)((long)param_1 + 0x314) = 0;
  *(undefined8 *)((long)param_1 + 0x31c) = 0xa00000000;
  return;
}

