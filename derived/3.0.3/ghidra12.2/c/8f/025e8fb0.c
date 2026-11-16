
/* WARNING: Removing unreachable block (ram,0x025e9434) */

void FUN_025e8fb0(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  undefined8 uVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  ushort uVar12;
  long lVar13;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *local_58;
  uint *local_50;
  undefined8 local_48;
  
  local_48 = 0x5c0000005b;
  FUN_02602950(param_1,*(undefined4 *)((long)&local_48 + (long)*(int *)(param_1 + 0x28) * 4));
  FUN_02603510(param_1,*param_2);
  FUN_026035e0(param_1,*param_2);
  puVar2 = PTR_DAT_04bb2020;
  if ((*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 1) &&
     (*(byte *)(*(long *)PTR_DAT_04bb39b0 + 0x160) - 1 < 0xfe)) {
    uVar8 = 1;
  }
  else if ((*(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10) < 2) ||
          (lVar13 = **(long **)PTR_DAT_04bb27d0, *(byte *)(lVar13 + 0x476) < 2)) {
LAB_025e9098:
    uVar8 = 0;
  }
  else if (*(int *)(lVar13 + 0x508) == 0 || *(char *)(lVar13 + 0x55d) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0) goto LAB_025e9098;
    uVar8 = 3;
    if (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0) {
      uVar8 = 0;
    }
  }
  else {
    uVar8 = 2;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_58 = "MultiPlayStatus";
  if (*(long *)(param_1 + 8) != 0) {
    local_60 = puVar1;
    FUN_02605660(*(long *)(param_1 + 8),&local_60,uVar8);
  }
  local_58 = "ItemUniqueId";
  local_60 = puVar1;
  uVar3 = FUN_0277d6c4(param_2 + 1);
  if (*(long *)(param_1 + 8) != 0) {
    FUN_02605660(*(long *)(param_1 + 8),&local_60,uVar3);
  }
  puVar1 = PTR_DAT_04bb43c0;
  local_50 = (uint *)0x0;
  local_60 = PTR_DAT_04bc0510 + 0x10;
  local_58 = *(char **)(param_2 + 1);
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar1 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2 + 1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if (uVar4 < *(uint *)(lVar13 + 0x1d8)) {
        puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8);
        if (puVar10 != (uint *)0x0) {
          local_50 = puVar10;
        }
      }
    }
  }
  iVar5 = FUN_01ad7260(&local_60);
  if (iVar5 == 0) {
    lVar13 = *(long *)(param_1 + 8);
    local_70 = puVar2 + 0x10;
    pcStack_68 = "ItemRemakeBodyId";
    if (lVar13 != 0) {
      uVar11 = 0xffffffffffffffff;
      goto LAB_025e9224;
    }
  }
  else {
    local_70 = puVar2 + 0x10;
    pcStack_68 = "ItemRemakeBodyId";
    iVar5 = FUN_01ad7260(&local_60);
    if ((iVar5 == 0) || (puVar7 = (ushort *)FUN_01afd600(&local_60), puVar7 == (ushort *)0x0)) {
      uVar11 = 0;
      lVar13 = *(long *)(param_1 + 8);
    }
    else {
      uVar4 = *puVar7 & 7;
      uVar6 = FUN_01ad7260(&local_60);
      if (uVar6 <= uVar4) {
        uVar4 = 0;
      }
      uVar11 = (ulong)uVar4;
      lVar13 = *(long *)(param_1 + 8);
    }
    if (lVar13 != 0) {
LAB_025e9224:
      FUN_026054d0(lVar13,&local_70,uVar11);
    }
  }
  iVar5 = FUN_01afcfa0(&local_60);
  if ((iVar5 == 0) ||
     ((((iVar5 = FUN_01afcfa0(&local_60), iVar5 != 0 &&
        (puVar7 = (ushort *)FUN_01afd600(&local_60), puVar7 != (ushort *)0x0)) &&
       (uVar12 = *puVar7 >> 3 & 3, uVar12 != 3)) && (uVar12 != 0)))) {
    lVar13 = *(long *)(param_1 + 8);
    local_70 = puVar2 + 0x10;
    pcStack_68 = "ItemRemakeFabricId";
    if (lVar13 != 0) {
      lVar9 = -1;
      goto LAB_025e92ac;
    }
  }
  else {
    local_70 = puVar2 + 0x10;
    pcStack_68 = "ItemRemakeFabricId";
    iVar5 = FUN_01ae3a80(&local_60);
    lVar13 = *(long *)(param_1 + 8);
    if (lVar13 != 0) {
      lVar9 = (long)iVar5;
LAB_025e92ac:
      FUN_026054d0(lVar13,&local_70,lVar9);
    }
  }
  if (local_50 != (uint *)0x0) {
    uVar4 = *local_50;
    uVar12 = 0;
    if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)local_50 - (long)(ulong)uVar4);
      uVar12 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar10 + lVar13 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar13 != 0) {
            uVar6 = 0;
            if ((ulong)uVar4 != 0) {
              uVar6 = (uint)((ulong)((long)local_50 - lVar13) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < *(uint *)PTR_DAT_04bc0020) &&
               (uVar12 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar6 * 2),
               uVar12 < 0x5b6)) goto LAB_025e934c;
          }
        }
        uVar12 = 0;
      }
    }
LAB_025e934c:
    if (uVar12 != 0) {
      uVar6 = 0;
      uVar4 = *local_50;
      if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
        puVar10 = (uint *)((long)local_50 - (long)(ulong)uVar4);
        uVar6 = 0;
        if (*puVar10 != 0) {
          uVar4 = puVar10[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar10 + lVar13 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar13 != 0) {
              uVar6 = 0;
              if ((ulong)uVar4 != 0) {
                uVar6 = (uint)((ulong)((long)local_50 - lVar13) / (ulong)uVar4);
              }
              if (*puVar10 <= uVar6) {
                uVar6 = 0xffffffff;
              }
              if ((uVar6 < *(uint *)PTR_DAT_04bc0020) &&
                 (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar6 * 2),
                 uVar6 < 0x5b6)) goto LAB_025e9448;
            }
          }
          uVar6 = 0;
        }
      }
LAB_025e9448:
      lVar9 = (long)(int)uVar6;
      lVar13 = *(long *)(param_1 + 8);
      if (lVar13 == 0) {
        return;
      }
      goto LAB_025e9458;
    }
  }
  lVar13 = *(long *)(param_1 + 8);
  if (lVar13 == 0) {
    return;
  }
  lVar9 = -1;
LAB_025e9458:
  pcStack_68 = "ItemClothGroupId";
  local_70 = puVar2 + 0x10;
  FUN_026054d0(lVar13,&local_70,lVar9);
  return;
}

