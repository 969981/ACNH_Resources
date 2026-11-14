
undefined8 FUN_01af28ac(long param_1,uint *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ushort *puVar7;
  long lVar8;
  uint *puVar9;
  ushort uVar10;
  uint *puVar11;
  long lVar12;
  undefined **local_70;
  uint local_68;
  uint uStack_64;
  long local_60;
  undefined **local_58;
  uint local_50;
  uint uStack_4c;
  long local_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  local_58 = &PTR_FUN_04a36b50;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(&local_50);
  lVar8 = DAT_0532a768;
  if (*(long *)puVar1 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      uVar2 = FUN_0277d6c4(param_2);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (uVar2 < *(uint *)(lVar8 + 0x1d8)) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8);
        if (lVar8 != 0) {
          local_48 = lVar8;
        }
      }
    }
  }
  uVar6 = FUN_01af0020(param_1);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  uVar6 = FUN_01af0020(&local_58);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  uVar6 = FUN_01b032d0(param_1);
  if ((((uVar6 & 1) != 0) && (uVar6 = FUN_01b032d0(param_1), (uVar6 & 1) != 0)) &&
     ((*(byte *)(param_1 + 0xb) & 3) != 0)) {
    return 0;
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  local_70 = &PTR_FUN_04a36b50;
  lVar12 = *(long *)puVar1;
  local_60 = 0;
  uVar2 = FUN_0277d6c4(&local_68);
  lVar8 = DAT_0532a768;
  if (*(long *)puVar1 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      uVar2 = FUN_0277d6c4(param_2);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if (uVar2 < *(uint *)(lVar8 + 0x1d8)) {
        lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar2 * 8);
        if (lVar8 != 0) {
          local_60 = lVar8;
        }
      }
    }
  }
  uVar6 = FUN_01b032d0(&local_70);
  if ((((uVar6 & 1) != 0) && (uVar6 = FUN_01b032d0(&local_70), (uVar6 & 1) != 0)) &&
     ((local_68 & 0x3000000) != 0)) {
    return 0;
  }
  uVar6 = FUN_0277d7b4(param_1 + 8,param_2);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  local_70 = (undefined **)CONCAT44(local_70._4_4_,0x78);
  puVar9 = *(uint **)(param_1 + 0x10);
  if (puVar9 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar2 = *puVar9;
    uVar10 = 0;
    if ((uVar2 != 0) && (puVar9 != (uint *)(ulong)uVar2)) {
      puVar11 = (uint *)((long)puVar9 - (long)(ulong)uVar2);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar2 = puVar11[1];
        if ((uVar2 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar11 + lVar8 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar8 != 0) {
            uVar4 = 0;
            if ((ulong)uVar2 != 0) {
              uVar4 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar2);
            }
            if (*puVar11 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar4 * 2), uVar10 < 0xbd))
            goto LAB_01af2b10;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_01af2b10:
  if (uVar10 == 0x78) {
    iVar3 = FUN_01ad7260(param_1);
    if ((iVar3 == 0) || (puVar7 = (ushort *)FUN_01afd600(param_1), puVar7 == (ushort *)0x0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar7 & 7;
      uVar4 = FUN_01ad7260(param_1);
      if (uVar4 <= uVar2) {
        uVar2 = 0;
      }
    }
    iVar3 = FUN_01ad7260(&local_58);
    if ((iVar3 == 0) || (puVar7 = (ushort *)FUN_01afd600(&local_58), puVar7 == (ushort *)0x0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *puVar7 & 7;
      uVar5 = FUN_01ad7260(&local_58);
      if (uVar5 <= uVar4) {
        uVar4 = 0;
      }
    }
    if (uVar2 != uVar4) {
      return 0;
    }
  }
  return 1;
}

