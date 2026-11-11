
void FUN_003e1204(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_003ce70c();
  param_1[0x45] = param_2;
  puVar1 = PTR_DAT_04bd0530;
  param_1[0x42] = (long)(param_1 + 0x42);
  param_1[0x43] = (long)(param_1 + 0x42);
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
  *(undefined2 *)((long)param_1 + 0x239) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_003d3090(param_1 + 0x48);
  return;
}

