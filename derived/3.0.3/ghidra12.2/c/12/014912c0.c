
ulong FUN_014912c0(undefined8 param_1,int *param_2,long *param_3,long param_4,int *param_5,
                  undefined4 *param_6)

{
  undefined *puVar1;
  uint *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  undefined8 local_f0;
  undefined *local_e8;
  long local_e0;
  undefined4 local_d8;
  int iStack_d4;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined1 local_bc;
  byte local_bb;
  undefined1 local_ba;
  undefined4 local_b4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  long local_a0;
  int local_98;
  undefined4 local_94;
  undefined *local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  
  local_98 = *(int *)PTR_DAT_04bb37e0;
  local_94 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_90 = PTR_DAT_04bb2010 + 0x10;
  local_88 = 0;
  local_70 = *PTR_DAT_04bb32e0;
  local_80 = 0;
  uStack_78 = 0;
  if (7 < local_70) {
    local_70 = 0xff;
  }
  uVar11 = FUN_0277e294(param_3);
  puVar5 = PTR_DAT_04bc0510;
  puVar4 = PTR_DAT_04bb43c0;
  if ((uVar11 & 1) == 0) {
    *param_2 = 0;
LAB_014914c8:
    uVar11 = (ulong)*(uint *)PTR_DAT_04bb3238;
  }
  else {
    local_a8 = (undefined4)*param_3;
    uStack_a4 = *(undefined4 *)((long)param_3 + 4);
    local_a0 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    lVar14 = *(long *)PTR_DAT_04bb43c0;
    local_b0 = puVar1;
    uVar7 = FUN_0277d6c4(&local_a8);
    if (*(long *)puVar4 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(param_3);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (uVar7 < *(uint *)(lVar14 + 0x1d8)) {
          lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8);
          if (lVar14 != 0) {
            local_a0 = lVar14;
          }
        }
      }
    }
    uVar8 = FUN_01ae98d0(&local_b0);
    local_e8 = (undefined *)*param_3;
    lVar14 = *(long *)puVar4;
    local_e0 = 0;
    local_f0 = puVar1;
    local_b4 = uVar8;
    uVar7 = FUN_0277d6c4(&local_e8);
    if (*(long *)puVar4 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(param_3);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (uVar7 < *(uint *)(lVar14 + 0x1d8)) {
          lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8);
          if (lVar14 != 0) {
            local_e0 = lVar14;
          }
        }
      }
    }
    local_68 = FUN_01afb8e8(&local_f0);
    if (local_68 == 1) {
      local_68 = FUN_01ae98d0(&local_f0);
      iVar10 = local_68 + 2;
      if (2 < local_68 - 1U) {
        iVar10 = 2;
      }
    }
    else if (local_68 == 3) {
      iVar10 = 6;
    }
    else if (local_68 == 2) {
      iVar10 = 7;
    }
    else {
      iVar10 = 0;
    }
    local_e8 = (undefined *)*param_3;
    lVar14 = *(long *)puVar4;
    local_f0 = puVar5 + 0x10;
    local_e0 = 0;
    uVar7 = FUN_0277d6c4(&local_e8);
    if (*(long *)puVar4 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar7 = FUN_0277d6c4(param_3);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (uVar7 < *(uint *)(lVar14 + 0x1d8)) {
          lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8);
          if (lVar14 != 0) {
            local_e0 = lVar14;
          }
        }
      }
    }
    FUN_01afbaa4(&local_68,param_3,&local_b4);
    iVar6 = local_68;
    local_80 = CONCAT44(local_80._4_4_,uVar8);
    lVar14 = *(long *)(param_4 + 8);
    local_88 = *(long *)(param_4 + 8);
    local_98 = local_68;
    local_94 = local_64;
    uVar9 = FUN_01afb8e8(&local_f0);
    local_80 = CONCAT44(uVar9,(undefined4)local_80);
    uStack_78 = CONCAT44(iVar10,*param_5);
    local_6c = *param_6;
    if (*param_5 != 3) {
      local_c0 = 0;
      local_e8 = PTR_DAT_04bb2010 + 0x10;
      uStack_c8 = 0;
      local_ba = 0;
      local_f0 = (undefined *)CONCAT44(local_64,iVar6);
      local_bc = 0;
      lVar13 = *(long *)PTR_DAT_04bb39b0;
      pbVar12 = PTR_DAT_04bb32e0;
      if (lVar13 == 0) {
        if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_014916c0;
LAB_01491720:
        local_bb = *pbVar12;
        if (7 < local_bb) {
          local_bb = 0xff;
        }
      }
      else {
        if (*(int *)(lVar13 + 0x15c) != 0) {
          pbVar12 = (byte *)(lVar13 + 0x158);
        }
        if ((*pbVar12 < 8) ||
           (((*(int *)(lVar13 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
            (pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar12 < 8))))
        goto LAB_01491720;
LAB_014916c0:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01491718:
          pbVar12 = PTR_DAT_04bb5038;
          goto LAB_01491720;
        }
        lVar13 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar13 + 0x473);
        pbVar12 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar12 = (byte *)(lVar13 + 0x471);
          }
        }
        local_bb = *pbVar12;
        if (7 < local_bb) goto LAB_01491718;
      }
      if (7 < local_bb) {
        local_bb = 0xff;
      }
      local_e0 = lVar14;
      local_d8 = uVar8;
      iStack_d4 = iVar10;
      local_d0 = local_e8;
      iVar10 = FUN_0148e51c(&local_98,&local_f0);
      *param_2 = iVar10;
      if (*param_2 != 9) goto LAB_014914c8;
    }
    uVar11 = FUN_01491790(param_1,param_2,&local_98);
  }
  return uVar11;
}

