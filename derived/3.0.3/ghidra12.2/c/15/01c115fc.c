
void FUN_01c115fc(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = -0x100000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined4 *)(param_1 + 2) = 0xb;
  *(undefined4 *)(param_1 + 8) = 0x40;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[6] = (long)puVar1;
  param_1[7] = (long)param_1 + 0x44;
  puVar2 = PTR_DAT_04bb5128 + 0x10;
  *(undefined8 *)((long)param_1 + 0xee) = 0;
  param_1[0x11] = (long)puVar1;
  param_1[0x12] = (long)param_1 + 0x9c;
  uVar3 = (long)param_1 + 0xf6U;
  if ((long)param_1 + 0xf6U <= (long)param_1 + 0xe2U) {
    uVar3 = (long)param_1 + 0xe2U;
  }
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = (long)puVar2;
  param_1[1] = (long)(param_1 + 0x1c);
  memset(param_1 + 0x1c,0,((uVar3 - (long)param_1) - 0xe1 & 0xfffffffffffffffe) + 2);
  return;
}

