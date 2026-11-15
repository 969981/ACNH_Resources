
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0234d258(long param_1,uint *param_2,undefined8 param_3)

{
  long *plVar1;
  uint uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  undefined2 *puVar12;
  long lVar13;
  undefined2 *puVar14;
  undefined2 uVar15;
  long lVar16;
  long lVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 local_160;
  undefined4 local_15c;
  undefined **local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [127];
  undefined1 local_95;
  undefined4 local_90;
  undefined2 local_8c;
  undefined8 local_88;
  uint local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 local_70;
  uint local_6c;
  
  puVar5 = PTR_DAT_04bb43c0;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  plVar1 = (long *)(param_1 + 0xbde8);
  uVar6 = FUN_0277d6c4(param_2);
  lVar13 = *(long *)puVar5;
  if (lVar13 == 0) {
LAB_0234d858:
    uVar15 = DAT_05586008;
    *(undefined2 *)(param_1 + 0xc214) = DAT_05586008;
    uVar18 = DAT_0558600a;
    *(undefined1 *)(param_1 + 0xc216) = DAT_0558600a;
    uVar19 = DAT_0558600b;
    *(undefined1 *)(param_1 + 0xc217) = DAT_0558600b;
    uVar9 = DAT_0558600c;
    *(undefined2 *)(param_1 + 0xc20c) = uVar15;
    *(undefined1 *)(param_1 + 0xc20e) = uVar18;
    *(undefined1 *)(param_1 + 0xc20f) = uVar19;
    *(undefined4 *)(param_1 + 0xc218) = uVar9;
    *(undefined4 *)(param_1 + 0xc210) = uVar9;
  }
  else {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0234d858;
    local_148 = 0;
    uStack_144 = 0;
    local_150 = *(undefined8 *)param_2;
    local_158 = &PTR_FUN_04a36b50;
    uVar6 = FUN_0277d6c4(&local_150);
    if (*(long *)puVar5 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar13 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_2);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
           (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8), lVar13 != 0)) {
          local_148 = (undefined4)lVar13;
          uStack_144 = (undefined4)((ulong)lVar13 >> 0x20);
        }
      }
    }
    uVar8 = FUN_01adc790(&local_158);
    if ((uVar8 & 1) == 0) goto LAB_0234d858;
    lVar16 = *(long *)puVar5;
    lVar13 = *plVar1 + ((ulong)*(uint *)(*plVar1 + 0x10) & 1) * 0x20;
    puVar10 = (uint *)(lVar13 + 0x14);
    local_15c._0_2_ = *(undefined2 *)puVar10;
    local_160 = *(undefined1 *)(lVar13 + 0x16);
    uVar18 = *(undefined1 *)(lVar13 + 0x17);
    local_74 = *puVar10;
    uVar9 = *(undefined4 *)(lVar13 + 0x18);
    uVar4 = *(undefined8 *)puVar10;
    local_70 = uVar9;
    uVar6 = FUN_0277d6c4(&local_74);
    lVar13 = *(long *)puVar5;
    if (lVar13 != 0) {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        local_148 = 0;
        uStack_144 = 0;
        local_158 = &PTR_FUN_04a36b50;
        local_150 = uVar4;
        uVar6 = FUN_0277d6c4(&local_150);
        if (*(long *)puVar5 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
              lVar13 = *(long *)PTR_DAT_04bc0428;
              uVar6 = FUN_0277d6c4(&local_74);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
                puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8);
                if (puVar10 != (uint *)0x0) {
                  uVar6 = *puVar10;
                  if (uVar6 != 0) {
                    if (puVar10 != (uint *)(ulong)uVar6) {
                      puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
                      if (*puVar11 != 0) {
                        uVar6 = puVar11[1];
                        if (uVar6 != 0) {
                          if ((ulong)(ushort)puVar11[2] != 0) {
                            lVar13 = 0xc;
                            if (*(char *)((long)puVar11 + 10) != '\0') {
                              lVar13 = 0x1c;
                            }
                            lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
                            if (lVar13 != 0) {
                              uVar2 = 0;
                              if ((ulong)uVar6 != 0) {
                                uVar2 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar6);
                              }
                              if (*puVar11 <= uVar2) {
                                uVar2 = 0xffffffff;
                              }
                              if (uVar2 < DAT_05326ec0) {
                                uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2);
                                if (uVar3 < 0xbd && (uVar3 | 4) == 0xc) {
                                  local_160 = (undefined1)(_DAT_05586008 >> 0x10);
                                  local_15c._0_2_ = (undefined2)_DAT_05586008;
                                  local_74 = _DAT_05586008;
                                  local_70 = DAT_0558600c;
                                  uVar18 = DAT_0558600b;
                                  uVar9 = DAT_0558600c;
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
        lVar13 = *(long *)puVar5;
      }
    }
    uVar6 = FUN_0277d6c4(&local_74);
    lVar16 = *(long *)puVar5;
    if (lVar16 == 0) {
LAB_0234d66c:
      lVar13 = *plVar1 + ((ulong)*(uint *)(*plVar1 + 0x10) & 1) * 0x20;
      puVar10 = (uint *)(lVar13 + 0x14);
      uVar15 = *(undefined2 *)puVar10;
      uVar18 = *(undefined1 *)(lVar13 + 0x16);
      uVar19 = *(undefined1 *)(lVar13 + 0x17);
      local_7c = *puVar10;
      local_15c = *(undefined4 *)(lVar13 + 0x18);
      uVar4 = *(undefined8 *)puVar10;
      local_78 = local_15c;
      uVar6 = FUN_0277d6c4(&local_7c);
      lVar13 = *(long *)puVar5;
      if (lVar13 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar16 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          local_158 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
          local_148 = 0;
          uStack_144 = 0;
          local_150 = uVar4;
          uVar6 = FUN_0277d6c4(&local_150);
          if (*(long *)puVar5 != 0) {
            lVar13 = *(long *)(lVar13 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
                lVar13 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(&local_7c);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
                  puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8);
                  if (puVar10 != (uint *)0x0) {
                    uVar6 = *puVar10;
                    if (uVar6 != 0) {
                      if (puVar10 != (uint *)(ulong)uVar6) {
                        puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
                        if (*puVar11 != 0) {
                          uVar6 = puVar11[1];
                          if (uVar6 != 0) {
                            if ((ulong)(ushort)puVar11[2] != 0) {
                              lVar13 = 0xc;
                              if (*(char *)((long)puVar11 + 10) != '\0') {
                                lVar13 = 0x1c;
                              }
                              lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
                              if (lVar13 != 0) {
                                uVar2 = 0;
                                if ((ulong)uVar6 != 0) {
                                  uVar2 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar6);
                                }
                                if (*puVar11 <= uVar2) {
                                  uVar2 = 0xffffffff;
                                }
                                if (uVar2 < DAT_05326ec0) {
                                  uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2);
                                  if (uVar3 < 0xbd && (uVar3 | 4) == 0xc) {
                                    local_15c = DAT_0558600c;
                                    uVar15 = DAT_05586008;
                                    uVar18 = DAT_0558600a;
                                    uVar19 = DAT_0558600b;
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
          lVar13 = *(long *)puVar5;
        }
      }
      *(undefined2 *)(param_1 + 0xc20c) = uVar15;
      *(undefined1 *)(param_1 + 0xc20e) = uVar18;
      *(undefined1 *)(param_1 + 0xc20f) = uVar19;
      *(undefined4 *)(param_1 + 0xc210) = local_15c;
      lVar16 = *(long *)(param_1 + 0xbdf0) +
               ((ulong)*(uint *)(*(long *)(param_1 + 0xbdf0) + 0x10) & 1) * 0x20;
      puVar10 = (uint *)(lVar16 + 0x14);
      uVar15 = *(undefined2 *)puVar10;
      local_15c._0_1_ = *(undefined1 *)(lVar16 + 0x16);
      local_160 = *(undefined1 *)(lVar16 + 0x17);
      local_7c = *puVar10;
      uVar9 = *(undefined4 *)(lVar16 + 0x18);
      uVar4 = *(undefined8 *)puVar10;
      local_78 = uVar9;
      uVar6 = FUN_0277d6c4(&local_7c);
      lVar16 = *(long *)puVar5;
      if (lVar16 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
            local_148 = 0;
            uStack_144 = 0;
            local_158 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
            local_150 = uVar4;
            uVar6 = FUN_0277d6c4(&local_150);
            if (*(long *)puVar5 != 0) {
              lVar13 = *(long *)(lVar16 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if (uVar6 < *(uint *)(lVar13 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
                  lVar13 = *(long *)PTR_DAT_04bc0428;
                  uVar6 = FUN_0277d6c4(&local_7c);
                  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
                  if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
                     (puVar10 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8),
                     puVar10 != (uint *)0x0)) {
                    uVar6 = *puVar10;
                    if (uVar6 != 0) {
                      if (puVar10 != (uint *)(ulong)uVar6) {
                        puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
                        if (*puVar11 != 0) {
                          uVar6 = puVar11[1];
                          if (uVar6 != 0) {
                            if ((ulong)(ushort)puVar11[2] != 0) {
                              lVar13 = 0xc;
                              if (*(char *)((long)puVar11 + 10) != '\0') {
                                lVar13 = 0x1c;
                              }
                              lVar13 = (long)puVar11 + lVar13 + (ulong)(ushort)puVar11[2] * 8;
                              if (lVar13 != 0) {
                                uVar2 = 0;
                                if ((ulong)uVar6 != 0) {
                                  uVar2 = (uint)((ulong)((long)puVar10 - lVar13) / (ulong)uVar6);
                                }
                                if (*puVar11 <= uVar2) {
                                  uVar2 = 0xffffffff;
                                }
                                if (uVar2 < DAT_05326ec0) {
                                  uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2);
                                  if (uVar3 < 0xbd && (uVar3 | 4) == 0xc) {
                                    local_15c._0_1_ = DAT_0558600a;
                                    local_160 = (undefined1)(_DAT_05586008 >> 0x18);
                                    local_7c = _DAT_05586008;
                                    uVar15 = DAT_05586008;
                                    uVar9 = DAT_0558600c;
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
      *(undefined2 *)(param_1 + 0xc214) = uVar15;
      *(undefined4 *)(param_1 + 0xc218) = uVar9;
      *(undefined1 *)(param_1 + 0xc216) = (undefined1)local_15c;
      *(undefined1 *)(param_1 + 0xc217) = local_160;
    }
    else {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0234d66c;
      local_148 = 0;
      uStack_144 = 0;
      local_158 = &PTR_FUN_04a36b50;
      local_150 = CONCAT53(CONCAT41(uVar9,uVar18),CONCAT12(local_160,(undefined2)local_15c));
      uVar6 = FUN_0277d6c4(&local_150);
      if (*(long *)puVar5 != 0) {
        lVar13 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar6 = FUN_0277d6c4(&local_74);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
             (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8), lVar13 != 0)) {
            local_148 = (undefined4)lVar13;
            uStack_144 = (undefined4)((ulong)lVar13 >> 0x20);
          }
        }
      }
      uVar8 = FUN_01adc790(&local_158);
      if ((uVar8 & 1) == 0) {
        lVar16 = *(long *)puVar5;
        goto LAB_0234d66c;
      }
    }
  }
  lVar13 = *(long *)(param_1 + 0xbe08);
  if (*(char *)(lVar13 + 0x1d5) == '\0') {
LAB_0234d904:
    puVar12 = (undefined2 *)(lVar13 + 0xd4);
  }
  else {
    lVar16 = *(long *)puVar5;
    puVar12 = (undefined2 *)(lVar13 + 0xcc);
    uVar6 = FUN_0277d6c4(puVar12);
    if (*(long *)puVar5 == 0) {
LAB_0234d8e8:
      iVar7 = FUN_0277d6c4(puVar12);
      if (iVar7 != 0xfffd) goto LAB_0234d904;
      puVar12 = &DAT_05586008;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0234d8e8;
    }
  }
  lVar13 = *(long *)(param_1 + 0x1480);
  if (*(char *)(lVar13 + 0x1d5) == '\0') {
LAB_0234d978:
    puVar14 = (undefined2 *)(lVar13 + 0xd4);
  }
  else {
    lVar16 = *(long *)puVar5;
    puVar14 = (undefined2 *)(lVar13 + 0xcc);
    uVar6 = FUN_0277d6c4(puVar14);
    if (*(long *)puVar5 == 0) {
LAB_0234d95c:
      iVar7 = FUN_0277d6c4(puVar14);
      if (iVar7 != 0xfffd) goto LAB_0234d978;
      puVar14 = &DAT_05586008;
    }
    else {
      lVar16 = *(long *)(lVar16 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
         (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0234d95c;
    }
  }
  uVar8 = FUN_0233c2c0(param_1,param_2,puVar12,puVar14);
  uVar9 = 0xffffffff;
  if ((uVar8 & 1) != 0) {
    uVar9 = 1;
  }
  if (*(char *)(param_1 + 0xc20a) == '\0') {
    return;
  }
  lVar13 = *plVar1;
  lVar17 = *(long *)puVar5;
  local_7c = 8;
  uVar6 = FUN_0277d6c4(param_1 + 0xc1d8);
  lVar16 = *(long *)puVar5;
  if (lVar16 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
      local_148 = 0;
      uStack_144 = 0;
      local_150 = *(undefined8 *)(param_1 + 0xc1d8);
      local_158 = &PTR_FUN_04a36b50;
      uVar6 = FUN_0277d6c4(&local_150);
      if (*(long *)puVar5 == 0) {
LAB_0234db24:
        local_6c = 0xbc;
      }
      else {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0234db24;
        lVar16 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(param_1 + 0xc1d8);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((*(uint *)(lVar16 + 0x1d8) <= uVar6) ||
           (puVar10 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar6 * 8),
           puVar10 == (uint *)0x0)) goto LAB_0234db24;
        uVar6 = *puVar10;
        local_6c = 0;
        if ((uVar6 != 0) && (puVar10 != (uint *)(ulong)uVar6)) {
          puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar6);
          local_6c = 0;
          if (*puVar11 != 0) {
            uVar6 = puVar11[1];
            if ((uVar6 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar11 + lVar16 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar16 != 0) {
                uVar2 = 0;
                if ((ulong)uVar6 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar10 - lVar16) / (ulong)uVar6);
                }
                if (*puVar11 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_05326ec0) &&
                   (local_6c = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2),
                   local_6c < 0xbd)) goto LAB_0234db28;
              }
            }
            local_6c = 0;
          }
        }
      }
LAB_0234db28:
      if (local_6c == local_7c) {
        local_74 = *(uint *)(param_1 + 0xc1d8);
        local_70 = *(undefined4 *)(param_1 + 0xc1dc);
        goto LAB_0234db5c;
      }
    }
  }
  local_74 = _DAT_05586008;
  local_70 = DAT_0558600c;
LAB_0234db5c:
  local_148 = 0;
  uStack_144 = 0x3f800000;
  uStack_140 = 0;
  local_158 = (undefined **)0xffffffff00000000;
  local_150 = 0;
  puStack_120 = local_114;
  local_118 = 0x80;
  local_95 = 0;
  local_114[0] = 0;
  local_128 = PTR_DAT_04bb2d88 + 0x10;
  local_88 = 0;
  local_8c = 0;
  local_13c = 0;
  local_134 = 0;
  local_90 = 7;
  puVar10 = &local_74;
  if ((short)*param_2 != -2) {
    puVar10 = param_2;
  }
  FUN_017327f0(lVar13,puVar10,param_3,&local_158,uVar9);
  return;
}

