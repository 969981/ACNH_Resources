
void FUN_011aa61c(long *param_1)

{
  undefined *puVar1;
  
  *param_1 = (long)&PTR_LAB_04984fe8;
  FUN_016101cc(param_1 + 99);
  if ((long *)param_1[0x57] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x57] + 0x20))();
    param_1[0x57] = 0;
  }
  puVar1 = PTR_DAT_04bbc1a0;
  *param_1 = (long)(PTR_DAT_04bbb9b0 + 0x10);
  param_1[0x51] = (long)(puVar1 + 0x10);
  return;
}

