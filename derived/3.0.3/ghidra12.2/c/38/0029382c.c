
void FUN_0029382c(long *param_1)

{
  undefined *puVar1;
  undefined4 local_14;
  
  FUN_00227770();
  puVar1 = PTR_DAT_04bcdec8;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00220ebc(param_1 + 0xc);
  FUN_002b3fa8(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0x124),(Result *)&local_14);
  param_1[0x26] = 0;
  return;
}

