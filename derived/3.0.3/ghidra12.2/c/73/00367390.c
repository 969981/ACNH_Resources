
void FUN_00367390(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[2] = (long)(param_1 + 1);
  param_1[3] = (long)(param_1 + 3);
  puVar1 = PTR_DAT_04bd07e0;
  param_1[4] = (long)(param_1 + 3);
  param_1[5] = param_2;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)(param_1 + 1);
  return;
}

