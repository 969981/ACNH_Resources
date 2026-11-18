
void FUN_0325f6dc(long *param_1,undefined8 param_2,long param_3)

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
  param_1[0x43] = 0;
  param_1[0x3e] = -1;
  *(undefined8 *)((long)param_1 + 0x22c) = 0xffffffffffffffff;
  *param_1 = (long)&PTR_LAB_04b15890;
  *(undefined8 *)((long)param_1 + 0x234) = 0xffffffff;
  param_1[0x44] = 0;
  *(undefined2 *)(param_1 + 0x45) = 0xffff;
  param_1[0x48] = 0;
  param_1[0x49] = -0x100000000;
  memset(param_1 + 0x4a,0,0x188);
  *(undefined1 *)((long)param_1 + 0x33c) = 0;
  *(undefined1 *)((long)param_1 + 0x259) = 1;
  *(undefined1 *)((long)param_1 + 0x274) = 0;
  param_1[0x4d] = (long)param_1 + 0x274;
  *(undefined4 *)(param_1 + 0x4e) = 0x40;
  *(undefined1 *)((long)param_1 + 0x2cc) = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  param_1[0x58] = (long)param_1 + 0x2cc;
  *(undefined4 *)(param_1 + 0x59) = 0x20;
  param_1[0x4c] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb2028;
  *(undefined4 *)(param_1 + 0x60) = 0x20;
  *(undefined1 *)((long)param_1 + 0x304) = 0;
  param_1[0x66] = (long)param_1 + 0x33c;
  puVar1 = puVar1 + 0x10;
  param_1[0x5f] = (long)param_1 + 0x304;
  *(undefined4 *)(param_1 + 0x67) = 0x20;
  *(undefined4 *)(param_1 + 0x6e) = 0x20;
  *(undefined1 *)((long)param_1 + 0x374) = 0;
  param_1[0x6d] = (long)param_1 + 0x374;
  *(undefined4 *)(param_1 + 0x75) = 0x20;
  *(undefined1 *)((long)param_1 + 0x3ac) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)((long)param_1 + 0x3dc) = 0;
  param_1[0x7c] = 0;
  param_1[0x57] = (long)puVar1;
  param_1[0x5e] = (long)puVar1;
  param_1[0x65] = (long)puVar1;
  param_1[0x6c] = (long)puVar1;
  param_1[0x74] = (long)param_1 + 0x3ac;
  param_1[0x73] = (long)puVar1;
  param_1[0x42] = 0;
  return;
}

