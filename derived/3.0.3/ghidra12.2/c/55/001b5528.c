
void FUN_001b5528(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_001a7110(param_1,5);
  puVar1 = PTR_DAT_04bcc4c0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_001a73c0(param_1,1);
  return;
}

