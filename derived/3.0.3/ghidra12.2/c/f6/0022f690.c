
void FUN_0022f690(long *param_1)

{
  undefined *puVar1;
  undefined4 local_14;
  
  FUN_00292840();
  puVar1 = PTR_DAT_04bcd0e0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_14 = 0;
  *param_1 = (long)(puVar1 + 0x10);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0xa4),(Result *)&local_14);
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 1;
  return;
}

