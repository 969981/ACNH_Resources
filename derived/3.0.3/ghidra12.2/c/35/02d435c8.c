
void FUN_02d435c8(long *param_1,undefined8 param_2,long param_3)

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
  *param_1 = (long)&PTR_LAB_04abf8f0;
  param_1[0x3e] = -1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = (long)(param_1 + 0x49);
  param_1[0x49] = 0;
  param_1[0x48] = (long)(param_1 + 0x49);
  if (param_1 + 0x4b != (long *)0x0) {
    param_1[0x46] = (long)(param_1 + 0x4b);
    *(undefined4 *)((long)param_1 + 0x22c) = 1;
  }
  param_1[0x4d] = -1;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4c] = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)param_1 + 0x284) = 0xff;
  return;
}

