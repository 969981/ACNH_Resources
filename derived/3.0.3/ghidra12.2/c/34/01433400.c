
undefined8 FUN_01433400(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ushort uVar8;
  uint *puVar9;
  long lVar10;
  uint *puVar11;
  undefined *local_50;
  char *local_48;
  uint *local_40;
  uint local_34;
  
  puVar1 = PTR_DAT_04bb6298;
  uVar8 = *(ushort *)PTR_DAT_04bb6298;
  if (uVar8 != 0xffff) {
    local_50._0_4_ = 0x15;
    puVar11 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar8 * 8);
    if (0xff < uVar8) {
      puVar11 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar11 >> 0x15 & 1) != 0) {
      uVar7 = FUN_01433ac8(param_1);
      if ((uVar7 & 1) == 0) {
        return 0;
      }
      uVar8 = *(ushort *)puVar1;
      if (uVar8 == 0xffff) goto LAB_014334d4;
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x1a);
    puVar11 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar8 & 0xffffffffU) * 8);
    if (0xff < uVar8) {
      puVar11 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar11 >> 0x1a & 1) != 0) && (uVar7 = FUN_01433ac8(param_1), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
LAB_014334d4:
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "NpcInteriorCoordinate";
  iVar5 = FUN_02743000(&local_50);
  puVar4 = PTR_DAT_04bb43c0;
  if (iVar5 == 0) goto LAB_014337e4;
  local_40 = (uint *)0x0;
  local_50 = PTR_DAT_04bc0510 + 0x10;
  local_48 = *(char **)(param_1 + 0x2c8);
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_48);
  if (*(long *)puVar4 == 0) {
LAB_014335a8:
    puVar11 = (uint *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_014335a8;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_1 + 0x2c8);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (*(uint *)(lVar10 + 0x1d8) <= uVar6) goto LAB_014335a8;
    puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8);
    if (puVar11 != (uint *)0x0) {
      local_40 = puVar11;
    }
  }
  uVar7 = FUN_01ae6f00(&local_50);
  if ((uVar7 & 1) == 0) goto LAB_014337e4;
  if (puVar11 == (uint *)0x0) goto LAB_014337b4;
  uVar6 = *puVar11;
  local_34 = 0;
  if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
    puVar9 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
    local_34 = 0;
    if (*puVar9 != 0) {
      uVar6 = puVar9[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar10 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar6);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
             (local_34 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2),
             local_34 < 0x52)) goto LAB_01433648;
        }
      }
      local_34 = 0;
    }
  }
LAB_01433648:
  if ((local_34 & 0xfffffffe) == 0x12) goto LAB_014337e4;
  uVar6 = *puVar11;
  local_34 = 0;
  if ((uVar6 != 0) && (puVar11 != (uint *)(ulong)uVar6)) {
    puVar9 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
    local_34 = 0;
    if (*puVar9 != 0) {
      uVar6 = puVar9[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar10 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar6);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
             (local_34 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2),
             local_34 < 0x52)) goto LAB_014336e8;
        }
      }
      local_34 = 0;
    }
  }
LAB_014336e8:
  if (local_34 - 0x1e < 4) goto LAB_014337e4;
  local_34 = 0;
  if (((puVar11 != (uint *)0x0) && (uVar6 = *puVar11, uVar6 != 0)) &&
     (puVar11 != (uint *)(ulong)uVar6)) {
    puVar9 = (uint *)((long)puVar11 - (long)(ulong)uVar6);
    local_34 = 0;
    if (*puVar9 != 0) {
      uVar6 = puVar9[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar10 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar6);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < *(uint *)PTR_DAT_04bc0048) &&
             (local_34 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar2 * 2),
             local_34 < 0x52)) goto LAB_014337b8;
        }
      }
LAB_014337b4:
      local_34 = 0;
    }
  }
LAB_014337b8:
  if (0x3d < local_34 - 0x14) {
    return 0;
  }
  if ((1L << ((ulong)(local_34 - 0x14) & 0x3f) & 0x3002000000000005U) == 0) {
    return 0;
  }
LAB_014337e4:
  uVar7 = FUN_016cf9f0();
  if (((uVar7 & 1) != 0) && (uVar7 = FUN_01433ac8(param_1), (uVar7 & 1) == 0)) {
    return 0;
  }
  sVar3 = *(short *)puVar1;
  if (sVar3 != -1) {
    local_50 = (undefined *)CONCAT44(local_50._4_4_,0x20);
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar1 + 4) & 1) != 0) && (uVar7 = FUN_01433df8(param_1), (uVar7 & 1) == 0)) {
      return 0;
    }
  }
  return 1;
}

