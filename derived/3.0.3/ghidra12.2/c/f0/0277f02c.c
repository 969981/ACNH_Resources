
undefined8 FUN_0277f02c(undefined4 *param_1,long param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  ushort uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  undefined **local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_48;
  
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4();
  lVar12 = DAT_05150358;
  if (lVar11 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar7 = *(ushort *)(lVar11 + 0x1f8);
    uVar5 = *(uint *)(lVar11 + 0x1d8);
    uVar9 = (uVar9 & 0xffff) - (uint)uVar7;
    if ((uVar9 < uVar5) &&
       (lVar11 = *(long *)(lVar11 + 0x1e0), *(long *)(lVar11 + (long)(int)uVar9 * 8) != 0)) {
      local_48 = 0;
      local_50 = *param_1;
      local_4c = param_1[1];
      local_58 = &PTR_FUN_04a36b50;
      uVar9 = FUN_0277d6c4(&local_50);
      uVar9 = (uVar9 & 0xffff) - (uint)uVar7;
      if ((uVar9 < uVar5) && (*(long *)(lVar11 + (long)(int)uVar9 * 8) != 0)) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(param_1);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
           (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8), lVar12 != 0)) {
          local_48 = lVar12;
        }
      }
      FUN_01afb480(&local_58,param_2);
      return 1;
    }
  }
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar9 = FUN_0277d6c4(param_1);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      iVar10 = DAT_04c896f8;
      if (0 < DAT_04c896f8) {
        iVar10 = 1;
      }
      iVar2 = DAT_04c896f8;
      if (DAT_04c896f8 < 2) {
        iVar2 = 1;
      }
      iVar3 = DAT_04c896fc;
      if (0 < DAT_04c896fc) {
        iVar3 = 1;
      }
      iVar4 = DAT_04c896fc;
      if (DAT_04c896fc < 2) {
        iVar4 = 1;
      }
      *(int *)(param_2 + 0x10) = iVar10;
      *(int *)(param_2 + 0x14) = iVar3;
      *(int *)(param_2 + 0x20) = iVar2;
      *(int *)(param_2 + 0x24) = iVar4;
      return 1;
    }
  }
  ppuVar1 = (undefined **)(PTR_DAT_04bc35c0 + 0x10);
  uVar8 = *param_1;
  local_50 = *param_1;
  uVar6 = param_1[1];
  local_58 = ppuVar1;
  local_4c = uVar6;
  iVar10 = FUN_0277d6c4(&local_50);
  if (iVar10 - 0xf619U < 7) {
    local_58 = ppuVar1;
    local_50 = uVar8;
    local_4c = uVar6;
    FUN_0263fe7c(&local_58,param_2);
    return 1;
  }
  return 0;
}

