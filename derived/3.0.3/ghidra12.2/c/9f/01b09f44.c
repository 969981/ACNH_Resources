
/* WARNING: Removing unreachable block (ram,0x01b0a234) */
/* WARNING: Removing unreachable block (ram,0x01b0a038) */

void FUN_01b09f44(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  ushort uVar6;
  uint *puVar7;
  
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 != (uint *)0x0) {
    uVar3 = *puVar5;
    if (uVar3 == 0 || puVar5 == (uint *)(ulong)uVar3) {
LAB_01b09f74:
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
            goto LAB_01b09f78;
          }
        }
        goto LAB_01b09f74;
      }
    }
LAB_01b09f78:
    if (uVar6 == 0x71) {
      uVar6 = 0;
      uVar3 = *puVar5;
      if ((uVar3 == 0) || (puVar5 == (uint *)(ulong)uVar3)) goto LAB_01b0a040;
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      if ((*puVar7 != 0) && ((uVar3 = puVar7[1], uVar3 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        uVar6 = 0;
        if (lVar1 == 0) goto LAB_01b0a040;
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05326ec0) &&
           (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar6 < 0xbd))
        goto LAB_01b0a040;
      }
      uVar6 = 0;
LAB_01b0a040:
      if (uVar6 == 0x71) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffeffff;
        return;
      }
      return;
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
            goto LAB_01b0a170;
          }
        }
        uVar6 = 0;
      }
    }
LAB_01b0a170:
    if (uVar6 == 0x49) {
      if (puVar5 == (uint *)0x0) {
        uVar6 = 0xbc;
      }
      else {
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
                goto LAB_01b0a23c;
              }
            }
            uVar6 = 0;
          }
        }
      }
LAB_01b0a23c:
      if (uVar6 != 0x49) {
        return;
      }
      goto LAB_01b0a250;
    }
  }
  uVar4 = FUN_01b15170(param_1);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_01b09a34(param_1);
  }
  else {
    uVar4 = FUN_01b15170(param_1);
  }
  if ((uVar4 & 1) == 0) {
    return;
  }
LAB_01b0a250:
  *(ushort *)(param_1 + 0xe) = *(ushort *)(param_1 + 0xe) & 0xfffe;
  return;
}

