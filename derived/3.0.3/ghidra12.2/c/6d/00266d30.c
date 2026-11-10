
void FUN_00266d30(long *param_1)

{
  undefined4 local_14;
  
  FUN_00227770();
  *param_1 = (long)(PTR_DAT_04bcda58 + 0x10);
  FUN_00220ebc(param_1 + 0x2c);
  *(undefined4 *)((long)param_1 + 0x19c) = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 0x34),(Result *)&local_14);
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  return;
}

