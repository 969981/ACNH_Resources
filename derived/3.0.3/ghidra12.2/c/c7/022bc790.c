
undefined8 FUN_022bc790(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  short local_a8 [4];
  undefined *local_a0;
  undefined8 local_98;
  uint local_90;
  int iStack_8c;
  undefined *local_88;
  uint local_80;
  int iStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
  local_70 = 0;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar8 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar12 + 7);
  local_68 = FUN_017baf44();
  puVar7 = PTR_DAT_04bb2010;
  local_68 = local_68 & 1;
  local_78 = PTR_DAT_04bb6268 + 0x10;
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  iVar8 = -2;
  do {
    iVar11 = -3;
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      iVar11 = -2;
    }
    iVar14 = (*(uint *)(param_1 + 0xc) + iVar8) - (*(uint *)(param_1 + 0xc) & 1);
    iVar11 = iVar11 + *(uint *)(param_1 + 8);
    iStack_7c = iVar14 + 1;
    local_80 = iVar11 + 1;
    local_a0 = puVar3;
    local_98 = puVar4;
    local_90 = iVar11;
    iStack_8c = iVar14;
    local_88 = puVar4;
    uVar9 = FUN_00978be0(&local_a0);
    if ((uVar9 & 1) != 0) {
      iVar2 = iVar14 + 2;
      iVar13 = iVar11;
      while( true ) {
        local_a0 = puVar7 + 0x10;
        local_98 = (undefined *)CONCAT44(iVar14,iVar13);
        FUN_01a5033c(local_a8,&local_78,0,&local_a0,0);
        if (local_a8[0] != -2) break;
        if (iVar11 < iVar13) {
          iVar14 = iVar14 + 1;
          iVar13 = iVar11;
        }
        else {
          iVar13 = iVar13 + 1;
        }
        if ((iVar11 == iVar13) && (iVar2 == iVar14)) {
          return 1;
        }
      }
    }
    if (iVar8 != 0) {
      uVar5 = *(uint *)(param_1 + 8) & 0xfffffffe;
      uVar6 = *(uint *)(param_1 + 8) | 1;
      iVar11 = (*(uint *)(param_1 + 0xc) + iVar8) - (*(uint *)(param_1 + 0xc) & 1);
      local_98 = puVar7 + 0x10;
      iStack_7c = iVar11 + 1;
      local_a0 = PTR_DAT_04bbc1a0 + 0x10;
      local_90 = uVar5;
      iStack_8c = iVar11;
      local_88 = local_98;
      local_80 = uVar6;
      uVar9 = FUN_00978be0(&local_a0);
      if ((uVar9 & 1) != 0) {
        iVar14 = iVar11 + 2;
        uVar15 = uVar5;
        while( true ) {
          local_a0 = puVar7 + 0x10;
          local_98 = (undefined *)CONCAT44(iVar11,uVar15);
          FUN_01a5033c(local_a8,&local_78,0,&local_a0,0);
          if (local_a8[0] != -2) break;
          if ((int)uVar15 < (int)uVar6) {
            uVar15 = uVar15 + 1;
          }
          else {
            iVar11 = iVar11 + 1;
            uVar15 = uVar5;
          }
          if ((uVar5 == uVar15) && (iVar14 == iVar11)) {
            return 1;
          }
        }
      }
    }
    iVar11 = 1;
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      iVar11 = 2;
    }
    iVar14 = (*(uint *)(param_1 + 0xc) + iVar8) - (*(uint *)(param_1 + 0xc) & 1);
    local_98 = puVar7 + 0x10;
    iVar11 = iVar11 + *(uint *)(param_1 + 8);
    local_a0 = PTR_DAT_04bbc1a0 + 0x10;
    iStack_7c = iVar14 + 1;
    local_90 = iVar11;
    iStack_8c = iVar14;
    local_88 = local_98;
    local_80 = iVar11 + 1;
    uVar9 = FUN_00978be0(&local_a0);
    if ((uVar9 & 1) != 0) {
      iVar2 = iVar14 + 2;
      iVar13 = iVar11;
      while( true ) {
        local_a0 = puVar7 + 0x10;
        local_98 = (undefined *)CONCAT44(iVar14,iVar13);
        FUN_01a5033c(local_a8,&local_78,0,&local_a0,0);
        if (local_a8[0] != -2) break;
        if (iVar13 < iVar11 + 1) {
          iVar13 = iVar13 + 1;
        }
        else {
          iVar14 = iVar14 + 1;
          iVar13 = iVar11;
        }
        if ((iVar11 == iVar13) && (iVar2 == iVar14)) {
          return 1;
        }
      }
    }
    bVar1 = 0 < iVar8;
    iVar8 = iVar8 + 2;
    if (bVar1) {
      return 0;
    }
  } while( true );
}

