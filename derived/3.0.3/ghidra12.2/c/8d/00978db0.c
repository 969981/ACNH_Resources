
undefined8 FUN_00978db0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  undefined *local_70;
  int local_68;
  int local_64;
  int local_5c;
  int local_58;
  int local_54;
  undefined *puStack_50;
  int local_48;
  int iStack_44;
  
  puVar4 = PTR_DAT_04bb27c8;
  iVar3 = *(int *)(param_1 + 0x10);
  local_64 = *(int *)(param_1 + 0x14);
  local_70 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  if (iVar1 != local_64) {
    puVar2 = PTR_DAT_04bb2018 + 0x10;
    local_68 = iVar3;
    do {
      lVar7 = *(long *)puVar4;
      local_54 = 0;
      puStack_50._0_4_ = 0;
      local_58 = 0;
      local_5c = 0;
      if (((lVar7 == 0) || (*(long *)(lVar7 + 0xa8) == 0)) ||
         (uVar5 = FUN_009493f8(lVar7 + 0x28,&local_70,&puStack_50,&local_54,&local_58,&local_5c),
         (uVar5 & 1) == 0)) {
        return 0;
      }
      if ((int)puStack_50 != 5) {
        return 0;
      }
      if (local_54 != 5) {
        return 0;
      }
      if (local_58 != 5) {
        return 0;
      }
      if (local_5c != 5) {
        return 0;
      }
      fVar8 = (float)local_68 * 0.5;
      uVar6 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar6 = (uint)(fVar8 < 0.0);
      }
      local_48 = (int)fVar8 - uVar6;
      fVar8 = (float)local_64 * 0.5;
      uVar6 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar6 = (uint)(fVar8 < 0.0);
      }
      iStack_44 = (int)fVar8 - uVar6;
      puStack_50 = puVar2;
      uVar5 = FUN_01318220(&puStack_50);
      if ((uVar5 & 1) != 0) {
        return 0;
      }
      if (local_68 < *(int *)(param_1 + 0x20)) {
        local_68 = local_68 + 1;
      }
      else {
        local_64 = local_64 + 1;
        local_68 = *(int *)(param_1 + 0x10);
      }
    } while ((iVar3 != local_68) || (iVar1 != local_64));
  }
  return 1;
}

