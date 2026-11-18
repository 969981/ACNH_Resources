
/* WARNING: Removing unreachable block (ram,0x03439cb4) */

ulong FUN_03439940(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  ushort uVar9;
  uint *puVar10;
  long lVar11;
  uint *puVar12;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_48 = (uint *)0x0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  local_58 = puVar1;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 == 0) {
LAB_03439a0c:
    puVar12 = (uint *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_03439a0c;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar4) goto LAB_03439a0c;
    puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
    if (puVar12 != (uint *)0x0) {
      local_48 = puVar12;
    }
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  lVar11 = *(long *)puVar3;
  local_60 = (uint *)0x0;
  local_70 = puVar1;
  uVar4 = FUN_0277d6c4(&local_68);
  puVar8 = (uint *)0x0;
  if (*(long *)puVar3 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (uVar4 < *(uint *)(lVar11 + 0x1d8)) {
      puVar8 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
        lVar11 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if (*(uint *)(lVar11 + 0x1d8) <= uVar4) goto LAB_03439aa8;
        puVar8 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
        if (puVar8 != (uint *)0x0) {
          local_60 = puVar8;
        }
      }
    }
    else {
LAB_03439aa8:
      puVar8 = (uint *)0x0;
    }
  }
  if (puVar12 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar4 = *puVar12;
    uVar9 = 0;
    if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar9 < 0xbd))
            goto LAB_03439b4c;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_03439b4c:
  if ((uVar9 != 0) && (puVar8 != (uint *)0x0)) {
    uVar4 = *puVar8;
    uVar9 = 0;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar9 < 0xbd))
            goto LAB_03439bf4;
          }
        }
        uVar9 = 0;
      }
    }
LAB_03439bf4:
    if (uVar9 == 0) {
      uVar9 = 0;
      uVar4 = *puVar8;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar12 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        uVar9 = 0;
        if (*puVar12 != 0) {
          uVar4 = puVar12[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar11 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
              }
              if (*puVar12 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05327190) &&
                 (uVar9 = *(ushort *)(DAT_05327198 + (long)(int)uVar2 * 2), uVar9 < 0x13e))
              goto LAB_03439cc0;
            }
          }
          uVar9 = 0;
        }
      }
LAB_03439cc0:
      return (ulong)(uVar9 != 0xae);
    }
  }
  if (puVar12 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar4 = *puVar12;
    uVar9 = 0;
    if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar9 < 0xbd))
            goto LAB_03439d74;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_03439d74:
  if (uVar9 == 0) {
    if (puVar8 == (uint *)0x0) {
      uVar9 = 0xbc;
    }
    else {
      uVar4 = *puVar8;
      uVar9 = 0;
      if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
        puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
        uVar9 = 0;
        if (*puVar10 != 0) {
          uVar4 = puVar10[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar11 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
              }
              if (*puVar10 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar9 < 0xbd))
              goto LAB_03439e24;
            }
          }
          uVar9 = 0;
        }
      }
    }
LAB_03439e24:
    if (uVar9 != 0) {
      uVar9 = 0;
      if (((puVar12 != (uint *)0x0) && (uVar4 = *puVar12, uVar4 != 0)) &&
         (puVar12 != (uint *)(ulong)uVar4)) {
        puVar8 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
        uVar9 = 0;
        if (*puVar8 != 0) {
          uVar4 = puVar8[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar8 + lVar11 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar11 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar4);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05327190) &&
                 (uVar9 = *(ushort *)(DAT_05327198 + (long)(int)uVar2 * 2), uVar9 < 0x13e))
              goto LAB_0343a018;
            }
          }
          uVar9 = 0;
        }
      }
LAB_0343a018:
      return (ulong)-(uint)(uVar9 != 0xae);
    }
  }
  if (puVar12 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar4 = *puVar12;
    uVar9 = 0;
    if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar9 < 0xbd))
            goto LAB_03439ed4;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_03439ed4:
  if (uVar9 != 0) {
    return 0;
  }
  if (puVar8 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar4 = *puVar8;
    uVar9 = 0;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar10 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      uVar9 = 0;
      if (*puVar10 != 0) {
        uVar4 = puVar10[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
            }
            if (*puVar10 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar9 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar9 < 0xbd))
            goto LAB_0343a034;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_0343a034:
  if (uVar9 != 0) {
    return 0;
  }
  uVar9 = 0;
  if (((puVar12 != (uint *)0x0) && (uVar4 = *puVar12, uVar4 != 0)) &&
     (puVar12 != (uint *)(ulong)uVar4)) {
    puVar10 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
    uVar9 = 0;
    if (*puVar10 != 0) {
      uVar4 = puVar10[1];
      if ((uVar4 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
        lVar11 = 0xc;
        if (*(char *)((long)puVar10 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar10 + lVar11 + (ulong)(ushort)puVar10[2] * 8;
        if (lVar11 != 0) {
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar12 - lVar11) / (ulong)uVar4);
          }
          if (*puVar10 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05327190) &&
             (uVar9 = *(ushort *)(DAT_05327198 + (long)(int)uVar2 * 2), uVar9 < 0x13e))
          goto LAB_0343a0e0;
        }
      }
      uVar9 = 0;
    }
  }
LAB_0343a0e0:
  if (uVar9 == 0xae) {
    return 1;
  }
  uVar9 = 0;
  if (((puVar8 != (uint *)0x0) && (uVar4 = *puVar8, uVar4 != 0)) && (puVar8 != (uint *)(ulong)uVar4)
     ) {
    puVar12 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
    uVar9 = 0;
    if (*puVar12 != 0) {
      uVar4 = puVar12[1];
      if ((uVar4 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
        lVar11 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar12 + lVar11 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar11 != 0) {
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar8 - lVar11) / (ulong)uVar4);
          }
          if (*puVar12 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05327190) &&
             (uVar9 = *(ushort *)(DAT_05327198 + (long)(int)uVar2 * 2), uVar9 < 0x13e))
          goto LAB_0343a190;
        }
      }
      uVar9 = 0;
    }
  }
LAB_0343a190:
  if (uVar9 == 0xae) {
    return 0xffffffff;
  }
  iVar5 = FUN_01aed730(&local_58);
  iVar6 = FUN_01aed730(&local_70);
  if (iVar5 == iVar6) {
    return 0;
  }
  uVar7 = FUN_01a4e7e0(param_1,param_2);
  return uVar7;
}

