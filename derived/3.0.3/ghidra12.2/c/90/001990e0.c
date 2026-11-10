
void FUN_001990e0(long *param_1)

{
  undefined *puVar1;
  undefined *local_58;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined8 uStack_38;
  
  local_50[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_40 = local_50;
  uStack_38 = 0x10;
  local_58 = puVar1;
  FUN_0018b070(&local_58,"CallContextRegister",0xffffffffffffffff);
  *param_1 = (long)(PTR_DAT_04bcbc48 + 0x10);
  *(undefined4 *)(param_1 + 1) = 1;
  param_1[2] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *param_1 = (long)&PTR_FUN_048398b8;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = (long)(param_1 + 3);
  param_1[6] = 0x10;
  FUN_0018b070(param_1 + 2,local_40,0xffffffffffffffff);
  param_1[7] = 1;
  param_1[8] = 0;
  local_58 = puVar1;
  FUN_0018b1a0(&local_58);
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[9] = (long)(param_1 + 10);
  param_1[0xb] = 0;
  param_1[0xc] = (long)(param_1 + 0xd);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 1;
  *param_1 = (long)&PTR_FUN_04839450;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}

