
void FUN_03200224(long *param_1,undefined8 param_2,long param_3)

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
  param_1[0x42] = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04b0ea80;
  param_1[0x43] = 0;
  *(undefined1 *)((long)param_1 + 0x23c) = 0;
  param_1[0x46] = (long)param_1 + 0x23c;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0x20;
  *(undefined1 *)((long)param_1 + 0x25b) = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)((long)param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x45] = (long)puVar1;
  *(undefined8 *)((long)param_1 + 0x274) = 0;
  *(undefined1 **)((long)param_1 + 0x27c) = &DAT_3f8000003f800000;
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 1;
  param_1[0x4c] = 2;
  return;
}

