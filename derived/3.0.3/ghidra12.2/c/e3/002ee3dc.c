
void FUN_002ee3dc(long *param_1)

{
  undefined4 local_14;
  
  FUN_00291438();
  *param_1 = (long)(PTR_DAT_04bce3c8 + 0x10);
  FUN_00220ebc(param_1 + 0xc);
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0x9c),(Result *)&local_14);
  return;
}

