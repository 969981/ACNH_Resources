
undefined8 FUN_03437380(undefined4 *param_1,uint *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint *puVar9;
  ushort uVar10;
  long lVar11;
  uint local_78;
  uint uStack_74;
  undefined *local_70;
  uint local_68;
  uint uStack_64;
  uint *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_48 = (uint *)0x0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  local_58 = puVar1;
  uVar4 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar9 != (uint *)0x0)) {
        local_48 = puVar9;
      }
    }
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  lVar11 = *(long *)puVar3;
  local_60 = (uint *)0x0;
  local_70 = puVar1;
  uVar4 = FUN_0277d6c4(&local_68);
  if (*(long *)puVar3 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (puVar9 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar9 != (uint *)0x0)) {
        local_60 = puVar9;
      }
    }
  }
  if (local_48 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar4 = *local_48;
    uVar10 = 0;
    if ((uVar4 != 0) && (local_48 != (uint *)(ulong)uVar4)) {
      puVar9 = (uint *)((long)local_48 - (long)(ulong)uVar4);
      uVar10 = 0;
      if (*puVar9 != 0) {
        uVar4 = puVar9[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar11 != 0) {
            uVar2 = 0;
            if ((ulong)uVar4 != 0) {
              uVar2 = (uint)((ulong)((long)local_48 - lVar11) / (ulong)uVar4);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar10 < 0xbd))
            goto LAB_03437580;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_03437580:
  if (uVar10 == 0x94) {
LAB_03437648:
    if (local_48 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar4 = *local_48;
      uVar10 = 0;
      if ((uVar4 != 0) && (local_48 != (uint *)(ulong)uVar4)) {
        puVar9 = (uint *)((long)local_48 - (long)(ulong)uVar4);
        uVar10 = 0;
        if (*puVar9 != 0) {
          uVar4 = puVar9[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar11 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)local_48 - lVar11) / (ulong)uVar4);
              }
              if (*puVar9 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar10 < 0xbd))
              goto LAB_034376e4;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_034376e4:
    if (uVar10 == 0x94) {
      if (local_60 == (uint *)0x0) {
        uVar10 = 0xbc;
      }
      else {
        uVar4 = *local_60;
        uVar10 = 0;
        if ((uVar4 != 0) && (local_60 != (uint *)(ulong)uVar4)) {
          puVar9 = (uint *)((long)local_60 - (long)(ulong)uVar4);
          uVar10 = 0;
          if (*puVar9 != 0) {
            uVar4 = puVar9[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar11 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)local_60 - lVar11) / (ulong)uVar4);
                }
                if (*puVar9 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar10 < 0xbd))
                goto LAB_03437798;
              }
            }
            uVar10 = 0;
          }
        }
      }
LAB_03437798:
      if (uVar10 == 0x94) goto LAB_034377ac;
    }
    else {
LAB_034377ac:
      if (local_48 == (uint *)0x0) {
        uVar10 = 0xbc;
      }
      else {
        uVar4 = *local_48;
        uVar10 = 0;
        if ((uVar4 != 0) && (local_48 != (uint *)(ulong)uVar4)) {
          puVar9 = (uint *)((long)local_48 - (long)(ulong)uVar4);
          uVar10 = 0;
          if (*puVar9 != 0) {
            uVar4 = puVar9[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar11 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)local_48 - lVar11) / (ulong)uVar4);
                }
                if (*puVar9 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar10 < 0xbd))
                goto LAB_03437848;
              }
            }
            uVar10 = 0;
          }
        }
      }
LAB_03437848:
      if (uVar10 == 0x94) {
        local_28 = 0x94;
        if (local_60 == (uint *)0x0) {
          local_78 = 0xbc;
        }
        else {
          uVar4 = *local_60;
          local_78 = 0;
          if ((uVar4 != 0) && (local_60 != (uint *)(ulong)uVar4)) {
            puVar9 = (uint *)((long)local_60 - (long)(ulong)uVar4);
            local_78 = 0;
            if (*puVar9 != 0) {
              uVar4 = puVar9[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                lVar11 = 0xc;
                if (*(char *)((long)puVar9 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
                if (lVar11 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)local_60 - lVar11) / (ulong)uVar4);
                  }
                  if (*puVar9 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (local_78 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2),
                     local_78 < 0xbd)) goto LAB_034378fc;
                }
              }
              local_78 = 0;
            }
          }
        }
LAB_034378fc:
        if (local_78 == 0x94) {
          iVar5 = FUN_01aed730(&local_58);
          iVar6 = FUN_01aed730(&local_70);
          if (iVar5 != iVar6) goto LAB_034384c4;
        }
      }
      if (local_48 == (uint *)0x0) {
        uVar10 = 0xbc;
      }
      else {
        uVar4 = *local_48;
        uVar10 = 0;
        if ((uVar4 != 0) && (local_48 != (uint *)(ulong)uVar4)) {
          puVar9 = (uint *)((long)local_48 - (long)(ulong)uVar4);
          uVar10 = 0;
          if (*puVar9 != 0) {
            uVar4 = puVar9[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar11 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)local_48 - lVar11) / (ulong)uVar4);
                }
                if (*puVar9 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar10 < 0xbd))
                goto LAB_034379d0;
              }
            }
            uVar10 = 0;
          }
        }
      }
LAB_034379d0:
      if (uVar10 != 0x61) {
        if (local_60 == (uint *)0x0) {
          uVar10 = 0xbc;
        }
        else {
          uVar4 = *local_60;
          uVar10 = 0;
          if ((uVar4 != 0) && (local_60 != (uint *)(ulong)uVar4)) {
            puVar9 = (uint *)((long)local_60 - (long)(ulong)uVar4);
            uVar10 = 0;
            if (*puVar9 != 0) {
              uVar4 = puVar9[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                lVar11 = 0xc;
                if (*(char *)((long)puVar9 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
                if (lVar11 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)local_60 - lVar11) / (ulong)uVar4);
                  }
                  if (*puVar9 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar10 < 0xbd))
                  goto LAB_03437a84;
                }
              }
              uVar10 = 0;
            }
          }
        }
LAB_03437a84:
        if (uVar10 == 0x61) goto LAB_03438450;
      }
      if (local_48 == (uint *)0x0) {
        uVar10 = 0xbc;
      }
      else {
        uVar4 = *local_48;
        uVar10 = 0;
        if ((uVar4 != 0) && (local_48 != (uint *)(ulong)uVar4)) {
          puVar9 = (uint *)((long)local_48 - (long)(ulong)uVar4);
          uVar10 = 0;
          if (*puVar9 != 0) {
            uVar4 = puVar9[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar11 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)local_48 - lVar11) / (ulong)uVar4);
                }
                if (*puVar9 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar10 < 0xbd))
                goto LAB_03437b34;
              }
            }
            uVar10 = 0;
          }
        }
      }
LAB_03437b34:
      if (uVar10 == 0x61) {
        if (local_60 == (uint *)0x0) {
          uVar10 = 0xbc;
        }
        else {
          uVar4 = *local_60;
          uVar10 = 0;
          if ((uVar4 != 0) && (local_60 != (uint *)(ulong)uVar4)) {
            puVar9 = (uint *)((long)local_60 - (long)(ulong)uVar4);
            uVar10 = 0;
            if (*puVar9 != 0) {
              uVar4 = puVar9[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                lVar11 = 0xc;
                if (*(char *)((long)puVar9 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
                if (lVar11 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)local_60 - lVar11) / (ulong)uVar4);
                  }
                  if (*puVar9 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar10 < 0xbd))
                  goto LAB_03437be8;
                }
              }
              uVar10 = 0;
            }
          }
        }
LAB_03437be8:
        if (uVar10 != 0x61) goto LAB_034384bc;
      }
      if (local_48 == (uint *)0x0) {
        uVar10 = 0xbc;
      }
      else {
        uVar4 = *local_48;
        uVar10 = 0;
        if ((uVar4 != 0) && (local_48 != (uint *)(ulong)uVar4)) {
          puVar9 = (uint *)((long)local_48 - (long)(ulong)uVar4);
          uVar10 = 0;
          if (*puVar9 != 0) {
            uVar4 = puVar9[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar11 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar11 != 0) {
                uVar2 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar2 = (uint)((ulong)((long)local_48 - lVar11) / (ulong)uVar4);
                }
                if (*puVar9 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar10 < 0xbd))
                goto LAB_03437c98;
              }
            }
            uVar10 = 0;
          }
        }
      }
LAB_03437c98:
      if (uVar10 == 0x61) {
        local_28 = 0x61;
        if (local_60 == (uint *)0x0) {
          local_78 = 0xbc;
        }
        else {
          uVar4 = *local_60;
          local_78 = 0;
          if ((uVar4 != 0) && (local_60 != (uint *)(ulong)uVar4)) {
            puVar9 = (uint *)((long)local_60 - (long)(ulong)uVar4);
            local_78 = 0;
            if (*puVar9 != 0) {
              uVar4 = puVar9[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                lVar11 = 0xc;
                if (*(char *)((long)puVar9 + 10) != '\0') {
                  lVar11 = 0x1c;
                }
                lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
                if (lVar11 != 0) {
                  uVar2 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar2 = (uint)((ulong)((long)local_60 - lVar11) / (ulong)uVar4);
                  }
                  if (*puVar9 <= uVar2) {
                    uVar2 = 0xffffffff;
                  }
                  if ((uVar2 < DAT_05326ec0) &&
                     (local_78 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2),
                     local_78 < 0xbd)) goto LAB_03437d4c;
                }
              }
              local_78 = 0;
            }
          }
        }
LAB_03437d4c:
        if (local_78 == 0x61) {
          iVar5 = FUN_01aed730(&local_58);
          iVar6 = FUN_01aed730(&local_70);
          if (iVar5 != iVar6) goto LAB_034384c4;
        }
      }
      local_28 = *param_1;
      uStack_24 = param_1[1];
      local_78 = *param_2;
      uStack_74 = param_2[1];
      iVar5 = FUN_0277d6c4(&local_28);
      if ((iVar5 != 0x39cc) && (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x39cc))
      goto LAB_03438450;
      iVar5 = FUN_0277d6c4(&local_28);
      if ((iVar5 != 0x39cc) || (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x39cc)) {
        iVar5 = FUN_0277d6c4(&local_28);
        if ((iVar5 != 0x3963) && (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x3963))
        goto LAB_03438450;
        iVar5 = FUN_0277d6c4(&local_28);
        if ((iVar5 != 0x3963) || (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x3963)) {
          iVar5 = FUN_0277d6c4(&local_28);
          if ((iVar5 != 0x3967) && (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x3967))
          goto LAB_03438450;
          iVar5 = FUN_0277d6c4(&local_28);
          if ((iVar5 != 0x3967) || (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x3967)) {
            iVar5 = FUN_0277d6c4(&local_28);
            if ((iVar5 != 0x2f99) && (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x2f99))
            goto LAB_03438450;
            iVar5 = FUN_0277d6c4(&local_28);
            if ((iVar5 != 0x2f99) || (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x2f99)) {
              iVar5 = FUN_0277d6c4(&local_28);
              if ((iVar5 != 0x338b) && (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x338b))
              goto LAB_03438450;
              iVar5 = FUN_0277d6c4(&local_28);
              if ((iVar5 != 0x338b) || (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x338b)) {
                iVar5 = FUN_0277d6c4(&local_28);
                if ((iVar5 != 0x374e) && (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x374e))
                goto LAB_03438450;
                iVar5 = FUN_0277d6c4(&local_28);
                if ((iVar5 != 0x374e) || (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x374e)) {
                  iVar5 = FUN_0277d6c4(&local_28);
                  if ((iVar5 != 0x3964) && (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x3964))
                  goto LAB_03438450;
                  iVar5 = FUN_0277d6c4(&local_28);
                  if ((iVar5 != 0x3964) || (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x3964)) {
                    iVar5 = FUN_0277d6c4(&local_28);
                    if ((iVar5 != 0x2405) && (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x2405))
                    goto LAB_03438450;
                    iVar5 = FUN_0277d6c4(&local_28);
                    if ((iVar5 != 0x2405) || (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x2405)) {
                      iVar5 = FUN_0277d6c4(&local_28);
                      if ((iVar5 != 0x2590) && (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x2590))
                      goto LAB_03438450;
                      iVar5 = FUN_0277d6c4(&local_28);
                      if ((iVar5 != 0x2590) || (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x2590)) {
                        iVar5 = FUN_0277d6c4(&local_28);
                        if ((iVar5 != 0x235c) && (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x235c))
                        goto LAB_03438450;
                        iVar5 = FUN_0277d6c4(&local_28);
                        if ((iVar5 != 0x235c) || (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x235c))
                        {
                          iVar5 = FUN_0277d6c4(&local_28);
                          if ((iVar5 != 0x2b84) &&
                             (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x2b84)) goto LAB_03438450;
                          iVar5 = FUN_0277d6c4(&local_28);
                          if ((iVar5 != 0x2b84) ||
                             (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x2b84)) {
                            iVar5 = FUN_0277d6c4(&local_28);
                            if ((iVar5 != 0x3965) &&
                               (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x3965))
                            goto LAB_03438450;
                            iVar5 = FUN_0277d6c4(&local_28);
                            if ((iVar5 != 0x3965) ||
                               (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x3965)) {
                              iVar5 = FUN_0277d6c4(&local_28);
                              if ((iVar5 != 0x3966) &&
                                 (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x3966))
                              goto LAB_03438450;
                              iVar5 = FUN_0277d6c4(&local_28);
                              if ((iVar5 != 0x3966) ||
                                 (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x3966)) {
                                iVar5 = FUN_0277d6c4(&local_28);
                                if ((iVar5 != 0x352a) &&
                                   (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x352a))
                                goto LAB_03438450;
                                iVar5 = FUN_0277d6c4(&local_28);
                                if ((iVar5 != 0x352a) ||
                                   (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x352a)) {
                                  iVar5 = FUN_0277d6c4(&local_28);
                                  if ((iVar5 != 0x39ec) &&
                                     (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x39ec))
                                  goto LAB_03438450;
                                  iVar5 = FUN_0277d6c4(&local_28);
                                  if ((iVar5 != 0x39ec) ||
                                     (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x39ec)) {
                                    iVar5 = FUN_0277d6c4(&local_28);
                                    if ((iVar5 != 0x3a42) &&
                                       (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x3a42))
                                    goto LAB_03438450;
                                    iVar5 = FUN_0277d6c4(&local_28);
                                    if ((iVar5 != 0x3a42) ||
                                       (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x3a42)) {
                                      iVar5 = FUN_0277d6c4(&local_28);
                                      if ((iVar5 != 0x2359) &&
                                         (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x2359))
                                      goto LAB_03438450;
                                      iVar5 = FUN_0277d6c4(&local_28);
                                      if ((iVar5 != 0x2359) ||
                                         (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x2359)) {
                                        iVar5 = FUN_0277d6c4(&local_28);
                                        if ((iVar5 != 0x235a) &&
                                           (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x235a))
                                        goto LAB_03438450;
                                        iVar5 = FUN_0277d6c4(&local_28);
                                        if ((iVar5 != 0x235a) ||
                                           (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x235a)) {
                                          iVar5 = FUN_0277d6c4(&local_28);
                                          if ((iVar5 != 0x35c6) &&
                                             (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x35c6))
                                          goto LAB_03438450;
                                          iVar5 = FUN_0277d6c4(&local_28);
                                          if ((iVar5 != 0x35c6) ||
                                             (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x35c6)) {
                                            iVar5 = FUN_0277d6c4(&local_28);
                                            if ((iVar5 != 0x39ed) &&
                                               (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x39ed))
                                            goto LAB_03438450;
                                            iVar5 = FUN_0277d6c4(&local_28);
                                            if ((iVar5 != 0x39ed) ||
                                               (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x39ed)) {
                                              iVar5 = FUN_0277d6c4(&local_28);
                                              if ((iVar5 != 0x235b) &&
                                                 (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x235b))
                                              goto LAB_03438450;
                                              iVar5 = FUN_0277d6c4(&local_28);
                                              if ((iVar5 != 0x235b) ||
                                                 (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x235b))
                                              {
                                                iVar5 = FUN_0277d6c4(&local_28);
                                                if ((iVar5 != 0x33c8) &&
                                                   (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x33c8
                                                   )) goto LAB_03438450;
                                                iVar5 = FUN_0277d6c4(&local_28);
                                                if ((iVar5 != 0x33c8) ||
                                                   (iVar5 = FUN_0277d6c4(&local_78), iVar5 == 0x33c8
                                                   )) {
                                                  iVar5 = FUN_0277d6c4(&local_28);
                                                  if ((iVar5 != 0x33c9) &&
                                                     (iVar5 = FUN_0277d6c4(&local_78),
                                                     iVar5 == 0x33c9)) goto LAB_03438450;
                                                  iVar5 = FUN_0277d6c4(&local_28);
                                                  if ((iVar5 != 0x33c9) ||
                                                     (iVar5 = FUN_0277d6c4(&local_78),
                                                     iVar5 == 0x33c9)) {
                                                    iVar5 = FUN_0277d6c4(&local_28);
                                                    if ((iVar5 != 0x224c) &&
                                                       (iVar5 = FUN_0277d6c4(&local_78),
                                                       iVar5 == 0x224c)) goto LAB_03438450;
                                                    iVar5 = FUN_0277d6c4(&local_28);
                                                    if ((iVar5 != 0x224c) ||
                                                       (iVar5 = FUN_0277d6c4(&local_78),
                                                       iVar5 == 0x224c)) {
                                                      iVar5 = FUN_0277d6c4(&local_28);
                                                      if ((iVar5 != 0x224d) &&
                                                         (iVar5 = FUN_0277d6c4(&local_78),
                                                         iVar5 == 0x224d)) goto LAB_03438450;
                                                      iVar5 = FUN_0277d6c4(&local_28);
                                                      if ((iVar5 != 0x224d) ||
                                                         (iVar5 = FUN_0277d6c4(&local_78),
                                                         iVar5 == 0x224d)) {
                                                        uVar7 = FUN_01ad6a30(&local_58,0x7c);
                                                        if (((uVar7 & 1) == 0) &&
                                                           (uVar7 = FUN_01ad6a30(&local_70,0x7c),
                                                           (uVar7 & 1) != 0)) goto LAB_03438450;
                                                        uVar7 = FUN_01ad6a30(&local_58,0x7c);
                                                        if (((uVar7 & 1) == 0) ||
                                                           (uVar7 = FUN_01ad6a30(&local_70,0x7c),
                                                           (uVar7 & 1) != 0)) {
                                                          uVar7 = FUN_01ad6a30(&local_58,0x7c);
                                                          if (((uVar7 & 1) != 0) &&
                                                             (uVar7 = FUN_01ad6a30(&local_70,0x7c),
                                                             (uVar7 & 1) != 0)) {
                                                            iVar5 = FUN_01aed730(&local_58);
                                                            iVar6 = FUN_01aed730(&local_70);
                                                            if (iVar5 != iVar6) {
LAB_034384c4:
                                                              uVar8 = FUN_01a4e7e0(param_1,param_2);
                                                              return uVar8;
                                                            }
                                                          }
                                                          return 0;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LAB_034384bc:
    uVar8 = 0xffffffff;
  }
  else {
    if (local_60 == (uint *)0x0) {
      uVar10 = 0xbc;
    }
    else {
      uVar4 = *local_60;
      uVar10 = 0;
      if ((uVar4 != 0) && (local_60 != (uint *)(ulong)uVar4)) {
        puVar9 = (uint *)((long)local_60 - (long)(ulong)uVar4);
        uVar10 = 0;
        if (*puVar9 != 0) {
          uVar4 = puVar9[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
            lVar11 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar9 + lVar11 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar11 != 0) {
              uVar2 = 0;
              if ((ulong)uVar4 != 0) {
                uVar2 = (uint)((ulong)((long)local_60 - lVar11) / (ulong)uVar4);
              }
              if (*puVar9 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar10 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar10 < 0xbd))
              goto LAB_03437634;
            }
          }
          uVar10 = 0;
        }
      }
    }
LAB_03437634:
    if (uVar10 != 0x94) goto LAB_03437648;
LAB_03438450:
    uVar8 = 1;
  }
  return uVar8;
}

