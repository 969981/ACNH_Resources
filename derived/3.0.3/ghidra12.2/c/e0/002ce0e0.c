
void FUN_002ce0e0(long *param_1)

{
  undefined *puVar1;
  undefined4 local_14;
  
  FUN_00227770();
  puVar1 = PTR_DAT_04bce9a8;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  local_14 = 0;
  *param_1 = (long)(puVar1 + 0x10);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0x6c),(Result *)&local_14);
  param_1[0xb] = 0;
  return;
}

