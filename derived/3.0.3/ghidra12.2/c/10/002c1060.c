
void FUN_002c1060(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_38;
  undefined1 local_30 [16];
  undefined1 *local_20;
  undefined8 uStack_18;
  
  param_1 = param_1 + 0x10;
  iVar1 = FUN_00227d94(param_1);
  if (iVar1 == 2) {
    uVar2 = FUN_00227acc(param_1);
    local_30[0] = 0;
    puVar3 = PTR_DAT_04bc0ec8 + 0x10;
    local_20 = local_30;
    uStack_18 = 0x10;
    local_38 = puVar3;
    FUN_0018b1d0(&local_38,uVar2,0xffffffffffffffff);
  }
  else {
    uVar2 = FUN_00227acc(param_1);
    local_30[0] = 0;
    puVar3 = PTR_DAT_04bc0ec8 + 0x10;
    local_20 = local_30;
    uStack_18 = 0x10;
    local_38 = puVar3;
    FUN_0018b070(&local_38,uVar2,0xffffffffffffffff);
  }
  FUN_003134f8(&local_38);
  local_38 = puVar3;
  FUN_0018b1a0(&local_38);
  return;
}

