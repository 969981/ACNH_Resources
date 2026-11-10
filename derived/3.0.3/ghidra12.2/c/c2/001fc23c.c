
void FUN_001fc23c(long *param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *local_48;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined8 uStack_28;
  
  local_40[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_30 = local_40;
  uStack_28 = 0x10;
  local_48 = puVar1;
  FUN_0018b070(&local_48,"<unknown>",0xffffffffffffffff);
  FUN_001991dc(param_1,&local_48);
  local_48 = puVar1;
  FUN_0018b1a0(&local_48);
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  puVar1 = PTR_DAT_04bcca08 + 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = (long)puVar1;
  return;
}

