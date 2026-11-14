
bool FUN_01b0d774(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 == (uint *)0x0) {
    return false;
  }
  uVar3 = *puVar5;
  if (uVar3 != 0 && puVar5 != (uint *)(ulong)uVar3) {
    puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
    uVar3 = *puVar6;
    if (uVar3 != 0) {
      uVar8 = puVar6[1];
      if ((uVar8 == 0) || ((ulong)(ushort)puVar6[2] == 0)) {
LAB_01b0d804:
        uVar8 = DAT_05326ec0;
      }
      else {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 == 0) goto LAB_01b0d804;
        uVar2 = 0;
        if ((ulong)uVar8 != 0) {
          uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar8);
        }
        uVar8 = *(uint *)PTR_DAT_04bc00c8;
        if (uVar3 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < uVar8) &&
           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) == 1)) {
          return true;
        }
      }
      uVar7 = (ulong)puVar6[1];
      if (puVar6[1] != 0) {
        if ((ulong)(ushort)puVar6[2] != 0) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / uVar7);
            }
            if (uVar3 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < uVar8) && (*(short *)(DAT_05326ec8 + (long)(int)uVar2 * 2) == 2)) {
              return true;
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
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / uVar7);
            }
            if (uVar3 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < uVar8) &&
               (0xff43 < (ushort)(*(short *)(DAT_05326ec8 + (long)(int)uVar2 * 2) - 0xbdU))) {
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
            uVar8 = 0;
            if (uVar7 != 0) {
              uVar8 = (uint)((ulong)((long)puVar5 - lVar1) / uVar7);
            }
            if (uVar3 <= uVar8) {
              uVar8 = 0xffffffff;
            }
            if ((uVar8 < DAT_05327298) &&
               (uVar4 = *(ushort *)(DAT_053272a0 + (long)(int)uVar8 * 2), uVar4 < 2))
            goto LAB_01b0d93c;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_01b0d93c:
  return uVar4 == 1;
}

