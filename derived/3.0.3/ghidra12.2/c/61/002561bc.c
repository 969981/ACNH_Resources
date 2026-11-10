
void FUN_002561bc(long *param_1)

{
  undefined *puVar1;
  undefined4 local_14;
  
  FUN_002a442c();
  puVar1 = PTR_DAT_04bcd898;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  local_14 = 0;
  *param_1 = (long)(puVar1 + 0x10);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 0x15),(Result *)&local_14);
  return;
}

