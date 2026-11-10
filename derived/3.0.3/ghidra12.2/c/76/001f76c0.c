
void FUN_001f76c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_48;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined8 uStack_28;
  
  uVar2 = FUN_001b94e8(param_2);
  local_40[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_30 = local_40;
  uStack_28 = 0x10;
  local_48 = puVar1;
  FUN_0018b070(&local_48,uVar2,0xffffffffffffffff);
  FUN_001f7044(param_1,&local_48);
  local_48 = puVar1;
  FUN_0018b1a0(&local_48);
  return;
}

