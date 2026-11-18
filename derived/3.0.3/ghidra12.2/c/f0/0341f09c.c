
/* WARNING: Removing unreachable block (ram,0x0341f300) */
/* WARNING: Removing unreachable block (ram,0x0341f30c) */
/* WARNING: Removing unreachable block (ram,0x0341f328) */
/* WARNING: Removing unreachable block (ram,0x0341f340) */
/* WARNING: Removing unreachable block (ram,0x0341f358) */
/* WARNING: Removing unreachable block (ram,0x0341f370) */

undefined8 FUN_0341f09c(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  ushort uVar6;
  bool bVar7;
  uint *puVar8;
  long lVar9;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  uint *local_38;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_38 = (uint *)0x0;
  local_48 = PTR_DAT_04bc0510 + 0x10;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_40);
  if (*(long *)puVar2 == 0) {
LAB_0341f2d0:
    puVar5 = (uint *)0x0;
    uVar6 = 0;
    bVar7 = true;
LAB_0341f3cc:
    if (uVar6 != 0xe) {
      return 0;
    }
    if (!bVar7) goto LAB_0341f3f0;
    uVar6 = 2;
    bVar7 = true;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0341f2d0;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_2);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar3) ||
       (puVar5 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar3 * 8), puVar5 == (uint *)0x0)
       ) goto LAB_0341f2d0;
    uVar3 = *puVar5;
    if (uVar3 == 0 || puVar5 == (uint *)(ulong)uVar3) {
LAB_0341f174:
      uVar6 = 0;
    }
    else {
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar3 = puVar8[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326f18) &&
               (uVar6 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar6 < 0xf))
            goto LAB_0341f178;
          }
        }
        goto LAB_0341f174;
      }
    }
LAB_0341f178:
    local_38 = puVar5;
    if (uVar6 != 2) {
      uVar6 = 0;
      uVar3 = *puVar5;
      if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
        puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
        uVar6 = 0;
        if (*puVar8 != 0) {
          uVar3 = puVar8[1];
          if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar9 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar3);
              }
              if (*puVar8 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326f18) &&
                 (uVar6 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2), uVar6 < 0xf))
              goto LAB_0341f220;
            }
          }
          uVar6 = 0;
        }
      }
LAB_0341f220:
      if (uVar6 == 6) goto LAB_0341f3f0;
      uVar6 = 0;
      uVar3 = *puVar5;
      if ((uVar3 == 0) || (puVar5 == (uint *)(ulong)uVar3)) {
LAB_0341f744:
        bVar7 = false;
      }
      else {
        puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
        uVar6 = 0;
        if (*puVar8 == 0) goto LAB_0341f744;
        uVar3 = puVar8[1];
        if ((uVar3 == 0) || ((ulong)(ushort)puVar8[2] == 0)) {
LAB_0341f740:
          uVar6 = 0;
          goto LAB_0341f744;
        }
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
        if (lVar9 == 0) goto LAB_0341f740;
        uVar1 = 0;
        if ((ulong)uVar3 != 0) {
          uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar3);
        }
        if (*puVar8 <= uVar1) {
          uVar1 = 0xffffffff;
        }
        if (DAT_05326f18 <= uVar1) goto LAB_0341f740;
        uVar6 = *(ushort *)(DAT_05326f20 + (long)(int)uVar1 * 2);
        if (uVar6 < 0xf) goto LAB_0341f744;
        bVar7 = false;
        uVar6 = 0;
      }
      goto LAB_0341f3cc;
    }
LAB_0341f3f0:
    uVar3 = *puVar5;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      if ((*puVar8 == 0) || ((uVar3 = puVar8[1], uVar3 == 0 || ((ulong)(ushort)puVar8[2] == 0)))) {
LAB_0341f484:
        uVar6 = 0;
      }
      else {
        lVar9 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
        uVar6 = 0;
        if (lVar9 != 0) {
          uVar1 = 0;
          if ((ulong)uVar3 != 0) {
            uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar3);
          }
          if (*puVar8 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if (DAT_05327180 <= uVar1) goto LAB_0341f484;
          uVar6 = *(ushort *)(DAT_05327188 + (long)(int)uVar1 * 2);
          if (2 < uVar6) {
            bVar7 = false;
            uVar6 = 0;
            goto LAB_0341f48c;
          }
        }
      }
    }
    bVar7 = false;
  }
LAB_0341f48c:
  if (uVar6 != 0) {
    return 0;
  }
  if (bVar7) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar5;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar3 = puVar8[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0341f538;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0341f538:
  if (uVar6 == 0x74) {
    return 0;
  }
  if (bVar7) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar5;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar3 = puVar8[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0341f664;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0341f664:
  if (uVar6 == 0x75) {
    return 0;
  }
  if (bVar7) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar5;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar3 = puVar8[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0341f718;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0341f718:
  if (uVar6 == 0x72) {
    return 0;
  }
  if (bVar7) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar5;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar3 = puVar8[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0341f7d8;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0341f7d8:
  if (uVar6 == 0xa4) {
    return 0;
  }
  if (bVar7) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar5;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar8 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar8 != 0) {
        uVar3 = puVar8[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar9) / (ulong)uVar3);
            }
            if (*puVar8 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0341f37c;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0341f37c:
  if (((uVar6 == 0xa5) || (uVar4 = FUN_01ad6a30(&local_48,0xa6), (uVar4 & 1) != 0)) ||
     (uVar4 = FUN_01ad6a30(&local_48,0xa7), (uVar4 & 1) != 0)) {
    return 0;
  }
  return 1;
}

