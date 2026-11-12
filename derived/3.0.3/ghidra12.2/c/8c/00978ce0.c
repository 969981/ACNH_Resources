
uint FUN_00978ce0(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *local_40;
  int local_38;
  int local_34;
  
  iVar2 = *(int *)(param_1 + 0x10);
  local_34 = *(int *)(param_1 + 0x14);
  local_40 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  if (iVar1 == local_34) {
    uVar3 = 1;
  }
  else {
    local_38 = iVar2;
    do {
      uVar3 = FUN_013861b0(&local_40,0);
      if ((uVar3 & 1) != 0) break;
      if (local_38 < *(int *)(param_1 + 0x20)) {
        local_38 = local_38 + 1;
      }
      else {
        local_34 = local_34 + 1;
        local_38 = *(int *)(param_1 + 0x10);
      }
    } while (iVar2 != local_38 || iVar1 != local_34);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3 & 1;
}

