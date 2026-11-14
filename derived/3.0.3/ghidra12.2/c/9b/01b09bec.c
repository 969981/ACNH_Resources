
/* WARNING: Removing unreachable block (ram,0x01b09ed0) */
/* WARNING: Removing unreachable block (ram,0x01b09ce0) */

ushort FUN_01b09bec(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ushort uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
LAB_01b09f04:
    uVar6 = FUN_01b15170(param_1);
    if ((uVar6 & 1) == 0) {
      uVar6 = FUN_01b09a34(param_1);
      if ((uVar6 & 1) == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(ushort *)(param_1 + 0xe) & 1;
      }
    }
    else {
      uVar5 = FUN_01b15170(param_1);
      uVar5 = uVar5 & *(ushort *)(param_1 + 0xe);
    }
  }
  else {
    uVar3 = *puVar7;
    if (uVar3 == 0 || puVar7 == (uint *)(ulong)uVar3) {
LAB_01b09c1c:
      uVar5 = 0;
    }
    else {
      puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
      uVar5 = 0;
      if (*puVar8 != 0) {
        uVar3 = puVar8[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
            goto LAB_01b09c20;
          }
        }
        goto LAB_01b09c1c;
      }
    }
LAB_01b09c20:
    if (uVar5 == 0x71) {
      uVar5 = 0;
      uVar3 = *puVar7;
      if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
        if ((*puVar8 == 0) || ((uVar3 = puVar8[1], uVar3 == 0 || ((ulong)(ushort)puVar8[2] == 0))))
        {
LAB_01b09cc0:
          uVar5 = 0;
        }
        else {
          lVar1 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
          uVar5 = 0;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((DAT_05326ec0 <= uVar2) ||
               (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), 0xbc < uVar5))
            goto LAB_01b09cc0;
          }
        }
      }
      bVar4 = uVar5 == 0x71;
      uVar5 = (ushort)*(byte *)(param_1 + 0xe);
    }
    else {
      uVar5 = 0;
      uVar3 = *puVar7;
      if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
        puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
        uVar5 = 0;
        if (*puVar8 != 0) {
          uVar3 = puVar8[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar3 != 0) {
                uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
              goto LAB_01b09e0c;
            }
          }
          uVar5 = 0;
        }
      }
LAB_01b09e0c:
      if (uVar5 != 0x49) goto LAB_01b09f04;
      if (puVar7 == (uint *)0x0) {
        uVar5 = 0xbc;
      }
      else {
        uVar3 = *puVar7;
        uVar5 = 0;
        if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar8 != 0) {
            uVar3 = puVar8[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar1 != 0) {
                uVar2 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
                goto LAB_01b09ed8;
              }
            }
            uVar5 = 0;
          }
        }
      }
LAB_01b09ed8:
      bVar4 = uVar5 == 0x49;
      uVar5 = *(ushort *)(param_1 + 0xe);
    }
    uVar5 = bVar4 & uVar5;
  }
  return uVar5 & 1;
}

