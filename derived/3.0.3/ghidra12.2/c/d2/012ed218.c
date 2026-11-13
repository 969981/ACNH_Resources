
undefined8 FUN_012ed218(undefined8 param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ushort uVar7;
  uint *puVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  undefined *local_120;
  long local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined4 local_ec;
  undefined1 local_e8;
  uint local_e4 [35];
  undefined *local_58;
  uint *local_50;
  uint local_48;
  
  puVar4 = PTR_DAT_04bbc220;
  puVar3 = PTR_DAT_04bb27a8;
  local_e4[0] = *(uint *)(param_2 + 0x10);
  local_58 = PTR_DAT_04bbc220 + 0x10;
  lVar10 = *(long *)PTR_DAT_04bb27a8;
  if ((int)*(uint *)(lVar10 + 0x5d0) < 1) {
    if ((((*(long *)(lVar10 + 0x4c0) == 0) ||
         (puVar11 = *(uint **)(*(long *)(lVar10 + 0x4c0) + 8), puVar11 == (uint *)0x0)) ||
        ((local_e4[0] < *(uint *)(lVar10 + 0x4d8) &&
         (*(char *)(*(long *)(lVar10 + 0x4e0) + (long)(int)local_e4[0]) == '\0')))) ||
       (((*puVar11 <= local_e4[0] || (puVar11[1] == 0)) || ((ushort)puVar11[2] == 0))))
    goto LAB_012ed2f8;
    iVar9 = 0xc;
    if (*(char *)((long)puVar11 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar11 = (uint *)((ulong)(puVar11[1] * local_e4[0] + (uint)(ushort)puVar11[2] * 8 + iVar9) +
                      (long)puVar11);
  }
  else if (local_e4[0] < *(uint *)(lVar10 + 0x5d0)) {
    uVar1 = local_e4[0];
    if (*(uint *)(lVar10 + 0x5c0) <= local_e4[0]) {
      uVar1 = 0;
    }
    puVar11 = *(uint **)(*(long *)(lVar10 + 0x5c8) + (ulong)uVar1 * 8);
  }
  else {
LAB_012ed2f8:
    puVar11 = (uint *)0x0;
  }
  local_50 = puVar11;
  local_48 = local_e4[0];
  FUN_0131a4e4(local_e4);
  uVar5 = FUN_0131aa38(local_e4,*(undefined8 *)(param_2 + 0x18));
  uVar7 = 0;
  if (((puVar11 != (uint *)0x0) && (uVar1 = *puVar11, uVar1 != 0)) &&
     (puVar11 != (uint *)(ulong)uVar1)) {
    puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar1);
    if (((*puVar8 != 0) && (uVar1 = puVar8[1], uVar1 != 0)) && ((ulong)(ushort)puVar8[2] != 0)) {
      lVar10 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar8 + lVar10 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar10 != 0) {
        uVar2 = 0;
        if ((ulong)uVar1 != 0) {
          uVar2 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar1);
        }
        if (*puVar8 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < *(uint *)PTR_DAT_04bbbea0) &&
           (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bbbea0 + 8) + (long)(int)uVar2 * 2), uVar7 < 3))
        goto LAB_012ed3ac;
      }
    }
    uVar7 = 0;
  }
LAB_012ed3ac:
  uVar6 = FUN_012ed620(uVar5,param_2,uVar7);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  local_ec = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 0x500000000;
  uStack_100 = 0;
  uVar5 = FUN_012efe10(&local_58,&local_108);
  if (*(int *)(param_2 + 0x10) - 3U < 2) {
    uVar1 = *(uint *)(param_2 + 0x14);
    lVar10 = *(long *)puVar3;
    local_120 = PTR_DAT_04bbc308 + 0x10;
    if ((int)*(uint *)(lVar10 + 0x7a8) < 1) {
      if (((*(long *)(lVar10 + 0x698) == 0) ||
          (puVar11 = *(uint **)(*(long *)(lVar10 + 0x698) + 8), puVar11 == (uint *)0x0)) ||
         (((uVar1 < *(uint *)(lVar10 + 0x6b0) &&
           (*(char *)(*(long *)(lVar10 + 0x6b8) + (long)(int)uVar1) == '\0')) ||
          (((*puVar11 <= uVar1 || (puVar11[1] == 0)) || ((ushort)puVar11[2] == 0))))))
      goto LAB_012ed4a4;
      iVar9 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      local_118 = (ulong)(puVar11[1] * uVar1 + (uint)(ushort)puVar11[2] * 8 + iVar9) + (long)puVar11
      ;
    }
    else if (uVar1 < *(uint *)(lVar10 + 0x7a8)) {
      if (*(uint *)(lVar10 + 0x798) <= uVar1) {
        uVar1 = 0;
      }
      local_118 = *(long *)(*(long *)(lVar10 + 0x7a0) + (ulong)uVar1 * 8);
    }
    else {
LAB_012ed4a4:
      local_118 = 0;
    }
    uVar5 = FUN_0130dad0(&local_120);
    local_108 = CONCAT44((int)uVar5,(uint)local_108);
  }
  uVar6 = FUN_012ed95c(uVar5,*(undefined8 *)(param_2 + 0x18),&local_108,param_2);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 0x10) == 8) {
    uVar6 = FUN_012edae8(uVar6,param_2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    goto LAB_012ed604;
  }
  uVar6 = FUN_012edd18(uVar6,*(undefined8 *)(param_2 + 0x18));
  if ((uVar6 & 1) == 0) goto LAB_012ed604;
  lVar10 = *(long *)puVar3;
  local_120 = puVar4 + 0x10;
  local_110 = 7;
  local_108._0_4_ = 7;
  if ((int)*(uint *)(lVar10 + 0x5d0) < 1) {
    if (((((*(long *)(lVar10 + 0x4c0) == 0) ||
          (puVar11 = *(uint **)(*(long *)(lVar10 + 0x4c0) + 8), puVar11 == (uint *)0x0)) ||
         ((7 < *(uint *)(lVar10 + 0x4d8) && (*(char *)(*(long *)(lVar10 + 0x4e0) + 7) == '\0')))) ||
        ((*puVar11 < 8 || (puVar11[1] == 0)))) || ((ushort)puVar11[2] == 0)) goto LAB_012ed5c0;
    iVar9 = 0xc;
    if (*(char *)((long)puVar11 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    local_118 = (ulong)(puVar11[1] * 7 + (uint)(ushort)puVar11[2] * 8 + iVar9) + (long)puVar11;
  }
  else if (*(uint *)(lVar10 + 0x5d0) < 8) {
LAB_012ed5c0:
    local_118 = 0;
  }
  else {
    if (*(uint *)(lVar10 + 0x5c0) < 8) {
      local_108._0_4_ = 0;
    }
    local_118 = *(long *)(*(long *)(lVar10 + 0x5c8) + (ulong)(uint)local_108 * 8);
  }
  local_ec = 0;
  local_e8 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_108 = 0x500000000;
  uStack_100 = 0;
  uVar5 = FUN_012efe10(&local_120,&local_108);
  uVar6 = FUN_012ed95c(uVar5,*(undefined8 *)(param_2 + 0x18),&local_108,param_2);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
LAB_012ed604:
  FUN_0131c020(*(undefined8 *)(param_2 + 0x18),local_e4);
  return 1;
}

