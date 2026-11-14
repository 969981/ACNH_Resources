
undefined4 FUN_01a35d2c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  long lVar12;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar5 = FUN_0277d6c4();
  lVar11 = *(long *)puVar4;
  if (lVar11 == 0) {
    return 0;
  }
  lVar12 = *(long *)(lVar12 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if (*(uint *)(lVar12 + 0x1d8) <= uVar5) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar5 * 8) == 0) {
    return 0;
  }
  local_38 = (uint *)0x0;
  local_40 = *param_1;
  uStack_3c = param_1[1];
  local_48 = &PTR_FUN_04a36b50;
  uVar5 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar4 == 0) goto switchD_01a35fbc_caseD_3a;
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if ((*(uint *)(lVar11 + 0x1d8) <= uVar5) ||
     (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8) == 0))
  goto switchD_01a35fbc_caseD_3a;
  lVar11 = *(long *)PTR_DAT_04bc0428;
  uVar5 = FUN_0277d6c4(param_1);
  uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar5) goto switchD_01a35fbc_caseD_3a;
  puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar5 * 8);
  if (puVar8 == (uint *)0x0) goto switchD_01a35fbc_caseD_3a;
  uVar5 = 0;
  uVar2 = *puVar8;
  if (uVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    if (puVar8 != (uint *)(ulong)uVar2) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar2);
      uVar5 = 0;
      if (*puVar10 != 0) {
        uVar5 = puVar10[1];
        if ((uVar5 == 0) || ((ulong)(ushort)puVar10[2] == 0)) {
LAB_01a35ed4:
          uVar5 = 0;
        }
        else {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 == 0) goto LAB_01a35ed4;
          uVar2 = 0;
          if ((ulong)uVar5 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar5);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if (DAT_05326f18 <= uVar2) goto LAB_01a35ed4;
          uVar3 = *(ushort *)(DAT_05326f20 + (long)(int)uVar2 * 2);
          uVar5 = (uint)uVar3;
          if (0xe < uVar3) {
            uVar5 = 0;
          }
        }
        if (((*puVar10 != 0) && (uVar2 = puVar10[1], uVar2 != 0)) &&
           ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          uVar9 = 0;
          if (lVar11 != 0) {
            uVar1 = 0;
            if ((ulong)uVar2 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar2);
            }
            if (*puVar10 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bc00c8 <= uVar1) ||
               (uVar3 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               uVar9 = (ulong)uVar3, 0xbc < uVar3)) goto LAB_01a35f48;
          }
          goto LAB_01a35f54;
        }
      }
LAB_01a35f48:
      uVar9 = 0;
    }
  }
LAB_01a35f54:
  uVar2 = uVar5 - 2;
  if ((uVar2 < 9) && ((0x187U >> (ulong)(uVar2 & 0x1f) & 1) != 0)) {
    puVar7 = &DAT_041776c4;
    lVar11 = (long)(short)uVar2;
  }
  else {
    lVar11 = uVar9 - 9;
    if ((10 < (uint)lVar11) || ((0x7f7U >> (ulong)((uint)lVar11 & 0x1f) & 1) == 0)) {
      if (uVar5 == 8) {
        return 0x10;
      }
      local_38 = puVar8;
      switch((int)uVar9) {
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
        return 0x11;
      case 0x33:
        return 0x18;
      case 0x70:
        return 0x14;
      case 0x72:
        return 0x13;
      case 0x78:
        return 0x12;
      case 0x79:
      case 0x7b:
        return 0x16;
      case 0x7c:
        return 0x15;
      }
switchD_01a35fbc_caseD_3a:
      uVar9 = FUN_01ae5f4c(&local_48);
      uVar6 = 7;
      if ((uVar9 & 1) == 0) {
        uVar6 = 1;
      }
      return uVar6;
    }
    puVar7 = (undefined4 *)&UNK_041776e8;
  }
  return puVar7[lVar11];
}

