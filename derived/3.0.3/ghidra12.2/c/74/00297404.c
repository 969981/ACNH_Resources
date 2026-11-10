
void FUN_00297404(long *param_1)

{
  undefined *puVar1;
  undefined4 local_14;
  
  FUN_00227770();
  puVar1 = PTR_DAT_04bcdfc0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  local_14 = 0;
  *param_1 = (long)(puVar1 + 0x10);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 0xe),(Result *)&local_14);
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined1 *)((long)param_1 + 0x82) = 0;
  param_1[0x11] = 0;
  FUN_002b3fa8(param_1 + 0x12);
  FUN_00220ebc(param_1 + 0x22);
  param_1[0x28] = 0;
  return;
}

