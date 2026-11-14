
/* WARNING: Removing unreachable block (ram,0x01ad9e48) */
/* WARNING: Removing unreachable block (ram,0x01ad9e64) */

undefined8 FUN_01ad9cb4(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  uint *puVar6;
  
  puVar4 = *(uint **)(param_1 + 0x10);
  if (puVar4 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *puVar4;
  if (uVar3 == 0 || puVar4 == (uint *)(ulong)uVar3) {
LAB_01ad9cd8:
    uVar5 = 0;
  }
  else {
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
    uVar5 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05327190) &&
             (uVar5 = *(ushort *)(DAT_05327198 + (long)(int)uVar2 * 2), uVar5 < 0x13e))
          goto LAB_01ad9cdc;
        }
      }
      goto LAB_01ad9cd8;
    }
  }
LAB_01ad9cdc:
  if (uVar5 != 0x10a) {
    return 0;
  }
  uVar5 = 0;
  uVar3 = *puVar4;
  if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
    uVar5 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
          goto LAB_01ad9d84;
        }
      }
      uVar5 = 0;
    }
  }
LAB_01ad9d84:
  if (uVar5 == 9) {
    return 1;
  }
  if (puVar4 == (uint *)0x0) {
    uVar5 = 0xbc;
  }
  else {
    uVar3 = *puVar4;
    uVar5 = 0;
    if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
      puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar3 = puVar6[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
            }
            if (*puVar6 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
            goto LAB_01ad9ef0;
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_01ad9ef0:
  if (uVar5 == 10) {
    return 1;
  }
  return 0;
}

