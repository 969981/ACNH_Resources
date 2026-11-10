
void FUN_00254fd8(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00291438();
  puVar1 = PTR_DAT_04bcd7c8;
  param_1[0xc] = param_2;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00220ebc(param_1 + 0xd);
  param_1[0x13] = 0;
  return;
}

