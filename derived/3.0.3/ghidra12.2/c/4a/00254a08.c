
void FUN_00254a08(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  FUN_00292840();
  puVar1 = PTR_DAT_04bcd800;
  param_1[0x14] = 0;
  param_1[0x15] = param_2;
  local_30 = 0;
  local_14 = 0;
  *param_1 = (long)(puVar1 + 0x10);
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1 + 0x16,&local_30);
  return;
}

