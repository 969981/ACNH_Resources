
void FUN_01c14fb4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[3] = 0xffffffff;
  param_1[4] = -0x100000000;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 2) = 0x20;
  *(undefined4 *)(param_1 + 8) = 0x40;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[6] = (long)puVar1;
  param_1[7] = (long)param_1 + 0x44;
  param_1[0x11] = (long)puVar1;
  param_1[0x12] = (long)param_1 + 0x9c;
  puVar1 = PTR_DAT_04bb4e10 + 0x10;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = (long)(param_1 + 0x1c);
  plVar2 = param_1 + 0x24;
  if (param_1 + 0x24 <= (long *)((long)param_1 + 0xe2U)) {
    plVar2 = (long *)((long)param_1 + 0xe2U);
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  memset(param_1 + 0x1c,0,((long)plVar2 + (-0xe1 - (long)param_1) & 0xfffffffffffffffeU) + 2);
  return;
}

