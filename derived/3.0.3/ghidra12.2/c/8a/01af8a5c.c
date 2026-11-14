
bool FUN_01af8a5c(long param_1)

{
  long lVar1;
  uint *puVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  
  puVar2 = *(uint **)(param_1 + 0x10);
  if (puVar2 == (uint *)0x0) {
    uVar5 = 0xbc;
  }
  else {
    uVar5 = *puVar2;
    if (uVar5 != 0 && puVar2 != (uint *)(ulong)uVar5) {
      puVar6 = (uint *)((long)puVar2 - (long)(ulong)uVar5);
      uVar5 = 0;
      if (*puVar6 == 0) goto LAB_01af8afc;
      uVar5 = puVar6[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar4 = 0;
          if ((ulong)uVar5 != 0) {
            uVar4 = (uint)((ulong)((long)puVar2 - lVar1) / (ulong)uVar5);
          }
          if (*puVar6 <= uVar4) {
            uVar4 = 0xffffffff;
          }
          if ((uVar4 < DAT_05326ec0) &&
             (uVar5 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar4 * 2), uVar5 < 0xbd))
          goto LAB_01af8afc;
        }
      }
    }
    uVar5 = 0;
  }
LAB_01af8afc:
  if ((uVar5 - 100 < 0x38) && ((0xc00020000002e7U >> ((ulong)(uVar5 - 100) & 0x3f) & 1) != 0)) {
    return true;
  }
  if (puVar2 == (uint *)0x0) {
    return false;
  }
  uVar5 = *puVar2;
  uVar4 = 0;
  if ((uVar5 != 0) && (puVar2 != (uint *)(ulong)uVar5)) {
    puVar6 = (uint *)((long)puVar2 - (long)(ulong)uVar5);
    uVar4 = 0;
    if (*puVar6 != 0) {
      uVar5 = puVar6[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar4 = 0;
          if ((ulong)uVar5 != 0) {
            uVar4 = (uint)((ulong)((long)puVar2 - lVar1) / (ulong)uVar5);
          }
          if (*puVar6 <= uVar4) {
            uVar4 = 0xffffffff;
          }
          if ((uVar4 < DAT_05326ec0) &&
             (uVar4 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar4 * 2), uVar4 < 0xbd))
          goto LAB_01af8bb8;
        }
      }
      uVar4 = 0;
    }
  }
LAB_01af8bb8:
  if (uVar4 - 1 < 2) {
    return true;
  }
  uVar5 = *puVar2;
  uVar3 = 0;
  if ((uVar5 != 0) && (puVar2 != (uint *)(ulong)uVar5)) {
    puVar6 = (uint *)((long)puVar2 - (long)(ulong)uVar5);
    uVar5 = *puVar6;
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar7 = (ulong)puVar6[1];
      if (puVar6[1] != 0) {
        if ((ulong)(ushort)puVar6[2] != 0) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar1 != 0) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = (uint)((ulong)((long)puVar2 - lVar1) / uVar7);
            }
            if (uVar5 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
               (0xff43 < (ushort)(*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2)
                                 - 0xbdU))) {
              return false;
            }
          }
        }
        if ((ulong)(ushort)puVar6[2] != 0) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar1 != 0) {
            uVar4 = 0;
            if (uVar7 != 0) {
              uVar4 = (uint)((ulong)((long)puVar2 - lVar1) / uVar7);
            }
            if (uVar5 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < DAT_05327298) &&
               (uVar3 = *(ushort *)(DAT_053272a0 + (long)(int)uVar4 * 2), uVar3 < 2))
            goto LAB_01af8ce4;
          }
        }
      }
      uVar3 = 0;
    }
  }
LAB_01af8ce4:
  return uVar3 == 1;
}

