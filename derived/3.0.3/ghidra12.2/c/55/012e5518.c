
void FUN_012e5518(long param_1,undefined4 *param_2)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined **local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar5 = PTR_DAT_04bb43c0;
  if (param_1 != 0) {
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(param_2);
    lVar8 = DAT_05150358;
    lVar9 = *(long *)puVar5;
    if (lVar9 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_48 = 0;
        local_50 = *param_2;
        uStack_4c = param_2[1];
        local_58 = &PTR_FUN_04a36b50;
        uVar6 = FUN_0277d6c4(&local_50);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar9 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(param_2);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
               (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), lVar8 != 0)) {
              local_48 = lVar8;
            }
          }
        }
        FUN_01afb480(&local_58,param_1);
        return;
      }
    }
    if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
        ((*(long *)(DAT_05150358 + 0x488) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
       ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
        (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
      uVar6 = FUN_0277d6c4(param_2);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        iVar7 = DAT_04c896f8;
        if (0 < DAT_04c896f8) {
          iVar7 = 1;
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
        *(int *)(param_1 + 0x10) = iVar7;
        *(int *)(param_1 + 0x14) = iVar3;
        *(int *)(param_1 + 0x20) = iVar2;
        *(int *)(param_1 + 0x24) = iVar4;
        return;
      }
    }
    ppuVar1 = (undefined **)(PTR_DAT_04bc35c0 + 0x10);
    local_50 = *param_2;
    uStack_4c = param_2[1];
    local_58 = ppuVar1;
    iVar7 = FUN_0277d6c4(&local_50);
    if (iVar7 - 0xf619U < 7) {
      local_50 = *param_2;
      uStack_4c = param_2[1];
      local_58 = ppuVar1;
      FUN_0263fe7c(&local_58,param_1);
    }
  }
  return;
}

