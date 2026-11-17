
bool FUN_02ce1534(long param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_60;
  undefined4 local_58;
  uint local_54;
  long local_50;
  uint local_44;
  
  local_44 = 0;
  if (param_2 != 0) {
    if (param_2 == 3) {
      local_44 = 2;
    }
    else {
      if (param_2 != 4) {
        return false;
      }
      local_44 = 1;
    }
  }
  if ((*(byte *)(param_1 + 0x60) >> (ulong)local_44 & 1) == 0) {
    return false;
  }
  puVar1 = (undefined4 *)(param_1 + 0x48);
  puVar2 = puVar1 + (ulong)local_44 * 2;
  if (2 < local_44) {
    puVar2 = puVar1;
  }
  uVar8 = FUN_02cd8f10(puVar2);
  if ((uVar8 & 1) == 0) {
    return true;
  }
  puVar2 = (undefined4 *)(param_1 + 8);
  puVar3 = puVar2 + (ulong)local_44 * 2;
  if (2 < local_44) {
    puVar3 = puVar2;
  }
  uVar8 = FUN_02cd8f10(puVar3);
  puVar5 = PTR_DAT_04bc0510;
  puVar4 = PTR_DAT_04bb43c0;
  if ((uVar8 & 1) == 0) {
    return true;
  }
  local_50 = 0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  puVar3 = puVar2 + (ulong)local_44 * 2;
  if (2 < local_44) {
    puVar3 = puVar2;
  }
  local_58 = *puVar3;
  local_54 = puVar3[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar4 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(puVar3);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8), lVar9 != 0)) {
        local_50 = lVar9;
      }
    }
  }
  uVar8 = FUN_01377be0(&local_60);
  if (((uVar8 & 1) == 0) || (uVar8 = FUN_01377be0(&local_60), (uVar8 & 1) == 0)) {
LAB_02ce169c:
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = local_54 & 0xffff;
    if (0xdb < (ushort)local_54) goto LAB_02ce169c;
  }
  local_60 = puVar5 + 0x10;
  local_50 = 0;
  puVar2 = puVar1 + (ulong)local_44 * 2;
  if (2 < local_44) {
    puVar2 = puVar1;
  }
  lVar9 = *(long *)puVar4;
  local_58 = *puVar2;
  local_54 = puVar2[1];
  uVar7 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar4 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(puVar2);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8), lVar9 != 0)) {
        local_50 = lVar9;
      }
    }
  }
  uVar8 = FUN_01377be0(&local_60);
  if (((uVar8 & 1) != 0) && (uVar8 = FUN_01377be0(&local_60), (uVar8 & 1) != 0)) {
    uVar7 = local_54 & 0xffff;
    if ((ushort)local_54 < 0xdc) goto LAB_02ce176c;
  }
  uVar7 = 0xffffffff;
LAB_02ce176c:
  return uVar6 != uVar7;
}

