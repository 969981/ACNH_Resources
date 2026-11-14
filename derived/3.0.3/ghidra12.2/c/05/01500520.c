
undefined8 FUN_01500520(long param_1,undefined4 *param_2,long param_3,uint *param_4)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  uVar5 = FUN_0277e294(param_2);
  puVar1 = PTR_DAT_04bb43c0;
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar1 != 0) {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar2 = FUN_0277d6c4(param_2);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if (uVar2 < *(uint *)(lVar6 + 0x1d8)) {
        lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar2 * 8);
        if (lVar6 != 0) {
          local_48 = lVar6;
        }
      }
    }
  }
  iVar3 = FUN_01ae7550(&local_58);
  if (5 < iVar3 - 1U) {
    return 0;
  }
  local_60 = 0;
  local_80 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_78 = PTR_DAT_04bb2010 + 0x10;
  local_70 = 0;
  puStack_68 = puStack_78;
  FUN_01afb7fc(&local_58,&local_80,*param_4);
  local_88 = 0;
  local_70._0_4_ = (int)local_70 + *(int *)(param_3 + 8);
  local_70._4_4_ = local_70._4_4_ + *(int *)(param_3 + 0xc);
  local_60._0_4_ = (int)local_60 + *(int *)(param_3 + 8);
  local_60._4_4_ = local_60._4_4_ + *(int *)(param_3 + 0xc);
  FUN_01afb1a0(&local_58,auStack_90);
  uVar4 = FUN_01ae7550(&local_58);
  iVar3 = local_88._4_4_;
  switch(uVar4) {
  case 2:
    if ((int)local_88 < 0) {
      local_88._0_4_ = (int)local_88 + 1;
    }
    local_88._0_4_ = (int)local_88 >> 1;
    if ((*param_4 | 2) == 3) {
      iVar3 = (int)local_88;
      local_88._0_4_ = local_88._4_4_;
    }
    local_70._0_4_ = *(int *)(param_3 + 8);
    local_70._4_4_ = *(int *)(param_3 + 0xc);
    if (*param_4 == 1) {
LAB_015007d0:
      local_70._4_4_ = local_70._4_4_ + iVar3;
    }
    else if (*param_4 == 2) break;
    goto LAB_015007d4;
  case 3:
    if ((int)local_88 < 0) {
      local_88._0_4_ = (int)local_88 + 1;
    }
    local_88._0_4_ = (int)local_88 >> 1;
    if ((*param_4 | 2) == 3) {
      iVar3 = (int)local_88;
      local_88._0_4_ = local_88._4_4_;
    }
    local_70._0_4_ = *(int *)(param_3 + 8);
    local_70._4_4_ = *(int *)(param_3 + 0xc);
    if (*param_4 == 3) goto LAB_015007d0;
    if (*param_4 != 0) goto LAB_015007d4;
    break;
  case 4:
    if (local_88 < 0) {
      local_88._4_4_ = local_88._4_4_ + 1;
    }
    if ((*param_4 | 2) == 3) {
      iVar3 = (int)local_88;
      local_88._0_4_ = local_88._4_4_ >> 1;
    }
    else {
      iVar3 = local_88._4_4_ >> 1;
    }
    local_70._0_4_ = *(int *)(param_3 + 8);
    local_70._4_4_ = *(int *)(param_3 + 0xc);
    if (*param_4 != 1) {
      if (*param_4 != 0) goto LAB_015007d4;
      goto LAB_015007d0;
    }
    break;
  default:
    goto LAB_015007e4;
  case 6:
    iVar3 = FUN_01aee3b4(&local_58);
    if (iVar3 != 2) {
      return 0;
    }
    local_70._0_4_ = *(int *)(param_3 + 8) + 1;
    local_70._4_4_ = *(int *)(param_3 + 0xc) + 1;
    local_60._0_4_ = *(int *)(param_3 + 8) + 2;
    local_60._4_4_ = *(int *)(param_3 + 0xc) + 2;
    goto LAB_015007e4;
  }
  local_70._0_4_ = (int)local_70 + (int)local_88;
LAB_015007d4:
  local_60._0_4_ = (int)local_88 + (int)local_70 + -1;
  local_60._4_4_ = iVar3 + local_70._4_4_ + -1;
LAB_015007e4:
  *(int *)(param_1 + 0x10) = (int)local_70;
  *(int *)(param_1 + 0x14) = local_70._4_4_;
  *(int *)(param_1 + 0x20) = (int)local_60;
  *(int *)(param_1 + 0x24) = local_60._4_4_;
  return 1;
}

