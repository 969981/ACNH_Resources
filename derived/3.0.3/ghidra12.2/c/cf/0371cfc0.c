
/* WARNING: Type propagation algorithm not settling */

void FUN_0371cfc0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 **ppuVar15;
  byte bVar16;
  ushort uVar17;
  undefined8 *******pppppppuVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined8 *puVar26;
  short *psVar27;
  ulong uVar28;
  ulong uVar29;
  undefined8 uVar30;
  char cVar31;
  long lVar32;
  long *plVar33;
  uint *puVar34;
  long *plVar35;
  undefined **ppuVar36;
  long *plVar37;
  uint *puVar38;
  bool bVar39;
  undefined4 uVar40;
  int iVar41;
  int *piVar42;
  ulong uVar43;
  uint uVar44;
  long lVar45;
  uint *puVar46;
  undefined8 *puVar47;
  long *plVar48;
  undefined8 ****ppppuVar49;
  uint *puVar50;
  undefined8 *puVar51;
  int iVar52;
  int iVar53;
  undefined8 ***pppuVar54;
  undefined8 **ppuVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 *******local_488;
  undefined8 *******pppppppuStack_480;
  undefined8 *******local_478;
  undefined8 *******local_470;
  undefined8 ******local_468;
  undefined8 *****local_460;
  undefined8 ****local_458;
  undefined8 ***local_450;
  undefined8 **local_448;
  undefined8 *local_440;
  undefined8 local_438;
  undefined8 local_430 [9];
  undefined *local_3e8;
  undefined *local_3e0;
  int local_3d8;
  int local_3d4;
  undefined *local_3d0;
  int local_3c8;
  int local_3c4;
  undefined8 local_3c0;
  undefined8 *local_3b8;
  undefined8 ****local_3b0;
  undefined8 ****local_3a8;
  undefined8 ***local_3a0;
  undefined8 **local_398;
  undefined8 *local_390;
  undefined8 local_388;
  undefined8 local_380 [4];
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  ulong local_348;
  long *local_340;
  undefined8 ***local_338;
  undefined8 ***local_330;
  undefined8 **local_328 [2];
  undefined8 *local_318 [2];
  undefined8 local_308 [2];
  long local_2f8 [3];
  undefined8 ****local_2e0;
  undefined8 ****local_2d8;
  undefined8 ***local_2d0;
  undefined8 local_2c8;
  undefined8 **local_2c0 [2];
  undefined8 *local_2b0 [2];
  undefined8 local_2a0 [2];
  undefined8 ***local_290 [3];
  undefined *local_278;
  undefined8 ***local_270;
  undefined8 local_268;
  undefined8 ***local_260;
  undefined8 local_258;
  undefined8 *local_248 [2];
  undefined8 local_238 [2];
  undefined8 **local_228 [3];
  undefined8 local_210;
  long *local_208;
  undefined8 local_200;
  long *local_1f8;
  undefined8 local_1f0;
  undefined8 *local_1e0 [2];
  undefined8 local_1d0 [2];
  long local_1c0 [3];
  undefined **local_1a8;
  undefined **local_1a0;
  undefined **local_198;
  uint *local_190;
  undefined *local_188;
  short local_180;
  undefined1 local_17e;
  undefined1 local_17d;
  undefined4 local_17c;
  uint *local_178;
  undefined **local_170;
  undefined **local_168;
  undefined *local_160;
  int local_158;
  int local_154;
  undefined8 local_150;
  undefined8 **local_148;
  undefined8 *local_140;
  undefined8 *puStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 *local_120 [2];
  undefined *local_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *puStack_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  byte local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  int local_b0;
  int iStack_ac;
  undefined *local_a8;
  int local_a0;
  int iStack_9c;
  uint local_84;
  
  puVar47 = &DAT_055c04a0;
  lVar32 = *(long *)PTR_DAT_04bb2720;
  if ((lVar32 != 0) && (*(long *)(lVar32 + 0x330) != 0)) {
    puVar47 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar32 + 0x338));
    iVar20 = FUN_006bd550(*puVar47,0);
    puVar47 = (undefined8 *)PTR_DAT_04bc3a80;
    if (iVar20 != 0x758f7eaf) {
      puVar47 = &DAT_055c04a0;
    }
  }
  uVar21 = local_490._4_4_;
  iVar20 = *(int *)(puVar47 + 7);
  if (DAT_05ac0a90 == iVar20) {
    lVar32 = 0;
    uVar40 = DAT_05ac0a94;
  }
  else if (DAT_05ac0aa0 == iVar20) {
    lVar32 = 1;
    uVar40 = DAT_05ac0aa4;
  }
  else {
    if (DAT_05ac0ab0 == iVar20) {
      lVar32 = 2;
    }
    else if (DAT_05ac0ac0 == iVar20) {
      lVar32 = 3;
    }
    else if (DAT_05ac0ad0 == iVar20) {
      lVar32 = 4;
    }
    else if (DAT_05ac0ae0 == iVar20) {
      lVar32 = 5;
    }
    else if (DAT_05ac0af0 == iVar20) {
      lVar32 = 6;
    }
    else if (DAT_05ac0b00 == iVar20) {
      lVar32 = 7;
    }
    else if (DAT_05ac0b10 == iVar20) {
      lVar32 = 8;
    }
    else {
      if (DAT_05ac0b20 != iVar20) {
        return;
      }
      lVar32 = 9;
    }
    uVar40 = (&DAT_05ac0a94)[lVar32 * 4];
    if (DAT_05ac0ab0 == iVar20) {
      lVar32 = 2;
    }
    else if (DAT_05ac0ac0 == iVar20) {
      lVar32 = 3;
    }
    else if (DAT_05ac0ad0 == iVar20) {
      lVar32 = 4;
    }
    else if (DAT_05ac0ae0 == iVar20) {
      lVar32 = 5;
    }
    else if (DAT_05ac0af0 == iVar20) {
      lVar32 = 6;
    }
    else if (DAT_05ac0b00 == iVar20) {
      lVar32 = 7;
    }
    else if (DAT_05ac0b10 == iVar20) {
      lVar32 = 8;
    }
    else {
      if (DAT_05ac0b20 != iVar20) {
        return;
      }
      lVar32 = 9;
    }
  }
  local_210 = (undefined **)CONCAT44(local_210._4_4_,uVar40);
  local_490 = (undefined8 *)((ulong)local_490._4_4_ << 0x20);
  local_358 = (&DAT_05ac0a98)[lVar32 * 4];
  local_498 = 0;
  local_278 = (undefined *)CONCAT44(local_278._4_4_,local_358);
  switch(uVar40) {
  case 0:
    uVar21 = 1;
    goto LAB_0371d2a4;
  case 1:
    local_498 = 0x300000002;
    local_490 = (undefined8 *)CONCAT44(uVar21,4);
    break;
  case 2:
    local_498 = 0x600000005;
    local_490 = (undefined8 *)CONCAT44(uVar21,10);
    break;
  case 3:
    local_498 = 0x900000007;
    break;
  case 4:
    uVar21 = 8;
LAB_0371d2a4:
    local_498 = (ulong)uVar21;
  }
  uVar43 = (ulong)local_358;
  local_3b8 = (undefined8 *)0x0;
  local_3c0 = 0;
  local_398 = &local_390;
  local_390 = &local_388;
  local_388 = 0;
  if (2 < local_358) {
    uVar43 = 0;
  }
  local_35c = *(uint *)((long)local_430 + uVar43 * 4 + -0x68);
  local_3a0 = &local_398;
  local_3a8 = &local_3a0;
  if (local_380 != (undefined8 *)0x0) {
    local_3c0 = 0x400000000;
    local_3b8 = local_380;
  }
  if (*(int *)(param_1 + 0xe0) == 0) {
    return;
  }
  plVar33 = *(long **)(param_1 + 0xe8);
  iVar20 = 0;
  bVar39 = true;
  plVar48 = plVar33 + *(int *)(param_1 + 0xe0);
  local_3b0 = local_3a8;
  do {
    while( true ) {
      ppppuVar49 = local_3b0;
      lVar32 = *plVar33;
      uVar43 = (ulong)*(uint *)(lVar32 + 0xd8);
      if ((*(uint *)(lVar32 + 0xd8) != 0) && (*(uint *)(lVar32 + 0xe8) == local_358)) break;
LAB_0371d338:
      plVar33 = plVar33 + 1;
      if (plVar33 == plVar48) {
        if (bVar39) {
          return;
        }
        goto LAB_0371d404;
      }
    }
    if (iVar20 != 0) {
      lVar45 = (long)iVar20 << 3;
      puVar47 = local_3b8;
      do {
        puVar46 = (uint *)*puVar47;
        uVar43 = (ulong)*(uint *)(lVar32 + 0xd8);
        if (uVar43 == *puVar46) {
          puVar46[1] = puVar46[1] + 1;
          goto LAB_0371d330;
        }
        puVar47 = puVar47 + 1;
        lVar45 = lVar45 + -8;
      } while (lVar45 != 0);
    }
    if (iVar20 < local_3c0._4_4_) {
      if (local_3b0 != (undefined8 ****)0x0) {
        local_3b0 = (undefined8 ****)*local_3b0;
      }
      *ppppuVar49 = (undefined8 ***)(uVar43 | 0x100000000);
      iVar20 = (int)local_3c0;
      if ((int)local_3c0 < local_3c0._4_4_) {
        local_3b8[(int)local_3c0] = ppppuVar49;
        iVar20 = (int)local_3c0 + 1;
        local_3c0 = CONCAT44(local_3c0._4_4_,iVar20);
      }
    }
LAB_0371d330:
    if ((*(ushort *)(lVar32 + 0x114) >> 10 & 1) != 0) goto LAB_0371d338;
    plVar33 = plVar33 + 1;
    bVar39 = false;
    *(ushort *)(lVar32 + 0x114) = *(ushort *)(lVar32 + 0x114) | 0x400;
  } while (plVar33 != plVar48);
LAB_0371d404:
  local_3e8 = PTR_DAT_04bbc1a0 + 0x10;
  local_3e0 = PTR_DAT_04bb2010 + 0x10;
  local_3d0 = local_3e0;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar32 = *(long *)PTR_DAT_04bb2720, lVar32 != 0)) &&
     (*(long *)(lVar32 + 0x330) != 0)) {
    puVar47 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar32 + 0x338));
    iVar20 = FUN_006bd550(*puVar47,0);
    if (((iVar20 == 0x758f7eaf) && (*(long *)PTR_DAT_04bb2720 != 0)) &&
       ((lVar32 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar32 != 0 &&
        (*(int *)(lVar32 + 0x244) != 0)))) {
      lVar32 = *(long *)PTR_DAT_04bb5ce0;
      if (lVar32 == 0) {
        local_3c8 = 0;
        local_3c4 = 0;
        iVar41 = 0x10;
        iVar20 = 0x10;
      }
      else {
        local_3c8 = *(int *)(lVar32 + 0xd88);
        local_3c4 = *(int *)(lVar32 + 0xd8c);
        iVar20 = *(int *)(lVar32 + 0xd98);
        iVar41 = *(int *)(lVar32 + 0xd9c);
      }
      local_3d8 = local_3c8;
      if (iVar20 <= local_3c8) {
        local_3d8 = iVar20;
      }
      if (local_3c8 <= iVar20) {
        local_3c8 = iVar20;
      }
      local_3d4 = local_3c4;
      if (iVar41 <= local_3c4) {
        local_3d4 = iVar41;
      }
      if (local_3c4 <= iVar41) {
        local_3c4 = iVar41;
      }
      goto LAB_0371d4ec;
    }
  }
  lVar32 = *(long *)PTR_DAT_04bb59d8;
  local_3d8 = *(int *)(lVar32 + 0x28);
  local_3d4 = *(int *)(lVar32 + 0x2c);
  local_3c8 = *(int *)(lVar32 + 0x38);
  local_3c4 = *(int *)(lVar32 + 0x3c);
LAB_0371d4ec:
  if ((int)local_3c0 != 0) {
    puVar13 = local_3b8 + (int)local_3c0;
    ppuVar3 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    puVar4 = PTR_DAT_04bb3140 + 0x10;
    puVar5 = PTR_DAT_04bc0510 + 0x10;
    puVar6 = PTR_DAT_04bcab10 + 0x10;
    puVar7 = PTR_DAT_04bb2010 + 0x10;
    puVar8 = PTR_DAT_04bbc1a0 + 0x10;
    puVar47 = local_3b8;
    plVar33 = (long *)PTR_DAT_04bb4960;
    do {
      puVar46 = (uint *)*puVar47;
      local_498 = 0;
      local_490 = (undefined8 *)0x0;
      local_438 = 0;
      if (local_430 != (undefined8 *)0x0) {
        local_498 = 0x900000000;
        local_490 = local_430;
      }
      uVar43 = (ulong)local_358;
      if (2 < local_358) {
        uVar43 = 0;
      }
      local_488 = &local_478;
      pppppppuStack_480 = &local_478;
      local_478 = &local_470;
      local_470 = &local_468;
      local_468 = &local_460;
      local_460 = &local_458;
      local_458 = &local_450;
      local_450 = &local_448;
      local_448 = &local_440;
      local_440 = &local_438;
      if (*(int *)(param_1 + 0x1460 + uVar43 * 4) == 0) {
        iVar20 = 0;
        do {
          local_210 = (undefined **)((ulong)local_210 & 0xffffffff00000000);
          uVar43 = FUN_036afdd0(*plVar33,puVar46,iVar20,&local_210,&local_278);
          pppppppuVar18 = local_488;
          if (((uVar43 & 1) != 0) && ((uint)local_210 != 0)) {
            if ((int)local_498 < local_498._4_4_) {
              if (local_488 != (undefined8 *******)0x0) {
                local_488 = (undefined8 *******)*local_488;
              }
              *(uint *)pppppppuVar18 = (uint)local_210;
              if ((int)local_498 < local_498._4_4_) {
                local_490[(int)local_498] = pppppppuVar18;
                local_498 = CONCAT44(local_498._4_4_,(int)local_498 + 1);
              }
            }
          }
          iVar20 = iVar20 + 1;
        } while (iVar20 != 9);
LAB_0371d938:
        if ((int)local_498 != 0) {
          puVar14 = local_490 + (int)local_498;
          puVar51 = local_490;
          do {
            puVar34 = (uint *)*puVar51;
            uVar21 = *puVar34;
            if (uVar21 == 0) {
LAB_0371ef70:
              uVar21 = *(uint *)(param_1 + 0xe0);
              if (uVar21 != 0) {
                plVar48 = *(long **)(param_1 + 0xe8);
                if ((uVar21 & 1) == 0) {
                  plVar37 = plVar48;
                }
                else {
                  if ((*(uint *)(*plVar48 + 0xd8) == *puVar46) && (uVar44 = *puVar34, uVar44 < 0x3d)
                     ) {
                    lVar32 = *plVar48 + ((ulong)(uVar44 >> 3) & 0x1ffffffc);
                    *(uint *)(lVar32 + 0x118) =
                         *(uint *)(lVar32 + 0x118) | 1 << (ulong)(uVar44 & 0x1f);
                  }
                  plVar37 = plVar48 + 1;
                }
                if (((long)(int)uVar21 - 1U & 0x1fffffffffffffff) != 0) {
                  do {
                    if ((*(uint *)(*plVar37 + 0xd8) == *puVar46) &&
                       (uVar44 = *puVar34, uVar44 < 0x3d)) {
                      lVar32 = *plVar37 + ((ulong)(uVar44 >> 3) & 0x1ffffffc);
                      *(uint *)(lVar32 + 0x118) =
                           *(uint *)(lVar32 + 0x118) | 1 << (ulong)(uVar44 & 0x1f);
                    }
                    if ((*(uint *)(plVar37[1] + 0xd8) == *puVar46) &&
                       (uVar44 = *puVar34, uVar44 < 0x3d)) {
                      lVar32 = plVar37[1] + ((ulong)(uVar44 >> 3) & 0x1ffffffc);
                      *(uint *)(lVar32 + 0x118) =
                           *(uint *)(lVar32 + 0x118) | 1 << (ulong)(uVar44 & 0x1f);
                    }
                    plVar37 = plVar37 + 2;
                  } while (plVar37 != plVar48 + (int)uVar21);
                }
              }
            }
            else {
              lVar32 = *plVar33;
              if ((int)*(uint *)(lVar32 + 0x5c0) < 1) {
                if (((*(long *)(lVar32 + 0x4b0) != 0) &&
                    (puVar50 = *(uint **)(*(long *)(lVar32 + 0x4b0) + 8), puVar50 != (uint *)0x0))
                   && (((*(uint *)(lVar32 + 0x4c8) <= uVar21 ||
                        (*(char *)(*(long *)(lVar32 + 0x4d0) + (long)(int)uVar21) != '\0')) &&
                       (((uVar21 < *puVar50 && (puVar50[1] != 0)) && ((ushort)puVar50[2] != 0))))))
                {
                  iVar20 = 0xc;
                  if (*(char *)((long)puVar50 + 10) != '\0') {
                    iVar20 = 0x1c;
                  }
                  puVar50 = (uint *)((ulong)(puVar50[1] * uVar21 + (uint)(ushort)puVar50[2] * 8 +
                                            iVar20) + (long)puVar50);
                  if (puVar50 != (uint *)0x0) goto LAB_0371d9c4;
                }
                goto LAB_0371ef70;
              }
              if (*(uint *)(lVar32 + 0x5c0) <= uVar21) goto LAB_0371ef70;
              if (*(uint *)(lVar32 + 0x5b0) <= uVar21) {
                uVar21 = 0;
              }
              puVar50 = *(uint **)(*(long *)(lVar32 + 0x5b8) + (ulong)uVar21 * 8);
              if (puVar50 == (uint *)0x0) goto LAB_0371ef70;
LAB_0371d9c4:
              uVar21 = *puVar50;
              if (uVar21 == 0 || puVar50 == (uint *)(ulong)uVar21) {
LAB_0371d9d4:
                local_34c = 0;
              }
              else {
                puVar38 = (uint *)((long)puVar50 - (long)(ulong)uVar21);
                local_34c = 0;
                if (*puVar38 != 0) {
                  uVar21 = puVar38[1];
                  if ((uVar21 != 0) && ((ulong)(ushort)puVar38[2] != 0)) {
                    lVar32 = 0xc;
                    if (*(char *)((long)puVar38 + 10) != '\0') {
                      lVar32 = 0x1c;
                    }
                    lVar32 = (long)puVar38 + lVar32 + (ulong)(ushort)puVar38[2] * 8;
                    if (lVar32 != 0) {
                      uVar44 = 0;
                      if ((ulong)uVar21 != 0) {
                        uVar44 = (uint)((ulong)((long)puVar50 - lVar32) / (ulong)uVar21);
                      }
                      if (*puVar38 <= uVar44) {
                        uVar44 = 0xffffffff;
                      }
                      if ((uVar44 < *(uint *)PTR_DAT_04bc23e0) &&
                         (local_34c = (uint)*(ushort *)
                                             (*(long *)(PTR_DAT_04bc23e0 + 8) +
                                             (long)(int)uVar44 * 2), local_34c < 4))
                      goto LAB_0371d9d8;
                    }
                  }
                  goto LAB_0371d9d4;
                }
              }
LAB_0371d9d8:
              if (2 < local_34c) {
                if (local_34c == 3) {
                  lVar32 = *(long *)PTR_DAT_04bb5ce0;
                  if (lVar32 != 0) {
                    uVar17 = *(ushort *)(lVar32 + 0xf6c);
                    iVar20 = *(int *)(lVar32 + 0xed0);
                    if ((uVar17 & 2) != 0) {
                      iVar20 = 0;
                    }
                    if (iVar20 == 0) {
                      iVar20 = *(int *)(lVar32 + 0xecc);
                      if ((uVar17 & 2) != 0) {
                        iVar20 = 0;
                      }
                      local_210 = (undefined **)CONCAT44(local_210._4_4_,iVar20);
                      if (iVar20 == 0) goto LAB_0371ef70;
                      fVar59 = *(float *)(lVar32 + 0xf34) + -5.0;
                      fVar58 = *(float *)(lVar32 + 0xf3c);
LAB_0371ee00:
                      local_210 = (undefined **)CONCAT44(local_210._4_4_,1);
                      if ((*(byte *)(lVar32 + 0xedc) >> 1 & 1) == 0) {
                        local_210 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
                        local_208 = (long *)(PTR_DAT_04bb2010 + 0x10);
                        iVar20 = (int)((float)(int)(fVar59 + -2.5) / 5.0) -
                                 (uint)(fVar59 + -2.5 < 0.0);
                        iVar41 = (int)((float)(int)(fVar58 + -2.5) / 5.0) -
                                 (uint)(fVar58 + -2.5 < 0.0);
                        local_200 = (long *)CONCAT44(iVar41,iVar20);
                        local_1f0 = (undefined8 **)CONCAT44(iVar41 + 1,iVar20 + 1);
                        local_1f8 = local_208;
                        uVar43 = FUN_0373b140(&local_210);
                        if ((uVar43 & 1) != 0) goto LAB_0371d970;
                      }
                      goto LAB_0371ef70;
                    }
                    iVar20 = *(int *)(lVar32 + 0xecc);
                    if ((uVar17 & 2) != 0) {
                      iVar20 = 0;
                    }
                    if (iVar20 == 0) {
                      fVar58 = 0.0;
                      fVar59 = -5.0;
                    }
                    else {
                      fVar59 = *(float *)(lVar32 + 0xf34) + -5.0;
                      fVar58 = *(float *)(lVar32 + 0xf3c);
                    }
                    local_210 = (undefined **)CONCAT44(local_210._4_4_,3);
                    if ((*(byte *)(lVar32 + 0xedc) >> 3 & 1) != 0) {
joined_r0x0371ef60:
                      if ((iVar20 == 0) || (lVar32 == 0)) goto LAB_0371ef70;
                      goto LAB_0371ee00;
                    }
                    fVar56 = *(float *)(lVar32 + 0xf30) + -2.5;
                    fVar57 = *(float *)(lVar32 + 0xf28) + 5.0 + -2.5;
                    local_210 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
                    local_208 = (long *)(PTR_DAT_04bb2010 + 0x10);
                    iVar41 = (int)((float)(int)fVar57 / 5.0) - (uint)(fVar57 < 0.0);
                    iVar22 = (int)((float)(int)fVar56 / 5.0) - (uint)(fVar56 < 0.0);
                    local_200 = (long *)CONCAT44(iVar22,iVar41);
                    local_1f0 = (undefined8 **)CONCAT44(iVar22 + 1,iVar41 + 1);
                    local_1f8 = local_208;
                    uVar43 = FUN_0373b140(&local_210);
                    if ((uVar43 & 1) == 0) {
                      lVar32 = *(long *)PTR_DAT_04bb5ce0;
                      goto joined_r0x0371ef60;
                    }
                    goto LAB_0371d970;
                  }
                  local_210 = (undefined **)((ulong)local_210._4_4_ << 0x20);
                }
                goto LAB_0371ef70;
              }
              uVar21 = *puVar50;
              if (uVar21 == 0 || puVar50 == (uint *)(ulong)uVar21) {
LAB_0371db68:
                uVar21 = 0;
              }
              else {
                puVar38 = (uint *)((long)puVar50 - (long)(ulong)uVar21);
                if (*puVar38 == 0) goto LAB_0371db68;
                uVar21 = puVar38[1];
                if ((uVar21 == 0) || ((ulong)(ushort)puVar38[2] == 0)) {
LAB_0371da74:
                  uVar21 = 0;
                }
                else {
                  lVar32 = 0xc;
                  if (*(char *)((long)puVar38 + 10) != '\0') {
                    lVar32 = 0x1c;
                  }
                  lVar32 = (long)puVar38 + lVar32 + (ulong)(ushort)puVar38[2] * 8;
                  if (lVar32 == 0) goto LAB_0371da74;
                  uVar44 = 0;
                  if ((ulong)uVar21 != 0) {
                    uVar44 = (uint)((ulong)((long)puVar50 - lVar32) / (ulong)uVar21);
                  }
                  if (*puVar38 <= uVar44) {
                    uVar44 = 0xffffffff;
                  }
                  if ((*(uint *)PTR_DAT_04bc23d0 <= uVar44) ||
                     (uVar17 = *(ushort *)(*(long *)(PTR_DAT_04bc23d0 + 8) + (long)(int)uVar44 * 2),
                     uVar21 = (uint)uVar17, 0xc < uVar17)) goto LAB_0371da74;
                }
              }
              uVar44 = *puVar50;
              if (uVar44 != 0) {
                cVar31 = *PTR_DAT_04bc23c0;
                do {
                  if (cVar31 == '\0') {
                    cVar31 = '\x01';
                    *PTR_DAT_04bc23c0 = 1;
                    puVar9 = PTR_DAT_04bc23c8;
                    *(undefined8 *)PTR_DAT_04bc23c8 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                    uVar44 = *puVar50;
                  }
                  else {
                    uVar23 = *(uint *)(PTR_DAT_04bc23c8 + 0x24);
                    if (-1 < (int)uVar23) {
                      plVar48 = (long *)((ulong)uVar23 + (long)puVar50);
                      goto LAB_0371dc74;
                    }
                    if (uVar23 != 0xffffffff) break;
                  }
                  puVar38 = (uint *)(ulong)uVar44;
                  plVar48 = (long *)0x0;
                  if ((puVar38 == (uint *)0x0) || (plVar48 = (long *)0x0, puVar50 == puVar38))
                  goto LAB_0371dc74;
                  lVar32 = 0xc;
                  if (*(char *)((long)puVar50 + (10 - (long)puVar38)) != '\0') {
                    lVar32 = 0x1c;
                  }
                  lVar32 = (long)puVar50 + (lVar32 - (long)puVar38);
                  plVar48 = (long *)0x0;
                  if (lVar32 == 0) goto LAB_0371dc74;
                  uVar43 = (ulong)*(ushort *)((long)puVar50 + (8 - (long)puVar38));
                  *(undefined4 *)(PTR_DAT_04bc23c8 + 0x24) = 0xfffffffe;
                  if (uVar43 == 0) break;
                  piVar42 = (int *)(lVar32 + 4);
                  while (piVar42[-1] != 0xac9e9a2) {
                    piVar42 = piVar42 + 2;
                    uVar43 = uVar43 - 1;
                    if (uVar43 == 0) goto LAB_0371dc70;
                  }
                  iVar20 = 0;
                  if (*piVar42 != -1) {
                    iVar20 = *piVar42;
                  }
                  *(int *)(PTR_DAT_04bc23c8 + 0x24) = iVar20;
                  uVar44 = *puVar50;
                  if (uVar44 == 0) break;
                } while( true );
              }
LAB_0371dc70:
              plVar48 = (long *)0x0;
LAB_0371dc74:
              local_208 = *(long **)PTR_PTR_04bc23e8;
              if (plVar48 != (long *)0x0) {
                local_208 = plVar48;
              }
              uVar44 = 0;
              local_350 = uVar21;
              local_210 = ppuVar3;
              do {
                plVar48 = &DAT_0407ebb1;
                if (uVar44 < 0xd) {
                  plVar48 = *(long **)(PTR_DAT_04bc23f0 + (ulong)uVar44 * 8 + 0x90);
                }
                (*(code *)local_210[3])(&local_210);
                plVar37 = (long *)PTR_DAT_04bb43c0;
                if (plVar48 == local_208) {
LAB_0371dd6c:
                  bVar39 = true;
                  goto LAB_0371dd70;
                }
                if ((char)*plVar48 == (char)*local_208) {
                  if ((char)*plVar48 == '\0') goto LAB_0371dd6c;
                  lVar32 = 0x7fffe;
                  plVar35 = local_208;
                  while( true ) {
                    if (*(char *)((long)plVar48 + 1) != *(char *)((long)plVar35 + 1)) break;
                    if (*(char *)((long)plVar48 + 1) == '\0') goto LAB_0371dd6c;
                    if (*(char *)((long)plVar48 + 2) != *(char *)((long)plVar35 + 2)) break;
                    if (*(char *)((long)plVar48 + 2) == '\0') goto LAB_0371dd6c;
                    if ((lVar32 == 0) ||
                       (cVar31 = *(char *)((long)plVar48 + 3),
                       cVar31 != *(char *)((long)plVar35 + 3))) break;
                    lVar32 = lVar32 + -3;
                    plVar35 = (long *)((long)plVar35 + 3);
                    plVar48 = (long *)((long)plVar48 + 3);
                    if (cVar31 == '\0') goto LAB_0371dd6c;
                  }
                }
                uVar23 = 0xd;
                if ((int)uVar44 < 0xd) {
                  uVar23 = uVar44 + 1;
                }
                uVar44 = uVar23;
              } while (uVar23 != 0xd);
              if ((uVar21 | 8) != 8) {
                uVar44 = 0;
                bVar39 = false;
LAB_0371dd70:
                local_354 = 0;
                uVar21 = *puVar50;
                if ((uVar21 != 0) && (puVar50 != (uint *)(ulong)uVar21)) {
                  puVar38 = (uint *)((long)puVar50 - (long)(ulong)uVar21);
                  local_354 = 0;
                  if (*puVar38 != 0) {
                    uVar21 = puVar38[1];
                    if ((uVar21 != 0) && ((ulong)(ushort)puVar38[2] != 0)) {
                      lVar32 = 0xc;
                      if (*(char *)((long)puVar38 + 10) != '\0') {
                        lVar32 = 0x1c;
                      }
                      lVar32 = (long)puVar38 + lVar32 + (ulong)(ushort)puVar38[2] * 8;
                      if (lVar32 != 0) {
                        uVar23 = 0;
                        if ((ulong)uVar21 != 0) {
                          uVar23 = (uint)((ulong)((long)puVar50 - lVar32) / (ulong)uVar21);
                        }
                        if (*puVar38 <= uVar23) {
                          uVar23 = 0xffffffff;
                        }
                        if ((uVar23 < *(uint *)PTR_DAT_04bc23d8) &&
                           (local_354 = (uint)*(ushort *)
                                               (*(long *)(PTR_DAT_04bc23d8 + 8) +
                                               (long)(int)uVar23 * 2), local_354 < 9))
                        goto LAB_0371de6c;
                      }
                    }
                    local_354 = 0;
                  }
                }
LAB_0371de6c:
                lVar32 = *(long *)PTR_DAT_04bb4970;
                if (lVar32 != 0) {
                  if (*(long *)(lVar32 + 0xb0) != 0) {
                    if (*(long *)(*(long *)(lVar32 + 0xb0) + 8) != 0) {
                      local_d0 = 0;
                      lVar45 = *(long *)PTR_DAT_04bb2720;
                      if ((lVar45 == 0) || (*(long *)(lVar45 + 0x330) == 0)) {
                        puVar26 = &DAT_055c04a0;
                      }
                      else {
                        puVar26 = (undefined8 *)
                                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                            (*(long **)PTR_DAT_04bb2640,
                                             *(undefined4 *)(lVar45 + 0x338));
                        iVar20 = FUN_006bd550(*puVar26,0);
                        puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
                        if (iVar20 != 0x758f7eaf) {
                          puVar26 = &DAT_055c04a0;
                        }
                      }
                      local_cc = *(undefined4 *)(puVar26 + 7);
                      local_c8 = FUN_017baf44();
                      iVar20 = local_3d8;
                      local_150 = 0;
                      local_148 = (undefined8 **)0x0;
                      local_e0 = 0;
                      local_c8 = local_c8 & 1;
                      local_f0 = 0;
                      local_100 = 0;
                      local_128 = 0;
                      if (local_120 == (undefined8 **)0x0) {
                        uVar21 = 0;
                      }
                      else {
                        uVar21 = 2;
                        local_150 = 0x200000000;
                        local_148 = local_120;
                      }
                      local_140 = &local_130;
                      local_130 = &local_128;
                      if (local_350 == 9) {
                        uVar23 = 0;
                      }
                      else {
                        uVar23 = 0;
                        if ((local_120 != (undefined8 **)0x0) && (local_350 != 10)) {
                          local_130 = (undefined8 *)CONCAT44((int)((ulong)&local_128 >> 0x20),1);
                          local_120[0] = &local_130;
                          uVar23 = 1;
                          local_150 = CONCAT44(local_150._4_4_,1);
                          uVar21 = local_150._4_4_;
                          local_140 = &local_128;
                        }
                      }
                      puVar26 = local_140;
                      local_110 = puVar8;
                      puStack_108 = puVar7;
                      puStack_f8 = puVar7;
                      puStack_e8 = puVar7;
                      puStack_d8 = puVar4;
                      if (uVar23 < uVar21) {
                        if (local_140 != (undefined8 *)0x0) {
                          local_140 = (undefined8 *)*local_140;
                        }
                        *(undefined4 *)puVar26 = 0;
                        if ((uint)local_150 < local_150._4_4_) {
                          local_148[(int)(uint)local_150] = puVar26;
                          local_150 = CONCAT44(local_150._4_4_,(uint)local_150 + 1);
                        }
                      }
                      local_158 = local_3d8;
                      local_154 = local_3d4;
                      local_160 = PTR_DAT_04bb2010 + 0x10;
                      iVar41 = local_3c4 + 1;
                      local_170 = &local_3e0;
                      local_168 = &local_3d0;
                      puStack_138 = &local_130;
                      if (iVar41 != local_3d4) {
                        ppuVar36 = &local_3d0;
                        do {
                          if ((uint)local_150 != 0) {
                            ppuVar15 = local_148 + (int)(uint)local_150;
                            ppuVar55 = local_148;
                            do {
                              psVar27 = (short *)FUN_01a5190c(&puStack_d8,*(undefined4 *)*ppuVar55,
                                                              &local_160,&puStack_e8);
                              lVar45 = *plVar37;
                              uVar21 = FUN_0277d6c4();
                              if (*plVar37 != 0) {
                                lVar45 = *(long *)(lVar45 + 0x57e58);
                                uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar45 + 0x1f8);
                                if (((uVar21 < *(uint *)(lVar45 + 0x1d8)) &&
                                    (*(long *)(*(long *)(lVar45 + 0x1e0) + (long)(int)uVar21 * 8) !=
                                     0)) && (uVar43 = FUN_0277e158(psVar27), (uVar43 & 1) == 0)) {
                                  if (bVar39) {
                                    if (((*(long *)(lVar32 + 0xb0) != 0) &&
                                        (*(long *)(*(long *)(lVar32 + 0xb0) + 8) != 0)) &&
                                       (*psVar27 != -2)) {
                                      uVar21 = FUN_0277d6c4(psVar27);
                                      uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar32 + 0x1f8)
                                      ;
                                      if ((uVar21 < *(uint *)(lVar32 + 0x1d8)) &&
                                         (puVar50 = *(uint **)(*(long *)(lVar32 + 0x1e0) +
                                                              (long)(int)uVar21 * 8),
                                         puVar50 != (uint *)0x0)) {
                                        local_210 = (undefined **)CONCAT44(local_210._4_4_,uVar44);
                                        uVar21 = *puVar50;
                                        if (uVar21 != 0) {
                                          cVar31 = *PTR_DAT_04bb7e98;
                                          do {
                                            if (cVar31 == '\0') {
                                              cVar31 = '\x01';
                                              *PTR_DAT_04bb7e98 = 1;
                                              puVar9 = PTR_DAT_04bb7ea0;
                                              *(undefined8 *)PTR_DAT_04bb7ea0 = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0xa0) = 0xffffffffffffffff;
                                              *(undefined8 *)(puVar9 + 0xa8) = 0xffffffffffffffff;
                                              uVar21 = *puVar50;
                                            }
                                            else {
                                              uVar23 = *(uint *)(PTR_DAT_04bb7ea0 + 0xa8);
                                              if (-1 < (int)uVar23) {
                                                if ((ulong)uVar23 + (long)puVar50 != 0) {
                                                  uVar21 = uVar44 + 7;
                                                  if (-1 < (int)uVar44) {
                                                    uVar21 = uVar44;
                                                  }
                                                  if ((*(byte *)((ulong)uVar23 + (long)puVar50 +
                                                                (ulong)(uint)((int)uVar21 >> 3)) >>
                                                       (ulong)(uVar44 & 7) & 1) != 0)
                                                  goto LAB_0371e2e4;
                                                }
                                                break;
                                              }
                                              if (uVar23 != 0xffffffff) break;
                                            }
                                            puVar38 = (uint *)(ulong)uVar21;
                                            if ((puVar38 == (uint *)0x0) || (puVar50 == puVar38))
                                            break;
                                            lVar45 = 0xc;
                                            if (*(char *)((long)puVar50 + (10 - (long)puVar38)) !=
                                                '\0') {
                                              lVar45 = 0x1c;
                                            }
                                            lVar45 = (long)puVar50 + (lVar45 - (long)puVar38);
                                            if (lVar45 == 0) break;
                                            uVar43 = (ulong)*(ushort *)
                                                             ((long)puVar50 + (8 - (long)puVar38));
                                            *(undefined4 *)(PTR_DAT_04bb7ea0 + 0xa8) = 0xfffffffe;
                                            if (uVar43 == 0) break;
                                            piVar42 = (int *)(lVar45 + 4);
                                            while (piVar42[-1] != 0x3b8583f3) {
                                              piVar42 = piVar42 + 2;
                                              uVar43 = uVar43 - 1;
                                              if (uVar43 == 0) goto LAB_0371e0b4;
                                            }
                                            iVar22 = 0;
                                            if (*piVar42 != -1) {
                                              iVar22 = *piVar42;
                                            }
                                            *(int *)(PTR_DAT_04bb7ea0 + 0xa8) = iVar22;
                                            uVar21 = *puVar50;
                                            if (uVar21 == 0) break;
                                          } while( true );
                                        }
                                      }
                                    }
                                  }
                                  else {
LAB_0371e2e4:
                                    lVar45 = *plVar37;
                                    local_180 = *psVar27;
                                    local_17e = (undefined1)psVar27[1];
                                    local_17d = *(undefined1 *)((long)psVar27 + 3);
                                    local_17c = *(undefined4 *)(psVar27 + 2);
                                    local_178 = (uint *)0x0;
                                    local_188 = puVar5;
                                    uVar21 = FUN_0277d6c4(&local_180);
                                    if (*plVar37 != 0) {
                                      lVar45 = *(long *)(lVar45 + 0x57e58);
                                      uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar45 + 0x1f8)
                                      ;
                                      if ((uVar21 < *(uint *)(lVar45 + 0x1d8)) &&
                                         (*(long *)(*(long *)(lVar45 + 0x1e0) +
                                                   (long)(int)uVar21 * 8) != 0)) {
                                        lVar45 = *(long *)PTR_DAT_04bc0428;
                                        uVar21 = FUN_0277d6c4(psVar27);
                                        uVar21 = (uVar21 & 0xffff) -
                                                 (uint)*(ushort *)(lVar45 + 0x1f8);
                                        if (uVar21 < *(uint *)(lVar45 + 0x1d8)) {
                                          puVar50 = *(uint **)(*(long *)(lVar45 + 0x1e0) +
                                                              (long)(int)uVar21 * 8);
                                          if (puVar50 != (uint *)0x0) {
                                            local_178 = puVar50;
                                          }
                                        }
                                      }
                                    }
                                    FUN_01afb480(&local_188,&local_110);
                                    iVar22 = (int)local_100 + (int)local_e0;
                                    iVar53 = (int)local_f0 + (int)local_e0;
                                    iVar11 = local_100._4_4_ + local_e0._4_4_;
                                    local_f0._4_4_ = local_f0._4_4_ + local_e0._4_4_;
                                    local_100 = CONCAT44(iVar11,iVar22);
                                    local_f0 = CONCAT44(local_f0._4_4_,iVar53);
                                    if (local_350 == 10) {
                                      if (local_178 == (uint *)0x0) {
LAB_0371e6d8:
                                        uVar23 = 0;
                                      }
                                      else {
                                        uVar21 = *local_178;
                                        uVar23 = 0;
                                        if ((uVar21 != 0) && (local_178 != (uint *)(ulong)uVar21)) {
                                          puVar50 = (uint *)((long)local_178 - (long)(ulong)uVar21);
                                          uVar23 = 0;
                                          if (*puVar50 != 0) {
                                            uVar21 = puVar50[1];
                                            if ((uVar21 != 0) && ((ulong)(ushort)puVar50[2] != 0)) {
                                              lVar45 = 0xc;
                                              if (*(char *)((long)puVar50 + 10) != '\0') {
                                                lVar45 = 0x1c;
                                              }
                                              lVar45 = (long)puVar50 +
                                                       lVar45 + (ulong)(ushort)puVar50[2] * 8;
                                              if (lVar45 != 0) {
                                                uVar23 = 0;
                                                if ((ulong)uVar21 != 0) {
                                                  uVar23 = (uint)((ulong)((long)local_178 - lVar45)
                                                                 / (ulong)uVar21);
                                                }
                                                if (*puVar50 <= uVar23) {
                                                  uVar23 = 0xffffffff;
                                                }
                                                if ((uVar23 < *(uint *)PTR_DAT_04bc0048) &&
                                                   (uVar23 = (uint)*(ushort *)
                                                                    (*(long *)(PTR_DAT_04bc0048 + 8)
                                                                    + (long)(int)uVar23 * 2),
                                                   uVar23 < 0x52)) goto LAB_0371e6dc;
                                              }
                                            }
                                            goto LAB_0371e6d8;
                                          }
                                        }
                                      }
LAB_0371e6dc:
                                      local_210 = (undefined **)CONCAT44(local_210._4_4_,uVar23);
                                      plVar33 = (long *)PTR_DAT_04bb4960;
                                      if ((uVar23 & 0xfffffffe) == 10) goto LAB_0371d970;
                                    }
                                    else if (local_350 == 9) {
                                      if (local_178 == (uint *)0x0) {
LAB_0371e460:
                                        uVar23 = 0;
                                      }
                                      else {
                                        uVar21 = *local_178;
                                        uVar23 = 0;
                                        if ((uVar21 != 0) && (local_178 != (uint *)(ulong)uVar21)) {
                                          puVar50 = (uint *)((long)local_178 - (long)(ulong)uVar21);
                                          uVar23 = 0;
                                          if (*puVar50 != 0) {
                                            uVar21 = puVar50[1];
                                            if ((uVar21 != 0) && ((ulong)(ushort)puVar50[2] != 0)) {
                                              lVar45 = 0xc;
                                              if (*(char *)((long)puVar50 + 10) != '\0') {
                                                lVar45 = 0x1c;
                                              }
                                              lVar45 = (long)puVar50 +
                                                       lVar45 + (ulong)(ushort)puVar50[2] * 8;
                                              if (lVar45 != 0) {
                                                uVar23 = 0;
                                                if ((ulong)uVar21 != 0) {
                                                  uVar23 = (uint)((ulong)((long)local_178 - lVar45)
                                                                 / (ulong)uVar21);
                                                }
                                                if (*puVar50 <= uVar23) {
                                                  uVar23 = 0xffffffff;
                                                }
                                                if ((uVar23 < *(uint *)PTR_DAT_04bc0048) &&
                                                   (uVar23 = (uint)*(ushort *)
                                                                    (*(long *)(PTR_DAT_04bc0048 + 8)
                                                                    + (long)(int)uVar23 * 2),
                                                   uVar23 < 0x52)) goto LAB_0371e464;
                                              }
                                            }
                                            goto LAB_0371e460;
                                          }
                                        }
                                      }
LAB_0371e464:
                                      local_210 = (undefined **)CONCAT44(local_210._4_4_,uVar23);
                                      if (uVar23 - 1 < 9) {
                                        uVar21 = FUN_01ae7550(&local_188);
                                        if (5 < uVar21 - 1) {
                                          local_210._0_4_ = uVar21;
                                          iVar22 = FUN_01ae7550(&local_188);
                                          local_210 = (undefined **)CONCAT44(local_210._4_4_,iVar22)
                                          ;
                                          plVar33 = (long *)PTR_DAT_04bb4960;
                                          if ((iVar22 - 5U & 0xfffffffd) != 0) goto LAB_0371d970;
                                        }
                                        local_1f0 = (undefined8 **)0x0;
                                        local_200 = (long *)0x0;
                                        local_348 = local_348 & 0xffffffffffffff00;
                                        local_210 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
                                        local_208 = (long *)(PTR_DAT_04bb2010 + 0x10);
                                        local_1f8 = local_208;
                                        uVar43 = FUN_01517328(&local_210,&local_348,&puStack_e8,
                                                              psVar27);
                                        if ((uVar43 & 1) != 0) {
                                          iVar22 = local_1f0._4_4_;
                                          if (local_1f0._4_4_ != local_200._4_4_) {
                                            iVar11 = (int)local_1f0 + -1;
                                            iVar12 = (int)local_200;
                                            iVar52 = local_200._4_4_;
                                            iVar53 = (int)local_200;
                                            do {
                                              local_268 = (undefined8 ***)CONCAT44(iVar52,iVar53);
                                              local_278 = PTR_DAT_04bbc1a0 + 0x10;
                                              pppuVar54 = (undefined8 ***)(PTR_DAT_04bb2010 + 0x10);
                                              local_258 = (undefined8 **)
                                                          CONCAT44(iVar52 + 1,iVar53 + 1);
                                              local_270 = pppuVar54;
                                              local_260 = pppuVar54;
                                              uVar43 = FUN_01a4fafc(&puStack_d8,1,&local_278);
                                              if ((uVar43 & 1) != 0) {
                                                iVar19 = (int)local_268;
                                                uVar21 = local_258._4_4_ + 1;
                                                local_2c8 = local_268;
                                                plVar33 = (long *)PTR_DAT_04bb4960;
                                                local_2e0 = &local_270;
                                                local_2d8 = &local_260;
                                                local_2d0 = pppuVar54;
                                                if (uVar21 == local_268._4_4_) goto LAB_0371d970;
                                                while (uVar43 = FUN_01a4fd6c(&puStack_d8,1,
                                                                             &local_2d0,1),
                                                      (uVar43 & 1) != 0) {
                                                  if ((int)local_2c8 < *(int *)(local_2d8 + 1)) {
                                                    iVar2 = (int)local_2c8 + 1;
                                                    uVar23 = local_2c8._4_4_;
                                                  }
                                                  else {
                                                    uVar23 = local_2c8._4_4_ + 1;
                                                    iVar2 = *(int *)(local_2e0 + 1);
                                                    local_2c8 = (undefined8 ***)
                                                                ((ulong)uVar23 << 0x20);
                                                  }
                                                  local_2c8 = (undefined8 ***)
                                                              CONCAT44(local_2c8._4_4_,iVar2);
                                                  plVar33 = (long *)PTR_DAT_04bb4960;
                                                  if (iVar19 == iVar2 && uVar21 == uVar23)
                                                  goto LAB_0371d970;
                                                }
                                              }
                                              bVar1 = iVar11 <= iVar53;
                                              iVar53 = iVar53 + 1;
                                              if (bVar1) {
                                                iVar53 = iVar12;
                                                iVar52 = iVar52 + 1;
                                              }
                                            } while ((iVar12 != iVar53) || (iVar22 != iVar52));
                                          }
                                        }
                                      }
                                    }
                                    else {
                                      if ((local_178 == (uint *)0x0) ||
                                         ((uVar21 = *local_178, uVar21 == 0 ||
                                          (local_178 == (uint *)(ulong)uVar21)))) {
LAB_0371e7c4:
                                        local_210 = (undefined **)((ulong)local_210._4_4_ << 0x20);
LAB_0371e7c8:
                                        puVar50 = &local_354;
                                      }
                                      else {
                                        puVar50 = (uint *)((long)local_178 - (long)(ulong)uVar21);
                                        if ((*puVar50 == 0) ||
                                           ((uVar21 = puVar50[1], uVar21 == 0 ||
                                            ((ulong)(ushort)puVar50[2] == 0)))) goto LAB_0371e7c4;
                                        lVar45 = 0xc;
                                        if (*(char *)((long)puVar50 + 10) != '\0') {
                                          lVar45 = 0x1c;
                                        }
                                        lVar45 = (long)puVar50 +
                                                 lVar45 + (ulong)(ushort)puVar50[2] * 8;
                                        if (lVar45 == 0) goto LAB_0371e7c4;
                                        uVar23 = 0;
                                        if ((ulong)uVar21 != 0) {
                                          uVar23 = (uint)((ulong)((long)local_178 - lVar45) /
                                                         (ulong)uVar21);
                                        }
                                        if (*puVar50 <= uVar23) {
                                          uVar23 = 0xffffffff;
                                        }
                                        if ((*(uint *)PTR_DAT_04bc0110 <= uVar23) ||
                                           (uVar17 = *(ushort *)
                                                      (*(long *)(PTR_DAT_04bc0110 + 8) +
                                                      (long)(int)uVar23 * 2), uVar21 = (uint)uVar17,
                                           8 < uVar17)) goto LAB_0371e7c4;
                                        local_210 = (undefined **)CONCAT44(local_210._4_4_,uVar21);
                                        if (uVar21 == 0) goto LAB_0371e7c8;
                                        if (local_354 == 0) goto LAB_0371ed7c;
                                        if (uVar21 == local_354) goto LAB_0371e7c8;
                                        if (uVar21 == 1) {
                                          if (local_354 - 5 < 2) goto LAB_0371e7c8;
                                        }
                                        else if ((((local_354 != 1) || (1 < uVar21 - 5)) &&
                                                 (uVar21 == 7)) && (local_354 != 2))
                                        goto LAB_0371e7c8;
LAB_0371ed7c:
                                        puVar50 = (uint *)&local_210;
                                      }
                                      local_84 = *puVar50;
                                      local_1a8 = &local_188;
                                      local_1a0 = &local_3e8;
                                      local_198 = &local_110;
                                      local_190 = &local_84;
                                      if (((iVar53 - iVar22) + 1 < 3) &&
                                         ((local_f0._4_4_ - iVar11) + 1 < 3)) {
                                        iVar52 = iVar53 + iVar22;
                                        if (iVar52 < 0 != SCARRY4(iVar53,iVar22)) {
                                          iVar52 = iVar52 + 1;
                                        }
                                        iVar12 = local_f0._4_4_ + iVar11;
                                        iVar52 = iVar52 >> 1;
                                        ppuVar36 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
                                        if (iVar12 < 0 != SCARRY4(local_f0._4_4_,iVar11)) {
                                          iVar12 = iVar12 + 1;
                                        }
                                        local_200 = (long *)CONCAT44((int)(float)(local_f0._4_4_ + 2
                                                                                 ) + -1,iVar52);
                                        local_1f0 = (undefined8 **)
                                                    CONCAT44((int)(float)(local_f0._4_4_ + 2),
                                                             iVar52 + 1);
                                        iVar12 = iVar12 >> 1;
                                        plVar33 = (long *)(PTR_DAT_04bb2010 + 0x10);
                                        local_210 = ppuVar36;
                                        local_208 = plVar33;
                                        local_1f8 = plVar33;
                                        uVar21 = FUN_0373b65c(&local_1a8,&local_210);
                                        local_1f0 = (undefined8 **)
                                                    CONCAT44(iVar12 + 1,(int)(float)(iVar53 + 2));
                                        local_200 = (long *)CONCAT44(iVar12,(int)(float)(iVar53 + 2)
                                                                            + -1);
                                        local_210 = ppuVar36;
                                        local_208 = plVar33;
                                        local_1f8 = plVar33;
                                        uVar43 = FUN_0373b65c(&local_1a8,&local_210);
                                        plVar37 = (long *)PTR_DAT_04bb43c0;
                                        local_200 = (long *)CONCAT44((int)(float)(iVar11 + -1) + -1,
                                                                     iVar52);
                                        local_1f0 = (undefined8 **)
                                                    CONCAT44((int)(float)(iVar11 + -1),iVar52 + 1);
                                        local_210 = ppuVar36;
                                        local_208 = plVar33;
                                        local_1f8 = plVar33;
                                        uVar28 = FUN_0373b65c(&local_1a8,&local_210);
                                        local_200 = (long *)CONCAT44(iVar12,(int)(float)(iVar22 + -1
                                                                                        ) + -1);
                                        local_1f0 = (undefined8 **)
                                                    CONCAT44(iVar12 + 1,(int)(float)(iVar22 + -1));
                                        local_210 = ppuVar36;
                                        local_208 = plVar33;
                                        local_1f8 = plVar33;
                                        uVar29 = FUN_0373b65c(&local_1a8,&local_210);
                                        plVar33 = (long *)PTR_DAT_04bb4960;
                                        if ((uVar21 & 1) != 0) goto LAB_0371d970;
                                        if ((uVar43 & 1) != 0) goto LAB_0371d970;
                                        if (((uVar28 & 1) != 0) || ((uVar29 & 1) != 0))
                                        goto LAB_0371d970;
                                      }
                                      else {
                                        local_208 = (long *)0x0;
                                        local_210 = (undefined **)0x0;
                                        local_1d0[0] = 0;
                                        if (local_1c0 != (long *)0x0) {
                                          local_210 = (undefined **)0x300000000;
                                          local_208 = local_1c0;
                                        }
                                        local_270 = (undefined8 ***)0x0;
                                        local_278 = (undefined *)0x0;
                                        local_238[0] = 0;
                                        if (local_228 != (undefined8 ***)0x0) {
                                          local_278 = (undefined *)0x300000000;
                                          local_270 = local_228;
                                        }
                                        local_2d8 = (undefined8 ****)0x0;
                                        local_2e0 = (undefined8 ****)0x0;
                                        local_2a0[0] = 0;
                                        if (local_290 != (undefined8 ****)0x0) {
                                          local_2e0 = (undefined8 ****)0x300000000;
                                          local_2d8 = local_290;
                                        }
                                        local_340 = (long *)0x0;
                                        local_348 = 0;
                                        local_308[0] = 0;
                                        if (local_2f8 != (long *)0x0) {
                                          local_348 = 0x300000000;
                                          local_340 = local_2f8;
                                        }
                                        local_338 = local_328;
                                        local_330 = local_328;
                                        local_328[0] = local_318;
                                        local_318[0] = local_308;
                                        local_2d0 = local_2c0;
                                        local_2c8 = local_2c0;
                                        local_2c0[0] = local_2b0;
                                        local_2b0[0] = local_2a0;
                                        local_268 = (undefined8 ***)&local_258;
                                        local_260 = (undefined8 ***)&local_258;
                                        local_258 = local_248;
                                        local_248[0] = local_238;
                                        local_200 = &local_1f0;
                                        local_1f8 = &local_1f0;
                                        local_1f0 = local_1e0;
                                        local_1e0[0] = local_1d0;
                                        FUN_021fbb40(0,&local_210,&local_278,&local_348,&local_2e0,
                                                     &local_110);
                                        puVar9 = PTR_DAT_04bbc1a0 + 0x10;
                                        puVar10 = PTR_DAT_04bb2010 + 0x10;
                                        if ((uint)local_210 == 0) {
                                          uVar21 = 0;
                                        }
                                        else {
                                          lVar45 = (long)(int)(uint)local_210 * 8;
                                          plVar33 = local_208;
                                          local_c0 = puVar9;
                                          puStack_b8 = puVar10;
                                          local_a8 = puVar10;
                                          do {
                                            lVar45 = lVar45 + -8;
                                            local_a0 = *(int *)(*plVar33 + 8);
                                            iStack_9c = *(int *)(*plVar33 + 0xc);
                                            local_b0 = local_a0 + -1;
                                            iStack_ac = iStack_9c + -1;
                                            uVar21 = FUN_0373b65c(&local_1a8,&local_c0);
                                            if ((uVar21 & 1) != 0) break;
                                            plVar33 = plVar33 + 1;
                                          } while (lVar45 != 0);
                                        }
                                        if ((int)local_278 == 0) {
                                          uVar23 = 0;
                                        }
                                        else {
                                          lVar45 = (long)(int)local_278 * 8;
                                          pppuVar54 = local_270;
                                          local_c0 = puVar9;
                                          puStack_b8 = puVar10;
                                          local_a8 = puVar10;
                                          do {
                                            lVar45 = lVar45 + -8;
                                            local_a0 = *(int *)(*pppuVar54 + 1);
                                            iStack_9c = *(int *)((long)*pppuVar54 + 0xc);
                                            local_b0 = local_a0 + -1;
                                            iStack_ac = iStack_9c + -1;
                                            uVar23 = FUN_0373b65c(&local_1a8,&local_c0);
                                            if ((uVar23 & 1) != 0) break;
                                            pppuVar54 = pppuVar54 + 1;
                                          } while (lVar45 != 0);
                                        }
                                        puVar9 = PTR_DAT_04bbc1a0 + 0x10;
                                        puVar10 = PTR_DAT_04bb2010 + 0x10;
                                        if ((int)local_348 == 0) {
                                          uVar24 = 0;
                                        }
                                        else {
                                          lVar45 = (long)(int)local_348 * 8;
                                          plVar33 = local_340;
                                          local_c0 = puVar9;
                                          puStack_b8 = puVar10;
                                          local_a8 = puVar10;
                                          do {
                                            lVar45 = lVar45 + -8;
                                            local_a0 = *(int *)(*plVar33 + 8);
                                            iStack_9c = *(int *)(*plVar33 + 0xc);
                                            local_b0 = local_a0 + -1;
                                            iStack_ac = iStack_9c + -1;
                                            uVar24 = FUN_0373b65c(&local_1a8,&local_c0);
                                            if ((uVar24 & 1) != 0) break;
                                            plVar33 = plVar33 + 1;
                                          } while (lVar45 != 0);
                                        }
                                        if ((int)local_2e0 == 0) {
                                          uVar25 = 0;
                                          local_c0 = puVar9;
                                          puStack_b8 = puVar10;
                                          local_a8 = puVar10;
                                        }
                                        else {
                                          lVar45 = (long)(int)local_2e0 * 8;
                                          ppppuVar49 = local_2d8;
                                          local_c0 = puVar9;
                                          puStack_b8 = puVar10;
                                          local_a8 = puVar10;
                                          do {
                                            lVar45 = lVar45 + -8;
                                            local_a0 = *(int *)(*ppppuVar49 + 1);
                                            iStack_9c = *(int *)((long)*ppppuVar49 + 0xc);
                                            local_b0 = local_a0 + -1;
                                            iStack_ac = iStack_9c + -1;
                                            uVar25 = FUN_0373b65c(&local_1a8,&local_c0);
                                            if ((uVar25 & 1) != 0) break;
                                            ppppuVar49 = ppppuVar49 + 1;
                                          } while (lVar45 != 0);
                                        }
                                        if (0 < (int)local_348) {
                                          lVar45 = 0;
                                          do {
                                            (*(code *)**(undefined8 **)local_340[lVar45])();
                                            lVar45 = lVar45 + 1;
                                          } while (lVar45 < (int)local_348);
                                        }
                                        plVar37 = (long *)PTR_DAT_04bb43c0;
                                        if (0 < (int)local_2e0) {
                                          lVar45 = 0;
                                          do {
                                            (*(code *)**local_2d8[lVar45])();
                                            lVar45 = lVar45 + 1;
                                          } while (lVar45 < (int)local_2e0);
                                        }
                                        if (0 < (int)local_278) {
                                          lVar45 = 0;
                                          do {
                                            (*(code *)**local_270[lVar45])();
                                            lVar45 = lVar45 + 1;
                                          } while (lVar45 < (int)local_278);
                                        }
                                        if (0 < (int)(uint)local_210) {
                                          lVar45 = 0;
                                          do {
                                            (*(code *)**(undefined8 **)local_208[lVar45])();
                                            lVar45 = lVar45 + 1;
                                          } while (lVar45 < (int)(uint)local_210);
                                        }
                                        plVar33 = (long *)PTR_DAT_04bb4960;
                                        if (((uVar21 | uVar23 | uVar24 | uVar25) & 1) != 0)
                                        goto LAB_0371d970;
                                      }
                                    }
                                  }
                                }
                              }
LAB_0371e0b4:
                              ppuVar55 = ppuVar55 + 1;
                            } while (ppuVar55 != ppuVar15);
                            ppuVar36 = local_168;
                            plVar33 = (long *)PTR_DAT_04bb4960;
                          }
                          if (local_158 < *(int *)(ppuVar36 + 1)) {
                            local_158 = local_158 + 1;
                          }
                          else {
                            local_154 = local_154 + 1;
                            local_158 = *(int *)(local_170 + 1);
                          }
                        } while (iVar20 != local_158 || iVar41 != local_154);
                      }
                    }
                  }
                }
                goto LAB_0371ef70;
              }
            }
LAB_0371d970:
            puVar51 = puVar51 + 1;
          } while (puVar51 != puVar14);
        }
      }
      else {
        lVar32 = *plVar33;
        if (((lVar32 == 0) ||
            (uVar21 = (local_35c & 0xffff) - (uint)*(ushort *)(lVar32 + 0x7f8),
            *(uint *)(lVar32 + 0x7d8) <= uVar21)) ||
           (puVar34 = *(uint **)(*(long *)(lVar32 + 0x7e0) + (long)(int)uVar21 * 8),
           puVar34 == (uint *)0x0)) {
LAB_0371d794:
          uVar30 = 0;
LAB_0371d798:
          uVar43 = (ulong)local_358;
          if (2 < local_358) {
            uVar43 = 0;
          }
          uVar21 = *(uint *)(param_1 + 0x1460 + uVar43 * 4);
          if ((int)DAT_05ab0ed0 < 1) {
            if ((((DAT_05ab0dc0 == 0) ||
                 (puVar34 = *(uint **)(DAT_05ab0dc0 + 8), puVar34 == (uint *)0x0)) ||
                ((uVar21 < DAT_05ab0dd8 && (*(char *)(DAT_05ab0de0 + (int)uVar21) == '\0')))) ||
               (((*puVar34 <= uVar21 || (puVar34[1] == 0)) || ((ushort)puVar34[2] == 0))))
            goto LAB_0371d910;
            iVar20 = 0xc;
            if (*(char *)((long)puVar34 + 10) != '\0') {
              iVar20 = 0x1c;
            }
            local_270 = (undefined8 ***)
                        ((ulong)(puVar34[1] * uVar21 + (uint)(ushort)puVar34[2] * 8 + iVar20) +
                        (long)puVar34);
          }
          else if (uVar21 < DAT_05ab0ed0) {
            if (DAT_05ab0ec0 <= uVar21) {
              uVar21 = 0;
            }
            local_270 = *(undefined8 ****)(DAT_05ab0ec8 + (ulong)uVar21 * 8);
          }
          else {
LAB_0371d910:
            local_270 = (undefined8 ***)0x0;
          }
          local_210 = &PTR_LAB_04b46090;
          local_208 = &local_498;
          local_278 = puVar6;
          FUN_036a3834(&local_278,&local_210,uVar30);
          goto LAB_0371d938;
        }
        uVar21 = *puVar34;
        if (uVar21 == 0 || puVar34 == (uint *)(ulong)uVar21) {
LAB_0371d77c:
          uVar21 = 0;
        }
        else {
          puVar50 = (uint *)((long)puVar34 - (long)(ulong)uVar21);
          uVar21 = 0;
          if (*puVar50 != 0) {
            uVar21 = puVar50[1];
            if ((uVar21 != 0) && ((ulong)(ushort)puVar50[2] != 0)) {
              lVar32 = 0xc;
              if (*(char *)((long)puVar50 + 10) != '\0') {
                lVar32 = 0x1c;
              }
              lVar32 = (long)puVar50 + lVar32 + (ulong)(ushort)puVar50[2] * 8;
              if (lVar32 != 0) {
                uVar44 = 0;
                if ((ulong)uVar21 != 0) {
                  uVar44 = (uint)((ulong)((long)puVar34 - lVar32) / (ulong)uVar21);
                }
                if (*puVar50 <= uVar44) {
                  uVar44 = 0xffffffff;
                }
                if ((uVar44 < *(uint *)PTR_DAT_04bc3970) &&
                   (uVar21 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc3970 + 8) + (long)(int)uVar44 * 2),
                   uVar21 < 0x15)) goto LAB_0371d780;
              }
            }
            goto LAB_0371d77c;
          }
        }
LAB_0371d780:
        if (uVar21 == *puVar46) goto LAB_0371d794;
        if (*puVar34 == 0) {
LAB_0371f1f4:
          uVar21 = 0;
        }
        else {
          cVar31 = *PTR_DAT_04bc3978;
          do {
            if (cVar31 == '\0') {
              cVar31 = '\x01';
              *PTR_DAT_04bc3978 = 1;
              puVar9 = PTR_DAT_04bc3980;
              *(undefined8 *)PTR_DAT_04bc3980 = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar21 = *(uint *)(PTR_DAT_04bc3980 + 0x24);
              if (-1 < (int)uVar21) {
                if (((byte *)((ulong)uVar21 + (long)puVar34) == (byte *)0x0) ||
                   (bVar16 = *(byte *)((ulong)uVar21 + (long)puVar34), uVar21 = (uint)bVar16,
                   0x14 < bVar16)) goto LAB_0371f1f4;
                goto LAB_0371f1f8;
              }
              if (uVar21 != 0xffffffff) goto LAB_0371f1f4;
            }
            puVar50 = (uint *)(ulong)*puVar34;
            uVar21 = 0;
            if ((*puVar34 == 0) || (puVar34 == puVar50)) goto LAB_0371f1f8;
            lVar32 = 0xc;
            if (*(char *)((long)puVar34 + (10 - (long)puVar50)) != '\0') {
              lVar32 = 0x1c;
            }
            lVar32 = (long)puVar34 + (lVar32 - (long)puVar50);
            if (lVar32 == 0) goto LAB_0371f1f4;
            uVar43 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar50));
            *(undefined4 *)(PTR_DAT_04bc3980 + 0x24) = 0xfffffffe;
            uVar21 = 0;
            if (uVar43 == 0) goto LAB_0371f1f8;
            piVar42 = (int *)(lVar32 + 4);
            while (piVar42[-1] != 0x3297a85e) {
              piVar42 = piVar42 + 2;
              uVar43 = uVar43 - 1;
              if (uVar43 == 0) {
                uVar21 = 0;
                goto LAB_0371f1f8;
              }
            }
            iVar20 = 0;
            if (*piVar42 != -1) {
              iVar20 = *piVar42;
            }
            *(int *)(PTR_DAT_04bc3980 + 0x24) = iVar20;
          } while (*puVar34 != 0);
          uVar21 = 0;
        }
LAB_0371f1f8:
        if (uVar21 == *puVar46) {
          uVar30 = 1;
          goto LAB_0371d798;
        }
        if (*puVar34 == 0) {
LAB_0371f324:
          uVar21 = 0;
        }
        else {
          cVar31 = *PTR_DAT_04bc3978;
          do {
            if (cVar31 == '\0') {
              cVar31 = '\x01';
              *PTR_DAT_04bc3978 = 1;
              puVar9 = PTR_DAT_04bc3980;
              *(undefined8 *)PTR_DAT_04bc3980 = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar21 = *(uint *)(PTR_DAT_04bc3980 + 0x28);
              if (-1 < (int)uVar21) {
                if (((byte *)((ulong)uVar21 + (long)puVar34) == (byte *)0x0) ||
                   (bVar16 = *(byte *)((ulong)uVar21 + (long)puVar34), uVar21 = (uint)bVar16,
                   0x14 < bVar16)) goto LAB_0371f324;
                goto LAB_0371f328;
              }
              if (uVar21 != 0xffffffff) goto LAB_0371f324;
            }
            puVar50 = (uint *)(ulong)*puVar34;
            uVar21 = 0;
            if ((*puVar34 == 0) || (puVar34 == puVar50)) goto LAB_0371f328;
            lVar32 = 0xc;
            if (*(char *)((long)puVar34 + (10 - (long)puVar50)) != '\0') {
              lVar32 = 0x1c;
            }
            lVar32 = (long)puVar34 + (lVar32 - (long)puVar50);
            if (lVar32 == 0) goto LAB_0371f324;
            uVar43 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar50));
            *(undefined4 *)(PTR_DAT_04bc3980 + 0x28) = 0xfffffffe;
            uVar21 = 0;
            if (uVar43 == 0) goto LAB_0371f328;
            piVar42 = (int *)(lVar32 + 4);
            while (piVar42[-1] != 0x202207b0) {
              piVar42 = piVar42 + 2;
              uVar43 = uVar43 - 1;
              if (uVar43 == 0) {
                uVar21 = 0;
                goto LAB_0371f328;
              }
            }
            iVar20 = 0;
            if (*piVar42 != -1) {
              iVar20 = *piVar42;
            }
            *(int *)(PTR_DAT_04bc3980 + 0x28) = iVar20;
          } while (*puVar34 != 0);
          uVar21 = 0;
        }
LAB_0371f328:
        if (uVar21 == *puVar46) {
          uVar30 = 2;
          goto LAB_0371d798;
        }
        if (*puVar34 == 0) {
LAB_0371f454:
          uVar21 = 0;
        }
        else {
          cVar31 = *PTR_DAT_04bc3978;
          do {
            if (cVar31 == '\0') {
              cVar31 = '\x01';
              *PTR_DAT_04bc3978 = 1;
              puVar9 = PTR_DAT_04bc3980;
              *(undefined8 *)PTR_DAT_04bc3980 = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
            }
            else {
              uVar21 = *(uint *)(PTR_DAT_04bc3980 + 0x2c);
              if (-1 < (int)uVar21) {
                if (((byte *)((ulong)uVar21 + (long)puVar34) == (byte *)0x0) ||
                   (bVar16 = *(byte *)((ulong)uVar21 + (long)puVar34), uVar21 = (uint)bVar16,
                   0x14 < bVar16)) goto LAB_0371f454;
                goto LAB_0371f458;
              }
              if (uVar21 != 0xffffffff) goto LAB_0371f454;
            }
            puVar50 = (uint *)(ulong)*puVar34;
            uVar21 = 0;
            if ((*puVar34 == 0) || (puVar34 == puVar50)) goto LAB_0371f458;
            lVar32 = 0xc;
            if (*(char *)((long)puVar34 + (10 - (long)puVar50)) != '\0') {
              lVar32 = 0x1c;
            }
            lVar32 = (long)puVar34 + (lVar32 - (long)puVar50);
            if (lVar32 == 0) goto LAB_0371f454;
            uVar43 = (ulong)*(ushort *)((long)puVar34 + (8 - (long)puVar50));
            *(undefined4 *)(PTR_DAT_04bc3980 + 0x2c) = 0xfffffffe;
            uVar21 = 0;
            if (uVar43 == 0) goto LAB_0371f458;
            piVar42 = (int *)(lVar32 + 4);
            while (piVar42[-1] != -0x67619f2b) {
              piVar42 = piVar42 + 2;
              uVar43 = uVar43 - 1;
              if (uVar43 == 0) {
                uVar21 = 0;
                goto LAB_0371f458;
              }
            }
            iVar20 = 0;
            if (*piVar42 != -1) {
              iVar20 = *piVar42;
            }
            *(int *)(PTR_DAT_04bc3980 + 0x2c) = iVar20;
          } while (*puVar34 != 0);
          uVar21 = 0;
        }
LAB_0371f458:
        local_210 = (undefined **)CONCAT44(local_210._4_4_,uVar21);
        if (uVar21 == *puVar46) {
          uVar30 = 3;
          goto LAB_0371d798;
        }
      }
      puVar47 = puVar47 + 1;
    } while (puVar47 != puVar13);
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar33 = *(long **)(param_1 + 0xe8);
    lVar32 = (long)*(int *)(param_1 + 0xe0) << 3;
    do {
      lVar45 = *plVar33;
      if ((*(int *)(lVar45 + 0xd8) != 0) && (*(uint *)(lVar45 + 0xe8) == local_358)) {
        uVar21 = *(uint *)(lVar45 + 0xe4);
        local_498 = CONCAT44(local_498._4_4_,uVar21);
        if ((*(uint *)(lVar45 + (long)((int)uVar21 >> 5) * 4 + 0x118) >> (ulong)(uVar21 & 0x1f) & 1)
            != 0) {
          FUN_037289d0(param_1,lVar45 + 0x10,0);
        }
      }
      plVar33 = plVar33 + 1;
      lVar32 = lVar32 + -8;
    } while (lVar32 != 0);
  }
  return;
}

