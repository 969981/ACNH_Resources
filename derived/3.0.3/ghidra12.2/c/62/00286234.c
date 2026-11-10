
void FUN_00286234(long *param_1)

{
  undefined *puVar1;
  
  FUN_00288c80();
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  puVar1 = PTR_DAT_04bcdcb0;
  param_1[0x1b] = (long)(param_1 + 0x1b);
  param_1[0x1c] = (long)(param_1 + 0x1b);
  param_1[0x1f] = (long)(param_1 + 0x1e);
  param_1[0x20] = -0x100000000;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x1d] = -0x100000000;
  param_1[0x1e] = (long)(param_1 + 0x1e);
  if ((*(byte *)(param_1 + 0x1a) & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0xec) = 0;
    *(undefined4 *)((long)param_1 + 0x104) = 0;
    return;
  }
  FUN_00290438(param_1 + 0x12);
  *(undefined4 *)((long)param_1 + 0xec) = 0;
  *(undefined4 *)((long)param_1 + 0x104) = 0;
  FUN_00290440(param_1 + 0x12);
  return;
}

