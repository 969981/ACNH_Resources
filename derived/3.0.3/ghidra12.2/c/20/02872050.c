
void FUN_02872050(short *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  undefined4 local_68;
  undefined4 local_64;
  undefined *local_60;
  short local_58;
  short local_56;
  undefined4 local_54;
  uint *local_50;
  uint local_44;
  
  puVar3 = PTR_DAT_04bc0510;
  puVar2 = PTR_DAT_04bb43c0;
  local_58 = *param_1;
  if (local_58 != -2) {
    local_56 = param_1[1];
    local_54 = *(undefined4 *)(param_1 + 2);
    local_60 = PTR_DAT_04bc0510 + 0x10;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    local_50 = (uint *)0x0;
    uVar4 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar2 == 0) {
LAB_0287213c:
      if (local_50 != (uint *)0x0) goto LAB_0287214c;
      local_44 = 0xbc;
LAB_028722a8:
      local_68 = 0xa7;
      if (local_44 != 0xa7) goto LAB_028722ec;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0287213c;
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
         (puVar5 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar5 == (uint *)0x0)) goto LAB_0287213c;
      local_50 = puVar5;
LAB_0287214c:
      local_68 = 0xa6;
      uVar4 = *local_50;
      local_44 = 0;
      if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
        puVar5 = (uint *)((long)local_50 - (long)(ulong)uVar4);
        local_44 = 0;
        if (*puVar5 != 0) {
          uVar4 = puVar5[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar6 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)local_50 - lVar6) / (ulong)uVar4);
              }
              if (*puVar5 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_44 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_44 < 0xbd)) goto LAB_028721d8;
            }
          }
          local_44 = 0;
        }
      }
LAB_028721d8:
      if (local_44 != 0xa6) {
        local_44 = 0;
        uVar4 = *local_50;
        if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
          puVar5 = (uint *)((long)local_50 - (long)(ulong)uVar4);
          local_44 = 0;
          if (*puVar5 != 0) {
            uVar4 = puVar5[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar5 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
              if (lVar6 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)local_50 - lVar6) / (ulong)uVar4);
                }
                if (*puVar5 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_44 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   local_44 < 0xbd)) goto LAB_028722a8;
              }
            }
            local_44 = 0;
          }
        }
        goto LAB_028722a8;
      }
    }
    FUN_01af15c0(&local_68,&local_60);
    if ((short)local_68 != -2) {
      *param_1 = (short)local_68;
      param_1[1] = local_68._2_2_;
      *(undefined4 *)(param_1 + 2) = local_64;
    }
  }
LAB_028722ec:
  local_58 = param_1[4];
  if (local_58 != -2) {
    local_56 = param_1[5];
    local_54 = *(undefined4 *)(param_1 + 6);
    local_60 = puVar3 + 0x10;
    lVar6 = *(long *)puVar2;
    local_50 = (uint *)0x0;
    uVar4 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar2 == 0) {
LAB_028723ac:
      if (local_50 != (uint *)0x0) goto LAB_028723bc;
      local_44 = 0xbc;
LAB_02872518:
      local_68 = 0xa7;
      if (local_44 != 0xa7) goto LAB_0287255c;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_028723ac;
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1 + 4);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
         (puVar5 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar5 == (uint *)0x0)) goto LAB_028723ac;
      local_50 = puVar5;
LAB_028723bc:
      local_68 = 0xa6;
      uVar4 = *local_50;
      local_44 = 0;
      if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
        puVar5 = (uint *)((long)local_50 - (long)(ulong)uVar4);
        local_44 = 0;
        if (*puVar5 != 0) {
          uVar4 = puVar5[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar6 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)local_50 - lVar6) / (ulong)uVar4);
              }
              if (*puVar5 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_44 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_44 < 0xbd)) goto LAB_02872448;
            }
          }
          local_44 = 0;
        }
      }
LAB_02872448:
      if (local_44 != 0xa6) {
        local_44 = 0;
        uVar4 = *local_50;
        if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
          puVar5 = (uint *)((long)local_50 - (long)(ulong)uVar4);
          local_44 = 0;
          if (*puVar5 != 0) {
            uVar4 = puVar5[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar5 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
              if (lVar6 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)local_50 - lVar6) / (ulong)uVar4);
                }
                if (*puVar5 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_44 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   local_44 < 0xbd)) goto LAB_02872518;
              }
            }
            local_44 = 0;
          }
        }
        goto LAB_02872518;
      }
    }
    FUN_01af15c0(&local_68,&local_60);
    if ((short)local_68 != -2) {
      param_1[4] = (short)local_68;
      param_1[5] = local_68._2_2_;
      *(undefined4 *)(param_1 + 6) = local_64;
    }
  }
LAB_0287255c:
  local_58 = param_1[8];
  if (local_58 != -2) {
    local_56 = param_1[9];
    local_54 = *(undefined4 *)(param_1 + 10);
    local_60 = puVar3 + 0x10;
    lVar6 = *(long *)puVar2;
    local_50 = (uint *)0x0;
    uVar4 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar2 == 0) {
LAB_02872620:
      if (local_50 != (uint *)0x0) goto LAB_02872630;
      local_44 = 0xbc;
LAB_0287278c:
      local_68 = 0xa7;
      if (local_44 != 0xa7) goto LAB_028727d0;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02872620;
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1 + 8);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
         (puVar5 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar5 == (uint *)0x0)) goto LAB_02872620;
      local_50 = puVar5;
LAB_02872630:
      local_68 = 0xa6;
      uVar4 = *local_50;
      local_44 = 0;
      if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
        puVar5 = (uint *)((long)local_50 - (long)(ulong)uVar4);
        local_44 = 0;
        if (*puVar5 != 0) {
          uVar4 = puVar5[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar6 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)local_50 - lVar6) / (ulong)uVar4);
              }
              if (*puVar5 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_44 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_44 < 0xbd)) goto LAB_028726bc;
            }
          }
          local_44 = 0;
        }
      }
LAB_028726bc:
      if (local_44 != 0xa6) {
        local_44 = 0;
        uVar4 = *local_50;
        if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
          puVar5 = (uint *)((long)local_50 - (long)(ulong)uVar4);
          local_44 = 0;
          if (*puVar5 != 0) {
            uVar4 = puVar5[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar5 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
              if (lVar6 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)local_50 - lVar6) / (ulong)uVar4);
                }
                if (*puVar5 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_44 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   local_44 < 0xbd)) goto LAB_0287278c;
              }
            }
            local_44 = 0;
          }
        }
        goto LAB_0287278c;
      }
    }
    FUN_01af15c0(&local_68,&local_60);
    if ((short)local_68 != -2) {
      param_1[8] = (short)local_68;
      param_1[9] = local_68._2_2_;
      *(undefined4 *)(param_1 + 10) = local_64;
    }
  }
LAB_028727d0:
  local_58 = param_1[0xc];
  if (local_58 != -2) {
    local_56 = param_1[0xd];
    local_54 = *(undefined4 *)(param_1 + 0xe);
    local_60 = puVar3 + 0x10;
    lVar6 = *(long *)puVar2;
    local_50 = (uint *)0x0;
    uVar4 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar2 == 0) {
LAB_02872890:
      if (local_50 != (uint *)0x0) goto LAB_028728a0;
      local_44 = 0xbc;
LAB_028729fc:
      local_68 = 0xa7;
      if (local_44 != 0xa7) goto LAB_02872a40;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02872890;
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1 + 0xc);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
         (puVar5 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar5 == (uint *)0x0)) goto LAB_02872890;
      local_50 = puVar5;
LAB_028728a0:
      local_68 = 0xa6;
      uVar4 = *local_50;
      local_44 = 0;
      if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
        puVar5 = (uint *)((long)local_50 - (long)(ulong)uVar4);
        local_44 = 0;
        if (*puVar5 != 0) {
          uVar4 = puVar5[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar6 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)local_50 - lVar6) / (ulong)uVar4);
              }
              if (*puVar5 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_44 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_44 < 0xbd)) goto LAB_0287292c;
            }
          }
          local_44 = 0;
        }
      }
LAB_0287292c:
      if (local_44 != 0xa6) {
        local_44 = 0;
        uVar4 = *local_50;
        if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
          puVar5 = (uint *)((long)local_50 - (long)(ulong)uVar4);
          local_44 = 0;
          if (*puVar5 != 0) {
            uVar4 = puVar5[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar5 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
              if (lVar6 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)local_50 - lVar6) / (ulong)uVar4);
                }
                if (*puVar5 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_44 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   local_44 < 0xbd)) goto LAB_028729fc;
              }
            }
            local_44 = 0;
          }
        }
        goto LAB_028729fc;
      }
    }
    FUN_01af15c0(&local_68,&local_60);
    if ((short)local_68 != -2) {
      param_1[0xc] = (short)local_68;
      param_1[0xd] = local_68._2_2_;
      *(undefined4 *)(param_1 + 0xe) = local_64;
    }
  }
LAB_02872a40:
  local_58 = param_1[0x10];
  if (local_58 != -2) {
    local_56 = param_1[0x11];
    local_54 = *(undefined4 *)(param_1 + 0x12);
    local_60 = puVar3 + 0x10;
    lVar6 = *(long *)puVar2;
    local_50 = (uint *)0x0;
    uVar4 = FUN_0277d6c4(&local_58);
    if (*(long *)puVar2 == 0) {
LAB_02872b04:
      if (local_50 != (uint *)0x0) goto LAB_02872b14;
      local_44 = 0xbc;
LAB_02872c70:
      local_68 = 0xa7;
      if (local_44 != 0xa7) goto LAB_02872cb4;
    }
    else {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02872b04;
      lVar6 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_1 + 0x10);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
         (puVar5 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8),
         puVar5 == (uint *)0x0)) goto LAB_02872b04;
      local_50 = puVar5;
LAB_02872b14:
      local_68 = 0xa6;
      uVar4 = *local_50;
      local_44 = 0;
      if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
        puVar5 = (uint *)((long)local_50 - (long)(ulong)uVar4);
        local_44 = 0;
        if (*puVar5 != 0) {
          uVar4 = puVar5[1];
          if ((uVar4 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
            if (lVar6 != 0) {
              uVar1 = 0;
              if ((ulong)uVar4 != 0) {
                uVar1 = (uint)((ulong)((long)local_50 - lVar6) / (ulong)uVar4);
              }
              if (*puVar5 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_44 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                 local_44 < 0xbd)) goto LAB_02872ba0;
            }
          }
          local_44 = 0;
        }
      }
LAB_02872ba0:
      if (local_44 != 0xa6) {
        local_44 = 0;
        uVar4 = *local_50;
        if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
          puVar5 = (uint *)((long)local_50 - (long)(ulong)uVar4);
          local_44 = 0;
          if (*puVar5 != 0) {
            uVar4 = puVar5[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
              lVar6 = 0xc;
              if (*(char *)((long)puVar5 + 10) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
              if (lVar6 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)local_50 - lVar6) / (ulong)uVar4);
                }
                if (*puVar5 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_44 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
                   local_44 < 0xbd)) goto LAB_02872c70;
              }
            }
            local_44 = 0;
          }
        }
        goto LAB_02872c70;
      }
    }
    FUN_01af15c0(&local_68,&local_60);
    if ((short)local_68 != -2) {
      param_1[0x10] = (short)local_68;
      param_1[0x11] = local_68._2_2_;
      *(undefined4 *)(param_1 + 0x12) = local_64;
    }
  }
LAB_02872cb4:
  local_58 = param_1[0x14];
  if (local_58 == -2) {
    return;
  }
  local_56 = param_1[0x15];
  local_54 = *(undefined4 *)(param_1 + 0x16);
  local_60 = puVar3 + 0x10;
  lVar6 = *(long *)puVar2;
  local_50 = (uint *)0x0;
  uVar4 = FUN_0277d6c4(&local_58);
  if (*(long *)puVar2 == 0) {
LAB_02872d74:
    if (local_50 != (uint *)0x0) goto LAB_02872d84;
    local_44 = 0xbc;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_02872d74;
    lVar6 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_1 + 0x14);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((*(uint *)(lVar6 + 0x1d8) <= uVar4) ||
       (puVar5 = *(uint **)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8), puVar5 == (uint *)0x0)
       ) goto LAB_02872d74;
    local_50 = puVar5;
LAB_02872d84:
    local_68 = 0xa6;
    uVar4 = *local_50;
    local_44 = 0;
    if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
      puVar5 = (uint *)((long)local_50 - (long)(ulong)uVar4);
      local_44 = 0;
      if (*puVar5 != 0) {
        uVar4 = puVar5[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar5 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
          if (lVar6 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)local_50 - lVar6) / (ulong)uVar4);
            }
            if (*puVar5 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_44 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2)
               , local_44 < 0xbd)) goto LAB_02872e10;
          }
        }
        local_44 = 0;
      }
    }
LAB_02872e10:
    if (local_44 == 0xa6) goto LAB_02872ef4;
    local_44 = 0;
    uVar4 = *local_50;
    if ((uVar4 != 0) && (local_50 != (uint *)(ulong)uVar4)) {
      puVar5 = (uint *)((long)local_50 - (long)(ulong)uVar4);
      local_44 = 0;
      if (*puVar5 != 0) {
        uVar4 = puVar5[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar5[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar5 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar5 + lVar6 + (ulong)(ushort)puVar5[2] * 8;
          if (lVar6 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)local_50 - lVar6) / (ulong)uVar4);
            }
            if (*puVar5 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_44 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2)
               , local_44 < 0xbd)) goto LAB_02872ee0;
          }
        }
        local_44 = 0;
      }
    }
  }
LAB_02872ee0:
  local_68 = 0xa7;
  if (local_44 != 0xa7) {
    return;
  }
LAB_02872ef4:
  FUN_01af15c0(&local_68,&local_60);
  if ((short)local_68 != -2) {
    param_1[0x14] = (short)local_68;
    param_1[0x15] = local_68._2_2_;
    *(undefined4 *)(param_1 + 0x16) = local_64;
  }
  return;
}

