
ushort FUN_01241ca0(undefined2 *param_1)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined **local_48;
  undefined2 local_40;
  byte local_3e;
  undefined1 local_3d;
  undefined4 local_3c;
  uint *local_38;
  
  lVar10 = DAT_05150358;
  uVar6 = FUN_0277d6c4();
  puVar5 = PTR_DAT_04bb43c0;
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
     (puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8), puVar8 != (uint *)0x0))
  {
    uVar6 = *puVar8;
    if (uVar6 != 0 && puVar8 != (uint *)(ulong)uVar6) {
      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
      if (((*puVar9 != 0) && (uVar6 = puVar9[1], uVar6 != 0)) && ((ulong)(ushort)puVar9[2] != 0)) {
        lVar10 = 0xc;
        if (*(char *)((long)puVar9 + 10) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
        if (lVar10 != 0) {
          uVar2 = 0;
          if ((ulong)uVar6 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar6);
          }
          if (*puVar9 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_051503a8) &&
             (uVar4 = *(ushort *)(DAT_051503b0 + (long)(int)uVar2 * 2), uVar4 < 0x14)) {
            return uVar4;
          }
        }
      }
    }
    return 0;
  }
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(param_1);
  lVar11 = *(long *)puVar5;
  if (lVar11 == 0) {
    return 0x13;
  }
  lVar10 = *(long *)(lVar10 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
  if (*(uint *)(lVar10 + 0x1d8) <= uVar6) {
    return 0x13;
  }
  if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
    return 0x13;
  }
  local_40 = *param_1;
  local_38 = (uint *)0x0;
  local_3d = *(undefined1 *)((long)param_1 + 3);
  bVar3 = *(byte *)(param_1 + 1);
  local_48 = &PTR_FUN_04a36b50;
  local_3c = *(undefined4 *)(param_1 + 2);
  local_3e = bVar3;
  uVar6 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar5 != 0) {
    lVar10 = *(long *)(lVar11 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      lVar10 = *(long *)PTR_DAT_04bc0428;
      uVar6 = FUN_0277d6c4(param_1);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (uVar6 < *(uint *)(lVar10 + 0x1d8)) {
        puVar8 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8);
        if (puVar8 != (uint *)0x0) {
          local_38 = puVar8;
        }
        goto LAB_01241e7c;
      }
    }
  }
  puVar8 = (uint *)0x0;
LAB_01241e7c:
  uVar7 = FUN_01ae59b0(&local_48);
  bVar1 = bVar3 >> 2 & 1;
  if ((uVar7 & 1) == 0) {
    bVar1 = bVar3 & 4;
  }
  if ((bVar1 == 0) && (puVar8 != (uint *)0x0)) {
    puVar9 = (uint *)((long)puVar8 - (ulong)*puVar8);
    if ((*puVar8 != 0) &&
       ((((puVar9 != (uint *)0x0 && (*puVar9 != 0)) && (uVar6 = puVar9[1], uVar6 != 0)) &&
        ((ulong)(ushort)puVar9[2] != 0)))) {
      lVar10 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        lVar10 = 0x1c;
      }
      lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
      if (lVar10 != 0) {
        uVar2 = 0;
        if ((ulong)uVar6 != 0) {
          uVar2 = (uint)((ulong)((long)puVar8 - lVar10) / (ulong)uVar6);
        }
        if (*puVar9 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05326ec0) &&
           (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar4 < 0xbd)) {
          if (uVar4 == 0x98) {
            return 0x10;
          }
          if (uVar4 == 99) {
            return 0xe;
          }
          if (uVar4 == 0x5a) {
            return 0xf;
          }
        }
      }
    }
  }
  return 0x13;
}

