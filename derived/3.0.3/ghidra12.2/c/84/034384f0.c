
undefined8 FUN_034384f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint *puVar12;
  ushort uVar13;
  long lVar14;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint *local_50;
  uint local_48;
  undefined4 local_44;
  
  puVar4 = PTR_DAT_04bc0510;
  puVar3 = PTR_DAT_04bb43c0;
  local_50 = (uint *)0x0;
  local_58 = *param_1;
  uStack_54 = param_1[1];
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  local_60 = puVar1;
  uVar5 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar3 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_1);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (uVar5 < *(uint *)(lVar14 + 0x1d8)) {
        puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8);
        if (puVar11 != (uint *)0x0) {
          local_50 = puVar11;
        }
      }
    }
  }
  local_70 = *param_2;
  uStack_6c = param_2[1];
  lVar14 = *(long *)puVar3;
  local_68 = (uint *)0x0;
  local_78 = puVar1;
  uVar5 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar3 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(param_2);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (uVar5 < *(uint *)(lVar14 + 0x1d8)) {
        puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8);
        if (puVar11 != (uint *)0x0) {
          local_68 = puVar11;
        }
      }
    }
  }
  if (local_50 == (uint *)0x0) {
    uVar13 = 0xbc;
  }
  else {
    uVar5 = *local_50;
    uVar13 = 0;
    if ((uVar5 != 0) && (local_50 != (uint *)(ulong)uVar5)) {
      puVar11 = (uint *)((long)local_50 - (long)(ulong)uVar5);
      uVar13 = 0;
      if (*puVar11 != 0) {
        uVar5 = puVar11[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)local_50 - lVar14) / (ulong)uVar5);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
            goto LAB_034386f0;
          }
        }
        uVar13 = 0;
      }
    }
  }
LAB_034386f0:
  if (uVar13 != 0x79) {
    if (local_68 == (uint *)0x0) {
      uVar13 = 0xbc;
    }
    else {
      uVar5 = *local_68;
      uVar13 = 0;
      if ((uVar5 != 0) && (local_68 != (uint *)(ulong)uVar5)) {
        puVar11 = (uint *)((long)local_68 - (long)(ulong)uVar5);
        uVar13 = 0;
        if (*puVar11 != 0) {
          uVar5 = puVar11[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)local_68 - lVar14) / (ulong)uVar5);
              }
              if (*puVar11 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
              goto LAB_034387a4;
            }
          }
          uVar13 = 0;
        }
      }
    }
LAB_034387a4:
    if (uVar13 == 0x79) {
      return 1;
    }
  }
  if (local_50 == (uint *)0x0) {
    uVar13 = 0xbc;
  }
  else {
    uVar5 = *local_50;
    uVar13 = 0;
    if ((uVar5 != 0) && (local_50 != (uint *)(ulong)uVar5)) {
      puVar11 = (uint *)((long)local_50 - (long)(ulong)uVar5);
      uVar13 = 0;
      if (*puVar11 != 0) {
        uVar5 = puVar11[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)local_50 - lVar14) / (ulong)uVar5);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
            goto LAB_03438854;
          }
        }
        uVar13 = 0;
      }
    }
  }
LAB_03438854:
  if (uVar13 == 0x79) {
    if (local_68 == (uint *)0x0) {
      uVar13 = 0xbc;
    }
    else {
      uVar5 = *local_68;
      uVar13 = 0;
      if ((uVar5 != 0) && (local_68 != (uint *)(ulong)uVar5)) {
        puVar11 = (uint *)((long)local_68 - (long)(ulong)uVar5);
        uVar13 = 0;
        if (*puVar11 != 0) {
          uVar5 = puVar11[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)local_68 - lVar14) / (ulong)uVar5);
              }
              if (*puVar11 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
              goto LAB_03438908;
            }
          }
          uVar13 = 0;
        }
      }
    }
LAB_03438908:
    if (uVar13 != 0x79) {
      return 0xffffffff;
    }
  }
  if (local_50 == (uint *)0x0) {
    uVar13 = 0xbc;
  }
  else {
    uVar5 = *local_50;
    uVar13 = 0;
    if ((uVar5 != 0) && (local_50 != (uint *)(ulong)uVar5)) {
      puVar11 = (uint *)((long)local_50 - (long)(ulong)uVar5);
      uVar13 = 0;
      if (*puVar11 != 0) {
        uVar5 = puVar11[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)local_50 - lVar14) / (ulong)uVar5);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
            goto LAB_034389b8;
          }
        }
        uVar13 = 0;
      }
    }
  }
LAB_034389b8:
  if (uVar13 == 0x79) {
    local_a0._0_4_ = 0x79;
    if (local_68 == (uint *)0x0) {
      local_b8._0_4_ = 0xbc;
    }
    else {
      uVar5 = *local_68;
      local_b8._0_4_ = 0;
      if ((uVar5 != 0) && (local_68 != (uint *)(ulong)uVar5)) {
        puVar11 = (uint *)((long)local_68 - (long)(ulong)uVar5);
        local_b8._0_4_ = 0;
        if (*puVar11 != 0) {
          uVar5 = puVar11[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)local_68 - lVar14) / (ulong)uVar5);
              }
              if (*puVar11 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (local_b8._0_4_ = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2),
                 (uint)local_b8 < 0xbd)) goto LAB_03438a6c;
            }
          }
          local_b8._0_4_ = 0;
        }
      }
    }
LAB_03438a6c:
    if ((uint)local_b8 == 0x79) {
      iVar6 = FUN_01aed730(&local_60);
      iVar7 = FUN_01aed730(&local_78);
      if (iVar6 != iVar7) goto LAB_03438f8c;
    }
  }
  if (local_50 == (uint *)0x0) {
    uVar13 = 0xbc;
  }
  else {
    uVar5 = *local_50;
    uVar13 = 0;
    if ((uVar5 != 0) && (local_50 != (uint *)(ulong)uVar5)) {
      puVar11 = (uint *)((long)local_50 - (long)(ulong)uVar5);
      uVar13 = 0;
      if (*puVar11 != 0) {
        uVar5 = puVar11[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)local_50 - lVar14) / (ulong)uVar5);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
            goto LAB_03438b40;
          }
        }
        uVar13 = 0;
      }
    }
  }
LAB_03438b40:
  if (uVar13 != 0x7a) {
    if (local_68 == (uint *)0x0) {
      uVar13 = 0xbc;
    }
    else {
      uVar5 = *local_68;
      uVar13 = 0;
      if ((uVar5 != 0) && (local_68 != (uint *)(ulong)uVar5)) {
        puVar11 = (uint *)((long)local_68 - (long)(ulong)uVar5);
        uVar13 = 0;
        if (*puVar11 != 0) {
          uVar5 = puVar11[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)local_68 - lVar14) / (ulong)uVar5);
              }
              if (*puVar11 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
              goto LAB_03438bf4;
            }
          }
          uVar13 = 0;
        }
      }
    }
LAB_03438bf4:
    if (uVar13 == 0x7a) {
      return 1;
    }
  }
  if (local_50 == (uint *)0x0) {
    uVar13 = 0xbc;
  }
  else {
    uVar5 = *local_50;
    uVar13 = 0;
    if ((uVar5 != 0) && (local_50 != (uint *)(ulong)uVar5)) {
      puVar11 = (uint *)((long)local_50 - (long)(ulong)uVar5);
      uVar13 = 0;
      if (*puVar11 != 0) {
        uVar5 = puVar11[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)local_50 - lVar14) / (ulong)uVar5);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
            goto LAB_03438ca4;
          }
        }
        uVar13 = 0;
      }
    }
  }
LAB_03438ca4:
  if (uVar13 == 0x7a) {
    if (local_68 == (uint *)0x0) {
      uVar13 = 0xbc;
    }
    else {
      uVar5 = *local_68;
      uVar13 = 0;
      if ((uVar5 != 0) && (local_68 != (uint *)(ulong)uVar5)) {
        puVar11 = (uint *)((long)local_68 - (long)(ulong)uVar5);
        uVar13 = 0;
        if (*puVar11 != 0) {
          uVar5 = puVar11[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)local_68 - lVar14) / (ulong)uVar5);
              }
              if (*puVar11 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
              goto LAB_03438d58;
            }
          }
          uVar13 = 0;
        }
      }
    }
LAB_03438d58:
    if (uVar13 != 0x7a) {
      return 0xffffffff;
    }
  }
  if (local_50 == (uint *)0x0) {
    uVar13 = 0xbc;
  }
  else {
    uVar5 = *local_50;
    uVar13 = 0;
    if ((uVar5 != 0) && (local_50 != (uint *)(ulong)uVar5)) {
      puVar11 = (uint *)((long)local_50 - (long)(ulong)uVar5);
      uVar13 = 0;
      if (*puVar11 != 0) {
        uVar5 = puVar11[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)local_50 - lVar14) / (ulong)uVar5);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
            goto LAB_03438e08;
          }
        }
        uVar13 = 0;
      }
    }
  }
LAB_03438e08:
  if (uVar13 == 0x7a) {
    local_a0._0_4_ = 0x7a;
    if (local_68 == (uint *)0x0) {
      local_b8._0_4_ = 0xbc;
    }
    else {
      uVar5 = *local_68;
      local_b8._0_4_ = 0;
      if ((uVar5 != 0) && (local_68 != (uint *)(ulong)uVar5)) {
        puVar11 = (uint *)((long)local_68 - (long)(ulong)uVar5);
        local_b8._0_4_ = 0;
        if (*puVar11 != 0) {
          uVar5 = puVar11[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)local_68 - lVar14) / (ulong)uVar5);
              }
              if (*puVar11 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (local_b8._0_4_ = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2),
                 (uint)local_b8 < 0xbd)) goto LAB_03438ebc;
            }
          }
          local_b8._0_4_ = 0;
        }
      }
    }
LAB_03438ebc:
    if ((uint)local_b8 == 0x7a) {
      iVar6 = FUN_01aed730(&local_60);
      iVar7 = FUN_01aed730(&local_78);
      if (iVar6 != iVar7) {
LAB_03438f8c:
        uVar10 = FUN_01a4e7e0(param_1,param_2);
        return uVar10;
      }
    }
  }
  puVar1 = PTR_DAT_04bb46f0;
  if (local_50 == (uint *)0x0) {
    uVar13 = 0xbc;
  }
  else {
    uVar5 = *local_50;
    uVar13 = 0;
    if ((uVar5 != 0) && (local_50 != (uint *)(ulong)uVar5)) {
      puVar11 = (uint *)((long)local_50 - (long)(ulong)uVar5);
      uVar13 = 0;
      if (*puVar11 != 0) {
        uVar5 = puVar11[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)local_50 - lVar14) / (ulong)uVar5);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
            goto LAB_03438fa0;
          }
        }
        uVar13 = 0;
      }
    }
  }
LAB_03438fa0:
  if (uVar13 != 0xb1) {
    if (local_68 == (uint *)0x0) {
      uVar13 = 0xbc;
    }
    else {
      uVar5 = *local_68;
      uVar13 = 0;
      if ((uVar5 != 0) && (local_68 != (uint *)(ulong)uVar5)) {
        puVar11 = (uint *)((long)local_68 - (long)(ulong)uVar5);
        uVar13 = 0;
        if (*puVar11 != 0) {
          uVar5 = puVar11[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)local_68 - lVar14) / (ulong)uVar5);
              }
              if (*puVar11 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
              goto LAB_03439054;
            }
          }
          uVar13 = 0;
        }
      }
    }
LAB_03439054:
    if (uVar13 == 0xb1) {
      return 1;
    }
  }
  if (local_50 == (uint *)0x0) {
    uVar13 = 0xbc;
  }
  else {
    uVar5 = *local_50;
    uVar13 = 0;
    if ((uVar5 != 0) && (local_50 != (uint *)(ulong)uVar5)) {
      puVar11 = (uint *)((long)local_50 - (long)(ulong)uVar5);
      uVar13 = 0;
      if (*puVar11 != 0) {
        uVar5 = puVar11[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)local_50 - lVar14) / (ulong)uVar5);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
            goto LAB_0343910c;
          }
        }
        uVar13 = 0;
      }
    }
  }
LAB_0343910c:
  if (uVar13 == 0xb1) {
    if (local_68 == (uint *)0x0) {
      uVar13 = 0xbc;
    }
    else {
      uVar5 = *local_68;
      uVar13 = 0;
      if ((uVar5 != 0) && (local_68 != (uint *)(ulong)uVar5)) {
        puVar11 = (uint *)((long)local_68 - (long)(ulong)uVar5);
        uVar13 = 0;
        if (*puVar11 != 0) {
          uVar5 = puVar11[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar11 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
            if (lVar14 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)local_68 - lVar14) / (ulong)uVar5);
              }
              if (*puVar11 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
              goto LAB_034391c0;
            }
          }
          uVar13 = 0;
        }
      }
    }
LAB_034391c0:
    if (uVar13 != 0xb1) {
      return 0xffffffff;
    }
  }
  if (local_50 == (uint *)0x0) {
    uVar13 = 0xbc;
  }
  else {
    uVar5 = *local_50;
    uVar13 = 0;
    if ((uVar5 != 0) && (local_50 != (uint *)(ulong)uVar5)) {
      puVar11 = (uint *)((long)local_50 - (long)(ulong)uVar5);
      uVar13 = 0;
      if (*puVar11 != 0) {
        uVar5 = puVar11[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)local_50 - lVar14) / (ulong)uVar5);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar13 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar13 < 0xbd))
            goto LAB_03439270;
          }
        }
        uVar13 = 0;
      }
    }
  }
LAB_03439270:
  if (uVar13 != 0xb1) {
    return 0;
  }
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0xb1);
  if (local_68 == (uint *)0x0) {
    uVar5 = 0xbc;
  }
  else {
    uVar2 = *local_68;
    uVar5 = 0;
    if ((uVar2 != 0) && (local_68 != (uint *)(ulong)uVar2)) {
      puVar11 = (uint *)((long)local_68 - (long)(ulong)uVar2);
      uVar5 = 0;
      if (*puVar11 != 0) {
        uVar5 = puVar11[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar11 + lVar14 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)local_68 - lVar14) / (ulong)uVar5);
            }
            if (*puVar11 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar5 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
            goto LAB_03439324;
          }
        }
        uVar5 = 0;
      }
    }
  }
LAB_03439324:
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar5);
  if (uVar5 != 0xb1) {
    return 0;
  }
  lVar14 = *(long *)PTR_DAT_04bb46f0;
  uVar8 = FUN_01b0c3c8(&local_60);
  FUN_0262eb00(&local_80,lVar14,uVar8,lVar14 + 0xe98e0);
  lVar14 = *(long *)puVar1;
  uVar8 = FUN_01b0c3c8(&local_78);
  FUN_0262eb00(&local_88,lVar14,uVar8,lVar14 + 0xe98e0);
  lVar14 = *(long *)puVar3;
  local_90 = (uint *)0x0;
  local_98 = local_80;
  uStack_94 = uStack_7c;
  local_a0 = puVar4 + 0x10;
  uVar5 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar3 == 0) {
LAB_03439424:
    puVar11 = (uint *)0x0;
  }
  else {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_03439424;
    lVar14 = *(long *)PTR_DAT_04bc0428;
    uVar5 = FUN_0277d6c4(&local_80);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (*(uint *)(lVar14 + 0x1d8) <= uVar5) goto LAB_03439424;
    puVar11 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8);
    if (puVar11 != (uint *)0x0) {
      local_90 = puVar11;
    }
  }
  lVar14 = *(long *)puVar3;
  local_a8 = 0;
  local_b0 = local_88;
  uStack_ac = uStack_84;
  local_b8 = puVar4 + 0x10;
  uVar5 = FUN_0277d6c4(&local_b0);
  if (*(long *)puVar3 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
      lVar14 = *(long *)PTR_DAT_04bc0428;
      uVar5 = FUN_0277d6c4(&local_88);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if (uVar5 < *(uint *)(lVar14 + 0x1d8)) {
        lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8);
        if (lVar14 != 0) {
          local_a8 = lVar14;
        }
      }
    }
  }
  local_44 = 0x78;
  if (puVar11 == (uint *)0x0) {
    local_48 = 0xbc;
  }
  else {
    uVar5 = *puVar11;
    local_48 = 0;
    if ((uVar5 != 0) && (puVar11 != (uint *)(ulong)uVar5)) {
      puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar5);
      local_48 = 0;
      if (*puVar12 != 0) {
        uVar5 = puVar12[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar5);
            }
            if (*puVar12 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_48 < 0xbd))
            goto LAB_0343955c;
          }
        }
        local_48 = 0;
      }
    }
  }
LAB_0343955c:
  if ((local_48 != 0x78) && (uVar9 = FUN_01ad6a30(&local_b8,0x78), (uVar9 & 1) != 0)) {
    return 1;
  }
  local_44 = 0x78;
  if (puVar11 == (uint *)0x0) {
    local_48 = 0xbc;
  }
  else {
    uVar5 = *puVar11;
    local_48 = 0;
    if ((uVar5 != 0) && (puVar11 != (uint *)(ulong)uVar5)) {
      puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar5);
      local_48 = 0;
      if (*puVar12 != 0) {
        uVar5 = puVar12[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar12 + lVar14 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar14 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar11 - lVar14) / (ulong)uVar5);
            }
            if (*puVar12 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (local_48 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), local_48 < 0xbd))
            goto LAB_03439620;
          }
        }
        local_48 = 0;
      }
    }
  }
LAB_03439620:
  if ((local_48 != 0x78) || (uVar9 = FUN_01ad6a30(&local_b8,0x78), (uVar9 & 1) != 0)) {
    uVar9 = FUN_01ad6a30(&local_a0,0x78);
    if (((uVar9 & 1) != 0) && (uVar9 = FUN_01ad6a30(&local_b8,0x78), (uVar9 & 1) != 0)) {
LAB_03439664:
      uVar10 = FUN_01a4e630(&local_80,&local_88);
      return uVar10;
    }
    uVar9 = FUN_01ad6a30(&local_a0,0);
    if (((uVar9 & 1) == 0) && (uVar9 = FUN_01ad6a30(&local_b8,0), (uVar9 & 1) != 0)) {
      return 1;
    }
    uVar9 = FUN_01ad6a30(&local_a0,0);
    if (((uVar9 & 1) == 0) || (uVar9 = FUN_01ad6a30(&local_b8,0), (uVar9 & 1) != 0)) {
      uVar9 = FUN_01ad6a30(&local_a0,0);
      if (((uVar9 & 1) == 0) || (uVar9 = FUN_01ad6a30(&local_b8,0), (uVar9 & 1) == 0)) {
        return 0;
      }
      uVar9 = FUN_01ad9f1c(&local_a0,0x38);
      if (((uVar9 & 1) == 0) && (uVar9 = FUN_01ad9f1c(&local_b8,0x38), (uVar9 & 1) != 0)) {
        return 1;
      }
      uVar9 = FUN_01ad9f1c(&local_a0,0x38);
      if (((uVar9 & 1) == 0) || (uVar9 = FUN_01ad9f1c(&local_b8,0x38), (uVar9 & 1) != 0)) {
        uVar9 = FUN_01ad9f1c(&local_a0,0x38);
        if (((uVar9 & 1) == 0) || (uVar9 = FUN_01ad9f1c(&local_b8,0x38), (uVar9 & 1) == 0)) {
          uVar9 = FUN_01ad9f1c(&local_a0,0x39);
          if (((uVar9 & 1) == 0) && (uVar9 = FUN_01ad9f1c(&local_b8,0x39), (uVar9 & 1) != 0)) {
            return 1;
          }
          uVar9 = FUN_01ad9f1c(&local_a0,0x39);
          if (((uVar9 & 1) != 0) && (uVar9 = FUN_01ad9f1c(&local_b8,0x39), (uVar9 & 1) == 0)) {
            return 0xffffffff;
          }
          uVar9 = FUN_01ad9f1c(&local_a0,0x39);
          if (((uVar9 & 1) == 0) || (uVar9 = FUN_01ad9f1c(&local_b8,0x39), (uVar9 & 1) == 0)) {
            uVar9 = FUN_01ad9f1c(&local_a0,0x3a);
            if (((uVar9 & 1) == 0) && (uVar9 = FUN_01ad9f1c(&local_b8,0x3a), (uVar9 & 1) != 0)) {
              return 1;
            }
            uVar9 = FUN_01ad9f1c(&local_a0,0x3a);
            if (((uVar9 & 1) != 0) && (uVar9 = FUN_01ad9f1c(&local_b8,0x3a), (uVar9 & 1) == 0)) {
              return 0xffffffff;
            }
            uVar9 = FUN_01ad9f1c(&local_a0,0x3a);
            if (((uVar9 & 1) == 0) || (uVar9 = FUN_01ad9f1c(&local_b8,0x3a), (uVar9 & 1) == 0)) {
              uVar9 = FUN_01ad9f1c(&local_a0,0x3b);
              if (((uVar9 & 1) == 0) && (uVar9 = FUN_01ad9f1c(&local_b8,0x3b), (uVar9 & 1) != 0)) {
                return 1;
              }
              uVar9 = FUN_01ad9f1c(&local_a0,0x3b);
              if (((uVar9 & 1) != 0) && (uVar9 = FUN_01ad9f1c(&local_b8,0x3b), (uVar9 & 1) == 0)) {
                return 0xffffffff;
              }
              uVar9 = FUN_01ad9f1c(&local_a0,0x3b);
              if (((uVar9 & 1) == 0) || (uVar9 = FUN_01ad9f1c(&local_b8,0x3b), (uVar9 & 1) == 0)) {
                uVar9 = FUN_01ad9f1c(&local_a0,0x3c);
                if (((uVar9 & 1) == 0) && (uVar9 = FUN_01ad9f1c(&local_b8,0x3c), (uVar9 & 1) != 0))
                {
                  return 1;
                }
                uVar9 = FUN_01ad9f1c(&local_a0,0x3c);
                if (((uVar9 & 1) != 0) && (uVar9 = FUN_01ad9f1c(&local_b8,0x3c), (uVar9 & 1) == 0))
                {
                  return 0xffffffff;
                }
                uVar9 = FUN_01ad9f1c(&local_a0,0x3c);
                if (((uVar9 & 1) == 0) || (uVar9 = FUN_01ad9f1c(&local_b8,0x3c), (uVar9 & 1) == 0))
                {
                  uVar9 = FUN_01ad9f1c(&local_a0,0x3d);
                  if (((uVar9 & 1) == 0) && (uVar9 = FUN_01ad9f1c(&local_b8,0x3d), (uVar9 & 1) != 0)
                     ) {
                    return 1;
                  }
                  uVar9 = FUN_01ad9f1c(&local_a0,0x3d);
                  if (((uVar9 & 1) != 0) && (uVar9 = FUN_01ad9f1c(&local_b8,0x3d), (uVar9 & 1) == 0)
                     ) {
                    return 0xffffffff;
                  }
                  uVar9 = FUN_01ad9f1c(&local_a0,0x3d);
                  if ((uVar9 & 1) == 0) {
                    return 0;
                  }
                  uVar9 = FUN_01ad9f1c(&local_b8,0x3d);
                  if ((uVar9 & 1) == 0) {
                    return 0;
                  }
                }
              }
            }
          }
        }
        goto LAB_03439664;
      }
    }
  }
  return 0xffffffff;
}

