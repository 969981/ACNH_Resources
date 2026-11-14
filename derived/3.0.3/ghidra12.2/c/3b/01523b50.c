
undefined8
FUN_01523b50(int param_1,int *param_2,int *param_3,uint param_4,ulong param_5,int param_6,
            long *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  undefined **local_f8;
  int *piStack_f0;
  undefined1 *local_e8;
  undefined ***pppuStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  char *pcStack_a8;
  char local_8c [4];
  undefined *local_88;
  uint local_80;
  undefined4 uStack_7c;
  byte local_78;
  undefined1 local_70 [4];
  undefined4 local_6c;
  
  uVar10 = 0;
  local_70[0] = *(int *)(PTR_DAT_04bc3a80 + 0x38) == param_1;
  do {
    uVar8 = (uint)uVar10;
    piVar5 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar10 * 4);
    if (0x38 < uVar8) {
      piVar5 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar5 == param_1) goto LAB_01523bdc;
    uVar11 = 0x39;
    if ((int)uVar8 < 0x39) {
      uVar11 = uVar8 + 1;
    }
    uVar10 = (ulong)uVar11;
  } while (uVar11 != 0x39);
  uVar10 = 0;
LAB_01523bdc:
  local_80 = (uint)uVar10;
  if (((*(int *)(PTR_DAT_04bc3a80 + 0x38) != param_1) && (local_80 == 0)) ||
     (((param_4 & 1) != 0 && (*param_2 == -1)))) {
    return 0;
  }
  local_88 = PTR_DAT_04bbfe68 + 0x10;
  puVar6 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + uVar10 * 4);
  if (0x38 < local_80) {
    puVar6 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
  }
  uStack_7c = *puVar6;
  local_78 = FUN_017baf44();
  puVar4 = PTR_DAT_04bbc1a0;
  puVar3 = PTR_DAT_04bb2010;
  local_78 = local_78 & 1;
  pcStack_a8 = local_8c;
  local_8c[0] = '\0';
  local_b0 = &PTR_LAB_049a72b8;
  local_f8 = (undefined **)CONCAT44(local_f8._4_4_,5);
  iVar12 = 0;
  if ((param_5 & 1) == 0) {
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    iVar9 = 2;
    do {
      local_c8 = 0;
      uStack_b8 = 0;
      local_d8 = puVar1;
      puStack_d0 = puVar2;
      local_c0 = puVar2;
      uVar10 = FUN_0153ef40(&local_d8,iVar9,param_1);
      if ((uVar10 & 1) != 0) {
        iVar7 = FUN_01a51240(&local_88,iVar9,&local_d8,&local_b0,0);
        iVar12 = iVar7 + iVar12;
      }
      local_d8 = puVar4 + 0x10;
      puStack_d0 = puVar3 + 0x10;
      local_c8 = 0;
      uStack_b8 = 0;
      local_c0 = puStack_d0;
      uVar10 = FUN_0153f0e0(&local_d8,iVar9,param_1);
      if ((uVar10 & 1) != 0) {
        iVar7 = FUN_01a51240(&local_88,iVar9,&local_d8,&local_b0,0);
        iVar12 = iVar7 + iVar12;
      }
      iVar7 = 8;
      if (iVar9 < 8) {
        iVar7 = iVar9 + 1;
      }
      iVar9 = iVar7;
    } while (iVar7 != 6);
  }
  else {
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    iVar9 = 2;
    do {
      local_c8 = 0;
      uStack_b8 = 0;
      local_d8 = puVar1;
      puStack_d0 = puVar2;
      local_c0 = puVar2;
      uVar10 = FUN_0153ef40(&local_d8,iVar9,param_1);
      if ((uVar10 & 1) != 0) {
        iVar7 = FUN_01a51240(&local_88,iVar9,&local_d8,&local_b0,1);
        iVar12 = iVar7 + iVar12;
      }
      local_d8 = puVar4 + 0x10;
      puStack_d0 = puVar3 + 0x10;
      local_c8 = 0;
      uStack_b8 = 0;
      local_c0 = puStack_d0;
      uVar10 = FUN_0153f0e0(&local_d8,iVar9,param_1);
      if ((uVar10 & 1) != 0) {
        iVar7 = FUN_01a51240(&local_88,iVar9,&local_d8,&local_b0,1);
        iVar12 = iVar7 + iVar12;
      }
      iVar7 = 8;
      if (iVar9 < 8) {
        iVar7 = iVar9 + 1;
      }
      iVar9 = iVar7;
    } while (iVar7 != 6);
  }
  if (((param_4 & 1) != 0) &&
     (uVar10 = FUN_0267c390(param_2), (long)(uVar10 & 0xffffffff) < (long)(iVar12 + param_6))) {
    return 0;
  }
  if ((local_8c[0] == '\0') && (iVar12 < 1)) {
    if (param_3 == (int *)0x0) {
      return 1;
    }
    iVar12 = 0;
  }
  else {
    if ((param_7 != (long *)0x0) &&
       (((param_4 & 1) != 0 && (uVar10 = (**(code **)(*param_7 + 8))(param_7), (uVar10 & 1) != 0))))
    {
      (**(code **)*param_7)(param_7);
    }
    puVar2 = PTR_DAT_04bbc1a0;
    puVar1 = PTR_DAT_04bb2010;
    local_f8 = &local_88;
    pppuStack_e0 = &local_b0;
    local_e8 = local_70;
    local_6c = 5;
    local_d8._0_4_ = 2;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    puVar4 = PTR_DAT_04bb2010 + 0x10;
    iVar9 = (int)local_d8;
    piStack_f0 = param_2;
    do {
      local_c8 = 0;
      uStack_b8 = 0;
      local_d8 = puVar3;
      puStack_d0 = puVar4;
      local_c0 = puVar4;
      uVar10 = FUN_0153ef40(&local_d8,iVar9,param_1);
      if ((uVar10 & 1) != 0) {
        FUN_01523f90(&local_f8,&local_d8,iVar9,param_4 & 1);
      }
      local_d8 = puVar2 + 0x10;
      puStack_d0 = puVar1 + 0x10;
      local_c8 = 0;
      uStack_b8 = 0;
      local_c0 = puStack_d0;
      uVar10 = FUN_0153f0e0(&local_d8,iVar9,param_1);
      if ((uVar10 & 1) != 0) {
        FUN_01523f90(&local_f8,&local_d8,iVar9,param_4 & 1);
      }
      iVar7 = 8;
      if (iVar9 < 8) {
        iVar7 = iVar9 + 1;
      }
      iVar9 = iVar7;
    } while (iVar7 != 6);
    if (param_3 == (int *)0x0) {
      return 1;
    }
  }
  *param_3 = iVar12;
  return 1;
}

