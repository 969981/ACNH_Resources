
undefined8 FUN_02d98be0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  ushort uVar6;
  uint *puVar7;
  
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 != (uint *)0x0) {
    uVar3 = *puVar5;
    if (uVar3 == 0 || puVar5 == (uint *)(ulong)uVar3) {
LAB_02d98c04:
      uVar6 = 0;
    }
    else {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
            goto LAB_02d98c08;
          }
        }
        goto LAB_02d98c04;
      }
    }
LAB_02d98c08:
    if (uVar6 == 0x57) {
      return 0;
    }
    uVar6 = 0;
    uVar3 = *puVar5;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
            goto LAB_02d98cb0;
          }
        }
        uVar6 = 0;
      }
    }
LAB_02d98cb0:
    if (uVar6 == 0x51) {
      return 0;
    }
    if (puVar5 != (uint *)0x0) {
      uVar3 = *puVar5;
      uVar6 = 0;
      if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
        puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar3 = puVar7[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar3 != 0) {
                uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
              goto LAB_02d98d5c;
            }
          }
          uVar6 = 0;
        }
      }
LAB_02d98d5c:
      if (uVar6 == 0x4b) {
        return 0;
      }
      uVar6 = 0;
      uVar3 = *puVar5;
      if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
        puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar3 = puVar7[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar3 != 0) {
                uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
              goto LAB_02d98ee8;
            }
          }
          uVar6 = 0;
        }
      }
      goto LAB_02d98ee8;
    }
  }
  uVar6 = 0xbc;
LAB_02d98ee8:
  if (uVar6 == 0x9c) {
    return 1;
  }
  uVar4 = FUN_01b14e50();
  return uVar4;
}

