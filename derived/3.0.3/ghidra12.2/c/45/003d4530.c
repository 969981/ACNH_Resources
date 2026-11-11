
void FUN_003d4530(long *param_1)

{
  undefined *puVar1;
  
  FUN_003c5ce4();
  puVar1 = PTR_DAT_04bd0290;
  param_1[0xeb] = 0;
  param_1[0x19] = (long)(param_1 + 0x19);
  param_1[0x1a] = (long)(param_1 + 0x19);
  param_1[0xec] = 0;
  *(undefined4 *)((long)param_1 + 0x76c) = 0;
  *(undefined4 *)((long)param_1 + 0x76f) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x18] = (long)(puVar1 + 0x78);
  return;
}

