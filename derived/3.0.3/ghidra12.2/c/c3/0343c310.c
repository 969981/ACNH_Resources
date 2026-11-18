
undefined8 FUN_0343c310(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  ushort uVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  uint *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_48 = (uint *)0x0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_1;
  uStack_4c = param_1[1];
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar2 == 0) {
LAB_0343c3dc:
    puVar9 = (uint *)0x0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((*(uint *)(lVar8 + 0x1d8) <= uVar3) ||
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) == 0)) goto LAB_0343c3dc;
    lVar8 = *(long *)PTR_DAT_04bc0428;
    uVar3 = FUN_0277d6c4(param_1);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (*(uint *)(lVar8 + 0x1d8) <= uVar3) goto LAB_0343c3dc;
    puVar9 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8);
    if (puVar9 != (uint *)0x0) {
      local_48 = puVar9;
    }
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  lVar8 = *(long *)puVar2;
  local_60 = (uint *)0x0;
  uVar3 = FUN_0277d6c4(&local_68);
  puVar5 = (uint *)0x0;
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if (uVar3 < *(uint *)(lVar8 + 0x1d8)) {
      puVar5 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0) {
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_2);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (*(uint *)(lVar8 + 0x1d8) <= uVar3) goto LAB_0343c478;
        puVar5 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8);
        if (puVar5 != (uint *)0x0) {
          local_60 = puVar5;
        }
      }
    }
    else {
LAB_0343c478:
      puVar5 = (uint *)0x0;
    }
  }
  if (puVar9 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar9;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0343c51c;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0343c51c:
  if (uVar6 != 0x69) {
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
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0343c5cc;
            }
          }
          uVar6 = 0;
        }
      }
    }
LAB_0343c5cc:
    if (uVar6 == 0x69) {
      return 1;
    }
  }
  if (puVar9 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar9;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0343c67c;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0343c67c:
  if (uVar6 == 0x69) {
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
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0343c72c;
            }
          }
          uVar6 = 0;
        }
      }
    }
LAB_0343c72c:
    if (uVar6 != 0x69) {
      return 0xffffffff;
    }
  }
  if (puVar9 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar9;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0343c7e0;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0343c7e0:
  if (uVar6 != 0x6a) {
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
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0343c890;
            }
          }
          uVar6 = 0;
        }
      }
    }
LAB_0343c890:
    if (uVar6 == 0x6a) {
      return 1;
    }
  }
  if (puVar9 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar9;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0343c940;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0343c940:
  if (uVar6 == 0x6a) {
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
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0343c9f0;
            }
          }
          uVar6 = 0;
        }
      }
    }
LAB_0343c9f0:
    if (uVar6 != 0x6a) {
      return 0xffffffff;
    }
  }
  if (puVar9 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar9;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0343caa4;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0343caa4:
  if (uVar6 != 0x6b) {
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
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0343cb54;
            }
          }
          uVar6 = 0;
        }
      }
    }
LAB_0343cb54:
    if (uVar6 == 0x6b) {
      return 1;
    }
  }
  if (puVar9 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar9;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0343cc0c;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0343cc0c:
  if (uVar6 == 0x6b) {
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
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0343ccbc;
            }
          }
          uVar6 = 0;
        }
      }
    }
LAB_0343ccbc:
    if (uVar6 != 0x6b) {
      return 0xffffffff;
    }
  }
  if (puVar9 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar9;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0343cd74;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0343cd74:
  if (uVar6 == 0x69) {
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
            lVar8 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar8 != 0) {
              uVar1 = 0;
              if ((ulong)uVar3 != 0) {
                uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
              }
              if (*puVar7 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < DAT_05326ec0) &&
                 (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
              goto LAB_0343ce24;
            }
          }
          uVar6 = 0;
        }
      }
    }
LAB_0343ce24:
    if (uVar6 == 0x69) {
      uVar4 = FUN_01a4ef30(param_1,param_2);
      return uVar4;
    }
  }
  if (puVar9 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar9;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar9 != (uint *)(ulong)uVar3)) {
      puVar7 = (uint *)((long)puVar9 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar7 != 0) {
        uVar3 = puVar7[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0343cef4;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0343cef4:
  if (uVar6 != 0x6a) {
    return 0;
  }
  if (puVar5 == (uint *)0x0) {
    uVar6 = 0xbc;
  }
  else {
    uVar3 = *puVar5;
    uVar6 = 0;
    if ((uVar3 != 0) && (puVar5 != (uint *)(ulong)uVar3)) {
      puVar9 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      uVar6 = 0;
      if (*puVar9 != 0) {
        uVar3 = puVar9[1];
        if ((uVar3 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar8 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar9 + lVar8 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar8 != 0) {
            uVar1 = 0;
            if ((ulong)uVar3 != 0) {
              uVar1 = (uint)((ulong)((long)puVar5 - lVar8) / (ulong)uVar3);
            }
            if (*puVar9 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
            goto LAB_0343cfa4;
          }
        }
        uVar6 = 0;
      }
    }
  }
LAB_0343cfa4:
  if (uVar6 == 0x6a) {
    uVar4 = FUN_01a4f0d0(param_1,param_2);
    return uVar4;
  }
  return 0;
}

