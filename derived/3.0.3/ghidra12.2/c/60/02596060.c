
void FUN_02596060(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  ushort uVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *local_58;
  long local_50;
  undefined8 local_48;
  
  local_48 = 0x1300000012;
  FUN_02602950(param_1,*(undefined4 *)((long)&local_48 + (long)*(int *)(param_1 + 0x28) * 4));
  uVar5 = FUN_0277d6c4(*param_2);
  puVar3 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_58 = "ItemUniqueId";
  if (*(long *)(param_1 + 8) != 0) {
    local_60 = puVar1;
    FUN_02605660(*(long *)(param_1 + 8),&local_60,uVar5);
    local_58 = "CraftNum";
    if (*(long *)(param_1 + 8) != 0) {
      local_60 = puVar1;
      FUN_026054d0(*(long *)(param_1 + 8),&local_60,(long)*(int *)((long)param_2 + 0xc));
      local_60 = puVar3 + 0x10;
      local_58 = "FromDIYTradeTab";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_60,*(undefined1 *)(param_2 + 2));
      }
    }
  }
  puVar1 = PTR_DAT_04bb43c0;
  if (*(int *)(param_1 + 0x28) == 1) {
    puVar11 = (undefined8 *)*param_2;
    local_60 = PTR_DAT_04bc0510 + 0x10;
    local_58 = (char *)*puVar11;
    local_50 = 0;
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar1 != 0) {
      lVar12 = *(long *)(lVar12 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar12 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(puVar11);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
           (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8), lVar12 != 0)) {
          local_50 = lVar12;
        }
      }
    }
    local_70 = puVar3 + 0x10;
    pcStack_68 = "RemakeBodyID";
    iVar7 = FUN_01ad7260(&local_60);
    if ((iVar7 == 0) || (puVar9 = (ushort *)FUN_01afd600(&local_60), puVar9 == (ushort *)0x0)) {
      uVar6 = 0;
      lVar12 = *(long *)(param_1 + 8);
    }
    else {
      uVar6 = *puVar9 & 7;
      uVar8 = FUN_01ad7260(&local_60);
      if (uVar8 <= uVar6) {
        uVar6 = 0;
      }
      lVar12 = *(long *)(param_1 + 8);
    }
    if (lVar12 != 0) {
      FUN_026054d0(lVar12,&local_70,uVar6);
    }
    pcStack_68 = "RemakeFablicID";
    local_70 = puVar3 + 0x10;
    iVar7 = FUN_01ae3a80(&local_60);
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_70,(long)iVar7);
    }
    pcStack_68 = "IsMyDesignRemake";
    local_70 = puVar3 + 0x10;
    iVar7 = FUN_01afcfa0(&local_60);
    if ((iVar7 == 0) || (puVar9 = (ushort *)FUN_01afd600(&local_60), puVar9 == (ushort *)0x0)) {
      bVar4 = false;
      lVar12 = *(long *)(param_1 + 8);
    }
    else {
      bVar4 = (*puVar9 & 0x18) == 0x10;
      lVar12 = *(long *)(param_1 + 8);
    }
    if (lVar12 != 0) {
      FUN_026054d0(lVar12,&local_70,bVar4);
    }
    local_70 = puVar3 + 0x10;
    pcStack_68 = "RemakeFablicType";
    iVar7 = FUN_01afcfa0(&local_60);
    if ((iVar7 == 0) || (puVar9 = (ushort *)FUN_01afd600(&local_60), puVar9 == (ushort *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar2 = *puVar9 >> 3 & 3;
      uVar10 = 0;
      if (uVar2 != 3) {
        uVar10 = uVar2;
      }
    }
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_70,uVar10);
      local_70 = puVar3 + 0x10;
      pcStack_68 = "IsUseAlpShop";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_026054d0(*(long *)(param_1 + 8),&local_70,*(undefined1 *)(param_2 + 1));
      }
    }
  }
  return;
}

