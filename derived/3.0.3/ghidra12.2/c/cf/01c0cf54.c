
void FUN_01c0cf54(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff00000000;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 2) = 0x15;
  *(undefined4 *)(param_1 + 8) = 0x40;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined2 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  param_1[6] = puVar1;
  param_1[7] = (undefined1 *)((long)param_1 + 0x44);
  *param_1 = &DAT_04a3f978;
  param_1[1] = param_1 + 0x1c;
  uVar2 = (long)param_1 + 0x10aU;
  if ((long)param_1 + 0x10aU <= (long)param_1 + 0xe2U) {
    uVar2 = (long)param_1 + 0xe2U;
  }
  param_1[0x11] = puVar1;
  param_1[0x12] = (undefined1 *)((long)param_1 + 0x9c);
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  memset(param_1 + 0x1c,0,((uVar2 - (long)param_1) - 0xe1 & 0xfffffffffffffffe) + 2);
  return;
}

