
void FUN_02defe2c(long *param_1,undefined8 param_2,long param_3)

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
  *param_1 = (long)&PTR_LAB_04acc298;
  *(undefined4 *)((long)param_1 + 0x21a) = 0x101;
  param_1[0x3e] = -1;
  *(undefined2 *)(param_1 + 0x43) = 0;
  *(undefined1 *)((long)param_1 + 0x21e) = 0;
  *(undefined2 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((long)param_1 + 0x222) = 0x101;
  *(undefined1 *)((long)param_1 + 0x226) = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((long)param_1 + 0x24c) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x22c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x234) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x23c) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x244) = 0xffffffffffffffff;
  return;
}

