
/* WARNING: Type propagation algorithm not settling */

int FUN_0268f390(long param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
                undefined4 param_5,uint param_6,uint param_7)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 *******pppppppuVar16;
  ulong uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  undefined8 *******pppppppuVar21;
  int *piVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *******pppppppuVar26;
  long lVar27;
  byte *pbVar28;
  undefined8 *puVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined8 *puVar33;
  undefined4 *puVar34;
  uint local_4ec;
  uint local_4bc;
  undefined8 *******local_4a8;
  undefined8 *******local_4a0;
  undefined8 *******local_498;
  undefined4 local_490;
  undefined8 *******local_488;
  undefined8 *******pppppppuStack_480;
  undefined4 local_478;
  undefined8 *******local_470 [3];
  undefined8 *******local_458 [3];
  undefined8 *******local_440 [3];
  undefined8 *******local_428 [3];
  undefined8 *******local_410 [3];
  undefined8 *******local_3f8 [3];
  undefined8 *******local_3e0 [3];
  undefined8 *******local_3c8 [3];
  undefined8 *******local_3b0 [3];
  undefined8 *******local_398 [3];
  undefined8 *******local_380 [3];
  undefined8 *******local_368 [3];
  undefined8 *******local_350 [3];
  undefined8 *******local_338 [3];
  undefined8 *******local_320 [3];
  undefined8 *******local_308 [3];
  undefined8 *******local_2f0 [3];
  undefined8 *******local_2d8 [3];
  undefined8 *******local_2c0 [3];
  undefined8 *******local_2a8 [3];
  undefined8 *******local_290 [3];
  undefined8 *******local_278 [3];
  undefined8 *******local_260 [3];
  undefined8 *******local_248 [3];
  undefined8 *******local_230 [3];
  undefined8 *******local_218 [3];
  undefined8 *******local_200 [3];
  undefined8 *******local_1e8 [3];
  undefined8 *******local_1d0 [3];
  undefined8 ******local_1b8 [3];
  undefined8 *****local_1a0 [3];
  undefined8 ****local_188 [3];
  undefined8 ***local_170 [3];
  undefined8 **local_158 [3];
  undefined8 *local_140 [3];
  undefined8 local_128 [3];
  int local_110;
  uint local_10c;
  undefined **local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  uint *local_f8;
  undefined4 local_ec;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  int local_dc;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  
  puVar6 = PTR_DAT_04bb43c0;
  lVar27 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(param_2);
  lVar24 = *(long *)puVar6;
  if (lVar24 == 0) {
    return -1;
  }
  lVar27 = *(long *)(lVar27 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
  if (*(uint *)(lVar27 + 0x1d8) <= uVar9) {
    return -1;
  }
  if (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
    return -1;
  }
  local_f8 = (uint *)0x0;
  local_100 = *param_2;
  uStack_fc = param_2[1];
  local_108 = &PTR_FUN_04a36b50;
  uVar14 = FUN_0277d6c4(&local_100);
  if (DAT_053274a0 == 0) {
LAB_0268f54c:
    local_10c = 0xbc;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar9 = ((uint)uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_0268f54c;
    lVar24 = *(long *)PTR_DAT_04bc0428;
    uVar14 = FUN_0277d6c4(param_2);
    uVar9 = ((uint)uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar9) ||
       (puVar18 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar9 * 8),
       puVar18 == (uint *)0x0)) goto LAB_0268f54c;
    uVar9 = *puVar18;
    local_10c = 0;
    local_f8 = puVar18;
    if ((uVar9 != 0) && (puVar18 != (uint *)(ulong)uVar9)) {
      puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar9);
      local_10c = 0;
      if (*puVar19 != 0) {
        uVar9 = puVar19[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
          lVar24 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            lVar24 = 0x1c;
          }
          lVar24 = (long)puVar19 + lVar24 + (ulong)(ushort)puVar19[2] * 8;
          if (lVar24 != 0) {
            uVar10 = 0;
            if ((ulong)uVar9 != 0) {
              uVar10 = (uint)((ulong)((long)puVar18 - lVar24) / (ulong)uVar9);
            }
            if (*puVar19 <= uVar10) {
              uVar10 = 0xffffffff;
            }
            if ((uVar10 < DAT_05326ec0) &&
               (uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar10 * 2), local_10c = (uint)uVar3,
               uVar3 < 0xbd)) goto LAB_0268f550;
          }
        }
        local_10c = 0;
      }
    }
  }
LAB_0268f550:
  local_110 = FUN_026b39a0(uVar14,param_2);
  if (local_110 == 2) {
    puVar33 = (undefined8 *)(param_1 + 0x10d6c);
    uVar17 = 0x20;
    bVar5 = false;
  }
  else {
    if (local_110 != 1) {
      return -1;
    }
    puVar33 = (undefined8 *)(param_1 + 0x1094c);
    uVar17 = 0x18;
    bVar5 = true;
  }
  local_4a0 = &local_4a0;
  local_490 = 0;
  pppppppuVar21 = &local_498;
  local_128[0] = 0;
  local_470[0] = local_458;
  local_440[0] = local_428;
  local_410[0] = local_3f8;
  local_458[0] = local_440;
  local_3e0[0] = local_3c8;
  local_3b0[0] = local_398;
  local_380[0] = local_368;
  local_428[0] = local_410;
  local_350[0] = local_338;
  local_320[0] = local_308;
  local_3f8[0] = local_3e0;
  local_2f0[0] = local_2d8;
  local_2c0[0] = local_2a8;
  local_3c8[0] = local_3b0;
  local_290[0] = local_278;
  local_278[0] = local_260;
  local_398[0] = local_380;
  local_260[0] = local_248;
  local_248[0] = local_230;
  local_368[0] = local_350;
  local_230[0] = local_218;
  local_218[0] = local_200;
  local_338[0] = local_320;
  local_200[0] = local_1e8;
  local_1e8[0] = local_1d0;
  local_308[0] = local_2f0;
  local_1d0[0] = local_1b8;
  local_1b8[0] = local_1a0;
  local_488 = local_470;
  local_1a0[0] = local_188;
  local_188[0] = local_170;
  local_2d8[0] = local_2c0;
  local_170[0] = local_158;
  local_2a8[0] = local_290;
  local_158[0] = local_140;
  local_140[0] = local_128;
  local_478 = 0x24;
  local_498 = local_4a0;
  pppppppuStack_480 = local_488;
  FUN_02694430(param_1,&local_4a0);
  uVar25 = 0;
  lVar24 = *(long *)PTR_DAT_04bb43c0;
  puVar29 = puVar33;
  do {
    uVar10 = FUN_0277d6c4(puVar29);
    uVar9 = local_10c;
    if (DAT_053274a0 == 0) {
LAB_0268f79c:
      if (-1 < (int)uVar25) goto LAB_0268ff18;
      break;
    }
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_0268f79c;
    uVar25 = uVar25 + 1;
    puVar29 = (undefined8 *)((long)puVar29 + 0x2c);
    lVar24 = DAT_053274a0;
  } while (uVar17 != uVar25);
  uVar10 = 0xffffffff;
  if (bVar5) {
    uVar25 = 0;
    uVar11 = 0;
    local_4a8 = (undefined8 *******)&local_78;
    local_4bc = 0;
    puVar18 = &local_e0;
    local_4ec = 0;
    puVar29 = puVar33;
    do {
      puVar6 = PTR_DAT_04bb43c0;
      lVar24 = *(long *)PTR_DAT_04bb43c0;
      uVar10 = FUN_0277d6c4(puVar29);
      lVar27 = *(long *)puVar6;
      if (lVar27 == 0) {
LAB_0268f800:
        uVar10 = 0xbd;
LAB_0268f808:
        puVar19 = puVar18;
        if (0x17 < uVar25) {
          puVar19 = &local_e0;
        }
        *puVar19 = uVar10;
      }
      else {
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        if ((*(uint *)(lVar24 + 0x1d8) <= uVar10) ||
           (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_0268f800;
        local_70 = 0;
        local_80 = &PTR_FUN_04a36b50;
        local_78 = *(undefined4 *)puVar29;
        uStack_74 = *(undefined4 *)((long)puVar29 + 4);
        uVar10 = FUN_0277d6c4(local_4a8);
        if (DAT_053274a0 == 0) {
LAB_0268f990:
          local_e8 = 0xbc;
        }
        else {
          lVar24 = *(long *)(lVar27 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((*(uint *)(lVar24 + 0x1d8) <= uVar10) ||
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_0268f990;
          lVar24 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(puVar29);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((*(uint *)(lVar24 + 0x1d8) <= uVar10) ||
             (puVar19 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8),
             puVar19 == (uint *)0x0)) goto LAB_0268f990;
          uVar10 = *puVar19;
          local_e8 = 0;
          if ((uVar10 != 0) && (puVar19 != (uint *)(ulong)uVar10)) {
            puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar10);
            local_e8 = 0;
            if (*puVar20 != 0) {
              uVar10 = puVar20[1];
              if ((uVar10 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                lVar24 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  lVar24 = 0x1c;
                }
                lVar24 = (long)puVar20 + lVar24 + (ulong)(ushort)puVar20[2] * 8;
                if (lVar24 != 0) {
                  uVar12 = 0;
                  if ((ulong)uVar10 != 0) {
                    uVar12 = (uint)((ulong)((long)puVar19 - lVar24) / (ulong)uVar10);
                  }
                  if (*puVar20 <= uVar12) {
                    uVar12 = 0xffffffff;
                  }
                  if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_e8 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar12 * 2),
                     local_e8 < 0xbd)) goto LAB_0268f994;
                }
              }
              local_e8 = 0;
            }
          }
        }
LAB_0268f994:
        uVar10 = local_e8;
        switch(local_e8) {
        case 9:
        case 10:
          puVar19 = puVar18;
          if (0x17 < uVar25) {
            puVar19 = &local_e0;
          }
          *puVar19 = 9;
          local_4bc = local_4bc + 1;
          break;
        default:
          uVar15 = FUN_0277e294(puVar29);
          uVar10 = 0;
          if ((uVar15 & 1) == 0) {
            uVar10 = 0xbd;
          }
        case 0x14:
          puVar19 = puVar18;
          if (0x17 < uVar25) {
            puVar19 = &local_e0;
          }
          *puVar19 = uVar10;
          break;
        case 0x10:
          uVar10 = 0x10;
          uVar11 = uVar11 + 1;
          goto LAB_0268f808;
        case 0x12:
          puVar19 = puVar18;
          if (0x17 < uVar25) {
            puVar19 = &local_e0;
          }
          *puVar19 = 0x12;
          local_4ec = local_4ec + 1;
        }
      }
      uVar25 = uVar25 + 1;
      puVar18 = puVar18 + 1;
      puVar29 = (undefined8 *)((long)puVar29 + 0x2c);
    } while (uVar17 != uVar25);
    if (uVar9 == 9) {
      local_4bc = local_4bc + 1;
    }
    else if (uVar9 == 0x10) {
      uVar11 = uVar11 + 1;
    }
    else if (uVar9 == 0x12) {
      local_4ec = local_4ec + 1;
    }
    uVar10 = 0xffffffff;
    if (local_4bc < 9) {
      uVar25 = 0;
      piVar22 = &local_e0;
      uVar10 = 0xffffffff;
      do {
        bVar8 = 0x17 < uVar25;
        uVar9 = (uint)uVar25;
        uVar25 = uVar25 + 1;
        piVar1 = piVar22;
        if (bVar8) {
          piVar1 = &local_e0;
        }
        piVar22 = piVar22 + 1;
        uVar12 = 0xffffffff;
        if (*piVar1 == 9) {
          uVar12 = ~(1 << (ulong)(uVar9 & 0x1f));
        }
        uVar10 = uVar12 & uVar10;
      } while (uVar17 != uVar25);
    }
    if (uVar11 < 5) {
      uVar25 = 0;
      piVar22 = &local_e0;
      do {
        bVar8 = 0x17 < uVar25;
        uVar9 = (uint)uVar25;
        uVar25 = uVar25 + 1;
        piVar1 = piVar22;
        if (bVar8) {
          piVar1 = &local_e0;
        }
        piVar22 = piVar22 + 1;
        uVar11 = 0xffffffff;
        if (*piVar1 == 0x10) {
          uVar11 = ~(1 << (ulong)(uVar9 & 0x1f));
        }
        uVar10 = uVar11 & uVar10;
      } while (uVar17 != uVar25);
    }
    if (local_4ec < 5) {
      uVar25 = 0;
      piVar22 = &local_e0;
      do {
        bVar8 = 0x17 < uVar25;
        uVar9 = (uint)uVar25;
        uVar25 = uVar25 + 1;
        piVar1 = piVar22;
        if (bVar8) {
          piVar1 = &local_e0;
        }
        piVar22 = piVar22 + 1;
        uVar11 = 0xffffffff;
        if (*piVar1 == 0x12) {
          uVar11 = ~(1 << (ulong)(uVar9 & 0x1f));
        }
        uVar10 = uVar11 & uVar10;
      } while (uVar17 != uVar25);
    }
  }
  puVar6 = PTR_DAT_04bb43c0;
  if ((undefined8 ********)local_498 != &local_4a0) {
    local_4a8 = &local_4a8;
    uVar9 = 0;
    pppppppuVar16 = local_498 + -1;
    pppppppuVar26 = local_498;
    do {
      local_80 = (undefined **)((ulong)local_80 & 0xffffffff00000000);
      FUN_01afbaa4(&local_e0,pppppppuVar16,&local_80);
      puVar7 = PTR_DAT_04bb43c0;
      lVar24 = *(long *)PTR_DAT_04bb43c0;
      uVar11 = FUN_0277d6c4(&local_e0);
      if (*(long *)puVar7 != 0) {
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar24 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          uVar25 = 0;
          local_4bc = 0x100;
          uVar11 = 0xffffffff;
          puVar29 = puVar33;
          do {
            if ((uVar9 >> (ulong)((uint)uVar25 & 0x1f) & 1) == 0) {
              local_80 = (undefined **)*puVar29;
              lVar24 = *(long *)puVar6;
              uVar12 = FUN_0277d6c4(&local_80);
              if (*(long *)puVar6 != 0) {
                lVar24 = *(long *)(lVar24 + 0x57e58);
                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                if (uVar12 < *(uint *)(lVar24 + 0x1d8)) {
                  if (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar12 * 8) != 0) {
                    local_ec = 0;
                    FUN_01afbaa4(&local_e8,&local_80,&local_ec);
                    local_80 = (undefined **)CONCAT44(uStack_e4,local_e8);
                    uVar15 = FUN_0277d7b4(&local_80,&local_e0);
                    if ((uVar15 & 1) != 0) {
                      if (local_80._3_1_ == local_e0._3_1_) {
                        if (local_80._4_4_ == local_dc) {
                          bVar2 = *(byte *)(puVar29 + 5);
                          uVar12 = local_4bc;
                          if (bVar2 <= local_4bc) {
                            uVar12 = (uint)bVar2;
                          }
                          uVar30 = (uint)uVar25;
                          if (local_4bc <= bVar2) {
                            uVar30 = uVar11;
                          }
                          local_4bc = uVar12;
                          uVar11 = uVar30;
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar25 = uVar25 + 1;
            puVar29 = (undefined8 *)((long)puVar29 + 0x2c);
          } while (uVar17 != uVar25);
          if (uVar11 < 0x20) {
            uVar9 = 1 << (ulong)(uVar11 & 0x1f) | uVar9;
          }
        }
      }
      uVar11 = uVar9 - (uVar9 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      if ((uVar11 + (uVar11 >> 0x10) & 0x3f) != 0) {
        uVar11 = 0;
        do {
          uVar30 = 1 << (ulong)(uVar11 & 0x1f);
          uVar31 = 1 << (ulong)(uVar11 + 1 & 0x1f);
          uVar32 = 1 << (ulong)(uVar11 + 2 & 0x1f);
          uVar12 = 0xffffffff;
          if ((uVar30 & uVar9) != 0) {
            uVar12 = ~uVar30;
          }
          uVar30 = 0xffffffff;
          if ((uVar31 & uVar9) != 0) {
            uVar30 = ~uVar31;
          }
          uVar31 = 0xffffffff;
          if ((uVar32 & uVar9) != 0) {
            uVar31 = ~uVar32;
          }
          uVar32 = uVar11 + 3;
          uVar11 = uVar11 + 4;
          uVar4 = 1 << (ulong)(uVar32 & 0x1f);
          uVar32 = 0xffffffff;
          if ((uVar4 & uVar9) != 0) {
            uVar32 = ~uVar4;
          }
          uVar10 = uVar10 & uVar12 & uVar30 & uVar31 & uVar32;
        } while (uVar11 != (uint)uVar17);
      }
      pppppppuVar26 = (undefined8 *******)pppppppuVar26[1];
      pppppppuVar16 = pppppppuVar26 + -1;
    } while (pppppppuVar16 != local_4a8);
  }
  uVar25 = 0;
  uVar9 = 0;
  uVar15 = 0xffffffff;
  uVar11 = 99999999;
  pbVar28 = (byte *)(puVar33 + 5);
  do {
    if ((uVar10 >> (ulong)((uint)uVar25 & 0x1f) & 1) != 0) {
      uVar12 = (uint)(*(int *)(pbVar28 + -0x20) != 0) * 0x100;
      if (pbVar28[1] != 0) {
        uVar12 = uVar12 + 0x100;
      }
      uVar12 = uVar12 | *pbVar28 ^ 0xff;
      if (uVar12 < uVar11) {
        uVar9 = 1;
        uVar15 = uVar25 & 0xffffffff;
        uVar11 = uVar12;
      }
      else if (uVar12 == uVar11) {
        if (DAT_05594b4c == '\x01') {
          uVar12 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          uVar12 = uVar12 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar12 ^ DAT_05582b7c;
          DAT_05582b78 = DAT_05582b7c;
          DAT_05582b7c = uVar12;
        }
        else {
          uVar12 = nn::os::GetSystemTick();
          uVar30 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
          uVar12 = uVar30 ^ uVar30 * 0x800;
          uVar30 = (uVar30 ^ uVar30 >> 0x1e) * 0x6c078965 + 2;
          uVar30 = (uVar30 ^ uVar30 >> 0x1e) * 0x6c078965 + 3;
          uVar30 = (uVar30 ^ uVar30 >> 0x1e) * 0x6c078965 + 4;
          uVar12 = uVar12 >> 8 ^ uVar30 >> 0x13 ^ uVar12 ^ uVar30;
        }
        uVar9 = uVar9 + 1;
        uVar30 = (uint)uVar15;
        if (((ulong)uVar12 * (ulong)uVar9 & 0xffffffff00000000) == 0) {
          uVar30 = (uint)uVar25;
        }
        uVar15 = (ulong)uVar30;
      }
    }
    uVar25 = uVar25 + 1;
    pbVar28 = pbVar28 + 0x2c;
  } while (uVar17 != uVar25);
  if (-1 < (int)uVar15) {
    if (bVar5) {
      FUN_026b3b80(param_1,uVar15,param_6 & 1);
    }
    else {
      FUN_026b3d30(param_1,uVar15,param_6 & 1);
    }
  }
  uVar25 = (ulong)((uint)uVar17 - 1);
LAB_0268ff18:
  uVar13 = FUN_021d7d60(param_1);
  iVar23 = (int)uVar25;
  puVar34 = (undefined4 *)((long)puVar33 + (long)iVar23 * 0x2c);
  FUN_027d2090(puVar34,param_2,param_3,param_4,param_5,param_7 & 1);
  if ((param_6 & 1) != 0) {
    FUN_020ed690(uVar13,puVar34);
  }
  switch(local_10c) {
  case 0x14:
    param_1 = param_1 + 0x1315c;
    break;
  default:
    goto switchD_0268ff8c_caseD_15;
  case 0x18:
    param_1 = param_1 + 0x131b4;
    break;
  case 0x19:
    param_1 = param_1 + 0x13188;
    break;
  case 0x1c:
    param_1 = param_1 + 0x131e0;
  }
  FUN_027d2090(param_1,param_2,param_3,param_4,param_5,0);
switchD_0268ff8c_caseD_15:
  do {
    pppppppuVar26 = (undefined8 *******)*pppppppuVar21;
    pppppppuVar21 = pppppppuVar26 + 1;
  } while ((undefined8 ********)pppppppuVar26 != &local_4a0);
  if (!bVar5) {
    iVar23 = iVar23 + 0x18;
  }
  return iVar23;
}

