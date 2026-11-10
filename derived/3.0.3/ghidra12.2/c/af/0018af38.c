
void FUN_0018af38(long *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *puVar1;
  long local_18;
  
  puVar1 = PTR_DAT_04bcbde0;
  param_1[2] = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  *param_1 = (long)(puVar1 + 0x10);
  if (DAT_04be21f1 == '\0') {
    FUN_0018cb8c(&local_18);
  }
  else {
    FUN_0018c9b0(&local_18,0);
  }
  *(undefined4 *)(param_1 + 3) = 0;
  puVar1 = PTR_DAT_04bcbcb0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  *(long *)puVar1 = local_18;
  param_1[2] = local_18;
  param_1[5] = 0x800000000;
  return;
}

