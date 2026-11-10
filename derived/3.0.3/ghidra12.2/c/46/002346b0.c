
void FUN_002346b0(long *param_1)

{
  undefined *puVar1;
  undefined4 local_14;
  
  FUN_0029382c();
  puVar1 = PTR_DAT_04bcd120;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  local_14 = 0;
  *param_1 = (long)(puVar1 + 0x10);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0x14c),(Result *)&local_14);
  return;
}

