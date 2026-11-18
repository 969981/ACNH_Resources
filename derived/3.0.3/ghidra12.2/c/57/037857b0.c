
undefined8 FUN_037857b0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined *local_80;
  int local_78;
  int iStack_74;
  long local_70;
  long local_68;
  undefined *local_60;
  int local_58;
  int local_54;
  
  local_70 = param_1 + 8;
  local_68 = param_1 + 0x18;
  iVar3 = *(int *)(param_1 + 0x10);
  local_54 = *(int *)(param_1 + 0x14);
  local_60 = PTR_DAT_04bb2018 + 0x10;
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  if (iVar1 != local_54) {
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_58 = iVar3;
    do {
      iVar4 = FUN_01318aa0(&local_60,0);
      if (iVar4 != 0) {
        return 1;
      }
      fVar7 = (float)local_54 * 10.0 + 2.5;
      fVar6 = (float)local_58 * 10.0 + 2.5;
      local_78 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
      iStack_74 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
      local_80 = puVar2;
      uVar5 = FUN_0097b460(&local_80);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      if (local_58 < *(int *)(local_68 + 8)) {
        local_58 = local_58 + 1;
      }
      else {
        local_54 = local_54 + 1;
        local_58 = *(int *)(local_70 + 8);
      }
    } while ((iVar3 != local_58) || (iVar1 != local_54));
  }
  return 0;
}

