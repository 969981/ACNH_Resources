
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_02b29ca0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined *local_a8;
  int local_a0;
  int local_9c;
  undefined *local_98;
  undefined *puStack_90;
  int local_88;
  int iStack_84;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  puVar4 = PTR_DAT_04bb27c8;
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  fVar10 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar8 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar9 = fVar8 + 2.5;
  fVar11 = fVar10 + 2.5;
  fVar12 = fVar8 + 10.0 + -2.5;
  fVar8 = fVar10 + 10.0 + -2.5;
  local_78 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  iStack_74 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  iVar3 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iVar2 = local_78;
  if (iVar3 <= local_78) {
    iVar2 = iVar3;
  }
  if (local_78 <= iVar3) {
    local_78 = iVar3;
  }
  iVar3 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
  local_9c = iStack_74;
  if (iVar3 <= iStack_74) {
    local_9c = iVar3;
  }
  if (iStack_74 <= iVar3) {
    iStack_74 = iVar3;
  }
  iVar3 = iStack_74 + 1;
  if (iVar3 != local_9c) {
    puVar1 = PTR_DAT_04bb2018 + 0x10;
    local_a0 = iVar2;
    puStack_90 = local_a8;
    local_88 = iVar2;
    iStack_84 = local_9c;
    local_80 = local_a8;
    do {
      local_68 = 0;
      local_70 = (undefined *)0x0;
      local_70 = (undefined *)0x2;
      local_68 = 0;
      lVar7 = *(long *)puVar4;
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0xa8) != 0)) &&
         (uVar5 = FUN_00949898(lVar7 + 0x28,&local_a8,&local_70), (uVar5 & 1) != 0)) {
        return 1;
      }
      local_68 = 0;
      local_70 = (undefined *)0x0;
      local_70 = (undefined *)0x1000;
      local_68 = 0;
      lVar7 = *(long *)puVar4;
      if (((lVar7 != 0) && (*(long *)(lVar7 + 0xa8) != 0)) &&
         (uVar5 = FUN_00949898(lVar7 + 0x28,&local_a8,&local_70), (uVar5 & 1) != 0)) {
        return 1;
      }
      fVar8 = (float)local_a0 * 0.5;
      uVar6 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar6 = (uint)(fVar8 < 0.0);
      }
      local_68 = (int)fVar8 - uVar6;
      fVar8 = (float)local_9c * 0.5;
      uVar6 = 0;
      if (fVar8 != (float)(int)fVar8) {
        uVar6 = (uint)(fVar8 < 0.0);
      }
      iStack_64 = (int)fVar8 - uVar6;
      local_70 = puVar1;
      uVar5 = FUN_01318220(&local_70);
      if ((uVar5 & 1) != 0) {
        return 1;
      }
      if (local_a0 < local_78) {
        local_a0 = local_a0 + 1;
      }
      else {
        local_9c = local_9c + 1;
        local_a0 = local_88;
      }
    } while ((iVar2 != local_a0) || (iVar3 != local_9c));
  }
  return 0;
}

