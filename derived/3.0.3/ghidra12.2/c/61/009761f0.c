
undefined8 FUN_009761f0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  undefined *local_40;
  int local_38;
  int local_34;
  
  puVar3 = PTR_DAT_04bb27c8;
  local_50 = param_1 + 8;
  local_48 = param_1 + 0x18;
  iVar2 = *(int *)(param_1 + 0x10);
  local_34 = *(int *)(param_1 + 0x14);
  local_40 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  if (iVar1 != local_34) {
    local_38 = iVar2;
    do {
      lVar5 = *(long *)puVar3;
      local_60 = 0;
      local_58 = 0;
      if (((((lVar5 == 0) || (*(long *)(lVar5 + 0xa8) == 0)) ||
           (uVar4 = FUN_009493f8(lVar5 + 0x28,&local_40,(long)&local_58 + 4,&local_58,
                                 (long)&local_60 + 4,&local_60), (uVar4 & 1) == 0)) ||
          ((local_58._4_4_ == 0x2c || ((int)local_58 == 0x2c)))) ||
         ((local_60._4_4_ == 0x2c || ((int)local_60 == 0x2c)))) {
        return 1;
      }
      if (local_38 < *(int *)(local_48 + 8)) {
        local_38 = local_38 + 1;
      }
      else {
        local_34 = local_34 + 1;
        local_38 = *(int *)(local_50 + 8);
      }
    } while ((iVar2 != local_38) || (iVar1 != local_34));
  }
  return 0;
}

