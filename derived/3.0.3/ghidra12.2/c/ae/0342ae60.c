
undefined8 FUN_0342ae60(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ushort uVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint *puVar11;
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
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  local_58 = puVar1;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 == 0) {
LAB_0342af2c:
    puVar10 = (uint *)0x0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0342af2c;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (*(uint *)(lVar9 + 0x1d8) <= uVar4) goto LAB_0342af2c;
    puVar10 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
    if (puVar10 != (uint *)0x0) {
      local_48 = puVar10;
    }
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  lVar9 = *(long *)puVar3;
  local_60 = (uint *)0x0;
  local_70 = puVar1;
  uVar4 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 == 0) {
LAB_0342afc8:
    puVar11 = (uint *)0x0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((*(uint *)(lVar9 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0342afc8;
    lVar9 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if (*(uint *)(lVar9 + 0x1d8) <= uVar4) goto LAB_0342afc8;
    puVar11 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8);
    if (puVar11 != (uint *)0x0) {
      local_60 = puVar11;
    }
  }
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
          lVar9 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
          if (lVar9 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
            }
            if (*puVar8 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
            goto LAB_0342b06c;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_0342b06c:
  if (uVar7 == 0x61) {
LAB_0342b130:
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
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar9 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
              goto LAB_0342b1cc;
            }
          }
          uVar7 = 0;
        }
      }
    }
LAB_0342b1cc:
    if (uVar7 == 0x61) {
      if (puVar11 == (uint *)0x0) {
        uVar7 = 0xbc;
      }
      else {
        uVar4 = *puVar11;
        uVar7 = 0;
        if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
          puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
          uVar7 = 0;
          if (*puVar8 != 0) {
            uVar4 = puVar8[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar11 - lVar9) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                goto LAB_0342b27c;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_0342b27c:
      if (uVar7 == 0x61) goto LAB_0342b290;
    }
    else {
LAB_0342b290:
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
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                goto LAB_0342b32c;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_0342b32c:
      if (uVar7 != 0) {
        if (puVar11 == (uint *)0x0) {
          uVar7 = 0xbc;
        }
        else {
          uVar4 = *puVar11;
          uVar7 = 0;
          if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            uVar7 = 0;
            if (*puVar8 != 0) {
              uVar4 = puVar8[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar9 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar11 - lVar9) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                  goto LAB_0342b3dc;
                }
              }
              uVar7 = 0;
            }
          }
        }
LAB_0342b3dc:
        if (uVar7 == 0) goto LAB_0342bd44;
      }
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
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                goto LAB_0342b48c;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_0342b48c:
      if (uVar7 == 0) {
        if (puVar11 == (uint *)0x0) {
          uVar7 = 0xbc;
        }
        else {
          uVar4 = *puVar11;
          uVar7 = 0;
          if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            uVar7 = 0;
            if (*puVar8 != 0) {
              uVar4 = puVar8[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar9 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar11 - lVar9) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                  goto LAB_0342b53c;
                }
              }
              uVar7 = 0;
            }
          }
        }
LAB_0342b53c:
        if (uVar7 != 0) goto LAB_0342bd9c;
      }
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
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                goto LAB_0342b5f0;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_0342b5f0:
      if (uVar7 != 0x1e) {
        if (puVar11 == (uint *)0x0) {
          uVar7 = 0xbc;
        }
        else {
          uVar4 = *puVar11;
          uVar7 = 0;
          if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            uVar7 = 0;
            if (*puVar8 != 0) {
              uVar4 = puVar8[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar9 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar11 - lVar9) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                  goto LAB_0342b6a4;
                }
              }
              uVar7 = 0;
            }
          }
        }
LAB_0342b6a4:
        if (uVar7 == 0x1e) goto LAB_0342bd44;
      }
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
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
                }
                if (*puVar8 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                goto LAB_0342b758;
              }
            }
            uVar7 = 0;
          }
        }
      }
LAB_0342b758:
      if (uVar7 == 0x1e) {
        if (puVar11 == (uint *)0x0) {
          uVar7 = 0xbc;
        }
        else {
          uVar4 = *puVar11;
          uVar7 = 0;
          if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            uVar7 = 0;
            if (*puVar8 != 0) {
              uVar4 = puVar8[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar9 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)puVar11 - lVar9) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                  goto LAB_0342b80c;
                }
              }
              uVar7 = 0;
            }
          }
        }
LAB_0342b80c:
        if (uVar7 != 0x1e) goto LAB_0342bd9c;
      }
      uVar5 = FUN_01adba10(&local_58,0);
      if (((uVar5 & 1) == 0) && (uVar5 = FUN_01adba10(&local_70,0), (uVar5 & 1) != 0))
      goto LAB_0342bd44;
      uVar5 = FUN_01adba10(&local_58,0);
      if (((uVar5 & 1) == 0) || (uVar5 = FUN_01adba10(&local_70,0), (uVar5 & 1) != 0)) {
        uVar5 = FUN_01af55a0(&local_58);
        if (((uVar5 & 1) == 0) && (uVar5 = FUN_01af55a0(&local_70), (uVar5 & 1) != 0))
        goto LAB_0342bd44;
        uVar5 = FUN_01af55a0(&local_58);
        if (((uVar5 & 1) == 0) || (uVar5 = FUN_01af55a0(&local_70), (uVar5 & 1) != 0)) {
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
                  lVar9 = 0xc;
                  if (*(char *)((long)puVar8 + 10) != '\0') {
                    lVar9 = 0x1c;
                  }
                  lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                  if (lVar9 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
                    }
                    if (*puVar8 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < DAT_05326ec0) &&
                       (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                    goto LAB_0342b930;
                  }
                }
                uVar7 = 0;
              }
            }
          }
LAB_0342b930:
          if (uVar7 != 4) {
            if (puVar11 == (uint *)0x0) {
              uVar7 = 0xbc;
            }
            else {
              uVar4 = *puVar11;
              uVar7 = 0;
              if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
                puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
                uVar7 = 0;
                if (*puVar8 != 0) {
                  uVar4 = puVar8[1];
                  if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                    lVar9 = 0xc;
                    if (*(char *)((long)puVar8 + 10) != '\0') {
                      lVar9 = 0x1c;
                    }
                    lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                    if (lVar9 != 0) {
                      uVar2 = 0;
                      if ((ulong)uVar4 != 0) {
                        uVar2 = (uint)((ulong)((long)puVar11 - lVar9) / (ulong)uVar4);
                      }
                      if (*puVar8 <= uVar2) {
                        uVar2 = 0xffffffff;
                      }
                      if ((uVar2 < DAT_05326ec0) &&
                         (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                      goto LAB_0342b9e4;
                    }
                  }
                  uVar7 = 0;
                }
              }
            }
LAB_0342b9e4:
            if (uVar7 == 4) goto LAB_0342bd44;
          }
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
                  lVar9 = 0xc;
                  if (*(char *)((long)puVar8 + 10) != '\0') {
                    lVar9 = 0x1c;
                  }
                  lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                  if (lVar9 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
                    }
                    if (*puVar8 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < DAT_05326ec0) &&
                       (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                    goto LAB_0342ba98;
                  }
                }
                uVar7 = 0;
              }
            }
          }
LAB_0342ba98:
          if (uVar7 == 4) {
            if (puVar11 == (uint *)0x0) {
              uVar7 = 0xbc;
            }
            else {
              uVar4 = *puVar11;
              uVar7 = 0;
              if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
                puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
                uVar7 = 0;
                if (*puVar8 != 0) {
                  uVar4 = puVar8[1];
                  if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                    lVar9 = 0xc;
                    if (*(char *)((long)puVar8 + 10) != '\0') {
                      lVar9 = 0x1c;
                    }
                    lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
                    if (lVar9 != 0) {
                      uVar2 = 0;
                      if ((ulong)uVar4 != 0) {
                        uVar2 = (uint)((ulong)((long)puVar11 - lVar9) / (ulong)uVar4);
                      }
                      if (*puVar8 <= uVar2) {
                        uVar2 = 0xffffffff;
                      }
                      if ((uVar2 < DAT_05326ec0) &&
                         (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                      goto LAB_0342bb4c;
                    }
                  }
                  uVar7 = 0;
                }
              }
            }
LAB_0342bb4c:
            if (uVar7 != 4) goto LAB_0342bd9c;
          }
          if (puVar10 == (uint *)0x0) {
            uVar7 = 0xbc;
          }
          else {
            uVar4 = *puVar10;
            uVar7 = 0;
            if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
              puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
              uVar7 = 0;
              if (*puVar11 != 0) {
                uVar4 = puVar11[1];
                if ((uVar4 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                  lVar9 = 0xc;
                  if (*(char *)((long)puVar11 + 10) != '\0') {
                    lVar9 = 0x1c;
                  }
                  lVar9 = (long)puVar11 + lVar9 + (ulong)(ushort)puVar11[2] * 8;
                  if (lVar9 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
                    }
                    if (*puVar11 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < DAT_05326ec0) &&
                       (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                    goto LAB_0342bc00;
                  }
                }
                uVar7 = 0;
              }
            }
          }
LAB_0342bc00:
          if ((uVar7 != 5) && (uVar5 = FUN_01ad6a30(&local_70,5), (uVar5 & 1) != 0))
          goto LAB_0342bd44;
          if (puVar10 == (uint *)0x0) {
            uVar7 = 0xbc;
          }
          else {
            uVar4 = *puVar10;
            uVar7 = 0;
            if ((uVar4 != 0) && (puVar10 != (uint *)(ulong)uVar4)) {
              puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar4);
              uVar7 = 0;
              if (*puVar11 != 0) {
                uVar4 = puVar11[1];
                if ((uVar4 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                  lVar9 = 0xc;
                  if (*(char *)((long)puVar11 + 10) != '\0') {
                    lVar9 = 0x1c;
                  }
                  lVar9 = (long)puVar11 + lVar9 + (ulong)(ushort)puVar11[2] * 8;
                  if (lVar9 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar4 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar10 - lVar9) / (ulong)uVar4);
                    }
                    if (*puVar11 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < DAT_05326ec0) &&
                       (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
                    goto LAB_0342bcc0;
                  }
                }
                uVar7 = 0;
              }
            }
          }
LAB_0342bcc0:
          if ((uVar7 != 5) || (uVar5 = FUN_01ad6a30(&local_70,5), (uVar5 & 1) != 0)) {
            uVar5 = FUN_01ad6a30(&local_58,6);
            if (((uVar5 & 1) == 0) && (uVar5 = FUN_01ad6a30(&local_70,6), (uVar5 & 1) != 0))
            goto LAB_0342bd44;
            uVar5 = FUN_01ad6a30(&local_58,6);
            if (((uVar5 & 1) == 0) || (uVar5 = FUN_01ad6a30(&local_70,6), (uVar5 & 1) != 0)) {
              uVar5 = FUN_01ad6a30(&local_58,0x72);
              if (((uVar5 & 1) == 0) && (uVar5 = FUN_01ad6a30(&local_70,0x72), (uVar5 & 1) != 0))
              goto LAB_0342bd44;
              uVar5 = FUN_01ad6a30(&local_58,0x72);
              if (((uVar5 & 1) == 0) || (uVar5 = FUN_01ad6a30(&local_70,0x72), (uVar5 & 1) != 0)) {
                uVar5 = FUN_01af55a0(&local_58);
                if (((uVar5 & 1) == 0) ||
                   ((uVar5 = FUN_01af55a0(&local_70), (uVar5 & 1) == 0 ||
                    (uVar6 = FUN_03429060(param_1,param_2), (int)uVar6 == 0)))) {
                  return 0;
                }
                return uVar6;
              }
            }
          }
        }
      }
    }
LAB_0342bd9c:
    uVar6 = 0xffffffff;
  }
  else {
    if (puVar11 == (uint *)0x0) {
      uVar7 = 0xbc;
    }
    else {
      uVar4 = *puVar11;
      uVar7 = 0;
      if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
        puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
        uVar7 = 0;
        if (*puVar8 != 0) {
          uVar4 = puVar8[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
            lVar9 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar9 = 0x1c;
            }
            lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar9 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)puVar11 - lVar9) / (ulong)uVar4);
              }
              if (*puVar8 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar7 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar7 < 0xbd))
              goto LAB_0342b11c;
            }
          }
          uVar7 = 0;
        }
      }
    }
LAB_0342b11c:
    if (uVar7 != 0x61) goto LAB_0342b130;
LAB_0342bd44:
    uVar6 = 1;
  }
  return uVar6;
}

