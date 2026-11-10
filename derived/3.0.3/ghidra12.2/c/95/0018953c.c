
void FUN_0018953c(long *param_1)

{
  undefined *puVar1;
  undefined8 local_18;
  
  puVar1 = PTR_DAT_04bcbd68;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  if (DAT_04be21f1 == '\0') {
    FUN_0018cb8c(&local_18);
  }
  else {
    FUN_0018c9b0(&local_18,0);
  }
  param_1[4] = 0;
  *(int *)(param_1 + 5) = (int)local_18;
  DAT_04c589a0 = local_18;
  return;
}

