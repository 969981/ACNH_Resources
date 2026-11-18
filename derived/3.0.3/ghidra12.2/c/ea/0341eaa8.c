
/* WARNING: Removing unreachable block (ram,0x0341eed4) */
/* WARNING: Removing unreachable block (ram,0x0341eee4) */
/* WARNING: Removing unreachable block (ram,0x0341ef00) */
/* WARNING: Removing unreachable block (ram,0x0341ef18) */
/* WARNING: Removing unreachable block (ram,0x0341ef30) */

undefined8 FUN_0341eaa8(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  ushort uVar5;
  uint *puVar6;
  long lVar7;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 == 0) {
    return 0;
  }
  lVar7 = *(long *)(lVar7 + 0x57e58);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar3) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_04bc0428;
  uVar3 = FUN_0277d6c4(param_2);
  uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if (*(uint *)(lVar7 + 0x1d8) <= uVar3) {
    return 0;
  }
  local_38 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8);
  if (local_38 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *local_38;
  if (uVar3 == 0 || local_38 == (uint *)(ulong)uVar3) {
LAB_0341eb80:
    uVar5 = 0;
  }
  else {
    puVar6 = (uint *)((long)local_38 - (long)(ulong)uVar3);
    uVar5 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar7 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)local_38 - lVar7) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326f18) &&
             (uVar5 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar5 < 0xf))
          goto LAB_0341eb84;
        }
      }
      goto LAB_0341eb80;
    }
  }
LAB_0341eb84:
  if (uVar5 != 1) {
    return 0;
  }
  uVar3 = *local_38;
  uVar5 = 0;
  if ((uVar3 != 0) && (local_38 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)local_38 - (long)(ulong)uVar3);
    uVar5 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar7 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)local_38 - lVar7) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05327180) &&
             (uVar5 = *(ushort *)(DAT_05327188 + (long)(int)uVar1 * 2), uVar5 < 3))
          goto LAB_0341ec24;
        }
      }
      uVar5 = 0;
    }
  }
LAB_0341ec24:
  if (uVar5 != 0) {
    return 0;
  }
  uVar3 = *local_38;
  uVar5 = 0;
  if ((uVar3 != 0) && (local_38 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)local_38 - (long)(ulong)uVar3);
    uVar5 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar7 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)local_38 - lVar7) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ec0) &&
             (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
          goto LAB_0341ecc0;
        }
      }
      uVar5 = 0;
    }
  }
LAB_0341ecc0:
  if (uVar5 == 0x74) {
    return 0;
  }
  uVar5 = 0;
  uVar3 = *local_38;
  if ((uVar3 != 0) && (local_38 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)local_38 - (long)(ulong)uVar3);
    uVar5 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar7 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)local_38 - lVar7) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ec0) &&
             (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
          goto LAB_0341ed68;
        }
      }
      uVar5 = 0;
    }
  }
LAB_0341ed68:
  if (uVar5 == 0x75) {
    return 0;
  }
  uVar5 = 0;
  uVar3 = *local_38;
  if ((uVar3 != 0) && (local_38 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)local_38 - (long)(ulong)uVar3);
    uVar5 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar7 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)local_38 - lVar7) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ec0) &&
             (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
          goto LAB_0341ee10;
        }
      }
      uVar5 = 0;
    }
  }
LAB_0341ee10:
  if (uVar5 == 0x72) {
    return 0;
  }
  uVar5 = 0;
  uVar3 = *local_38;
  if ((uVar3 != 0) && (local_38 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)local_38 - (long)(ulong)uVar3);
    uVar5 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar7 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)local_38 - lVar7) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < DAT_05326ec0) &&
             (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar5 < 0xbd))
          goto LAB_0341ef3c;
        }
      }
      uVar5 = 0;
    }
  }
LAB_0341ef3c:
  if ((((uVar5 == 0xa4) || (uVar4 = FUN_01ad6a30(&local_48,0xa5), (uVar4 & 1) != 0)) ||
      (uVar4 = FUN_01ad6a30(&local_48,0xa6), (uVar4 & 1) != 0)) ||
     (uVar4 = FUN_01ad6a30(&local_48,0xa7), (uVar4 & 1) != 0)) {
    return 0;
  }
  return 1;
}

