
undefined8 FUN_0342bdc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ushort uVar7;
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
LAB_0342be8c:
    puVar12 = (uint *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0342be8c;
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar4) goto LAB_0342be8c;
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
  if (*(long *)puVar3 == 0) {
LAB_0342bf30:
    puVar10 = (uint *)0x0;
joined_r0x0342bf38:
    if (puVar12 == (uint *)0x0) goto LAB_0342bf3c;
LAB_0342bf50:
    uVar4 = *puVar12;
    uVar7 = 0;
    if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
      puVar8 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
      uVar7 = 0;
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
            if ((uVar2 < DAT_05326ec0) &&
               (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
            goto LAB_0342bfdc;
          }
        }
        uVar7 = 0;
      }
    }
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar4) goto LAB_0342bf30;
    if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
      puVar10 = (uint *)0x0;
      goto joined_r0x0342bf38;
    }
    lVar11 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (*(uint *)(lVar11 + 0x1d8) <= uVar4) goto LAB_0342bf30;
    puVar10 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
    if (puVar10 == (uint *)0x0) goto joined_r0x0342bf38;
    local_60 = puVar10;
    if (puVar12 != (uint *)0x0) goto LAB_0342bf50;
LAB_0342bf3c:
    uVar7 = 0xbc;
  }
LAB_0342bfdc:
  if (uVar7 == 0) {
LAB_0342c0a0:
    if (puVar12 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar4 = *puVar12;
      uVar7 = 0;
      if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
        puVar8 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
        uVar7 = 0;
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
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
              goto LAB_0342c13c;
            }
          }
          uVar7 = 0;
        }
      }
    }
LAB_0342c13c:
    if (uVar7 == 0) {
      if (puVar10 == (uint *)0x0) {
        uVar7 = 0xbc;
      }
      else {
        uVar4 = *puVar10;
        uVar7 = 0;
        if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
          uVar7 = 0;
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
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                goto LAB_0342c1ec;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_0342c1ec:
      if (uVar7 == 0) goto LAB_0342c200;
    }
    else {
LAB_0342c200:
      if (puVar12 == (uint *)0x0) {
        uVar7 = 0xbc;
      }
      else {
        uVar4 = *puVar12;
        uVar7 = 0;
        if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
          uVar7 = 0;
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
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                goto LAB_0342c2a0;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_0342c2a0:
      if (uVar7 != 0x2a) {
        if (puVar10 == (uint *)0x0) {
          uVar7 = 0xbc;
        }
        else {
          uVar4 = *puVar10;
          uVar7 = 0;
          if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
            uVar7 = 0;
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
                    uVar2 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                  goto LAB_0342c350;
                }
              }
              uVar7 = 0;
            }
          }
        }
LAB_0342c350:
        if (uVar7 == 0x2a) goto LAB_0342ca6c;
      }
      if (puVar12 == (uint *)0x0) {
        uVar7 = 0xbc;
      }
      else {
        uVar4 = *puVar12;
        uVar7 = 0;
        if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
          uVar7 = 0;
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
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                goto LAB_0342c400;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_0342c400:
      if (uVar7 == 0x2a) {
        if (puVar10 == (uint *)0x0) {
          uVar7 = 0xbc;
        }
        else {
          uVar4 = *puVar10;
          uVar7 = 0;
          if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
            uVar7 = 0;
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
                    uVar2 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                  goto LAB_0342c4b0;
                }
              }
              uVar7 = 0;
            }
          }
        }
LAB_0342c4b0:
        if (uVar7 != 0x2a) goto LAB_0342ca84;
      }
      uVar5 = FUN_01af55a0(&local_58);
      if (((uVar5 & 1) == 0) && (uVar5 = FUN_01af55a0(&local_70), (uVar5 & 1) != 0))
      goto LAB_0342ca6c;
      uVar5 = FUN_01af55a0(&local_58);
      if (((uVar5 & 1) == 0) || (uVar5 = FUN_01af55a0(&local_70), (uVar5 & 1) != 0)) {
        if (puVar12 == (uint *)0x0) {
          uVar7 = 0xbc;
        }
        else {
          uVar4 = *puVar12;
          uVar7 = 0;
          if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
            uVar7 = 0;
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
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                  goto LAB_0342c594;
                }
              }
              uVar7 = 0;
            }
          }
        }
LAB_0342c594:
        if (uVar7 != 0x72) {
          if (puVar10 == (uint *)0x0) {
            uVar7 = 0xbc;
          }
          else {
            uVar4 = *puVar10;
            uVar7 = 0;
            if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
              puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
              uVar7 = 0;
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
                      uVar2 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar4);
                    }
                    if (*puVar8 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < DAT_05326ec0) &&
                       (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                    goto LAB_0342c644;
                  }
                }
                uVar7 = 0;
              }
            }
          }
LAB_0342c644:
          if (uVar7 == 0x72) goto LAB_0342ca6c;
        }
        if (puVar12 == (uint *)0x0) {
          uVar7 = 0xbc;
        }
        else {
          uVar4 = *puVar12;
          uVar7 = 0;
          if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
            uVar7 = 0;
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
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                  goto LAB_0342c6f4;
                }
              }
              uVar7 = 0;
            }
          }
        }
LAB_0342c6f4:
        if (uVar7 == 0x72) {
          if (puVar10 == (uint *)0x0) {
            uVar7 = 0xbc;
          }
          else {
            uVar4 = *puVar10;
            uVar7 = 0;
            if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
              puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
              uVar7 = 0;
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
                      uVar2 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar4);
                    }
                    if (*puVar8 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < DAT_05326ec0) &&
                       (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                    goto LAB_0342c7a4;
                  }
                }
                uVar7 = 0;
              }
            }
          }
LAB_0342c7a4:
          if (uVar7 != 0x72) goto LAB_0342ca84;
        }
        if (puVar12 == (uint *)0x0) {
          uVar7 = 0xbc;
        }
        else {
          uVar4 = *puVar12;
          uVar7 = 0;
          if ((uVar4 != 0) && (puVar12 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
            uVar7 = 0;
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
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                  goto LAB_0342c854;
                }
              }
              uVar7 = 0;
            }
          }
        }
LAB_0342c854:
        if (uVar7 != 0) goto LAB_0342caa0;
        if (puVar10 == (uint *)0x0) {
          uVar7 = 0xbc;
        }
        else {
          uVar4 = *puVar10;
          uVar7 = 0;
          if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
            uVar7 = 0;
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
                    uVar2 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                  goto LAB_0342c904;
                }
              }
              uVar7 = 0;
            }
          }
        }
LAB_0342c904:
        if (uVar7 != 0) goto LAB_0342caa0;
        uVar7 = 0;
        if (((puVar12 != (uint *)0x0) && (uVar4 = *puVar12, uVar4 != 0)) &&
           (puVar12 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
          uVar7 = 0;
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
                   (uVar7 = *(ushort *)(DAT_05327198 + (long)(int)uVar2 * 2), uVar7 < 0x13e))
                goto LAB_0342c9b0;
              }
            }
            uVar7 = 0;
          }
        }
LAB_0342c9b0:
        uVar9 = 0;
        if (((puVar10 != (uint *)0x0) && (uVar4 = *puVar10, uVar4 != 0)) &&
           (puVar10 != (uint *)(ulong)uVar4)) {
          puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
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
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar4);
                }
                if (*puVar12 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05327190) &&
                   (uVar9 = *(ushort *)(DAT_05327198 + (long)(int)uVar2 * 2), uVar9 < 0x13e))
                goto LAB_0342ca50;
              }
            }
            uVar9 = 0;
          }
        }
LAB_0342ca50:
        if ((uVar7 == 0x2c) && (uVar9 != 0x2c)) goto LAB_0342ca6c;
        if ((uVar7 == 0x2c) || (uVar9 != 0x2c)) {
LAB_0342caa0:
          uVar5 = FUN_01af55a0(&local_58);
          if ((((uVar5 & 1) == 0) || (uVar5 = FUN_01af55a0(&local_70), (uVar5 & 1) == 0)) ||
             (uVar6 = FUN_03429060(param_1,param_2), (int)uVar6 == 0)) {
            uVar6 = FUN_03426770(param_1,param_2);
            return uVar6;
          }
          return uVar6;
        }
      }
    }
LAB_0342ca84:
    uVar6 = 0xffffffff;
  }
  else {
    if (puVar10 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar4 = *puVar10;
      uVar7 = 0;
      if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
        puVar8 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
        uVar7 = 0;
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
                uVar2 = (uint)((ulong)((long)puVar10 - lVar11) / (ulong)uVar4);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
              goto LAB_0342c08c;
            }
          }
          uVar7 = 0;
        }
      }
    }
LAB_0342c08c:
    if (uVar7 != 0) goto LAB_0342c0a0;
LAB_0342ca6c:
    uVar6 = 1;
  }
  return uVar6;
}

