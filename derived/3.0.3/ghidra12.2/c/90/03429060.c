
undefined8 FUN_03429060(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined *puVar4;
  uint *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  ushort uVar9;
  ushort uVar10;
  uint *puVar11;
  uint *puVar12;
  long lVar13;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  uint *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_48 = (uint *)0x0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  local_58 = puVar1;
  uVar6 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar4 == 0) {
LAB_0342912c:
    puVar12 = (uint *)0x0;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0342912c;
    lVar13 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(param_1);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if (*(uint *)(lVar13 + 0x1d8) <= uVar6) goto LAB_0342912c;
    puVar12 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8);
    if (puVar12 != (uint *)0x0) {
      local_48 = puVar12;
    }
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  lVar13 = *(long *)puVar4;
  local_60 = (uint *)0x0;
  local_70 = puVar1;
  uVar6 = FUN_0277d6c4(&local_68);
  puVar8 = (uint *)0x0;
  if (*(long *)puVar4 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
      puVar8 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_2);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (*(uint *)(lVar13 + 0x1d8) <= uVar6) goto LAB_034291c8;
        puVar8 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8);
        if (puVar8 != (uint *)0x0) {
          local_60 = puVar8;
        }
      }
    }
    else {
LAB_034291c8:
      puVar8 = (uint *)0x0;
    }
  }
  puVar5 = local_48;
  uVar9 = 0x10;
  if (DAT_0575251c == '\0') {
    uVar9 = 0;
  }
  if (puVar12 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *puVar12;
    uVar10 = 0;
    if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_0342927c;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_0342927c:
  if (uVar10 != uVar9) {
    if (puVar8 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar6 = *puVar8;
      uVar10 = 0;
      if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
        puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
        uVar10 = 0;
        if (*puVar11 != 0) {
          uVar6 = puVar11[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar13 != 0) {
              uVar3 = 0;
              if ((ulong)uVar6 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar13) / (ulong)uVar6);
              }
              if (*puVar11 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
              goto LAB_0342932c;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_0342932c:
    if (uVar10 == uVar9) {
      return 1;
    }
  }
  if (puVar12 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *puVar12;
    uVar10 = 0;
    if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_034293dc;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_034293dc:
  if (uVar10 == uVar9) {
    if (puVar8 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar6 = *puVar8;
      uVar10 = 0;
      if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
        puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
        uVar10 = 0;
        if (*puVar11 != 0) {
          uVar6 = puVar11[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar13 != 0) {
              uVar3 = 0;
              if ((ulong)uVar6 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar13) / (ulong)uVar6);
              }
              if (*puVar11 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
              goto LAB_0342948c;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_0342948c:
    if (uVar10 != uVar9) {
      return 0xffffffff;
    }
  }
  uVar9 = 0x11;
  if (DAT_05752520 == '\0') {
    uVar9 = 0;
  }
  if (puVar12 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *puVar12;
    uVar10 = 0;
    if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_03429550;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_03429550:
  if (uVar10 != uVar9) {
    if (puVar8 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar6 = *puVar8;
      uVar10 = 0;
      if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
        puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
        uVar10 = 0;
        if (*puVar11 != 0) {
          uVar6 = puVar11[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar13 != 0) {
              uVar3 = 0;
              if ((ulong)uVar6 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar13) / (ulong)uVar6);
              }
              if (*puVar11 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
              goto LAB_03429600;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_03429600:
    if (uVar10 == uVar9) {
      return 1;
    }
  }
  if (puVar12 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *puVar12;
    uVar10 = 0;
    if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_034296b0;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_034296b0:
  if (uVar10 == uVar9) {
    if (puVar8 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar6 = *puVar8;
      uVar10 = 0;
      if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
        puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
        uVar10 = 0;
        if (*puVar11 != 0) {
          uVar6 = puVar11[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar13 != 0) {
              uVar3 = 0;
              if ((ulong)uVar6 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar13) / (ulong)uVar6);
              }
              if (*puVar11 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
              goto LAB_03429760;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_03429760:
    if (uVar10 != uVar9) {
      return 0xffffffff;
    }
  }
  uVar9 = 0x12;
  if (DAT_05752524 == '\0') {
    uVar9 = 0;
  }
  if (puVar12 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *puVar12;
    uVar10 = 0;
    if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_03429824;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_03429824:
  if (uVar10 != uVar9) {
    if (puVar8 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar6 = *puVar8;
      uVar10 = 0;
      if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
        puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
        uVar10 = 0;
        if (*puVar11 != 0) {
          uVar6 = puVar11[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar13 != 0) {
              uVar3 = 0;
              if ((ulong)uVar6 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar13) / (ulong)uVar6);
              }
              if (*puVar11 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
              goto LAB_034298d4;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_034298d4:
    if (uVar10 == uVar9) {
      return 1;
    }
  }
  if (puVar12 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *puVar12;
    uVar10 = 0;
    if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_03429984;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_03429984:
  if (uVar10 == uVar9) {
    if (puVar8 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar6 = *puVar8;
      uVar10 = 0;
      if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
        puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
        uVar10 = 0;
        if (*puVar11 != 0) {
          uVar6 = puVar11[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar13 != 0) {
              uVar3 = 0;
              if ((ulong)uVar6 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar13) / (ulong)uVar6);
              }
              if (*puVar11 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
              goto LAB_03429a34;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_03429a34:
    if (uVar10 != uVar9) {
      return 0xffffffff;
    }
  }
  uVar9 = 9;
  if (DAT_05752528 == '\0') {
    uVar9 = 0;
  }
  if (puVar12 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *puVar12;
    uVar10 = 0;
    if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_03429af8;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_03429af8:
  if (uVar10 != uVar9) {
    if (puVar8 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar6 = *puVar8;
      uVar10 = 0;
      if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
        puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
        uVar10 = 0;
        if (*puVar11 != 0) {
          uVar6 = puVar11[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar13 != 0) {
              uVar3 = 0;
              if ((ulong)uVar6 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar13) / (ulong)uVar6);
              }
              if (*puVar11 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
              goto LAB_03429ba8;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_03429ba8:
    if (uVar10 == uVar9) {
      return 1;
    }
  }
  if (puVar12 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *puVar12;
    uVar10 = 0;
    if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_03429c58;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_03429c58:
  if (uVar10 == uVar9) {
    if (puVar8 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar6 = *puVar8;
      uVar10 = 0;
      if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
        puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
        uVar10 = 0;
        if (*puVar11 != 0) {
          uVar6 = puVar11[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar13 != 0) {
              uVar3 = 0;
              if ((ulong)uVar6 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar13) / (ulong)uVar6);
              }
              if (*puVar11 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
              goto LAB_03429d08;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_03429d08:
    if (uVar10 != uVar9) {
      return 0xffffffff;
    }
  }
  uVar9 = 0xd;
  if (DAT_0575252c == '\0') {
    uVar9 = 0;
  }
  if (puVar12 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *puVar12;
    uVar10 = 0;
    if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_03429dcc;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_03429dcc:
  if (uVar10 != uVar9) {
    if (puVar8 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar6 = *puVar8;
      uVar10 = 0;
      if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
        puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
        uVar10 = 0;
        if (*puVar11 != 0) {
          uVar6 = puVar11[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar13 != 0) {
              uVar3 = 0;
              if ((ulong)uVar6 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar13) / (ulong)uVar6);
              }
              if (*puVar11 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
              goto LAB_03429e7c;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_03429e7c:
    if (uVar10 == uVar9) {
      return 1;
    }
  }
  if (puVar12 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *puVar12;
    uVar10 = 0;
    if ((uVar6 != 0) && (puVar12 != (uint *)(ulong)uVar6)) {
      puVar11 = (uint *)((long)puVar12 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar6 = puVar11[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar6);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_03429f2c;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_03429f2c:
  if (uVar10 == uVar9) {
    if (puVar8 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar6 = *puVar8;
      uVar10 = 0;
      if ((uVar6 != 0) && (puVar8 != (uint *)(ulong)uVar6)) {
        puVar12 = (uint *)((long)puVar8 - (long)(ulong)uVar6);
        uVar10 = 0;
        if (*puVar12 != 0) {
          uVar6 = puVar12[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar13 != 0) {
              uVar3 = 0;
              if ((ulong)uVar6 != 0) {
                uVar3 = (uint)((ulong)((long)puVar8 - lVar13) / (ulong)uVar6);
              }
              if (*puVar12 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
              goto LAB_03429fdc;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_03429fdc:
    if (uVar10 != uVar9) {
      return 0xffffffff;
    }
  }
  uVar9 = 10;
  if (DAT_05752530 == '\0') {
    uVar9 = 0;
  }
  if (local_48 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *local_48;
    uVar10 = 0;
    if ((uVar6 != 0) && (local_48 != (uint *)(ulong)uVar6)) {
      puVar12 = (uint *)((long)local_48 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar12 != 0) {
        uVar6 = puVar12[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)local_48 - lVar13) / (ulong)uVar6);
            }
            if (*puVar12 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_0342a0a4;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_0342a0a4:
  if (uVar10 != uVar9) {
    if (local_60 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar6 = *local_60;
      uVar10 = 0;
      if ((uVar6 != 0) && (local_60 != (uint *)(ulong)uVar6)) {
        puVar12 = (uint *)((long)local_60 - (long)(ulong)uVar6);
        uVar10 = 0;
        if (*puVar12 != 0) {
          uVar6 = puVar12[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar13 != 0) {
              uVar3 = 0;
              if ((ulong)uVar6 != 0) {
                uVar3 = (uint)((ulong)((long)local_60 - lVar13) / (ulong)uVar6);
              }
              if (*puVar12 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
              goto LAB_0342a158;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_0342a158:
    if (uVar10 == uVar9) {
      return 1;
    }
  }
  if (local_48 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *local_48;
    uVar10 = 0;
    if ((uVar6 != 0) && (local_48 != (uint *)(ulong)uVar6)) {
      puVar12 = (uint *)((long)local_48 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar12 != 0) {
        uVar6 = puVar12[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)local_48 - lVar13) / (ulong)uVar6);
            }
            if (*puVar12 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_0342a208;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_0342a208:
  if (uVar10 == uVar9) {
    if (local_60 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar6 = *local_60;
      uVar10 = 0;
      if ((uVar6 != 0) && (local_60 != (uint *)(ulong)uVar6)) {
        puVar12 = (uint *)((long)local_60 - (long)(ulong)uVar6);
        uVar10 = 0;
        if (*puVar12 != 0) {
          uVar6 = puVar12[1];
          if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar13 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar13 != 0) {
              uVar3 = 0;
              if ((ulong)uVar6 != 0) {
                uVar3 = (uint)((ulong)((long)local_60 - lVar13) / (ulong)uVar6);
              }
              if (*puVar12 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
              goto LAB_0342a2bc;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_0342a2bc:
    if (uVar10 != uVar9) {
      return 0xffffffff;
    }
  }
  uVar9 = 0xf;
  if (DAT_05752534 == '\0') {
    uVar9 = 0;
  }
  if (local_48 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *local_48;
    uVar10 = 0;
    if ((uVar6 != 0) && (local_48 != (uint *)(ulong)uVar6)) {
      puVar12 = (uint *)((long)local_48 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar12 != 0) {
        uVar6 = puVar12[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)local_48 - lVar13) / (ulong)uVar6);
            }
            if (*puVar12 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_0342a380;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_0342a380:
  if (uVar10 != uVar9) {
    uVar7 = FUN_01ad6a30(&local_70);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
    uVar9 = 0xf;
    if (DAT_05752534 == '\0') {
      uVar9 = 0;
    }
  }
  if (puVar5 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar6 = *puVar5;
    uVar10 = 0;
    if ((uVar6 != 0) && (puVar5 != (uint *)(ulong)uVar6)) {
      puVar12 = (uint *)((long)puVar5 - (long)(ulong)uVar6);
      uVar10 = 0;
      if (*puVar12 != 0) {
        uVar6 = puVar12[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar12 + lVar13 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar6 != 0) {
              uVar3 = (uint)((ulong)((long)puVar5 - lVar13) / (ulong)uVar6);
            }
            if (*puVar12 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar10 < 0xbd))
            goto LAB_0342a44c;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_0342a44c:
  if ((uVar10 == uVar9) && (uVar7 = FUN_01ad6a30(&local_70), (uVar7 & 1) == 0)) {
    return 0xffffffff;
  }
  uVar2 = 0xe;
  if (DAT_05752538 == '\0') {
    uVar2 = 0;
  }
  uVar7 = FUN_01ad6a30(&local_58,uVar2);
  if ((uVar7 & 1) == 0) {
    uVar2 = 0xe;
    if (DAT_05752538 == '\0') {
      uVar2 = 0;
    }
    uVar7 = FUN_01ad6a30(&local_70,uVar2);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
  }
  uVar2 = 0xe;
  if (DAT_05752538 == '\0') {
    uVar2 = 0;
  }
  uVar7 = FUN_01ad6a30(&local_58,uVar2);
  if ((uVar7 & 1) != 0) {
    uVar2 = 0xe;
    if (DAT_05752538 == '\0') {
      uVar2 = 0;
    }
    uVar7 = FUN_01ad6a30(&local_70,uVar2);
    if ((uVar7 & 1) == 0) {
      return 0xffffffff;
    }
  }
  uVar2 = 0x13;
  if (DAT_0575253c == '\0') {
    uVar2 = 0;
  }
  uVar7 = FUN_01ad6a30(&local_58,uVar2);
  if ((uVar7 & 1) == 0) {
    uVar2 = 0x13;
    if (DAT_0575253c == '\0') {
      uVar2 = 0;
    }
    uVar7 = FUN_01ad6a30(&local_70,uVar2);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
  }
  uVar2 = 0x13;
  if (DAT_0575253c == '\0') {
    uVar2 = 0;
  }
  uVar7 = FUN_01ad6a30(&local_58,uVar2);
  if ((uVar7 & 1) != 0) {
    uVar2 = 0x13;
    if (DAT_0575253c == '\0') {
      uVar2 = 0;
    }
    uVar7 = FUN_01ad6a30(&local_70,uVar2);
    if ((uVar7 & 1) == 0) {
      return 0xffffffff;
    }
  }
  uVar2 = 0xb;
  if (DAT_05752540 == '\0') {
    uVar2 = 0;
  }
  uVar7 = FUN_01ad6a30(&local_58,uVar2);
  if ((uVar7 & 1) == 0) {
    uVar2 = 0xb;
    if (DAT_05752540 == '\0') {
      uVar2 = 0;
    }
    uVar7 = FUN_01ad6a30(&local_70,uVar2);
    if ((uVar7 & 1) != 0) {
      return 1;
    }
  }
  uVar2 = 0xb;
  if (DAT_05752540 == '\0') {
    uVar2 = 0;
  }
  uVar7 = FUN_01ad6a30(&local_58,uVar2);
  if ((uVar7 & 1) != 0) {
    uVar2 = 0xb;
    if (DAT_05752540 == '\0') {
      uVar2 = 0;
    }
    uVar7 = FUN_01ad6a30(&local_70,uVar2);
    if ((uVar7 & 1) == 0) {
      return 0xffffffff;
    }
  }
  return 0;
}

