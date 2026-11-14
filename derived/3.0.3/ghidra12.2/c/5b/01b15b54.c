
/* WARNING: Removing unreachable block (ram,0x01b15da4) */
/* WARNING: Removing unreachable block (ram,0x01b15bb0) */
/* WARNING: Removing unreachable block (ram,0x01b15bc4) */

uint FUN_01b15b54(long param_1)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  
  puVar3 = *(uint **)(param_1 + 0x10);
  if (puVar3 == (uint *)0x0) {
LAB_01b15e9c:
    uVar2 = 0;
  }
  else {
    uVar4 = *puVar3;
    if (uVar4 == 0 || puVar3 == (uint *)(ulong)uVar4) {
LAB_01b15b78:
      uVar5 = 0;
    }
    else {
      puVar6 = (uint *)((long)puVar3 - (long)(ulong)uVar4);
      uVar5 = 0;
      if (*puVar6 != 0) {
        uVar4 = puVar6[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar3 - lVar1) / (ulong)uVar4);
            }
            if (*puVar6 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
            goto LAB_01b15b7c;
          }
        }
        goto LAB_01b15b78;
      }
    }
LAB_01b15b7c:
    if (uVar5 == 0x55) {
LAB_01b15cfc:
      uVar4 = *puVar3;
      uVar5 = 0;
      if ((uVar4 != 0) && (puVar3 != (uint *)(ulong)uVar4)) {
        puVar6 = (uint *)((long)puVar3 - (long)(ulong)uVar4);
        uVar5 = 0;
        if (*puVar6 != 0) {
          uVar4 = puVar6[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)puVar3 - lVar1) / (ulong)uVar4);
              }
              if (*puVar6 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
              goto LAB_01b15dac;
            }
          }
          uVar5 = 0;
        }
      }
    }
    else {
      uVar5 = 0;
      uVar4 = *puVar3;
      if ((uVar4 != 0) && (puVar3 != (uint *)(ulong)uVar4)) {
        puVar6 = (uint *)((long)puVar3 - (long)(ulong)uVar4);
        uVar5 = 0;
        if (*puVar6 != 0) {
          uVar4 = puVar6[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)puVar3 - lVar1) / (ulong)uVar4);
              }
              if (*puVar6 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
              goto LAB_01b15ce0;
            }
          }
          uVar5 = 0;
        }
      }
LAB_01b15ce0:
      if (uVar5 != 0x50) goto LAB_01b15e9c;
      if (puVar3 != (uint *)0x0) goto LAB_01b15cfc;
      uVar5 = 0xbc;
    }
LAB_01b15dac:
    if (uVar5 == 0x55) {
      uVar2 = *(uint *)(param_1 + 0xc) >> 0x17;
      uVar4 = *(uint *)(param_1 + 0xc) & 0xff7fffff;
    }
    else {
      if (puVar3 == (uint *)0x0) {
        uVar5 = 0xbc;
      }
      else {
        uVar4 = *puVar3;
        uVar5 = 0;
        if ((uVar4 != 0) && (puVar3 != (uint *)(ulong)uVar4)) {
          puVar6 = (uint *)((long)puVar3 - (long)(ulong)uVar4);
          uVar5 = 0;
          if (*puVar6 != 0) {
            uVar4 = puVar6[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar6 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
              if (lVar1 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar3 - lVar1) / (ulong)uVar4);
                }
                if (*puVar6 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
                goto LAB_01b15e70;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_01b15e70:
      if (uVar5 != 0x50) goto LAB_01b15e9c;
      uVar2 = *(uint *)(param_1 + 0xc) >> 8;
      uVar4 = *(uint *)(param_1 + 0xc) & 0xfffffee0;
    }
    uVar2 = uVar2 & 1;
    *(uint *)(param_1 + 0xc) = uVar4;
  }
  return uVar2;
}

