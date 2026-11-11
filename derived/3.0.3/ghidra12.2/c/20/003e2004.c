
void FUN_003e2004(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_003ce70c();
  puVar1 = PTR_DAT_04bd0288;
  param_1[0x42] = (long)(param_1 + 0x42);
  param_1[0x43] = (long)(param_1 + 0x42);
  param_1[0x45] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_003d4530(param_1 + 0x46);
  *(undefined1 *)(param_1 + 0x135) = 0;
  return;
}

