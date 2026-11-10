
uint FUN_001f7734(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *local_48;
  undefined1 local_40 [16];
  undefined1 *local_30;
  undefined8 uStack_28;
  
  local_40[0] = 0;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_30 = local_40;
  uStack_28 = 0x10;
  local_48 = puVar1;
  uVar2 = FUN_001f719c(param_1,&local_48);
  if ((uVar2 & 1) != 0) {
    FUN_001b81c0(param_2,local_30);
  }
  local_48 = puVar1;
  FUN_0018b1a0(&local_48);
  return uVar2 & 1;
}

