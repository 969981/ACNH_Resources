
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01a198c0(long param_1,char param_2)

{
  int iVar1;
  undefined *puVar2;
  uint *puVar3;
  short sVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
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
  
  puVar6 = PTR_DAT_04bb27c8;
  if ((param_2 != '\0') && (sVar4 = *(short *)PTR_DAT_04bb6298, sVar4 != -1)) {
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar3 >> 0x1a & 1) != 0) && ((*puVar3 >> 1 & 1) != 0)) &&
       (lVar8 = *(long *)PTR_DAT_04bb59d8, lVar8 != 0)) {
      if (*(int *)(param_1 + 8) < *(int *)(lVar8 + 0x28)) {
        return 0;
      }
      if (*(int *)(lVar8 + 0x38) < *(int *)(param_1 + 8)) {
        return 0;
      }
      if (*(int *)(param_1 + 0xc) < *(int *)(lVar8 + 0x2c)) {
        return 0;
      }
      if (*(int *)(lVar8 + 0x3c) < *(int *)(param_1 + 0xc)) {
        return 0;
      }
    }
  }
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  iVar5 = *(uint *)(param_1 + 8) - (uint)((*(uint *)(param_1 + 8) & 0x80000001) == 1);
  local_9c = *(uint *)(param_1 + 0xc) - (uint)((*(uint *)(param_1 + 0xc) & 0x80000001) == 1);
  local_78 = iVar5 + 1;
  iStack_74 = local_9c + 1;
  iVar1 = local_9c + 2;
  puVar2 = PTR_DAT_04bb2018 + 0x10;
  local_a0 = iVar5;
  puStack_90 = local_a8;
  local_88 = iVar5;
  iStack_84 = local_9c;
  local_80 = local_a8;
  while( true ) {
    local_68 = 0;
    local_70 = (undefined *)0x0;
    local_70 = (undefined *)0x100;
    local_68 = 0;
    lVar8 = *(long *)puVar6;
    if (((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) &&
       (uVar7 = FUN_00949798(lVar8 + 0x28,&local_a8,&local_70), (uVar7 & 1) != 0)) {
      return 0;
    }
    fVar10 = (float)local_a0 * 0.5;
    uVar9 = 0;
    if (fVar10 != (float)(int)fVar10) {
      uVar9 = (uint)(fVar10 < 0.0);
    }
    local_68 = (int)fVar10 - uVar9;
    fVar10 = (float)local_9c * 0.5;
    uVar9 = 0;
    if (fVar10 != (float)(int)fVar10) {
      uVar9 = (uint)(fVar10 < 0.0);
    }
    iStack_64 = (int)fVar10 - uVar9;
    local_70 = puVar2;
    uVar7 = FUN_02b672b0(&local_70);
    if ((uVar7 & 1) != 0) break;
    if (local_a0 < local_78) {
      local_a0 = local_a0 + 1;
    }
    else {
      local_9c = local_9c + 1;
      local_a0 = local_88;
    }
    if ((iVar5 == local_a0) && (iVar1 == local_9c)) {
      return 1;
    }
  }
  return 0;
}

