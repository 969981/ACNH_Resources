
ulong FUN_03422a60(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) {
    return 0;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar4) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return 0;
  }
  local_48 = (uint *)0x0;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  local_58 = PTR_DAT_04bc0510 + 0x10;
  uVar4 = FUN_0277d6c4(&local_50);
  puVar7 = (uint *)0x0;
  if (*(long *)puVar3 == 0) goto LAB_03422b88;
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (uVar4 < *(uint *)(lVar10 + 0x1d8)) {
    puVar7 = (uint *)0x0;
    if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) goto LAB_03422b88;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if (uVar4 < *(uint *)(lVar10 + 0x1d8)) {
      puVar7 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8);
      if (puVar7 != (uint *)0x0) {
        local_48 = puVar7;
      }
      goto LAB_03422b88;
    }
  }
  puVar7 = (uint *)0x0;
LAB_03422b88:
  bVar8 = *param_2;
  bVar9 = *PTR_DAT_04bb32e0;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  if ((bVar8 != bVar9) && (puVar7 != (uint *)0x0)) {
    puVar2 = (uint *)((long)puVar7 - (ulong)*puVar7);
    if ((*puVar7 != 0) &&
       ((((puVar2 != (uint *)0x0 && (*puVar2 != 0)) && (uVar4 = puVar2[1], uVar4 != 0)) &&
        ((ulong)(ushort)puVar2[2] != 0)))) {
      lVar10 = 0xc;
      if (*(char *)((long)puVar2 + 10) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar2 + lVar10 + (ulong)(ushort)puVar2[2] * 8;
      if (lVar10 != 0) {
        uVar1 = 0;
        if ((ulong)uVar4 != 0) {
          uVar1 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar4);
        }
        if (*puVar2 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 0x78)) {
          local_68 = PTR_DAT_04bb2020 + 0x10;
          pcStack_60 = "FenceRemakeEnable";
          uVar6 = FUN_0274bce0(param_2,&local_68);
          if ((int)uVar6 == 0) {
            return uVar6;
          }
        }
      }
    }
  }
  iVar5 = FUN_01ad7260(&local_58);
  if ((iVar5 == 0) && (uVar6 = FUN_01afcfa0(&local_58), (int)uVar6 == 0)) {
    return uVar6;
  }
  uVar6 = FUN_01ae6580(&local_58);
  if ((uVar6 & 1) == 0) {
    iVar5 = FUN_01ad7260(&local_58);
    if (iVar5 != 0) {
      return 1;
    }
  }
  else {
    uVar6 = FUN_01affd70(&local_58);
    if ((uVar6 & 1) != 0) {
      return 1;
    }
  }
  iVar5 = FUN_01afcfa0(&local_58);
  return (ulong)(iVar5 != 0);
}

