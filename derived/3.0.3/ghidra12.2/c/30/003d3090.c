
void FUN_003d3090(long *param_1)

{
  undefined *puVar1;
  
  FUN_003c5ce4();
  puVar1 = PTR_DAT_04bd0548;
  param_1[0x1c] = (long)(param_1 + 0x1c);
  param_1[0x1d] = (long)(param_1 + 0x1c);
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x18] = (long)(puVar1 + 0x80);
  param_1[0x19] = (long)(param_1 + 0x19);
  param_1[0x1a] = (long)(param_1 + 0x19);
  param_1[0x1b] = (long)(puVar1 + 0xa8);
  FUN_003bebac(param_1 + 0x27);
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined4 *)((long)param_1 + 0x14c) = 0;
  *(undefined2 *)((long)param_1 + 0x16d) = 0;
  param_1[0x32] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  return;
}

