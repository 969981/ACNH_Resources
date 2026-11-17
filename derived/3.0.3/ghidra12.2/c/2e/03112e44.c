
void FUN_03112e44(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0x10;
  *(undefined4 *)(param_1 + 8) = 0x40;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[6] = puVar1;
  param_1[7] = (undefined1 *)((long)param_1 + 0x44);
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[0x11] = puVar1;
  param_1[0x12] = (undefined1 *)((long)param_1 + 0x9c);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = &DAT_04a3a308;
  param_1[1] = param_1 + 0x1c;
  puVar2 = param_1 + 0x20;
  if (param_1 + 0x20 <= (undefined8 *)((long)param_1 + 0xe2)) {
    puVar2 = (undefined8 *)((long)param_1 + 0xe2);
  }
  memset(param_1 + 0x1c,0,((long)puVar2 + (-0xe1 - (long)param_1) & 0xfffffffffffffffeU) + 2);
  return;
}

