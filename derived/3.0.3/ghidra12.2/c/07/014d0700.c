
float FUN_014d0700(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined1 local_54 [4];
  long local_50;
  long local_48;
  undefined *local_40;
  int local_38;
  int local_34;
  
  local_50 = param_2 + 8;
  local_48 = param_2 + 0x18;
  local_54[0] = *(int *)(param_1 + 0xb58) == 7;
  iVar2 = *(int *)(param_2 + 0x10);
  local_34 = *(int *)(param_2 + 0x14);
  local_40 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(param_2 + 0x24) + 1;
  if (iVar1 == local_34) {
    fVar4 = -500.0;
  }
  else {
    fVar4 = -500.0;
    local_38 = iVar2;
    do {
      fVar3 = (float)FUN_013866c0(&local_40,local_54);
      if (fVar3 <= fVar4) {
        fVar3 = fVar4;
      }
      fVar4 = fVar3;
      if (local_38 < *(int *)(local_48 + 8)) {
        local_38 = local_38 + 1;
      }
      else {
        local_34 = local_34 + 1;
        local_38 = *(int *)(local_50 + 8);
      }
    } while (iVar2 != local_38 || iVar1 != local_34);
  }
  return fVar4;
}

