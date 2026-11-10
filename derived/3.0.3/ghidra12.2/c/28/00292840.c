
void FUN_00292840(long *param_1)

{
  undefined *puVar1;
  undefined4 local_14;
  
  FUN_00227770();
  puVar1 = PTR_DAT_04bcde60;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00220ebc(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x12) = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0x94),(Result *)&local_14);
  return;
}

