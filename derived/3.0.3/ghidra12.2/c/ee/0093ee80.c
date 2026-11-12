
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0093ee80(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined **local_90;
  byte local_88;
  undefined *local_80;
  int local_78;
  int local_74;
  int local_6c;
  undefined8 local_68;
  
  iVar3 = *(int *)(param_1 + 0x10);
  iVar14 = *(int *)(param_1 + 0x14);
  iVar1 = *(int *)(param_1 + 0x24) + 1;
  if (iVar1 == iVar14) {
    iVar12 = 0;
    uVar11 = 0;
    local_78 = iVar3;
  }
  else {
    uVar11 = 0;
    iVar12 = 0;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    iVar13 = iVar3;
    do {
      local_80 = puVar2;
      local_78 = iVar13;
      local_74 = iVar14;
      uVar7 = FUN_0097abd0(&local_80,1);
      if (((uVar7 & 1) != 0) ||
         ((((*(int *)(param_2 + 0x10) <= local_78 && (local_78 <= *(int *)(param_2 + 0x20))) &&
           (*(int *)(param_2 + 0x14) <= local_74)) && (local_74 <= *(int *)(param_2 + 0x24))))) {
        return 1;
      }
      iVar5 = FUN_009763c0(&local_80);
      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
      local_68 = 0;
      lVar8 = *(long *)PTR_DAT_04bb27c8;
      local_6c = 0;
      if (((lVar8 == 0) || (*(long *)(lVar8 + 0xa8) == 0)) ||
         (uVar7 = FUN_009493f8(lVar8 + 0x28,&local_80,&local_90,(long)&local_68 + 4,&local_68,
                               &local_6c), (uVar7 & 1) == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = 1;
        if ((int)local_90 == 0x2e) {
          uVar10 = 2;
        }
        if (local_68._4_4_ != 0x2e) {
          uVar10 = (uint)((int)local_90 == 0x2e);
        }
        if ((int)local_68 == 0x2e) {
          uVar10 = uVar10 + 1;
        }
        if (local_6c == 0x2e) {
          uVar10 = uVar10 + 1;
        }
      }
      local_90 = &PTR_LAB_04929b90;
      local_88 = 0;
      if ((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) {
        FUN_00974bc8(*(long *)(DAT_04cfae30 + 0xa8),&local_80,&local_90);
      }
      local_78 = *(int *)(param_1 + 0x10);
      iVar12 = iVar5 + iVar12 + uVar10;
      if ((local_88 & 0x10) == 0) {
        uVar11 = uVar11 + 1;
      }
      if (iVar13 < *(int *)(param_1 + 0x20)) {
        iVar13 = iVar13 + 1;
      }
      else {
        iVar14 = iVar14 + 1;
        iVar13 = local_78;
      }
    } while ((iVar3 != iVar13) || (iVar1 != iVar14));
    iVar14 = *(int *)(param_1 + 0x14);
  }
  local_80 = PTR_DAT_04bb2010 + 0x10;
  local_90 = &PTR_LAB_04929b90;
  local_88 = 0;
  lVar8 = DAT_04cfae30;
  local_74 = iVar14;
  if (DAT_04cfae30 == 0) {
    local_78 = local_78 + 1;
    uVar10 = 1;
    bVar4 = true;
  }
  else {
    if (*(long *)(DAT_04cfae30 + 0xa8) == 0) {
      local_78 = local_78 + 1;
      uVar10 = 1;
      lVar6 = *(long *)(DAT_04cfae30 + 0xa8);
joined_r0x0093f120:
      if (lVar6 != 0) {
        local_88 = 0;
        FUN_00974bc8(lVar6,&local_80,&local_90);
        bVar4 = (local_88 & 1) == 0;
        lVar8 = *(long *)PTR_DAT_04bb27c8;
        if (uVar10 == 0) {
          uVar9 = 1;
          goto LAB_0093f134;
        }
        goto LAB_0093f130;
      }
    }
    else {
      FUN_00974bc8(*(long *)(DAT_04cfae30 + 0xa8),&local_80,&local_90);
      local_78 = local_78 + 1;
      lVar8 = *(long *)PTR_DAT_04bb27c8;
      uVar10 = (uint)((local_88 & 2) == 0);
      if (lVar8 != 0) {
        lVar6 = *(long *)(lVar8 + 0xa8);
        goto joined_r0x0093f120;
      }
    }
    bVar4 = true;
    uVar9 = 1;
    if (uVar10 == 0) goto LAB_0093f134;
  }
LAB_0093f130:
  uVar9 = 2;
LAB_0093f134:
  local_88 = 0;
  if (!bVar4) {
    uVar9 = uVar10;
  }
  local_74 = local_74 + 1;
  if (lVar8 == 0) {
    return 0;
  }
  if (*(long *)(lVar8 + 0xa8) == 0) {
    uVar9 = uVar9 + 1;
    lVar6 = *(long *)(lVar8 + 0xa8);
  }
  else {
    FUN_00974bc8(*(long *)(lVar8 + 0xa8),&local_80,&local_90);
    lVar8 = *(long *)PTR_DAT_04bb27c8;
    if ((local_88 & 8) == 0) {
      uVar9 = uVar9 + 1;
    }
    if (lVar8 == 0) {
      return 0;
    }
    lVar6 = *(long *)(lVar8 + 0xa8);
  }
  local_78 = local_78 + -1;
  if (lVar6 == 0) {
    local_88 = 0;
    uVar10 = 0xffffffff;
    lVar8 = *(long *)(lVar8 + 0xa8);
    if (lVar8 == 0) {
      return 0;
    }
  }
  else {
    local_88 = 0;
    FUN_00974bc8(lVar6,&local_80,&local_90);
    if (DAT_04cfae30 == 0) {
      return 0;
    }
    uVar10 = (local_88 >> 2 & 1) - 1;
    lVar8 = *(long *)(DAT_04cfae30 + 0xa8);
    if (lVar8 == 0) {
      return 0;
    }
  }
  uVar7 = FUN_009721a0(lVar8,param_1,0);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  if ((iVar12 == 0) || (2 < iVar12)) {
    if (1 < uVar11) {
      return 1;
    }
    if (uVar9 != uVar10) {
      return 1;
    }
  }
  return 0;
}

