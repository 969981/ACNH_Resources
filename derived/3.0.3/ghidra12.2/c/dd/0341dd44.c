
/* WARNING: Removing unreachable block (ram,0x0341e158) */

undefined8 FUN_0341dd44(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  ushort uVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar3 == 0) {
LAB_0341e0e0:
    puVar8 = (uint *)0x0;
    uVar6 = 0;
LAB_0341e4ac:
    if ((((uVar6 != 4) && (uVar5 = FUN_01af5258(&local_48,9), (uVar5 & 1) == 0)) &&
        (uVar5 = FUN_01af5258(&local_48,10), (uVar5 & 1) == 0)) &&
       ((uVar5 = FUN_01af5258(&local_48,0xb), (uVar5 & 1) == 0 &&
        (uVar5 = FUN_01ad9f1c(&local_48,0x135), (uVar5 & 1) == 0)))) {
      return 0;
    }
    if (puVar8 != (uint *)0x0) goto LAB_0341e50c;
    puVar8 = (uint *)0x0;
    uVar6 = 2;
    bVar2 = true;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0341e0e0;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (puVar8 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8), puVar8 == (uint *)0x0)
       ) goto LAB_0341e0e0;
    uVar4 = *puVar8;
    if (uVar4 == 0 || puVar8 == (uint *)(ulong)uVar4) {
LAB_0341de1c:
      uVar6 = 0;
    }
    else {
      puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar4 = puVar7[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326f18) &&
               (uVar6 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar6 < 0xf))
            goto LAB_0341de20;
          }
        }
        goto LAB_0341de1c;
      }
    }
LAB_0341de20:
    local_38 = puVar8;
    if (uVar6 != 1) {
      uVar6 = 0;
      uVar4 = *puVar8;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar4 = puVar7[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326f18) &&
                 (uVar6 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar6 < 0xf))
              goto LAB_0341dec8;
            }
          }
          uVar6 = 0;
        }
      }
LAB_0341dec8:
      if (uVar6 == 2) goto LAB_0341e50c;
      uVar6 = 0;
      uVar4 = *puVar8;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar4 = puVar7[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326f18) &&
                 (uVar6 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar6 < 0xf))
              goto LAB_0341df70;
            }
          }
          uVar6 = 0;
        }
      }
LAB_0341df70:
      if (uVar6 == 6) goto LAB_0341e50c;
      uVar6 = 0;
      uVar4 = *puVar8;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar4 = puVar7[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326f18) &&
                 (uVar6 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar6 < 0xf))
              goto LAB_0341e018;
            }
          }
          uVar6 = 0;
        }
      }
LAB_0341e018:
      if (uVar6 == 0xe) goto LAB_0341e50c;
      uVar6 = 0;
      uVar4 = *puVar8;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar4 = puVar7[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326f18) &&
                 (uVar6 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar6 < 0xf))
              goto LAB_0341e0c0;
            }
          }
          uVar6 = 0;
        }
      }
LAB_0341e0c0:
      if (uVar6 == 3) goto LAB_0341e50c;
      uVar6 = 0;
      uVar4 = *puVar8;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar4 = puVar7[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326f18) &&
                 (uVar6 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar6 < 0xf))
              goto LAB_0341e4ac;
            }
          }
          uVar6 = 0;
        }
      }
      goto LAB_0341e4ac;
    }
LAB_0341e50c:
    uVar4 = *puVar8;
    uVar6 = 0;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar4 = puVar7[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05327190) &&
               (uVar6 = *(ushort *)(DAT_05327198 + (long)(int)uVar1 * 2), uVar6 < 0x13e))
            goto LAB_0341e598;
          }
        }
        uVar6 = 0;
      }
    }
LAB_0341e598:
    if (uVar6 == 0x135) {
      return 1;
    }
    uVar4 = *puVar8;
    uVar6 = 0;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      if ((*puVar7 == 0) || ((uVar4 = puVar7[1], uVar4 == 0 || ((ulong)(ushort)puVar7[2] == 0)))) {
LAB_0341e640:
        uVar6 = 0;
      }
      else {
        lVar9 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
        uVar6 = 0;
        if (lVar9 != 0) {
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
          }
          if (*puVar7 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if (DAT_05327180 <= uVar1) goto LAB_0341e640;
          uVar6 = *(ushort *)(DAT_05327188 + (long)(int)uVar1 * 2);
          if (2 < uVar6) {
            bVar2 = false;
            uVar6 = 0;
            goto LAB_0341e188;
          }
        }
      }
    }
    bVar2 = false;
  }
LAB_0341e188:
  if (uVar6 != 0) {
    return 0;
  }
  if (!bVar2) {
    uVar4 = *puVar8;
    uVar6 = 0;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar4 = puVar7[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0341e280;
          }
        }
        uVar6 = 0;
      }
    }
LAB_0341e280:
    if (uVar6 == 0x74) {
      return 0;
    }
    uVar6 = 0;
    uVar4 = *puVar8;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar4 = puVar7[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0341e328;
          }
        }
        uVar6 = 0;
      }
    }
LAB_0341e328:
    if (uVar6 == 0x75) {
      return 0;
    }
    if (!bVar2) {
      uVar4 = *puVar8;
      uVar6 = 0;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar4 = puVar7[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0341e6d8;
            }
          }
          uVar6 = 0;
        }
      }
LAB_0341e6d8:
      if (uVar6 == 0x72) {
        return 0;
      }
      uVar6 = 0;
      uVar4 = *puVar8;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar7 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        uVar6 = 0;
        if (*puVar7 != 0) {
          uVar4 = puVar7[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar7 + lVar9 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)puVar8 - lVar9) / (ulong)uVar4);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0341e36c;
            }
          }
          uVar6 = 0;
        }
      }
      goto LAB_0341e36c;
    }
  }
  uVar6 = 0xbc;
LAB_0341e36c:
  if ((((((uVar6 == 0xa4) || (uVar5 = FUN_01ad6a30(&local_48,0xa5), (uVar5 & 1) != 0)) ||
        (uVar5 = FUN_01ad6a30(&local_48,0xa6), (uVar5 & 1) != 0)) ||
       (((uVar5 = FUN_01ad6a30(&local_48,0xa7), (uVar5 & 1) != 0 ||
         (uVar5 = FUN_01ad9f1c(&local_48,0x5d), (uVar5 & 1) != 0)) ||
        ((uVar5 = FUN_01ad9f1c(&local_48,0x5e), (uVar5 & 1) != 0 ||
         ((uVar5 = FUN_01ad9f1c(&local_48,0x5f), (uVar5 & 1) != 0 ||
          (uVar5 = FUN_01ad9f1c(&local_48,0x60), (uVar5 & 1) != 0)))))))) ||
      (uVar5 = FUN_01ad9f1c(&local_48,0x61), (uVar5 & 1) != 0)) ||
     ((uVar5 = FUN_01ad9f1c(&local_48,0x62), (uVar5 & 1) != 0 ||
      (uVar5 = FUN_01ad9f1c(&local_48,99), (uVar5 & 1) != 0)))) {
    return 0;
  }
  return 1;
}

