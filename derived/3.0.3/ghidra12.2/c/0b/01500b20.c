
uint FUN_01500b20(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *local_70;
  int local_68;
  int local_64;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_38;
  undefined4 uStack_34;
  
  iVar3 = *(int *)(param_2 + 0x10);
  local_64 = *(int *)(param_2 + 0x14);
  local_70 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(param_2 + 0x24) + 1;
  if (iVar1 == local_64) {
    uVar5 = 0;
  }
  else {
    puVar2 = PTR_DAT_04bc35c0 + 0x10;
    local_68 = iVar3;
    do {
      FUN_01a5033c(&local_38,param_1,0,&local_70,0);
      local_58 = local_38;
      uStack_54 = uStack_34;
      local_60 = puVar2;
      iVar4 = FUN_0277d6c4(&local_58);
      if (iVar4 - 0xf619U < 7) {
        uVar5 = 1;
        break;
      }
      uVar5 = FUN_0097abd0(&local_70,0);
      if ((uVar5 & 1) != 0) break;
      if (local_68 < *(int *)(param_2 + 0x20)) {
        local_68 = local_68 + 1;
      }
      else {
        local_64 = local_64 + 1;
        local_68 = *(int *)(param_2 + 0x10);
      }
    } while ((iVar3 != local_68) || (iVar1 != local_64));
  }
  return uVar5 & 1;
}

