
uint FUN_00efa550(long param_1,uint *param_2,int *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
LAB_00efa664:
    uVar5 = FUN_01b160f0(param_1);
    if (((uVar5 & 1) == 0) && (uVar5 = FUN_01b164e0(param_1), (uVar5 & 1) == 0)) goto LAB_00efa67c;
  }
  else {
    uVar4 = *puVar6;
    if (uVar4 != 0 && puVar6 != (uint *)(ulong)uVar4) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
      if (*puVar7 != 0) {
        uVar4 = puVar7[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar1 == 0) goto LAB_00efa5f8;
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar4);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((DAT_05327180 <= uVar2) || (*(short *)(DAT_05327188 + (long)(int)uVar2 * 2) != 1))
          goto LAB_00efa5f8;
          goto LAB_00efa84c;
        }
LAB_00efa5f8:
        if ((*puVar7 != 0) && ((uVar4 = puVar7[1], uVar4 != 0 && ((ulong)(ushort)puVar7[2] != 0))))
        {
          lVar1 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar4);
            }
            if (*puVar7 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc0050) &&
               (*(short *)(*(long *)(PTR_DAT_04bc0050 + 8) + (long)(int)uVar2 * 2) == 2))
            goto LAB_00efa664;
          }
        }
      }
    }
LAB_00efa67c:
    uVar5 = FUN_01b07660(param_1);
    if ((uVar5 & 1) != 0) {
      puVar6 = *(uint **)(param_1 + 0x10);
      if (puVar6 == (uint *)0x0) {
        uVar4 = 0xbc;
      }
      else {
        uVar2 = *puVar6;
        uVar4 = 0;
        if ((uVar2 != 0) && (puVar6 != (uint *)(ulong)uVar2)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
          uVar4 = 0;
          if (*puVar7 != 0) {
            uVar4 = puVar7[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar1 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar4);
                }
                if (*puVar7 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar4 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar4 < 0xbd))
                goto LAB_00efa724;
              }
            }
            uVar4 = 0;
          }
        }
      }
LAB_00efa724:
      if ((uVar4 - 0x60 < 0x11) && ((1 << (ulong)(uVar4 - 0x60 & 0x1f) & 0x10601U) != 0)) {
LAB_00efa750:
        uVar4 = 1;
        goto LAB_00efa850;
      }
      if (uVar4 - 9 < 2) {
        uVar4 = 0;
        if (((puVar6 != (uint *)0x0) && (uVar2 = *puVar6, uVar2 != 0)) &&
           (puVar6 != (uint *)(ulong)uVar2)) {
          puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
          uVar4 = 0;
          if (*puVar7 != 0) {
            uVar4 = puVar7[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar1 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar4);
                }
                if (*puVar7 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_053271b0) &&
                   (uVar4 = (uint)*(ushort *)(DAT_053271b8 + (long)(int)uVar2 * 2), uVar4 < 5))
                goto LAB_00efa7f4;
              }
            }
            uVar4 = 0;
          }
        }
LAB_00efa7f4:
        if (((uVar4 == 0) || (uVar4 == *param_2)) &&
           ((iVar3 = FUN_01ae58b0(param_1), iVar3 == 0 || (iVar3 == *param_3)))) goto LAB_00efa750;
      }
      else if (uVar4 == 0) {
        uVar4 = FUN_01ae6420(param_1);
        uVar4 = uVar4 ^ 1;
        goto LAB_00efa850;
      }
    }
  }
LAB_00efa84c:
  uVar4 = 0;
LAB_00efa850:
  return uVar4 & 1;
}

