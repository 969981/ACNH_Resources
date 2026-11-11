
void FUN_003df9d8(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_003ce70c();
  param_1[0x45] = param_2;
  puVar1 = PTR_DAT_04bd0380;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x42] = (long)(param_1 + 0x42);
  param_1[0x43] = (long)(param_1 + 0x42);
  *(undefined1 *)((long)param_1 + 0x232) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_003c5e70(param_1 + 0x47);
  return;
}

