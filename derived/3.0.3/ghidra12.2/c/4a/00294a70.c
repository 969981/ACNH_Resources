
void FUN_00294a70(long *param_1)

{
  undefined *puVar1;
  undefined4 local_14;
  
  FUN_00227770();
  puVar1 = PTR_DAT_04bcdf10;
  param_1[0xb] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00220ebc(param_1 + 0xc);
  param_1[0x12] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  FUN_002236b0();
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  FUN_002236b0();
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0xd4) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)((long)param_1 + 0xf4) = 0;
  *(undefined1 *)((long)param_1 + 0xf6) = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((long)param_1 + 0xfb) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)param_1 + 0x104),(Result *)&local_14);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  (**(code **)(*param_1 + 0x40))(param_1);
  return;
}

