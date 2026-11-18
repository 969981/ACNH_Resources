
void FUN_0324dcd0(long param_1,long *param_2,uint param_3,int param_4,uint param_5)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined2 uVar14;
  uint uVar15;
  undefined8 *puVar16;
  byte bVar17;
  long lVar18;
  char cVar19;
  uint *puVar20;
  int *piVar21;
  uint uVar22;
  long *plVar23;
  uint *puVar24;
  bool bVar25;
  int iVar26;
  float fVar27;
  undefined *local_498;
  undefined1 *puStack_490;
  undefined *local_488;
  undefined4 local_480;
  undefined8 local_47c;
  undefined4 local_474;
  undefined *local_470;
  undefined8 uStack_468;
  undefined4 local_460;
  undefined1 local_45c;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined4 local_448;
  undefined *local_440;
  undefined1 *puStack_438;
  undefined4 local_430;
  undefined1 local_42c [63];
  undefined1 local_3ed;
  undefined *local_3e8;
  undefined1 *puStack_3e0;
  undefined4 local_3d8;
  undefined1 local_3d4 [63];
  undefined1 local_395;
  undefined8 local_390;
  undefined *local_388;
  undefined8 uStack_380;
  undefined4 local_378;
  undefined1 local_374;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined4 local_360;
  undefined *local_358;
  undefined1 *puStack_350;
  undefined4 local_348;
  undefined1 local_344 [63];
  undefined1 local_305;
  undefined *local_300;
  undefined1 *puStack_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec [63];
  undefined1 local_2ad;
  undefined8 local_2a8;
  undefined *puStack_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined1 local_28c;
  undefined8 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined *local_270;
  undefined1 *local_268;
  undefined4 local_260;
  undefined1 local_25c [63];
  undefined1 local_21d;
  undefined *local_218;
  undefined1 *local_210;
  undefined4 local_208;
  undefined1 local_204 [63];
  undefined1 local_1c5;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined1 *local_1a0;
  undefined4 local_198;
  undefined1 local_194 [63];
  undefined1 local_155;
  undefined *local_150;
  undefined1 *local_148;
  undefined4 local_140;
  undefined1 local_13c [63];
  undefined1 local_fd;
  undefined *local_f8;
  int local_f0;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined2 local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined1 local_bc [31];
  undefined1 local_9d;
  undefined *local_98;
  long lStack_90;
  undefined *local_88;
  char *local_80;
  
  puVar5 = PTR_DAT_04bb6448;
  puVar4 = PTR_DAT_04bb6440;
  lVar18 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar18 + 0x1d40) < 1) {
    if ((((*(long *)(lVar18 + 0x1c30) != 0) &&
         (puVar24 = *(uint **)(*(long *)(lVar18 + 0x1c30) + 8), puVar24 != (uint *)0x0)) &&
        ((*(uint *)(lVar18 + 0x1c48) <= param_3 ||
         (*(char *)(*(long *)(lVar18 + 0x1c50) + (long)(int)param_3) != '\0')))) &&
       (((param_3 < *puVar24 && (puVar24[1] != 0)) && ((ushort)puVar24[2] != 0)))) {
      iVar6 = 0xc;
      if (*(char *)((long)puVar24 + 10) != '\0') {
        iVar6 = 0x1c;
      }
      puVar24 = (uint *)((ulong)(puVar24[1] * param_3 + (uint)(ushort)puVar24[2] * 8 + iVar6) +
                        (long)puVar24);
      if (puVar24 != (uint *)0x0) goto LAB_0324dd3c;
    }
LAB_0324e8f0:
    uVar13 = 0;
    uVar7 = 2;
  }
  else {
    if (*(uint *)(lVar18 + 0x1d40) <= param_3) goto LAB_0324e8f0;
    if (*(uint *)(lVar18 + 0x1d30) <= param_3) {
      param_3 = 0;
    }
    puVar24 = *(uint **)(*(long *)(lVar18 + 0x1d38) + (ulong)param_3 * 8);
    if (puVar24 == (uint *)0x0) goto LAB_0324e8f0;
LAB_0324dd3c:
    if (*puVar24 != 0) {
      cVar19 = *PTR_DAT_04bb6440;
      do {
        if (cVar19 == '\0') {
          cVar19 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar15 = *(uint *)(puVar5 + 0x48);
          if (-1 < (int)uVar15) {
            lVar18 = (ulong)uVar15 + (long)puVar24;
            goto LAB_0324de1c;
          }
          if (uVar15 != 0xffffffff) break;
        }
        puVar20 = (uint *)(ulong)*puVar24;
        lVar18 = 0;
        if ((*puVar24 == 0) || (puVar24 == puVar20)) goto LAB_0324de1c;
        lVar18 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar20)) != '\0') {
          lVar18 = 0x1c;
        }
        lVar2 = (long)puVar24 + (lVar18 - (long)puVar20);
        if (lVar2 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar20));
        *(undefined4 *)(puVar5 + 0x48) = 0xfffffffe;
        lVar18 = 0;
        if (uVar12 == 0) goto LAB_0324de1c;
        piVar21 = (int *)(lVar2 + 4);
        while (piVar21[-1] != 0x45f320f2) {
          piVar21 = piVar21 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            lVar18 = 0;
            goto LAB_0324de1c;
          }
        }
        iVar6 = 0;
        if (*piVar21 != -1) {
          iVar6 = *piVar21;
        }
        *(int *)(puVar5 + 0x48) = iVar6;
      } while (*puVar24 != 0);
    }
    lVar18 = 0;
LAB_0324de1c:
    puVar3 = PTR_DAT_04bb2020;
    lStack_90 = *(long *)PTR_PTR_04bb6438;
    if (lVar18 != 0) {
      lStack_90 = lVar18;
    }
    local_98 = PTR_DAT_04bb2020 + 0x10;
    iVar6 = FUN_0279cca8(&local_98);
    local_488 = (undefined *)CONCAT44(local_488._4_4_,iVar6);
    plVar23 = *(long **)(param_2[0x5e] + (ulong)(4 < *(uint *)(param_2 + 0x5d)) * 0x20);
    if (plVar23 != (long *)0x0) {
      local_488 = PTR_DAT_04bc4f00 + 0x10;
      local_480 = 0x14;
      (**(code **)(*plVar23 + 0x18))(plVar23,&local_488);
      (**(code **)(plVar23[3] + 0x158))((float)iVar6,plVar23[1]);
    }
    lVar18 = *(long *)(param_2[0x5c] + (ulong)(1 < *(uint *)(param_2 + 0x5b)) * 8);
    if (lVar18 != 0) {
      local_9d = 0;
      local_c0 = 0x20;
      local_c8 = local_bc;
      local_bc[0] = 0;
      local_d0 = PTR_DAT_04bb2028 + 0x10;
      if (*puVar24 != 0) {
        cVar19 = *puVar4;
        do {
          if (cVar19 == '\0') {
            cVar19 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar15 = *(uint *)(puVar5 + 0x3c);
            if (-1 < (int)uVar15) {
              if ((undefined2 *)((ulong)uVar15 + (long)puVar24) != (undefined2 *)0x0) {
                uVar14 = *(undefined2 *)((ulong)uVar15 + (long)puVar24);
                goto LAB_0324e054;
              }
              break;
            }
            if (uVar15 != 0xffffffff) break;
          }
          puVar20 = (uint *)(ulong)*puVar24;
          uVar14 = 0;
          if ((*puVar24 == 0) || (puVar24 == puVar20)) goto LAB_0324e054;
          lVar2 = 0xc;
          if (*(char *)((long)puVar24 + (10 - (long)puVar20)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar24 + (lVar2 - (long)puVar20);
          if (lVar2 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar20));
          *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar21 = (int *)(lVar2 + 4);
          while (piVar21[-1] != 0x54706054) {
            piVar21 = piVar21 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_0324e050;
          }
          iVar10 = 0;
          if (*piVar21 != -1) {
            iVar10 = *piVar21;
          }
          *(int *)(puVar5 + 0x3c) = iVar10;
          if (*puVar24 == 0) break;
        } while( true );
      }
LAB_0324e050:
      uVar14 = 0;
LAB_0324e054:
      FUN_038d1270(&local_d0,"%03d_0",uVar14);
      local_f8 = PTR_DAT_04bc0a78;
      local_47c = 0;
      local_480 = CONCAT22(local_480._2_2_,0x100);
      local_474 = 0;
      local_460 = 0;
      puStack_438 = local_42c;
      local_45c = 0;
      local_448 = 0xffffffff;
      local_430 = 0x40;
      local_3ed = 0;
      local_42c[0] = 0;
      local_458 = 0xffffffff;
      uStack_450 = 0xffffffff00000000;
      local_440 = PTR_DAT_04bb2bc0 + 0x10;
      local_3d8 = 0x40;
      local_395 = 0;
      local_3d4[0] = 0;
      puStack_3e0 = local_3d4;
      local_470 = PTR_DAT_04bb2e00 + 0x10;
      puStack_2f8 = local_2ec;
      local_2ec[0] = 0;
      local_280 = 0xffffffff00000000;
      local_360 = 0xffffffff;
      local_288 = 0xffffffff;
      local_278 = 0xffffffff;
      local_378 = 0;
      local_374 = 0;
      puStack_350 = local_344;
      local_344[0] = 0;
      local_348 = 0x40;
      local_305 = 0;
      local_2f0 = 0x40;
      local_2ad = 0;
      local_390 = 0;
      local_298 = 0;
      local_290 = 0;
      local_28c = 0;
      local_260 = 0x40;
      local_21d = 0;
      local_208 = 0x40;
      local_1c5 = 0;
      local_1b0 = 0;
      local_1b8 = 0;
      local_1c0 = 0;
      local_198 = 0x40;
      local_155 = 0;
      local_140 = 0x40;
      local_fd = 0;
      local_370 = 0xffffffff;
      uStack_368 = 0xffffffff00000000;
      local_194[0] = 0;
      local_268 = local_25c;
      local_25c[0] = 0;
      local_1a0 = local_194;
      local_148 = local_13c;
      local_210 = local_204;
      local_204[0] = 0;
      local_13c[0] = 0;
      uStack_468 = 0;
      uStack_380 = 0;
      local_2a8 = 0;
      local_f0 = *(int *)PTR_DAT_04bc0b30;
      local_ec = 0;
      *(int *)PTR_DAT_04bc0b30 = local_f0 + 1;
      local_f8 = local_f8 + 0x10;
      local_e8 = 0;
      local_488 = PTR_DAT_04bc0bf0 + 0x10;
      local_e0 = 0;
      local_d8 = 0;
      plVar23 = *(long **)(lVar18 + 0x48);
      local_3e8 = local_440;
      local_388 = local_470;
      local_358 = local_440;
      local_300 = local_440;
      puStack_2a0 = local_470;
      local_270 = local_440;
      local_218 = local_440;
      local_1a8 = local_440;
      local_150 = local_440;
      if (plVar23[1] != 0) {
        local_88 = PTR_DAT_04bc0878 + 0x10;
        local_80 = (char *)CONCAT44(local_80._4_4_,9);
        (**(code **)(*plVar23 + 0x18))(plVar23,&local_88);
        (**(code **)(plVar23[3] + 0x5e0))(plVar23[1],PTR_DAT_04bb2da0,0);
        FUN_03d7dd80(lVar18);
      }
      local_80 = "NookMilage_List";
      local_88 = puVar3 + 0x10;
      (**(code **)(local_d0 + 0x18))(&local_d0);
      puStack_490 = local_c8;
      local_498 = puVar3 + 0x10;
      FUN_01bea210(&local_488,lVar18,&local_88,&local_498);
      FUN_01bea9c8(&local_488);
      FUN_01be9eb8(&local_488);
    }
    puVar16 = (undefined8 *)param_2[0x5e];
    plVar23 = (long *)puVar16[(ulong)(2 < *(uint *)(param_2 + 0x5d)) * 2];
    if (plVar23 != (long *)0x0) {
      uVar12 = FUN_0279c960(param_1 + 0x1f8,&local_98,1);
      if (((uVar12 & 1) == 0) &&
         (uVar12 = FUN_032566f0(param_1 + 0x1f8,&local_98), (uVar12 & 1) != 0)) {
        local_488 = PTR_DAT_04bc4e68 + 0x10;
        local_480 = 7;
        (**(code **)(*plVar23 + 0x18))(plVar23,&local_488);
        puVar16 = (undefined8 *)(plVar23[3] + 0x1c0);
      }
      else {
        local_488 = PTR_DAT_04bc4e68 + 0x10;
        local_480 = 6;
        (**(code **)(*plVar23 + 0x18))(plVar23,&local_488);
        puVar16 = (undefined8 *)(plVar23[3] + 0x1b8);
      }
      (*(code *)*puVar16)(plVar23[1]);
      puVar16 = (undefined8 *)param_2[0x5e];
    }
    plVar23 = (long *)*puVar16;
    if (plVar23 != (long *)0x0) {
      uVar12 = FUN_03256ab0(&local_98);
      local_488 = PTR_DAT_04bc4e68 + 0x10;
      if ((uVar12 & 1) == 0) {
        local_480 = 6;
        (**(code **)(*plVar23 + 0x18))(plVar23,&local_488);
        puVar16 = (undefined8 *)(plVar23[3] + 0x1b8);
      }
      else {
        local_480 = 7;
        (**(code **)(*plVar23 + 0x18))(plVar23,&local_488);
        puVar16 = (undefined8 *)(plVar23[3] + 0x1c0);
      }
      (*(code *)*puVar16)(plVar23[1]);
    }
    lVar18 = param_1 + 0x1f8;
    uVar7 = FUN_02798760(lVar18,&local_98);
    uVar8 = FUN_032566f0(lVar18,&local_98);
    uVar9 = FUN_027a51c0(&local_98);
    uVar15 = uVar9;
    if (5 < (int)uVar9) {
      uVar15 = 6;
    }
    iVar10 = FUN_02798b88(lVar18,&local_98,uVar7);
    lVar2 = 0x28;
    if (*(uint *)(param_2 + 0x5d) < 6) {
      lVar2 = 0;
    }
    plVar23 = *(long **)(param_2[0x5e] + lVar2);
    if (plVar23 != (long *)0x0) {
      local_488 = PTR_DAT_04bc4f00 + 0x10;
      local_480 = 0x14;
      fVar27 = 0.0;
      if (0 < (int)uVar15) {
        fVar27 = (float)(int)(uVar15 - 1);
      }
      (**(code **)(*plVar23 + 0x18))(plVar23,&local_488);
      (**(code **)(plVar23[3] + 0x158))(fVar27,plVar23[1]);
    }
    uVar12 = FUN_03256ab0(&local_98);
    if ((uVar12 & 1) == 0) {
      if ((int)uVar9 < 1) {
        if (*(long *)param_2[0x69] == 0) goto LAB_0324e6e4;
        uVar15 = param_4 * 6;
        if (*(uint *)(param_1 + 0x230) <= uVar15) {
          uVar15 = 0;
        }
        (**(code **)(**(long **)(*(long *)(param_1 + 0x238) + (long)(int)uVar15 * 8) + 0xb0))();
        bVar25 = false;
      }
      else {
        if (iVar10 < 1) {
          uVar9 = 0;
        }
        else {
          iVar26 = 0;
          uVar9 = 0;
          do {
            iVar26 = iVar26 + 1;
            uVar11 = FUN_0279bb10(lVar18,&local_98,iVar26);
            uVar9 = uVar9 + (uVar11 & 1);
          } while (iVar10 != iVar26);
        }
        uVar11 = 0;
        if ((int)uVar15 < 2) {
          uVar15 = 1;
        }
        do {
          uVar1 = uVar11;
          if (*(uint *)(param_2 + 0x68) <= uVar11) {
            uVar1 = 0;
          }
          if (*(long *)(param_2[0x69] + (ulong)uVar1 * 8) != 0) {
            uVar1 = param_4 * 6 + uVar11;
            uVar22 = uVar1;
            if (*(uint *)(param_1 + 0x230) <= uVar1) {
              uVar22 = 0;
            }
            plVar23 = *(long **)(*(long *)(param_1 + 0x238) + (long)(int)uVar22 * 8);
            if (uVar11 < uVar9) {
              uVar12 = (**(code **)(*plVar23 + 0xf0))(plVar23);
              if ((uVar12 & 1) != 0) {
                *(undefined1 *)((long)plVar23 + 0x21c) = 1;
                *(undefined4 *)(plVar23 + 0x43) = 0xffffffff;
                if (*(int *)((long)plVar23 + (ulong)*(byte *)(plVar23 + 0x40) * 4 + 0x1f0) == -1) {
                  *(undefined4 *)((long)plVar23 + (ulong)*(byte *)(plVar23 + 0x40) * 4 + 0x1f0) = 2;
                }
              }
              puVar24 = (uint *)FUN_0279b8c0(lVar18,&local_98,uVar11 + 1);
              uVar22 = *puVar24;
              local_488 = (undefined *)CONCAT44(local_488._4_4_,uVar22);
              uVar12 = nn::time::IsValidDate(uVar22 & 0xffff,uVar22 >> 0x10 & 0xff,uVar22 >> 0x18);
              if ((uVar12 & 1) == 0) {
                uVar22 = (uint)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
                uVar12 = nn::time::IsValidDate
                                   (uVar22 & 0xffff,uVar22 >> 0x10 & 0xff,
                                    (uint)((ulong)*(undefined8 *)
                                                   (*(long *)PTR_DAT_04bb32e8 + 0x4060) >> 0x18) &
                                    0xff);
                if ((uVar12 & 1) != 0) {
                  local_488 = (undefined *)CONCAT44(local_488._4_4_,uVar22);
                }
              }
              uVar22 = uVar1;
              if (*(uint *)(param_1 + 0x230) <= uVar1) {
                uVar22 = 0;
              }
              FUN_031284e0(*(undefined8 *)(*(long *)(param_1 + 0x238) + (long)(int)uVar22 * 8),
                           &local_488);
              if (*(uint *)(param_1 + 0x230) <= uVar1) {
                uVar1 = 0;
              }
              FUN_03128bd0(*(undefined8 *)(*(long *)(param_1 + 0x238) + (long)(int)uVar1 * 8),
                           &local_98,iVar6);
            }
            else {
              (**(code **)(*plVar23 + 0xb0))(plVar23);
            }
          }
          uVar11 = uVar11 + 1;
        } while (uVar15 != uVar11);
        bVar25 = (int)uVar9 < iVar10;
      }
    }
    else if ((int)uVar9 < 1) {
LAB_0324e6e4:
      bVar25 = false;
    }
    else {
      bVar25 = false;
      if ((int)uVar15 < 2) {
        uVar15 = 1;
      }
      uVar9 = 0;
      do {
        uVar11 = uVar9 + 1;
        uVar1 = uVar9;
        if (*(uint *)(param_2 + 0x68) <= uVar9) {
          uVar1 = 0;
        }
        if (*(long *)(param_2[0x69] + (ulong)uVar1 * 8) != 0) {
          uVar12 = FUN_0279d6d0(lVar18,&local_98,uVar9);
          if ((uVar12 & 1) == 0) {
            uVar9 = param_4 * 6 + uVar9;
            if (*(uint *)(param_1 + 0x230) <= uVar9) {
              uVar9 = 0;
            }
            (**(code **)(**(long **)(*(long *)(param_1 + 0x238) + (long)(int)uVar9 * 8) + 0xb0))();
          }
          else {
            uVar12 = FUN_0279bb10(lVar18,&local_98,uVar11);
            uVar1 = param_4 * 6 + uVar9;
            uVar22 = uVar1;
            if (*(uint *)(param_1 + 0x230) <= uVar1) {
              uVar22 = 0;
            }
            plVar23 = *(long **)(*(long *)(param_1 + 0x238) + (long)(int)uVar22 * 8);
            if ((uVar12 & 1) == 0) {
              (**(code **)(*plVar23 + 0xb0))(plVar23);
              bVar25 = true;
            }
            else {
              uVar12 = (**(code **)(*plVar23 + 0xf0))(plVar23);
              if ((uVar12 & 1) != 0) {
                *(undefined1 *)((long)plVar23 + 0x21c) = 1;
                *(undefined4 *)(plVar23 + 0x43) = 0xffffffff;
                if (*(int *)((long)plVar23 + (ulong)*(byte *)(plVar23 + 0x40) * 4 + 0x1f0) == -1) {
                  *(undefined4 *)((long)plVar23 + (ulong)*(byte *)(plVar23 + 0x40) * 4 + 0x1f0) = 2;
                }
              }
              puVar24 = (uint *)FUN_0279b8c0(lVar18,&local_98,uVar11);
              uVar22 = *puVar24;
              local_488 = (undefined *)CONCAT44(local_488._4_4_,uVar22);
              uVar12 = nn::time::IsValidDate(uVar22 & 0xffff,uVar22 >> 0x10 & 0xff,uVar22 >> 0x18);
              if ((uVar12 & 1) == 0) {
                uVar22 = (uint)*(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
                uVar12 = nn::time::IsValidDate
                                   (uVar22 & 0xffff,uVar22 >> 0x10 & 0xff,
                                    (uint)((ulong)*(undefined8 *)
                                                   (*(long *)PTR_DAT_04bb32e8 + 0x4060) >> 0x18) &
                                    0xff);
                if ((uVar12 & 1) != 0) {
                  local_488 = (undefined *)CONCAT44(local_488._4_4_,uVar22);
                }
              }
              uVar22 = uVar1;
              if (*(uint *)(param_1 + 0x230) <= uVar1) {
                uVar22 = 0;
              }
              FUN_031284e0(*(undefined8 *)(*(long *)(param_1 + 0x238) + (long)(int)uVar22 * 8),
                           &local_488);
              if (*(uint *)(param_1 + 0x230) <= uVar1) {
                uVar1 = 0;
              }
              FUN_03128d70(*(undefined8 *)(*(long *)(param_1 + 0x238) + (long)(int)uVar1 * 8),
                           &local_98,uVar9);
            }
          }
        }
        uVar9 = uVar11;
      } while (uVar15 != uVar11);
    }
    plVar23 = *(long **)(param_2[0x5e] + (ulong)(1 < *(uint *)(param_2 + 0x5d)) * 8);
    if (plVar23 != (long *)0x0) {
      local_488 = PTR_DAT_04bc4e68 + 0x10;
      if (bVar25) {
        local_480 = 7;
        (**(code **)(*plVar23 + 0x18))(plVar23,&local_488);
        puVar16 = (undefined8 *)(plVar23[3] + 0x1c0);
      }
      else {
        local_480 = 6;
        (**(code **)(*plVar23 + 0x18))(plVar23,&local_488);
        puVar16 = (undefined8 *)(plVar23[3] + 0x1b8);
      }
      (*(code *)*puVar16)(plVar23[1]);
    }
    if ((uVar8 & param_5 & 1) == 0) goto LAB_0324e8f0;
    uVar7 = 0;
    uVar13 = 1;
  }
  (**(code **)(*param_2 + 0x140))(param_2,uVar13,0);
  switch(uVar7) {
  case 0:
    bVar17 = *(byte *)(param_2 + 0x58) & 0xf8 | 2;
    break;
  case 2:
    bVar17 = *(byte *)(param_2 + 0x58) & 0xf8 | 1;
    break;
  default:
    goto switchD_0324e930_default;
  }
  *(byte *)(param_2 + 0x58) = bVar17;
switchD_0324e930_default:
  *(undefined4 *)(param_2 + 0x56) = uVar7;
  return;
}

