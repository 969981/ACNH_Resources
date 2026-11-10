
void FUN_00255018(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcd7c8;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00220f6c(param_1 + 0xd);
  thunk_FUN_00221120(param_1);
  return;
}

