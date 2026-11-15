
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0233e334(long param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  undefined2 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined2 *puVar13;
  undefined4 *puVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined4 uVar17;
  undefined1 local_b0;
  undefined2 uStack_ac;
  undefined1 local_9c;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  int local_7c;
  undefined *local_78;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  long local_68;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_7c = param_3;
  if (param_3 == 0) {
    FUN_0233da00(param_1,1);
    lVar7 = *(long *)(param_1 + 0xbdd0);
    if (*(char *)(lVar7 + 0x1d5) == '\0') {
LAB_0233e43c:
      puVar14 = (undefined4 *)(lVar7 + 0xd4);
    }
    else {
      lVar11 = *(long *)puVar3;
      puVar14 = (undefined4 *)(lVar7 + 0xcc);
      uVar4 = FUN_0277d6c4(puVar14);
      if (*(long *)puVar3 == 0) {
LAB_0233e41c:
        iVar5 = FUN_0277d6c4(puVar14);
        if (iVar5 != 0xfffd) goto LAB_0233e43c;
        puVar14 = (undefined4 *)&DAT_05586008;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0233e41c;
      }
    }
    uVar17 = puVar14[1];
    *param_2 = *puVar14;
    param_2[1] = uVar17;
    lVar7 = *(long *)(param_1 + 0xbdd8);
    if (*(char *)(lVar7 + 0x1d5) == '\0') {
LAB_0233e4bc:
      puVar14 = (undefined4 *)(lVar7 + 0xd4);
    }
    else {
      lVar11 = *(long *)puVar3;
      puVar14 = (undefined4 *)(lVar7 + 0xcc);
      uVar4 = FUN_0277d6c4(puVar14);
      if (*(long *)puVar3 == 0) {
LAB_0233e49c:
        iVar5 = FUN_0277d6c4(puVar14);
        if (iVar5 != 0xfffd) goto LAB_0233e4bc;
        puVar14 = (undefined4 *)&DAT_05586008;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0233e49c;
      }
    }
    uVar17 = puVar14[1];
    param_2[2] = *puVar14;
    param_2[3] = uVar17;
    lVar7 = *(long *)(param_1 + 0xbde0);
    if (*(char *)(lVar7 + 0x1d5) != '\0') {
      lVar11 = *(long *)puVar3;
      puVar14 = (undefined4 *)(lVar7 + 0xcc);
      uVar4 = FUN_0277d6c4(puVar14);
      if (*(long *)puVar3 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) goto LAB_0233e540;
      }
      iVar5 = FUN_0277d6c4(puVar14);
      if (iVar5 == 0xfffd) {
        puVar14 = (undefined4 *)&DAT_05586008;
        goto LAB_0233e540;
      }
    }
    puVar14 = (undefined4 *)(lVar7 + 0xd4);
  }
  else {
    lVar7 = *(long *)(param_1 + 0xbdd0);
    lVar7 = lVar7 + ((ulong)*(uint *)(lVar7 + 0x10) & 1) * 0x20;
    uVar17 = *(undefined4 *)(lVar7 + 0x18);
    *param_2 = *(undefined4 *)(lVar7 + 0x14);
    param_2[1] = uVar17;
    lVar7 = *(long *)(param_1 + 0xbdd8) +
            ((ulong)*(uint *)(*(long *)(param_1 + 0xbdd8) + 0x10) & 1) * 0x20;
    uVar17 = *(undefined4 *)(lVar7 + 0x18);
    param_2[2] = *(undefined4 *)(lVar7 + 0x14);
    param_2[3] = uVar17;
    puVar14 = (undefined4 *)
              (*(long *)(param_1 + 0xbde0) +
               ((ulong)*(uint *)(*(long *)(param_1 + 0xbde0) + 0x10) & 1) * 0x20 + 0x14);
  }
LAB_0233e540:
  uVar17 = puVar14[1];
  param_2[4] = *puVar14;
  param_2[5] = uVar17;
  local_8c = _DAT_05586008;
  local_88 = DAT_0558600c;
  if (param_3 == 0) {
    lVar7 = *(long *)(param_1 + 0xbde8);
    if (*(char *)(lVar7 + 0x1d5) == '\0') {
LAB_0233e870:
      puVar13 = (undefined2 *)(lVar7 + 0xd4);
    }
    else {
      lVar11 = *(long *)puVar3;
      puVar13 = (undefined2 *)(lVar7 + 0xcc);
      uVar4 = FUN_0277d6c4(puVar13);
      if (*(long *)puVar3 == 0) {
LAB_0233e850:
        iVar5 = FUN_0277d6c4(puVar13);
        if (iVar5 != 0xfffd) goto LAB_0233e870;
        puVar13 = &DAT_05586008;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0233e850;
      }
    }
    uStack_ac = *puVar13;
    local_b0 = *(undefined1 *)(puVar13 + 1);
    local_9c = *(undefined1 *)((long)puVar13 + 3);
    uVar17 = *(undefined4 *)(puVar13 + 2);
    lVar11 = *(long *)puVar3;
    local_94 = uStack_ac;
    local_92 = local_b0;
    local_91 = local_9c;
    local_90 = uVar17;
    uVar4 = FUN_0277d6c4(&local_94);
    lVar7 = *(long *)puVar3;
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_78 = PTR_DAT_04bc0510 + 0x10;
        local_68 = 0;
        local_70 = uStack_ac;
        local_6e = local_b0;
        local_6d = local_9c;
        local_6c = uVar17;
        uVar4 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar3 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(&local_94);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if (uVar4 < *(uint *)(lVar7 + 0x1d8)) {
              puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8);
              if (puVar8 != (uint *)0x0) {
                uVar4 = *puVar8;
                if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
                  puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
                  if (*puVar9 != 0) {
                    uVar4 = puVar9[1];
                    if (uVar4 != 0) {
                      if ((ulong)(ushort)puVar9[2] != 0) {
                        lVar7 = 0xc;
                        if (*(char *)((long)puVar9 + 10) != '\0') {
                          lVar7 = 0x1c;
                        }
                        lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
                        if (lVar7 != 0) {
                          uVar1 = 0;
                          if ((ulong)uVar4 != 0) {
                            uVar1 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar4);
                          }
                          if (*puVar9 <= uVar1) {
                            uVar1 = 0xffffffff;
                          }
                          if ((uVar1 < DAT_05326ec0) &&
                             (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                             uVar2 < 0xbd && (uVar2 | 4) == 0xc)) {
                            local_94 = DAT_05586008;
                            local_92 = DAT_0558600a;
                            local_91 = DAT_0558600b;
                            uVar17 = DAT_0558600c;
                            local_b0 = DAT_0558600a;
                            local_9c = DAT_0558600b;
                            uStack_ac = DAT_05586008;
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
    lVar7 = *(long *)(param_1 + 0xbdf0);
    local_84 = uStack_ac;
    local_82 = local_b0;
    local_81 = local_9c;
    local_80 = uVar17;
    if (*(char *)(lVar7 + 0x1d5) == '\0') {
LAB_0233eac4:
      puVar13 = (undefined2 *)(lVar7 + 0xd4);
    }
    else {
      lVar11 = *(long *)puVar3;
      puVar13 = (undefined2 *)(lVar7 + 0xcc);
      uVar4 = FUN_0277d6c4(puVar13);
      if (*(long *)puVar3 == 0) {
LAB_0233eaa4:
        iVar5 = FUN_0277d6c4(puVar13);
        if (iVar5 != 0xfffd) goto LAB_0233eac4;
        puVar13 = &DAT_05586008;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0233eaa4;
      }
    }
    uVar10 = *puVar13;
    uVar15 = *(undefined1 *)(puVar13 + 1);
    uVar16 = *(undefined1 *)((long)puVar13 + 3);
    uVar12 = *(undefined4 *)(puVar13 + 2);
    lVar11 = *(long *)puVar3;
    local_94 = uVar10;
    local_92 = uVar15;
    local_91 = uVar16;
    local_90 = uVar12;
    uVar4 = FUN_0277d6c4(&local_94);
    lVar7 = *(long *)puVar3;
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_78 = PTR_DAT_04bc0510 + 0x10;
        local_68 = 0;
        local_70 = uVar10;
        local_6e = uVar15;
        local_6d = uVar16;
        local_6c = uVar12;
        uVar4 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar3 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          goto LAB_0233eb70;
        }
      }
    }
  }
  else {
    lVar11 = *(long *)puVar3;
    lVar7 = *(long *)(param_1 + 0xbde8) +
            ((ulong)*(uint *)(*(long *)(param_1 + 0xbde8) + 0x10) & 1) * 0x20;
    uStack_ac = *(undefined2 *)(lVar7 + 0x14);
    local_b0 = *(undefined1 *)(lVar7 + 0x16);
    local_9c = *(undefined1 *)(lVar7 + 0x17);
    uVar17 = *(undefined4 *)(lVar7 + 0x18);
    local_94 = uStack_ac;
    local_92 = local_b0;
    local_91 = local_9c;
    local_90 = uVar17;
    uVar4 = FUN_0277d6c4(&local_94);
    lVar7 = *(long *)puVar3;
    if (lVar7 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        local_78 = PTR_DAT_04bc0510 + 0x10;
        local_68 = 0;
        local_70 = uStack_ac;
        local_6e = local_b0;
        local_6d = local_9c;
        local_6c = uVar17;
        uVar4 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar3 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar4 = FUN_0277d6c4(&local_94);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if (uVar4 < *(uint *)(lVar7 + 0x1d8)) {
              puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8);
              if (puVar8 != (uint *)0x0) {
                uVar4 = *puVar8;
                if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
                  puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
                  if (*puVar9 != 0) {
                    uVar4 = puVar9[1];
                    if (uVar4 != 0) {
                      if ((ulong)(ushort)puVar9[2] != 0) {
                        lVar7 = 0xc;
                        if (*(char *)((long)puVar9 + 10) != '\0') {
                          lVar7 = 0x1c;
                        }
                        lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
                        if (lVar7 != 0) {
                          uVar1 = 0;
                          if ((ulong)uVar4 != 0) {
                            uVar1 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar4);
                          }
                          if (*puVar9 <= uVar1) {
                            uVar1 = 0xffffffff;
                          }
                          if ((uVar1 < DAT_05326ec0) &&
                             (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                             uVar2 < 0xbd && (uVar2 | 4) == 0xc)) {
                            uStack_ac = (undefined2)_DAT_05586008;
                            local_b0 = (undefined1)((uint)_DAT_05586008 >> 0x10);
                            local_9c = (undefined1)((uint)_DAT_05586008 >> 0x18);
                            uVar17 = DAT_0558600c;
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
        lVar7 = *(long *)puVar3;
      }
    }
    lVar11 = *(long *)(param_1 + 0xbdf0) +
             ((ulong)*(uint *)(*(long *)(param_1 + 0xbdf0) + 0x10) & 1) * 0x20;
    uVar10 = *(undefined2 *)(lVar11 + 0x14);
    uVar15 = *(undefined1 *)(lVar11 + 0x16);
    uVar16 = *(undefined1 *)(lVar11 + 0x17);
    uVar12 = *(undefined4 *)(lVar11 + 0x18);
    local_94 = uVar10;
    local_92 = uVar15;
    local_91 = uVar16;
    local_90 = uVar12;
    local_84 = uStack_ac;
    local_82 = local_b0;
    local_81 = local_9c;
    local_80 = uVar17;
    uVar4 = FUN_0277d6c4(&local_94);
    lVar11 = *(long *)puVar3;
    if (lVar11 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if (uVar4 < *(uint *)(lVar7 + 0x1d8)) {
        if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
          local_78 = PTR_DAT_04bc0510 + 0x10;
          local_68 = 0;
          local_70 = uVar10;
          local_6e = uVar15;
          local_6d = uVar16;
          local_6c = uVar12;
          uVar4 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar3 == 0) goto LAB_0233ec80;
          lVar7 = *(long *)(lVar11 + 0x57e58);
LAB_0233eb70:
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if (uVar4 < *(uint *)(lVar7 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
              lVar7 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(&local_94);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if (uVar4 < *(uint *)(lVar7 + 0x1d8)) {
                puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8);
                if (puVar8 != (uint *)0x0) {
                  uVar4 = *puVar8;
                  if (uVar4 != 0) {
                    if (puVar8 != (uint *)(ulong)uVar4) {
                      puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
                      if (*puVar9 != 0) {
                        uVar4 = puVar9[1];
                        if (uVar4 != 0) {
                          if ((ulong)(ushort)puVar9[2] != 0) {
                            lVar7 = 0xc;
                            if (*(char *)((long)puVar9 + 10) != '\0') {
                              lVar7 = 0x1c;
                            }
                            lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
                            if (lVar7 != 0) {
                              uVar1 = 0;
                              if ((ulong)uVar4 != 0) {
                                uVar1 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar4);
                              }
                              if (*puVar9 <= uVar1) {
                                uVar1 = 0xffffffff;
                              }
                              if (uVar1 < DAT_05326ec0) {
                                uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2);
                                if (uVar2 < 0xbd && (uVar2 | 4) == 0xc) {
                                  local_94 = DAT_05586008;
                                  local_92 = DAT_0558600a;
                                  local_91 = DAT_0558600b;
                                  uVar10 = DAT_05586008;
                                  uVar15 = DAT_0558600a;
                                  uVar16 = DAT_0558600b;
                                  uVar12 = DAT_0558600c;
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
LAB_0233ec80:
  lVar11 = *(long *)puVar3;
  local_8c = CONCAT13(uVar16,CONCAT12(uVar15,uVar10));
  local_88 = uVar12;
  uVar4 = FUN_0277d6c4(&local_84);
  lVar7 = *(long *)puVar3;
  if (lVar7 == 0) {
LAB_0233ee04:
    *(undefined1 *)((long)param_2 + 0x23) = uVar16;
    *(undefined2 *)(param_2 + 8) = uVar10;
    *(undefined1 *)((long)param_2 + 0x22) = uVar15;
    param_2[9] = uVar12;
    lVar7 = *(long *)(param_1 + 0xbdf8);
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0233ee04;
    local_68 = 0;
    local_78 = PTR_DAT_04bc0510 + 0x10;
    local_70 = uStack_ac;
    local_6e = local_b0;
    local_6d = local_9c;
    local_6c = uVar17;
    uVar4 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar3 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        lVar7 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(&local_84);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if (uVar4 < *(uint *)(lVar7 + 0x1d8)) {
          lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8);
          if (lVar7 != 0) {
            local_68 = lVar7;
          }
        }
      }
    }
    iVar5 = FUN_01ad78cc(&local_78);
    if (iVar5 == 7) {
      *(undefined2 *)(param_2 + 0x10) = uStack_ac;
      *(undefined1 *)((long)param_2 + 0x42) = local_b0;
      *(undefined1 *)((long)param_2 + 0x43) = local_9c;
      puVar14 = (undefined4 *)PTR_DAT_04bb37e0;
      param_2[0x11] = uVar17;
      if (param_3 == 0) {
        uVar6 = FUN_02665540((undefined2 *)(param_1 + 0xc20c));
        puVar13 = (undefined2 *)puVar14;
        if ((uVar6 & 1) == 0) {
          puVar13 = (undefined2 *)(param_1 + 0xc20c);
        }
        *(undefined2 *)(param_2 + 6) = *puVar13;
        *(undefined1 *)((long)param_2 + 0x1a) = *(undefined1 *)(puVar13 + 1);
        *(undefined1 *)((long)param_2 + 0x1b) = *(undefined1 *)((long)puVar13 + 3);
        param_2[7] = *(undefined4 *)(puVar13 + 2);
        uVar6 = FUN_02665540((undefined4 *)(param_1 + 0xc214));
        if ((uVar6 & 1) == 0) {
          puVar14 = (undefined4 *)(param_1 + 0xc214);
        }
      }
    }
    else {
      puVar14 = &local_8c;
      *(undefined2 *)(param_2 + 6) = uStack_ac;
      *(undefined1 *)((long)param_2 + 0x1a) = local_b0;
      *(undefined1 *)((long)param_2 + 0x1b) = local_9c;
      param_2[7] = uVar17;
    }
    *(undefined2 *)(param_2 + 8) = *(undefined2 *)puVar14;
    *(undefined1 *)((long)param_2 + 0x22) = *(undefined1 *)((long)puVar14 + 2);
    *(undefined1 *)((long)param_2 + 0x23) = *(undefined1 *)((long)puVar14 + 3);
    param_2[9] = puVar14[1];
    lVar7 = *(long *)(param_1 + 0xbdf8);
  }
  if (param_3 != 0) {
    lVar7 = lVar7 + ((ulong)*(uint *)(lVar7 + 0x10) & 1) * 0x20;
    uVar17 = *(undefined4 *)(lVar7 + 0x18);
    param_2[10] = *(undefined4 *)(lVar7 + 0x14);
    param_2[0xb] = uVar17;
    lVar7 = *(long *)(param_1 + 0xbe00) +
            ((ulong)*(uint *)(*(long *)(param_1 + 0xbe00) + 0x10) & 1) * 0x20;
    uVar17 = *(undefined4 *)(lVar7 + 0x18);
    param_2[0xc] = *(undefined4 *)(lVar7 + 0x14);
    param_2[0xd] = uVar17;
    lVar7 = *(long *)(param_1 + 0xbe08) +
            ((ulong)*(uint *)(*(long *)(param_1 + 0xbe08) + 0x10) & 1) * 0x20;
    uVar17 = *(undefined4 *)(lVar7 + 0x18);
    param_2[0xe] = *(undefined4 *)(lVar7 + 0x14);
    param_2[0xf] = uVar17;
    return;
  }
  if (*(char *)(lVar7 + 0x1d5) == '\0') {
LAB_0233ef30:
    puVar14 = (undefined4 *)(lVar7 + 0xd4);
  }
  else {
    lVar11 = *(long *)puVar3;
    puVar14 = (undefined4 *)(lVar7 + 0xcc);
    uVar4 = FUN_0277d6c4(puVar14);
    if (*(long *)puVar3 == 0) {
LAB_0233ef14:
      iVar5 = FUN_0277d6c4(puVar14);
      if (iVar5 != 0xfffd) goto LAB_0233ef30;
      puVar14 = (undefined4 *)&DAT_05586008;
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0233ef14;
    }
  }
  uVar17 = puVar14[1];
  param_2[10] = *puVar14;
  param_2[0xb] = uVar17;
  lVar7 = *(long *)(param_1 + 0xbe00);
  if (*(char *)(lVar7 + 0x1d5) == '\0') {
LAB_0233efac:
    puVar14 = (undefined4 *)(lVar7 + 0xd4);
  }
  else {
    lVar11 = *(long *)puVar3;
    puVar14 = (undefined4 *)(lVar7 + 0xcc);
    uVar4 = FUN_0277d6c4(puVar14);
    if (*(long *)puVar3 == 0) {
LAB_0233ef90:
      iVar5 = FUN_0277d6c4(puVar14);
      if (iVar5 != 0xfffd) goto LAB_0233efac;
      puVar14 = (undefined4 *)&DAT_05586008;
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((*(uint *)(lVar11 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0233ef90;
    }
  }
  uVar17 = puVar14[1];
  param_2[0xc] = *puVar14;
  param_2[0xd] = uVar17;
  lVar7 = *(long *)(param_1 + 0xbe08);
  if (*(char *)(lVar7 + 0x1d5) != '\0') {
    lVar11 = *(long *)puVar3;
    puVar14 = (undefined4 *)(lVar7 + 0xcc);
    uVar4 = FUN_0277d6c4(puVar14);
    if (*(long *)puVar3 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) goto LAB_0233f02c;
    }
    iVar5 = FUN_0277d6c4(puVar14);
    if (iVar5 == 0xfffd) {
      puVar14 = (undefined4 *)&DAT_05586008;
      goto LAB_0233f02c;
    }
  }
  puVar14 = (undefined4 *)(lVar7 + 0xd4);
LAB_0233f02c:
  uVar17 = puVar14[1];
  param_2[0xe] = *puVar14;
  param_2[0xf] = uVar17;
  FUN_0233da00(param_1,0);
  return;
}

