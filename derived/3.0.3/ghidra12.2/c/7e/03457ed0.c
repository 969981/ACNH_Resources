
ulong FUN_03457ed0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  byte *pbVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  int local_44;
  uint local_28;
  int local_24;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  local_44 = param_2;
  uVar4 = FUN_0277d6c4();
  lVar9 = *(long *)puVar2;
  if (lVar9 == 0) {
    return 0;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0 || param_2 == 0) {
    return 0;
  }
  local_50 = (uint *)0x0;
  local_58 = *param_1;
  uStack_54 = param_1[1];
  local_60 = PTR_DAT_04bc0510 + 0x10;
  uVar4 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if (uVar4 < *(uint *)(lVar9 + 0x1d8)) {
        puVar6 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
        if (puVar6 != (uint *)0x0) {
          local_50 = puVar6;
        }
      }
    }
  }
  local_70 = (undefined *)CONCAT44(local_70._4_4_,0xe);
  local_24 = FUN_01ae7550(&local_60);
  if (local_24 == (uint)local_70) {
    lVar9 = *(long *)PTR_DAT_04bb39b0;
    pbVar7 = PTR_DAT_04bb32e0;
    if (lVar9 == 0) {
LAB_03458080:
      if (*pbVar7 < 8) goto LAB_034580f8;
LAB_0345808c:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_034580f0:
        pbVar7 = PTR_DAT_04bb5038;
        goto LAB_034580f8;
      }
      lVar9 = **(long **)PTR_DAT_04bb27d0;
      bVar8 = *(byte *)(lVar9 + 0x473);
      pbVar7 = PTR_DAT_04bb5038;
      if ((long)(char)bVar8 != 0xffffffffffffffff) {
        puVar6 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
        if (7 < bVar8) {
          puVar6 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar6 & 8) != 0) {
          pbVar7 = (byte *)(lVar9 + 0x471);
        }
      }
      bVar8 = *pbVar7;
      bVar3 = 7 < bVar8;
      if (bVar3) {
        bVar8 = 0xff;
      }
      local_24._1_3_ = (undefined3)((uint)local_24 >> 8);
      local_24 = CONCAT31(local_24._1_3_,bVar8);
      if (bVar3) goto LAB_034580f0;
    }
    else {
      if (*(int *)(lVar9 + 0x15c) != 0) {
        pbVar7 = (byte *)(lVar9 + 0x158);
      }
      if (7 < *pbVar7) {
        if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_03458080;
        }
        goto LAB_0345808c;
      }
LAB_034580f8:
      bVar8 = *pbVar7;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      local_24 = CONCAT31(local_24._1_3_,bVar8);
    }
    local_70 = PTR_DAT_04bb2020 + 0x10;
    pcStack_68 = "UnlockInterior_CeilingFurniture";
    uVar5 = FUN_0274bce0(&local_24,&local_70);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  if (local_50 == (uint *)0x0) {
    uVar4 = 0xbc;
  }
  else {
    uVar1 = *local_50;
    uVar4 = 0;
    if ((uVar1 != 0) && (local_50 != (uint *)(ulong)uVar1)) {
      puVar6 = (uint *)((long)local_50 - (long)(ulong)uVar1);
      uVar4 = 0;
      if (*puVar6 != 0) {
        uVar4 = puVar6[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar6 + lVar9 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)local_50 - lVar9) / (ulong)uVar4);
            }
            if (*puVar6 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar4 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar4 < 0xbd)) goto LAB_034581d0;
          }
        }
        uVar4 = 0;
      }
    }
  }
LAB_034581d0:
  if (uVar4 - 4 < 2) {
    return 0;
  }
  if (uVar4 == 0x76) {
    return 0;
  }
  local_28 = 0;
  local_70._0_4_ = uVar4;
  uVar5 = FUN_01b045f0(&local_60);
  if (((uVar5 & 1) != 0) || (uVar5 = FUN_01ae59b0(&local_60), (uVar5 & 1) != 0)) {
    local_70._0_4_ = 10;
    local_24 = FUN_01ae7550(&local_60);
    if (local_24 != (uint)local_70) {
      local_70._0_4_ = 0xb;
      local_24 = FUN_01ae7550(&local_60);
      if (local_24 != (uint)local_70) {
        local_70._0_4_ = 0xc;
        local_24 = FUN_01ae7550(&local_60);
        if ((local_24 != (uint)local_70) && (uVar5 = FUN_01ae7a70(&local_60), (uVar5 & 1) == 0)) {
          local_28 = 1;
        }
      }
    }
    uVar5 = FUN_01ae7a70(&local_60);
    if (((uVar5 & 1) != 0) && (param_2 == 3)) {
      local_28 = 1;
    }
  }
  local_70._0_4_ = 0xe;
  local_24 = FUN_01ae7550(&local_60);
  if (local_24 == (uint)local_70) {
    local_28 = 3;
  }
  local_70._0_4_ = 10;
  local_24 = FUN_01ae7550(&local_60);
  if (local_24 != (uint)local_70) {
    local_70._0_4_ = 0xb;
    local_24 = FUN_01ae7550(&local_60);
    if (local_24 != (uint)local_70) {
      local_70._0_4_ = 0xc;
      local_24 = FUN_01ae7550(&local_60);
      if (local_24 != (uint)local_70) goto LAB_03458350;
    }
  }
  uVar5 = FUN_01ae7a70(&local_60);
  if ((uVar5 & 1) == 0) {
    local_28 = 2;
  }
LAB_03458350:
  if (local_44 == 1) {
    if (local_28 != 1) {
      return (ulong)local_28;
    }
  }
  else if (local_44 == 3) {
    if (local_28 != 3) {
      return (ulong)local_28;
    }
  }
  else if (local_28 != 2) {
    return (ulong)local_28;
  }
  return 0;
}

