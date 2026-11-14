
void FUN_01c11978(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 2) = 0xb;
  param_1[3] = 0xffffffff;
  param_1[4] = -0x100000000;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 8) = 0x40;
  puVar3 = PTR_DAT_04bb2bc0;
  *(undefined1 *)((long)param_1 + 0x9c) = 0;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[6] = (long)(puVar3 + 0x10);
  param_1[7] = (long)param_1 + 0x44;
  puVar1 = PTR_DAT_04bb5128 + 0x10;
  *(undefined8 *)((long)param_1 + 0xee) = 0;
  param_1[0x11] = (long)(puVar3 + 0x10);
  param_1[0x12] = (long)param_1 + 0x9c;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = (long)(param_1 + 0x1c);
  uVar2 = (long)param_1 + 0xf6U;
  if ((long)param_1 + 0xf6U <= (long)param_1 + 0xe2U) {
    uVar2 = (long)param_1 + 0xe2U;
  }
  memset(param_1 + 0x1c,0,((uVar2 - (long)param_1) - 0xe1 & 0xfffffffffffffffe) + 2);
  FUN_01c11a38(param_1,param_2);
  return;
}

