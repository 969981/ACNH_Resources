
int FUN_01478db0(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined **local_c0;
  undefined **local_b8;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  local_70 = 0;
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
      iVar5 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  local_6c = *(undefined4 *)(puVar11 + 7);
  local_68 = FUN_017baf44();
  puVar9 = PTR_DAT_04bb43c0;
  puVar4 = PTR_DAT_04bb2010;
  local_68 = local_68 & 1;
  local_80 = 0;
  local_78 = PTR_DAT_04bb3140 + 0x10;
  local_a0 = PTR_DAT_04bbc1a0 + 0x10;
  local_58 = 0;
  puStack_98 = PTR_DAT_04bb2010 + 0x10;
  local_90 = 0;
  local_c0 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  local_b8 = *(undefined ***)(param_1 + 0x288);
  local_b0 = (undefined *)0x0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  puStack_88 = puStack_98;
  uVar6 = FUN_0277d6c4(&local_b8);
  if (*(long *)puVar9 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar8 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_1 + 0x288);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (uVar6 < *(uint *)(lVar8 + 0x1d8)) {
        puVar9 = *(undefined **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8);
        if (puVar9 != (undefined *)0x0) {
          local_b0 = puVar9;
        }
      }
    }
  }
  FUN_01afb1a0(&local_c0,auStack_60);
  iVar2 = *(int *)(param_1 + 0x2d0);
  iVar10 = (int)local_58;
  iVar5 = local_58._4_4_;
  if (3 < iVar2 - 2U) {
    iVar5 = (int)local_58;
    iVar10 = local_58._4_4_;
    if ((*(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e & 0x80000001) != 1) {
      iVar5 = local_58._4_4_;
      iVar10 = (int)local_58;
    }
  }
  iVar3 = *(int *)(param_1 + 0x2c8);
  local_a4 = *(int *)(param_1 + 0x2cc);
  local_90 = *(undefined8 *)(param_1 + 0x2c8);
  iVar1 = iVar5 + local_a4;
  local_80 = CONCAT44(iVar1 + -1,iVar10 + iVar3 + -1);
  local_b0 = puVar4 + 0x10;
  if (iVar5 != 0) {
    local_c0 = &puStack_98;
    local_b8 = &puStack_88;
    local_a8 = iVar3;
    do {
      piVar7 = (int *)FUN_014fbd50(&local_78,iVar2 + -1,&local_b0);
      if (*piVar7 != 0) {
        return *piVar7;
      }
      if (local_a8 < *(int *)(local_b8 + 1)) {
        local_a8 = local_a8 + 1;
      }
      else {
        local_a4 = local_a4 + 1;
        local_a8 = *(int *)(local_c0 + 1);
      }
    } while (iVar3 != local_a8 || iVar1 != local_a4);
  }
  return *(int *)PTR_DAT_04bb3238;
}

