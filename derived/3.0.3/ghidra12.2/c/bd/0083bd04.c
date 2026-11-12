
ulong FUN_0083bd04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  byte *pbVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  byte *pbVar14;
  byte bVar15;
  uint uVar16;
  byte bVar17;
  undefined *local_40;
  undefined8 uStack_38;
  byte local_14 [4];
  
  puVar3 = PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  puVar1 = PTR_DAT_04bb27d0;
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  if (*(int *)(lVar13 + 0x15c) != 0) {
    return 0;
  }
  lVar9 = **(long **)PTR_DAT_04bb27d0;
  if (1 < *(byte *)(lVar9 + 0x476)) {
    return 0;
  }
  pbVar10 = PTR_DAT_04bb32e0;
  if (*(int *)(lVar13 + 0x15c) != 0) {
    pbVar10 = (byte *)(lVar13 + 0x158);
  }
  local_14[0] = *pbVar10;
  if ((local_14[0] < 8) ||
     (((*(int *)(lVar13 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
      (local_14[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), local_14[0] < 8)))) {
LAB_0083be08:
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
  }
  else {
    bVar15 = *(byte *)(lVar9 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar15 != 0xffffffffffffffff) {
      puVar8 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
      if (7 < bVar15) {
        puVar8 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar8 & 8) != 0) {
        pbVar10 = (byte *)(lVar9 + 0x471);
      }
    }
    local_14[0] = *pbVar10;
    if (7 < local_14[0]) {
      local_14[0] = *PTR_DAT_04bb5038;
      goto LAB_0083be08;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  uStack_38 = "ValidatePlayerSaveFlag";
  uVar7 = FUN_0274bce0(local_14,&local_40);
  puVar2 = PTR_DAT_04bb32e8;
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  plVar11 = *(long **)puVar1;
  if (((plVar11 != (long *)0x0) && (plVar11[5] != 0)) && ((int)plVar11[0x10] == 1)) {
    return 0;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
    if (*(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 5 < 0xd) {
      FUN_038e7ea0(&local_40);
      local_40._0_4_ = (uint)local_40 ^ (uint)local_40 << 0xb;
      uVar6 = (int)((ulong)((uint)local_40 >> 8 ^ uStack_38._4_4_ >> 0x13 ^
                           (uint)local_40 ^ uStack_38._4_4_) * 6 >> 0x20) + 5;
    }
    else {
      FUN_038e7ea0(&local_40);
      uVar6 = (uStack_38._4_4_ ^ (uint)local_40 << 0xb ^ (uint)local_40) >> 0x1f | 2;
    }
    uVar16 = uVar6;
    if (2 < uVar6) {
      uVar16 = 3;
    }
    if (0xc < *(byte *)(*(long *)puVar2 + 0x4064) - 5) {
      uVar6 = uVar16;
    }
    return (ulong)uVar6;
  }
  lVar13 = *(long *)puVar3;
  if (lVar13 == 0) {
    bVar4 = 7 < *pbVar14;
    if (bVar4) {
      pbVar14 = PTR_DAT_04bb5038;
    }
    if (plVar11 == (long *)0x0) goto LAB_0083bfec;
LAB_0083bf8c:
    if (!bVar4) goto LAB_0083bfec;
LAB_0083bf98:
    lVar13 = *plVar11;
    bVar15 = *(byte *)(lVar13 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar15 != 0xffffffffffffffff) {
      puVar8 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
      if (7 < bVar15) {
        puVar8 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar8 & 8) != 0) {
        pbVar14 = (byte *)(lVar13 + 0x471);
      }
    }
    bVar17 = *pbVar14;
    if (7 < bVar17) goto LAB_0083bfe4;
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar13 + 0x15c) == 0) || (*(long *)PTR_DAT_04bb4718 == 0)) {
        if (plVar11 != (long *)0x0) goto LAB_0083bf98;
LAB_0083bfe4:
        pbVar14 = PTR_DAT_04bb5038;
      }
      else {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        bVar4 = 7 < *pbVar14;
        if (bVar4) {
          pbVar14 = PTR_DAT_04bb5038;
        }
        if (plVar11 != (long *)0x0) goto LAB_0083bf8c;
      }
    }
LAB_0083bfec:
    bVar17 = *pbVar14;
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    lVar13 = *plVar11;
    bVar15 = *(byte *)(lVar13 + 0x473);
  }
  if (bVar15 == 0xff) {
LAB_0083c038:
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    local_40 = (undefined *)CONCAT71(local_40._1_7_,bVar17);
    iVar5 = FUN_02582fe0(&local_40);
    if ((iVar5 != -1) && (lVar13 = *(long *)PTR_DAT_04bb46b0, lVar13 != 0)) {
      puVar12 = *(undefined8 **)(lVar13 + 0x10);
      if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
        lVar13 = (**(code **)(*(long *)*puVar12 + 0x38))();
        if (lVar13 != 0) {
          lVar13 = lVar13 + 0x70;
          goto LAB_0083c0b0;
        }
      }
      else if (((puVar12 != (undefined8 *)0x0) && ((long *)puVar12[0x26] != (long *)0x0)) &&
              (lVar13 = (**(code **)(*(long *)puVar12[0x26] + 0x38))(), lVar13 != 0)) {
LAB_0083c0b0:
        if ((*(long **)(lVar13 + 0x1c27c0) == (long *)0x0) ||
           (puVar12 = (undefined8 *)**(long **)(lVar13 + 0x1c27c0), puVar12 == (undefined8 *)0x0)) {
          uVar6 = 1;
        }
        else {
          uVar6 = (**(code **)*puVar12)();
          uVar6 = uVar6 ^ 1;
        }
        iVar5 = FUN_026d52f0(*(long *)(lVar13 + 0x1c27a8) + *(long *)(lVar13 + 0x1c27a0),iVar5);
        if ((((uVar6 & 1) == 0) && (*(long *)(lVar13 + 0x1c27c0) != 0)) &&
           (puVar12 = *(undefined8 **)(*(long *)(lVar13 + 0x1c27c0) + 8),
           puVar12 != (undefined8 *)0x0)) {
          (**(code **)*puVar12)();
        }
        if (0x1d < iVar5) {
          iVar5 = 0x1e;
        }
        goto LAB_0083c0e0;
      }
    }
  }
  else {
    pbVar14 = (byte *)(lVar13 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x80;
    if (7 < bVar15) {
      pbVar14 = (byte *)(lVar13 + 0x48);
    }
    if (((*pbVar14 >> 3 & 1) == 0) || (bVar15 == *(byte *)(lVar13 + 0x472))) goto LAB_0083c038;
  }
  iVar5 = 0;
LAB_0083c0e0:
  puVar1 = PTR_DAT_04bb32e8;
  bVar15 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  lVar13 = FUN_00834d74(0x88);
  if (bVar15 - 5 < 0xd) {
    plVar11 = (long *)(lVar13 + 0x6c0);
  }
  else {
    plVar11 = (long *)(lVar13 + 0x1b48);
  }
  puVar8 = (uint *)(**(code **)(**(long **)(*plVar11 + (long)iVar5 * 8) + 0xf0))();
  uVar6 = *puVar8;
  if (*(byte *)(*(long *)puVar1 + 0x4064) - 5 < 0xd) {
    bVar4 = SBORROW4(uVar6,4);
    iVar5 = uVar6 - 4;
    uVar16 = 4;
  }
  else {
    bVar4 = SBORROW4(uVar6,3);
    iVar5 = uVar6 - 3;
    uVar16 = 3;
  }
  if (iVar5 < 0 == bVar4) {
    uVar6 = uVar16;
  }
  return (ulong)uVar6;
}

