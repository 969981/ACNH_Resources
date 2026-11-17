
void FUN_03128200(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  byte bVar4;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
    param_1[0x42] = 0;
    param_1[0x3e] = -1;
    *(undefined1 *)((long)param_1 + 0x21c) = 0;
    *param_1 = (long)&PTR_LAB_04b02658;
    param_1[0x44] = 0;
  }
  else {
    bVar4 = *(byte *)(param_3 + 0xe);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar4;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
    param_1[0x3e] = -1;
    puVar1 = PTR_DAT_04bc8428;
    param_1[0x42] = 0;
    *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
    *(undefined1 *)((long)param_1 + 0x21c) = 0;
    *param_1 = (long)(puVar1 + 0x10);
    lVar3 = *(long *)(param_3 + 0x18);
    param_1[0x44] = 0;
    param_1[0x42] = lVar3;
    *param_1 = (long)&PTR_LAB_04b02658;
    param_1[0x44] = *(long *)(param_3 + 0x18);
  }
  return;
}

