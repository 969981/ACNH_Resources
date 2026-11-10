
void FUN_001faa4c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  
  local_60[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  uStack_48 = 0x10;
  local_68 = puVar1;
  local_50 = local_60;
  FUN_0018b070(&local_68,"<unknown>",0xffffffffffffffff);
  FUN_001991dc(param_1,&local_68);
  local_68 = puVar1;
  FUN_0018b1a0(&local_68);
  *(undefined2 *)(param_1 + 9) = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_60[0] = 0;
  *param_1 = (long)(PTR_DAT_04bcc9d0 + 0x10);
  param_1[0x12] = 0;
  param_1[0x11] = (long)(param_1 + 0x12);
  *(undefined4 *)(param_1 + 0xc) = 9;
  param_1[0x13] = 0;
  param_1[0x14] = param_2;
  uStack_48 = 0x10;
  local_68 = puVar1;
  local_50 = local_60;
  FUN_0018b070(&local_68,"NintendoNotificationEventManager",0xffffffffffffffff);
  FUN_001a13c0(param_1,&local_68);
  local_68 = puVar1;
  FUN_0018b1a0(&local_68);
  return;
}

