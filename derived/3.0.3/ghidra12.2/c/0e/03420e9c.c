
bool FUN_03420e9c(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  uint *puVar6;
  long lVar7;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = 0;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar3 = FUN_0277d6c4(param_2);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (puVar4 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8),
         puVar4 != (uint *)0x0)) {
        uVar3 = *puVar4;
        if (uVar3 == 0 || puVar4 == (uint *)(ulong)uVar3) {
LAB_03420f70:
          uVar5 = 0;
        }
        else {
          puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
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
                  uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
                }
                if (*puVar6 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05327190) &&
                   (uVar5 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar5 < 0x13e))
                goto LAB_03420f74;
              }
            }
            goto LAB_03420f70;
          }
        }
LAB_03420f74:
        if (uVar5 == 0x138) {
          return true;
        }
        uVar5 = 0;
        uVar3 = *puVar4;
        if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
          puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
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
                  uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
                }
                if (*puVar6 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05327190) &&
                   (uVar5 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar5 < 0x13e))
                goto LAB_0342101c;
              }
            }
            uVar5 = 0;
          }
        }
LAB_0342101c:
        if (uVar5 == 0x139) {
          return true;
        }
        uVar5 = 0;
        uVar3 = *puVar4;
        if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
          puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
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
                  uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
                }
                if (*puVar6 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05327190) &&
                   (uVar5 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar5 < 0x13e))
                goto LAB_034210c4;
              }
            }
            uVar5 = 0;
          }
        }
LAB_034210c4:
        if (uVar5 == 0x13a) {
          return true;
        }
        uVar5 = 0;
        uVar3 = *puVar4;
        if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
          puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
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
                  uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
                }
                if (*puVar6 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05327190) &&
                   (uVar5 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar5 < 0x13e))
                goto LAB_0342116c;
              }
            }
            uVar5 = 0;
          }
        }
LAB_0342116c:
        if (uVar5 == 0x137) {
          return true;
        }
        uVar5 = 0;
        uVar3 = *puVar4;
        if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
          puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
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
                  uVar1 = (uint)((ulong)((long)puVar4 - lVar7) / (ulong)uVar3);
                }
                if (*puVar6 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05327190) &&
                   (uVar5 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar5 < 0x13e))
                goto LAB_034212a4;
              }
            }
            uVar5 = 0;
          }
        }
        goto LAB_034212a4;
      }
    }
  }
  uVar5 = 0;
LAB_034212a4:
  return uVar5 == 0x13b;
}

