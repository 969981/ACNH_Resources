
bool FUN_017f90e0(long param_1,int param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  long lVar14;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  long local_58;
  undefined8 local_38;
  
  puVar6 = PTR_DAT_04bc0510;
  puVar5 = PTR_DAT_04bb43c0;
  puVar4 = PTR_DAT_04bb3170;
  if (*(short *)(param_1 + 0xd8) == *(short *)PTR_DAT_04bb3170 && *(int *)(param_1 + 0x1f0) == -1) {
    sVar3 = *(short *)(param_1 + 0xd0);
    if (sVar3 == -2) {
      local_38 = 0x134b;
      FUN_0277d4ac(&local_38);
      lVar14 = *(long *)puVar5;
      local_68 = puVar6 + 0x10;
      local_58 = 0;
      local_60 = (undefined4)local_38;
      local_5c = local_38._4_4_;
      uVar9 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar5 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(&local_38);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if (uVar9 < *(uint *)(lVar14 + 0x1d8)) {
            lVar14 = *(long *)(lVar14 + 0x1e0);
            goto LAB_017f9290;
          }
        }
      }
    }
    else {
      local_5c = *(undefined4 *)(param_1 + 0xd4);
      local_68 = PTR_DAT_04bc0510 + 0x10;
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      local_58 = 0;
      local_60 = CONCAT22(*(undefined2 *)(param_1 + 0xd2),sVar3);
      uVar9 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar5 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4((short *)(param_1 + 0xd0));
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if (uVar9 < *(uint *)(lVar14 + 0x1d8)) {
            lVar14 = *(long *)(lVar14 + 0x1e0);
LAB_017f9290:
            lVar14 = *(long *)(lVar14 + (long)(int)uVar9 * 8);
            if (lVar14 != 0) {
              local_58 = lVar14;
            }
          }
        }
      }
    }
    uVar8 = FUN_01b01f10(&local_68);
  }
  else {
    uVar8 = 0x13e;
  }
  puVar5 = PTR_DAT_04bb43c0;
  if (*(short *)(param_1 + 0xfc) == *(short *)puVar4 && *(int *)(param_1 + 0x1fc) == -1) {
    sVar3 = *(short *)(param_1 + 0xf4);
    if (sVar3 == -2) {
      local_38 = 0x134b;
      FUN_0277d4ac(&local_38);
      puVar4 = PTR_DAT_04bb43c0;
      local_58 = 0;
      local_68 = PTR_DAT_04bc0510 + 0x10;
      local_60 = (undefined4)local_38;
      local_5c = local_38._4_4_;
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      uVar9 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar4 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(&local_38);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if (uVar9 < *(uint *)(lVar14 + 0x1d8)) {
            lVar14 = *(long *)(lVar14 + 0x1e0);
            goto LAB_017f9434;
          }
        }
      }
    }
    else {
      local_58 = 0;
      local_60 = CONCAT22(*(undefined2 *)(param_1 + 0xf6),sVar3);
      local_5c = *(undefined4 *)(param_1 + 0xf8);
      local_68 = PTR_DAT_04bc0510 + 0x10;
      lVar14 = *(long *)PTR_DAT_04bb43c0;
      uVar9 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar5 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar14 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4((short *)(param_1 + 0xf4));
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if (uVar9 < *(uint *)(lVar14 + 0x1d8)) {
            lVar14 = *(long *)(lVar14 + 0x1e0);
LAB_017f9434:
            lVar14 = *(long *)(lVar14 + (long)(int)uVar9 * 8);
            if (lVar14 != 0) {
              local_58 = lVar14;
            }
          }
        }
      }
    }
    uVar10 = FUN_01b01f10(&local_68);
  }
  else {
    uVar10 = 0x13e;
  }
  iVar11 = *(int *)(param_1 + 0xa8);
  if (iVar11 == 1) {
    return false;
  }
  if (1 < iVar11) {
    local_38 = CONCAT44(local_38._4_4_,iVar11);
    if (iVar11 < 6) goto LAB_017f94b8;
  }
  if (5 < iVar11) {
    local_38 = CONCAT44(local_38._4_4_,iVar11);
    if (iVar11 < 0x11) goto LAB_017f94b8;
  }
  if (0x10 < iVar11) {
    local_38 = CONCAT44(local_38._4_4_,iVar11);
  }
LAB_017f94b8:
  local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar11);
  iVar2 = *(int *)(param_3 + 8);
  iVar11 = iVar2;
  if (iVar2 < 0) {
    iVar11 = iVar2 + 1;
  }
  if (iVar2 - 0x14U < 0xffffffeb) {
    return false;
  }
  if (param_2 == 0) {
    piVar12 = (int *)(param_1 + 0x58);
  }
  else if (param_2 == 3) {
    piVar12 = (int *)(param_1 + 0x30);
  }
  else if (param_2 == 2) {
    piVar12 = (int *)(param_1 + 8);
  }
  else {
    piVar12 = (int *)(param_1 + 0x80);
  }
  piVar1 = piVar12 + (uint)(iVar11 >> 1);
  if (9 < (uint)(iVar11 >> 1)) {
    piVar1 = piVar12;
  }
  iVar11 = *piVar1;
  if (iVar11 - 2U < 2) {
    uVar13 = uVar8;
    if ((*(char *)(param_1 + 0xfe) != '\0') &&
       (uVar13 = uVar10, param_2 != *(int *)(param_1 + 0x100))) {
      uVar13 = uVar8;
    }
    bVar7 = true;
    iVar11 = FUN_017c1ba0(*(undefined8 *)PTR_DAT_04bb46d0,uVar13,1);
    if (*(long *)PTR_DAT_04bb5ce0 != 0) {
      bVar7 = (*(ushort *)(*(long *)PTR_DAT_04bb5ce0 + 0xf6c) & 2) == 0;
    }
    if (!bVar7) {
      return true;
    }
    if (iVar11 == 0) {
      return true;
    }
  }
  else {
    if (iVar11 == 1) {
      return true;
    }
    if (iVar11 != 4) {
      return false;
    }
  }
  return (*(uint *)(param_3 + 0xc) & 0xfffffffc) == 4;
}

