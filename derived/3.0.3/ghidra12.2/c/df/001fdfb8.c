
void FUN_001fdfb8(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined1 local_80 [16];
  undefined1 *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_34;
  
  local_80[0] = 0;
  local_b0 = 1;
  local_70 = local_80;
  uStack_68 = 0x10;
  puStack_58 = &local_50;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_50 = 0;
  uStack_48 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_b8 = PTR_DAT_04bcc9e8 + 0x10;
  local_98 = 0;
  uStack_90 = 0;
  local_60 = 0;
  local_88 = puVar1;
  FUN_001fdad0(param_1,&local_b8);
  if (*(char *)(param_1 + 8) == '\0') {
    (**(code **)(*param_3 + 0xc0))(param_3,&local_b8);
    local_34 = 0x8001;
    FUN_00197478(param_2,&local_34,4);
  }
  local_b8 = PTR_DAT_04bcc9e0 + 0x10;
  FUN_00202558(&puStack_58,local_50);
  local_88 = puVar1;
  FUN_0018b1a0(&local_88);
  return;
}

