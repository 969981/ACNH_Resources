
int FUN_01a4e7e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar4 = PTR_DAT_04bc0510;
  puVar3 = PTR_DAT_04bb43c0;
  local_58 = 0;
  local_60 = *param_1;
  uStack_5c = param_1[1];
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  local_68 = puVar1;
  uVar7 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar3 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_1);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (uVar7 < *(uint *)(lVar10 + 0x1d8)) {
        lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8);
        if (lVar10 != 0) {
          local_58 = lVar10;
        }
      }
    }
  }
  uVar7 = FUN_01aed730(&local_68);
  local_60 = *param_2;
  uStack_5c = param_2[1];
  lVar10 = *(long *)puVar3;
  local_58 = 0;
  local_68 = puVar1;
  uVar8 = FUN_0277d6c4(&local_60);
  if (*(long *)puVar3 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_2);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (uVar8 < *(uint *)(lVar10 + 0x1d8)) {
        lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8);
        if (lVar10 != 0) {
          local_58 = lVar10;
        }
      }
    }
  }
  uVar8 = FUN_01aed730(&local_68);
  if (uVar8 <= uVar7 && uVar7 != uVar8) {
    iVar9 = 1;
  }
  else if (uVar8 <= uVar7) {
    lVar10 = *(long *)puVar3;
    uVar2 = **(undefined4 **)PTR_DAT_04bb3448;
    local_58 = 0;
    local_60 = *param_1;
    uStack_5c = param_1[1];
    local_68 = puVar4 + 0x10;
    uVar7 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar3 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(param_1);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if (uVar7 < *(uint *)(lVar10 + 0x1d8)) {
          lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8);
          if (lVar10 != 0) {
            local_58 = lVar10;
          }
        }
      }
    }
    uVar5 = FUN_01b0bac0(&local_68,uVar2);
    local_60 = *param_2;
    uStack_5c = param_2[1];
    lVar10 = *(long *)puVar3;
    local_58 = 0;
    local_68 = puVar4 + 0x10;
    uVar7 = FUN_0277d6c4(&local_60);
    if (*(long *)puVar3 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(param_2);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if (uVar7 < *(uint *)(lVar10 + 0x1d8)) {
          lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8);
          if (lVar10 != 0) {
            local_58 = lVar10;
          }
        }
      }
    }
    uVar6 = FUN_01b0bac0(&local_68,uVar2);
    iVar9 = -(uint)(uVar5 < uVar6);
    if (uVar6 < uVar5) {
      iVar9 = 1;
    }
  }
  else {
    iVar9 = -1;
  }
  return iVar9;
}

