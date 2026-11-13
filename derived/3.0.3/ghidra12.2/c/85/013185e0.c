
/* WARNING: Removing unreachable block (ram,0x0131860c) */
/* WARNING: Removing unreachable block (ram,0x0131861c) */
/* WARNING: Removing unreachable block (ram,0x01318628) */
/* WARNING: Removing unreachable block (ram,0x01318720) */

bool FUN_013185e0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  uint *puVar9;
  ushort uVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 local_34;
  ushort local_2e;
  
  puVar5 = PTR_DAT_04bb27a8;
  local_34 = 0;
  lVar7 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar7 == 0) {
    return false;
  }
  lVar6 = *(long *)(lVar7 + 0xa8);
  if (lVar6 == 0) {
    return false;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < *(int *)(lVar6 + 0x18) || *(int *)(lVar6 + 0x28) < iVar2) {
    return false;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 < *(int *)(lVar6 + 0x1c)) {
    return false;
  }
  if (*(int *)(lVar6 + 0x2c) < iVar3) {
    return false;
  }
  lVar7 = *(long *)(lVar7 + 0xb0);
  if (lVar7 != 0) {
    uVar11 = iVar2 - *(int *)(lVar7 + 0x28);
    uVar1 = *(uint *)(lVar7 + 0x18);
    uVar4 = iVar3 - *(int *)(lVar7 + 0x2c);
    if ((uVar11 < uVar1 && uVar4 <= *(uint *)(lVar7 + 0x1c)) &&
        (uVar1 <= uVar11 || *(uint *)(lVar7 + 0x1c) != uVar4)) {
      uVar11 = uVar11 + uVar1 * uVar4;
LAB_013186dc:
      if (*(uint *)(lVar7 + 0x30) <= uVar11) {
        uVar11 = 0;
      }
      puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar11 * 0x68);
    }
    else {
      if (*(char *)(lVar7 + 0x88) != '\0') {
        uVar1 = iVar2 - *(int *)(lVar7 + 0x98);
        uVar4 = iVar3 - *(int *)(lVar7 + 0x9c);
        uVar11 = *(uint *)(lVar7 + 0xa0);
        if ((uVar1 < uVar11 && uVar4 <= *(uint *)(lVar7 + 0xa4)) &&
            (uVar11 <= uVar1 || *(uint *)(lVar7 + 0xa4) != uVar4)) {
          uVar11 = uVar1 + uVar11 * uVar4 + *(int *)(lVar7 + 0x8c);
          goto LAB_013186dc;
        }
      }
      puVar8 = &DAT_051a50f0;
    }
    if ((*(byte *)((long)puVar8 + 0xd) & 1) == 0) {
      return false;
    }
  }
  FUN_01309ec4(&local_34);
  lVar7 = *(long *)puVar5;
  uVar11 = (uint)local_2e - (uint)*(ushort *)(lVar7 + 0x408);
  if ((*(uint *)(lVar7 + 1000) <= uVar11) ||
     (puVar9 = *(uint **)(*(long *)(lVar7 + 0x3f0) + (long)(int)uVar11 * 8), puVar9 == (uint *)0x0))
  {
    return false;
  }
  uVar11 = *puVar9;
  uVar10 = 0;
  if ((uVar11 != 0) && (puVar9 != (uint *)(ulong)uVar11)) {
    puVar12 = (uint *)((long)puVar9 - (long)(ulong)uVar11);
    uVar10 = 0;
    if (*puVar12 != 0) {
      uVar11 = puVar12[1];
      if ((uVar11 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar12 + lVar7 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar7 != 0) {
          uVar1 = 0;
          if ((ulong)uVar11 != 0) {
            uVar1 = (uint)((ulong)((long)puVar9 - lVar7) / (ulong)uVar11);
          }
          if (*puVar12 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05160328) &&
             (uVar10 = *(ushort *)(DAT_05160330 + (long)(int)uVar1 * 2), uVar10 < 5))
          goto LAB_013187d8;
        }
      }
      uVar10 = 0;
    }
  }
LAB_013187d8:
  if (uVar10 != 2) {
    return false;
  }
  uVar11 = *puVar9;
  uVar10 = 0;
  if ((uVar11 != 0) && (puVar9 != (uint *)(ulong)uVar11)) {
    puVar12 = (uint *)((long)puVar9 - (long)(ulong)uVar11);
    uVar10 = 0;
    if (*puVar12 != 0) {
      uVar11 = puVar12[1];
      if ((uVar11 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar12 + lVar7 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar7 != 0) {
          uVar1 = 0;
          if ((ulong)uVar11 != 0) {
            uVar1 = (uint)((ulong)((long)puVar9 - lVar7) / (ulong)uVar11);
          }
          if (*puVar12 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_051602f8) &&
             (uVar10 = *(ushort *)(DAT_05160300 + (long)(int)uVar1 * 2), uVar10 < 3))
          goto LAB_013188a4;
        }
      }
      uVar10 = 0;
    }
  }
LAB_013188a4:
  return uVar10 == 2;
}

