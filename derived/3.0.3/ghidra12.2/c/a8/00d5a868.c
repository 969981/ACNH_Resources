
void FUN_00d5a868(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = -0x100000000;
  *(undefined4 *)(param_1 + 2) = 0x40;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0x40;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[6] = (long)puVar1;
  param_1[7] = (long)param_1 + 0x44;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  param_1[0x11] = (long)puVar1;
  param_1[0x12] = (long)param_1 + 0x9c;
  puVar1 = PTR_DAT_04bb6b18 + 0x10;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = (long)(param_1 + 0x1c);
  plVar2 = param_1 + 0x2c;
  if (param_1 + 0x2c <= (long *)((long)param_1 + 0xe2U)) {
    plVar2 = (long *)((long)param_1 + 0xe2U);
  }
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  memset(param_1 + 0x1c,0,((long)plVar2 + (-0xe1 - (long)param_1) & 0xfffffffffffffffeU) + 2);
  return;
}

