
/* WARNING: Removing unreachable block (ram,0x01b00c2c) */
/* WARNING: Removing unreachable block (ram,0x01b00e44) */
/* WARNING: Removing unreachable block (ram,0x01b00d98) */
/* WARNING: Removing unreachable block (ram,0x01b00c44) */

bool FUN_01b00bc8(long param_1)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  ushort uVar8;
  uint *puVar9;
  
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
    uVar8 = 0;
LAB_01b00e64:
    bVar5 = uVar8 == 0x11f;
joined_r0x01b00e7c:
    if (puVar7 != (uint *)0x0) goto LAB_01b00e80;
    uVar8 = 0xbc;
  }
  else {
    uVar4 = *puVar7;
    if (uVar4 == 0 || puVar7 == (uint *)(ulong)uVar4) {
LAB_01b00bf4:
      uVar8 = 0;
    }
    else {
      puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
      uVar8 = 0;
      if (*puVar9 != 0) {
        uVar4 = puVar9[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar2 != 0) {
            uVar3 = 0;
            if ((ulong)uVar4 != 0) {
              uVar3 = (uint)((ulong)((long)puVar7 - lVar2) / (ulong)uVar4);
            }
            if (*puVar9 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05327190) &&
               (uVar8 = *(ushort *)(DAT_05327198 + (long)(int)uVar3 * 2), uVar8 < 0x13e))
            goto LAB_01b00bf8;
          }
        }
        goto LAB_01b00bf4;
      }
    }
LAB_01b00bf8:
    if (uVar8 != 0xbf) {
      uVar8 = 0;
      uVar4 = *puVar7;
      if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
        puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
        uVar8 = 0;
        if (*puVar9 != 0) {
          uVar4 = puVar9[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
            lVar2 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar2 != 0) {
              uVar3 = 0;
              if ((ulong)uVar4 != 0) {
                uVar3 = (uint)((ulong)((long)puVar7 - lVar2) / (ulong)uVar4);
              }
              if (*puVar9 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05327190) &&
                 (uVar8 = *(ushort *)(DAT_05327198 + (long)(int)uVar3 * 2), uVar8 < 0x13e))
              goto LAB_01b00d58;
            }
          }
          uVar8 = 0;
        }
      }
LAB_01b00d58:
      if (uVar8 != 0x11e) {
        uVar8 = 0;
        if (((puVar7 != (uint *)0x0) && (uVar4 = *puVar7, uVar4 != 0)) &&
           (puVar7 != (uint *)(ulong)uVar4)) {
          puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
          uVar8 = 0;
          if (*puVar9 != 0) {
            uVar4 = puVar9[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar2 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar2 = 0x1c;
              }
              lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar2 != 0) {
                uVar3 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar7 - lVar2) / (ulong)uVar4);
                }
                if (*puVar9 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if ((uVar3 < DAT_05327190) &&
                   (uVar8 = *(ushort *)(DAT_05327198 + (long)(int)uVar3 * 2), uVar8 < 0x13e))
                goto LAB_01b00e64;
              }
            }
            uVar8 = 0;
          }
        }
        goto LAB_01b00e64;
      }
      bVar5 = true;
      goto joined_r0x01b00e7c;
    }
    bVar5 = true;
LAB_01b00e80:
    uVar4 = *puVar7;
    uVar8 = 0;
    if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
      puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
      uVar8 = 0;
      if (*puVar9 != 0) {
        uVar4 = puVar9[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar2 != 0) {
            uVar3 = 0;
            if ((ulong)uVar4 != 0) {
              uVar3 = (uint)((ulong)((long)puVar7 - lVar2) / (ulong)uVar4);
            }
            if (*puVar9 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar8 < 0xbd))
            goto LAB_01b00f0c;
          }
        }
        uVar8 = 0;
      }
    }
  }
LAB_01b00f0c:
  if (uVar8 == 0) goto LAB_01b00fd4;
  if (puVar7 == (uint *)0x0) {
    uVar8 = 0xbc;
  }
  else {
    uVar4 = *puVar7;
    uVar8 = 0;
    if ((uVar4 != 0) && (puVar7 != (uint *)(ulong)uVar4)) {
      puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar4);
      uVar8 = 0;
      if (*puVar9 != 0) {
        uVar4 = puVar9[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar2 != 0) {
            uVar3 = 0;
            if ((ulong)uVar4 != 0) {
              uVar3 = (uint)((ulong)((long)puVar7 - lVar2) / (ulong)uVar4);
            }
            if (*puVar9 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar8 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar8 < 0xbd))
            goto LAB_01b00fc0;
          }
        }
        uVar8 = 0;
      }
    }
  }
LAB_01b00fc0:
  if (uVar8 != 0x45) {
    return false;
  }
LAB_01b00fd4:
  iVar6 = FUN_01ad7260();
  bVar1 = false;
  if (iVar6 != 0) {
    bVar1 = bVar5;
  }
  return bVar1;
}

