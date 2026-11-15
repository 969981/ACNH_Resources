
/* WARNING: Removing unreachable block (ram,0x01fa969c) */
/* WARNING: Removing unreachable block (ram,0x01fa952c) */
/* WARNING: Removing unreachable block (ram,0x01fa953c) */
/* WARNING: Removing unreachable block (ram,0x01fa96ac) */

byte FUN_01fa84e8(long param_1,float *param_2,undefined8 *param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  float *pfVar2;
  ushort uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int iVar16;
  uint *puVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  long *plVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  long *local_490;
  undefined **ppuStack_488;
  undefined *local_480;
  undefined1 *local_478;
  undefined8 ***local_470;
  undefined8 ***local_468;
  undefined8 **local_460 [2];
  undefined8 *local_450 [2];
  undefined8 local_440 [2];
  undefined1 local_430 [24];
  undefined *local_418;
  undefined8 local_410;
  undefined8 ***local_408;
  undefined8 ***local_400;
  undefined8 **local_3f8 [2];
  undefined8 *local_3e8 [2];
  undefined8 local_3d8 [2];
  undefined1 local_3c8 [24];
  undefined *local_3b0;
  undefined8 local_3a8;
  undefined8 ***local_3a0;
  undefined8 ***local_398;
  undefined8 **local_390 [2];
  undefined8 *local_380 [2];
  undefined8 local_370 [2];
  undefined1 local_360 [24];
  undefined *local_348;
  undefined8 local_340;
  undefined8 ***local_338;
  undefined8 ***local_330;
  undefined8 **local_328 [2];
  undefined8 *local_318 [2];
  undefined8 local_308 [2];
  undefined1 local_2f8 [24];
  undefined *local_2e0;
  long *local_2d8;
  undefined8 local_2d0;
  long *local_2c8;
  undefined8 local_2c0;
  long local_1a0;
  undefined8 *local_198;
  long local_190;
  undefined8 local_188;
  undefined **local_180;
  byte local_178;
  undefined *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined8 local_144;
  float local_13c;
  long local_138;
  long local_130;
  undefined *local_128;
  int local_120;
  int local_11c;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  uint *local_b0;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(param_3);
  if (*(long *)puVar1 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if (((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
        (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) &&
       (piVar23 = (int *)((long)param_3 + 0x1c), *piVar23 != 7)) {
      uVar14 = FUN_01fa981c(param_1,param_3,param_3 + 1,piVar23);
      puVar5 = PTR_DAT_04bc0510;
      if ((uVar14 & 1) != 0) {
        local_b8 = *(undefined4 *)param_3;
        uStack_b4 = *(undefined4 *)((long)param_3 + 4);
        lVar22 = *(long *)puVar1;
        local_b0 = (uint *)0x0;
        local_c0 = PTR_DAT_04bc0510 + 0x10;
        uVar10 = FUN_0277d6c4(&local_b8);
        if (*(long *)puVar1 == 0) {
LAB_01fa8648:
          if (local_b0 != (uint *)0x0) goto LAB_01fa8650;
          goto LAB_01fa8878;
        }
        lVar22 = *(long *)(lVar22 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
           (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_01fa8648;
        lVar22 = *(long *)PTR_DAT_04bc0428;
        uVar10 = FUN_0277d6c4(param_3);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if ((*(uint *)(lVar22 + 0x1d8) <= uVar10) ||
           (puVar17 = *(uint **)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8),
           puVar17 == (uint *)0x0)) goto LAB_01fa8648;
        local_b0 = puVar17;
LAB_01fa8650:
        uVar10 = *local_b0;
        local_2e0._0_4_ = 0;
        if ((uVar10 != 0) && (local_b0 != (uint *)(ulong)uVar10)) {
          puVar17 = (uint *)((long)local_b0 - (long)(ulong)uVar10);
          local_2e0._0_4_ = 0;
          if (*puVar17 != 0) {
            uVar10 = puVar17[1];
            if ((uVar10 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
              lVar22 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                lVar22 = 0x1c;
              }
              lVar22 = (long)puVar17 + lVar22 + (ulong)(ushort)puVar17[2] * 8;
              if (lVar22 != 0) {
                uVar13 = 0;
                if ((ulong)uVar10 != 0) {
                  uVar13 = (uint)((ulong)((long)local_b0 - lVar22) / (ulong)uVar10);
                }
                if (*puVar17 <= uVar13) {
                  uVar13 = 0xffffffff;
                }
                if ((uVar13 < *(uint *)PTR_DAT_04bc0048) &&
                   (local_2e0._0_4_ =
                         (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar13 * 2),
                   (uint)local_2e0 < 0x52)) goto LAB_01fa86dc;
              }
            }
            local_2e0._0_4_ = 0;
          }
        }
LAB_01fa86dc:
        if ((uint)local_2e0 - 1 < 9) {
          lVar22 = *(long *)puVar1;
          uVar10 = FUN_0277d6c4(param_3);
          puVar5 = PTR_DAT_04bb2010;
          if (*(long *)puVar1 != 0) {
            lVar22 = *(long *)(lVar22 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
            if (((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) &&
               (*piVar23 == 0)) {
              lVar22 = param_5 + 8;
              local_2d0 = 0;
              local_3b0 = (undefined *)((ulong)local_3b0 & 0xffffffffffffff00);
              local_2e0 = PTR_DAT_04bbc1a0 + 0x10;
              local_2d8 = (long *)(PTR_DAT_04bb2010 + 0x10);
              local_2c0 = 0;
              local_2c8 = local_2d8;
              uVar14 = FUN_01517328(&local_2e0,&local_3b0,lVar22,param_3);
              bVar8 = 0;
              if ((uVar14 & 1) == 0) goto LAB_01fa97b0;
              iVar12 = ((int)local_2c0 - (int)local_2d0) + 1;
              if (iVar12 + iVar12 * (local_2c0._4_4_ - local_2d0._4_4_) == 8) {
                bVar8 = FUN_01fab12c(param_1,PTR_DAT_04bb2150,param_3,&local_3b0,&local_2e0,param_2,
                                     &local_138);
                goto LAB_01fa97b0;
              }
              lVar24 = *(long *)puVar1;
              uVar10 = FUN_0277d6c4(param_3);
              if (*(long *)puVar1 != 0) {
                lVar24 = *(long *)(lVar24 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                if (uVar10 < *(uint *)(lVar24 + 0x1d8)) {
                  if (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8) != 0) {
                    local_340 = (undefined1 *)((ulong)local_340 & 0xffffffff00000000);
                    lVar24 = *(long *)PTR_DAT_04bb2720;
                    if (lVar24 == 0) {
                      puVar15 = &DAT_055c04a0;
                    }
                    else {
                      puVar15 = &DAT_055c04a0;
                      if (*(long *)(lVar24 + 0x330) != 0) {
                        puVar15 = (undefined8 *)
                                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                            (*(long **)PTR_DAT_04bb2640,
                                             *(undefined4 *)(lVar24 + 0x338));
                        iVar12 = FUN_006bd550(*puVar15,0);
                        puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
                        if (iVar12 != 0x758f7eaf) {
                          puVar15 = &DAT_055c04a0;
                        }
                      }
                    }
                    local_340 = (undefined1 *)
                                CONCAT44(*(undefined4 *)(puVar15 + 7),(undefined4)local_340);
                    uVar9 = FUN_017baf44();
                    local_338 = (undefined8 ***)
                                (CONCAT71(local_338._1_7_,uVar9) & 0xffffffffffffff01);
                    local_348 = PTR_DAT_04bb3140 + 0x10;
                    uVar14 = FUN_01a4fafc(&local_348,1,param_5);
                    if ((uVar14 & 1) == 0) goto LAB_01fa97ac;
                    local_128 = puVar5 + 0x10;
                    local_130 = param_5 + 0x18;
                    iVar20 = *(int *)(param_5 + 0x10);
                    local_11c = *(int *)(param_5 + 0x14);
                    iVar12 = *(int *)(param_5 + 0x24) + 1;
                    local_138 = lVar22;
                    local_120 = iVar20;
                    if (iVar12 != local_11c) {
                      do {
                        uVar14 = FUN_01a4fd6c(&local_348,1,&local_128,1);
                        if ((uVar14 & 1) == 0) goto LAB_01fa97ac;
                        if (local_120 < *(int *)(local_130 + 8)) {
                          local_120 = local_120 + 1;
                        }
                        else {
                          local_11c = local_11c + 1;
                          local_120 = *(int *)(local_138 + 8);
                        }
                      } while (iVar20 != local_120 || iVar12 != local_11c);
                    }
                  }
                }
              }
              uVar14 = FUN_01fab8b0(param_1,&local_2e0);
              if ((uVar14 & 1) == 0) {
                FUN_012e20a8(&local_2e0,param_2);
                bVar8 = 1;
                goto LAB_01fa97b0;
              }
            }
          }
        }
        else {
          uVar10 = *local_b0;
          uVar13 = 0;
          if ((uVar10 != 0) && (local_b0 != (uint *)(ulong)uVar10)) {
            puVar17 = (uint *)((long)local_b0 - (long)(ulong)uVar10);
            uVar13 = 0;
            if (*puVar17 != 0) {
              uVar10 = puVar17[1];
              if ((uVar10 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar22 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar22 = 0x1c;
                }
                lVar22 = (long)puVar17 + lVar22 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar22 != 0) {
                  uVar13 = 0;
                  if ((ulong)uVar10 != 0) {
                    uVar13 = (uint)((ulong)((long)local_b0 - lVar22) / (ulong)uVar10);
                  }
                  if (*puVar17 <= uVar13) {
                    uVar13 = 0xffffffff;
                  }
                  if ((uVar13 < *(uint *)PTR_DAT_04bc0048) &&
                     (uVar13 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar13 * 2),
                     uVar13 < 0x52)) goto LAB_01fa887c;
                }
              }
LAB_01fa8878:
              uVar13 = 0;
            }
          }
LAB_01fa887c:
          local_2e0 = (undefined *)CONCAT44(local_2e0._4_4_,uVar13);
          if ((uVar13 & 0xfffffffe) == 10) {
            lVar24 = *(long *)puVar1;
            uVar10 = FUN_0277d6c4(param_3);
            lVar22 = *(long *)puVar1;
            bVar8 = 0;
            if (lVar22 == 0) goto LAB_01fa97b0;
            lVar24 = *(long *)(lVar24 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar24 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              local_2e0 = puVar5 + 0x10;
              local_2d0 = 0;
              local_2d8 = (long *)*param_3;
              uVar10 = FUN_0277d6c4(&local_2d8);
              if (*(long *)puVar1 != 0) {
                lVar22 = *(long *)(lVar22 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar22 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  lVar22 = *(long *)PTR_DAT_04bc0428;
                  uVar10 = FUN_0277d6c4(param_3);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
                  if (uVar10 < *(uint *)(lVar22 + 0x1d8)) {
                    lVar22 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar10 * 8);
                    if (lVar22 != 0) {
                      local_2d0 = lVar22;
                    }
                  }
                }
              }
              puVar1 = PTR_DAT_04bb2010;
              local_348 = PTR_DAT_04bb2010 + 0x10;
              fVar39 = ((float)*(int *)(param_5 + 0x14) * 5.0 +
                       (float)*(int *)(param_5 + 0x24) * 5.0 + 5.0) * 0.5;
              fVar40 = ((float)*(int *)(param_5 + 0x10) * 5.0 +
                       (float)*(int *)(param_5 + 0x20) * 5.0 + 5.0) * 0.5;
              local_340 = (undefined1 *)
                          CONCAT44((int)((float)(int)fVar39 / 5.0) - (uint)(fVar39 < 0.0),
                                   (int)((float)(int)fVar40 / 5.0) - (uint)(fVar40 < 0.0));
              uVar14 = FUN_01fabae0(param_1,&local_348);
              if ((uVar14 & 1) == 0) {
                if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 6) {
                  if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
                     (uVar3 = **(ushort **)PTR_DAT_04bc3a48, (uVar3 & 1) == 0)) {
                    if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) != 2) goto LAB_01fa91b4;
                  }
                  else if (((uVar3 ^ 0xffff) & 5) != 0) {
LAB_01fa91b4:
                    if ((*(int *)(param_5 + 0x20) - *(int *)(param_5 + 0x10)) + 1 < 4) {
                      fVar27 = 10.0;
                    }
                    else {
                      fVar27 = 15.0;
                      if ((*(int *)(param_5 + 0x24) - *(int *)(param_5 + 0x14)) + 1 < 4) {
                        fVar27 = 10.0;
                      }
                    }
                    iVar12 = FUN_01ae98d0(&local_2e0);
                    puVar6 = PTR_DAT_04bb2d00;
                    uVar14 = (ulong)((float)iVar12 * 90.0 * 11930465.0);
                    pfVar2 = (float *)(PTR_DAT_04bb2d00 + (uVar14 >> 0x19 & 0x7f) * 0x10);
                    fVar25 = (float)((uint)uVar14 >> 1 & 0xffffff) * 5.9604645e-08;
                    fVar26 = *pfVar2 + fVar25 * pfVar2[1];
                    fVar25 = pfVar2[2] + fVar25 * pfVar2[3];
                    fVar28 = fVar26 * 0.0;
                    fVar32 = fVar26 * (fVar26 + fVar26);
                    fVar25 = fVar25 + fVar25;
                    fVar30 = (fVar26 + fVar26) * fVar28;
                    fVar37 = fVar28 * (fVar28 + fVar28);
                    fVar35 = fVar26 * (fVar28 + fVar28);
                    fVar28 = fVar25 * fVar28;
                    fVar26 = fVar26 * fVar25;
                    fVar33 = (fVar35 - fVar28) * 0.0 + ((1.0 - fVar32) - fVar37) * 0.0 +
                             fVar27 * (fVar26 + fVar37);
                    fVar25 = (fVar28 + fVar30) * 0.0 + (fVar37 - fVar26) * 0.0 +
                             fVar27 * ((1.0 - fVar37) - fVar32);
                    iVar12 = FUN_01ae98d0(&local_2e0);
                    puVar7 = PTR_DAT_04bb5ce0;
                    puVar5 = PTR_DAT_04bb2720;
                    uVar14 = (ulong)((float)iVar12 * 90.0 * 11930465.0);
                    pfVar2 = (float *)(puVar6 + (uVar14 >> 0x19 & 0x7f) * 0x10);
                    fVar26 = (float)((uint)uVar14 >> 1 & 0xffffff) * 5.9604645e-08;
                    fVar32 = *pfVar2 + fVar26 * pfVar2[1];
                    fVar26 = pfVar2[2] + fVar26 * pfVar2[3];
                    fVar29 = fVar32 * 0.0;
                    fVar34 = fVar32 * (fVar32 + fVar32);
                    fVar26 = fVar26 + fVar26;
                    fVar31 = (fVar32 + fVar32) * fVar29;
                    fVar38 = fVar29 * (fVar29 + fVar29);
                    fVar36 = fVar32 * (fVar29 + fVar29);
                    fVar29 = fVar26 * fVar29;
                    fVar32 = fVar32 * fVar26;
                    fVar40 = fVar40 + (fVar36 - fVar29) * 0.0 + ((1.0 - fVar34) - fVar38) * 5.0 +
                                      (fVar32 + fVar38) * 0.0;
                    fVar39 = fVar39 + (fVar29 + fVar31) * 0.0 + (fVar38 - fVar32) * 5.0 +
                                      ((1.0 - fVar38) - fVar34) * 0.0;
                    fVar32 = fVar33 + fVar40;
                    fVar26 = fVar25 + fVar39;
                    if (((*(long *)PTR_DAT_04bb5ce0 == 0) ||
                        (lVar22 = *(long *)PTR_DAT_04bb2720, lVar22 == 0)) ||
                       (*(long *)(lVar22 + 0x330) == 0)) {
LAB_01fa9450:
                      lVar22 = *(long *)PTR_DAT_04bb59d8;
                      if (lVar22 == 0) {
                        iVar16 = 0;
                        iVar20 = 0;
                        iVar11 = 0;
                        iVar12 = 0;
                      }
                      else {
                        iVar12 = *(int *)(lVar22 + 0x28);
                        iVar11 = *(int *)(lVar22 + 0x2c);
                        iVar20 = *(int *)(lVar22 + 0x38);
                        iVar16 = *(int *)(lVar22 + 0x3c);
                      }
                    }
                    else {
                      puVar15 = (undefined8 *)
                                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                          (*(long **)PTR_DAT_04bb2640,
                                           *(undefined4 *)(lVar22 + 0x338));
                      iVar12 = FUN_006bd550(*puVar15,0);
                      if (((iVar12 != 0x758f7eaf) || (*(long *)puVar5 == 0)) ||
                         ((lVar22 = *(long *)(*(long *)puVar5 + 0x330), lVar22 == 0 ||
                          (*(int *)(lVar22 + 0x244) == 0)))) goto LAB_01fa9450;
                      lVar22 = *(long *)puVar7;
                      if (lVar22 == 0) {
                        iVar20 = 0;
                        iVar16 = 0;
                        iVar19 = 0x10;
                        iVar11 = 0x10;
                      }
                      else {
                        iVar20 = *(int *)(lVar22 + 0xd88);
                        iVar16 = *(int *)(lVar22 + 0xd8c);
                        iVar11 = *(int *)(lVar22 + 0xd98);
                        iVar19 = *(int *)(lVar22 + 0xd9c);
                      }
                      iVar12 = iVar20;
                      if (iVar11 <= iVar20) {
                        iVar12 = iVar11;
                      }
                      if (iVar20 <= iVar11) {
                        iVar20 = iVar11;
                      }
                      iVar11 = iVar16;
                      if (iVar19 <= iVar16) {
                        iVar11 = iVar19;
                      }
                      if (iVar16 <= iVar19) {
                        iVar16 = iVar19;
                      }
                    }
                    fVar29 = ((1.0 - fVar38) - fVar38) * 0.0 + (fVar29 + fVar36) * 5.0 +
                             (fVar31 - fVar29) * 0.0 + 0.0;
                    fVar40 = fVar40 - fVar33;
                    fVar39 = fVar39 - fVar25;
                    puVar1 = puVar1 + 0x10;
                    fVar27 = ((1.0 - fVar37) - fVar37) * 0.0 + (fVar28 + fVar35) * 0.0 +
                             fVar27 * (fVar30 - fVar28);
                    iVar19 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
                    iVar4 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
                    local_3a8 = (undefined1 *)CONCAT44(iVar4,iVar19);
                    local_3b0 = puVar1;
                    if (((iVar19 < iVar12 || iVar20 < iVar19) || iVar4 < iVar11) || iVar16 < iVar4)
                    {
                      uVar10 = 0;
                    }
                    else {
                      uVar14 = FUN_01fabae0(param_1,&local_3b0);
                      if ((uVar14 & 1) == 0) {
                        local_138 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
                        local_130 = *(long *)PTR_DAT_04bb27c8 + 0x28;
                        uVar10 = FUN_035aa5a0(iVar19,iVar4,&local_138);
                      }
                      else {
                        uVar10 = 0;
                      }
                    }
                    iVar19 = (int)((float)(int)fVar40 / 5.0) - (uint)(fVar40 < 0.0);
                    iVar4 = (int)((float)(int)fVar39 / 5.0) - (uint)(fVar39 < 0.0);
                    local_410 = (undefined1 *)CONCAT44(iVar4,iVar19);
                    if (((iVar19 < iVar12 || iVar20 < iVar19) || iVar4 < iVar11) || iVar16 < iVar4)
                    {
LAB_01fa9670:
                      if ((uVar10 & 1) == 0) goto LAB_01fa97ac;
                    }
                    else {
                      local_418 = puVar1;
                      uVar14 = FUN_01fabae0(param_1,&local_418);
                      if ((uVar14 & 1) != 0) goto LAB_01fa9670;
                      local_138 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
                      local_130 = *(long *)PTR_DAT_04bb27c8 + 0x28;
                      uVar13 = FUN_035aa5a0(iVar19,iVar4,&local_138);
                      if ((uVar10 & uVar13 & 1) == 0) {
                        if ((uVar10 & 1) == 0) {
                          if ((uVar13 & 1) == 0) goto LAB_01fa97ac;
                          goto LAB_01fa9730;
                        }
                      }
                      else {
                        puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                        uVar10 = *puVar17 ^ *puVar17 << 0xb;
                        uVar13 = puVar17[3];
                        *puVar17 = puVar17[1];
                        puVar17[1] = puVar17[2];
                        uVar10 = uVar10 >> 8 ^ uVar13 >> 0x13 ^ uVar10 ^ uVar13;
                        puVar17[2] = uVar13;
                        puVar17[3] = uVar10;
                        if ((uVar10 >> 1 & 1) == 0) {
LAB_01fa9730:
                          *param_2 = fVar40;
                          bVar8 = 1;
                          param_2[1] = fVar29 - fVar27;
                          param_2[2] = fVar39;
                          goto LAB_01fa97b0;
                        }
                      }
                    }
                    *param_2 = fVar32;
                    param_2[1] = fVar27 + fVar29;
                    bVar8 = 1;
                    param_2[2] = fVar26;
                    goto LAB_01fa97b0;
                  }
                }
                *param_2 = fVar40;
                bVar8 = 1;
                param_2[1] = 0.0;
                param_2[2] = fVar39;
                goto LAB_01fa97b0;
              }
            }
          }
          else {
            iVar12 = FUN_01ae7550(&local_c0);
            if (iVar12 == 0xd) {
              bVar8 = FUN_01fa99cc(param_1,param_2,param_5);
              goto LAB_01fa97b0;
            }
            if (*piVar23 - 2U < 4) {
              bVar8 = FUN_01fa9c14(param_1,param_2,param_3);
              goto LAB_01fa97b0;
            }
            FUN_01faa470(&local_138);
            lVar22 = FUN_029156e0();
            uVar14 = FUN_03777260(*(undefined4 *)(lVar22 + 0x38));
            if (((uVar14 & 1) != 0) ||
               (uVar14 = FUN_02080ddc(param_1 + 0xafb8,&local_138,param_3,param_5 + 8,piVar23),
               (uVar14 & 1) != 0)) {
              local_13c = 0.0;
              local_144 = 0;
              FUN_012e20a8(param_5,&local_144);
              puVar5 = PTR_DAT_04bbc1a0;
              puVar1 = PTR_DAT_04bb2010;
              local_150 = 0;
              local_160 = 0;
              local_170 = PTR_DAT_04bbc1a0 + 0x10;
              local_168 = PTR_DAT_04bb2010 + 0x10;
              local_158 = local_168;
              FUN_01faa590(&local_170);
              lVar22 = FUN_029156e0();
              uVar14 = FUN_03777260(*(undefined4 *)(lVar22 + 0x38));
              local_178 = 0;
              if ((uVar14 & 1) == 0) {
                local_178 = FUN_01faa6b0(param_1,param_3,param_3 + 1,piVar23);
              }
              local_178 = local_178 & 1;
              local_1a0 = param_1;
              local_198 = param_3;
              local_190 = param_5;
              local_188 = param_4;
              local_180 = &local_170;
              iVar12 = FUN_01b10e00(&local_c0);
              if (iVar12 == 6) {
                local_2e0 = puVar5 + 0x10;
                local_2d8 = (long *)(puVar1 + 0x10);
                iVar12 = (int)((float)(int)((float)local_144 + -2.5) / 5.0) -
                         (uint)((float)local_144 + -2.5 < 0.0);
                iVar20 = (int)((float)(int)(local_13c + -2.5) / 5.0) -
                         (uint)(local_13c + -2.5 < 0.0);
                local_2d0 = CONCAT44(iVar20,iVar12);
                local_2c0 = CONCAT44(iVar20 + 1,iVar12 + 1);
                local_2c8 = local_2d8;
                bVar8 = FUN_01faa820(&local_1a0,&local_2e0);
                if ((bVar8 & 1) != 0) {
                  param_2[2] = local_13c;
                  *(undefined8 *)param_2 = local_144;
                }
              }
              else {
                FUN_01faaebc(&local_2e0);
                if (((*(int *)(param_5 + 0x20) - *(int *)(param_5 + 0x10)) + 1 < 3) &&
                   ((*(int *)(param_5 + 0x24) - *(int *)(param_5 + 0x14)) + 1 < 3)) {
                  local_480 = puVar1 + 0x10;
                  local_340 = (undefined1 *)0x0;
                  local_3a8 = (undefined1 *)0x0;
                  local_410 = (undefined1 *)0x0;
                  local_478 = (undefined1 *)0x0;
                  local_418 = local_480;
                  local_3b0 = local_480;
                  local_348 = local_480;
                  FUN_021fa560(0,&local_348,&local_3b0,&local_480,&local_418,param_5);
                  local_490 = &local_1a0;
                  ppuStack_488 = &local_2e0;
                  FUN_01fab04c(&local_490,&local_348);
                  FUN_01fab04c(&local_490,&local_3b0);
                  FUN_01fab04c(&local_490,&local_480);
                  FUN_01fab04c(&local_490,&local_418);
                }
                else {
                  local_348 = (undefined *)0x0;
                  local_340 = (undefined1 *)0x0;
                  local_338 = local_328;
                  local_328[0] = local_318;
                  local_318[0] = local_308;
                  local_308[0] = 0;
                  if (local_2f8 != (undefined1 *)0x0) {
                    local_348 = (undefined *)0x300000000;
                    local_340 = local_2f8;
                  }
                  local_3b0 = (undefined *)0x0;
                  local_3a8 = (undefined1 *)0x0;
                  local_3a0 = local_390;
                  local_390[0] = local_380;
                  local_380[0] = local_370;
                  local_370[0] = 0;
                  if (local_360 != (undefined1 *)0x0) {
                    local_3b0 = (undefined *)0x300000000;
                    local_3a8 = local_360;
                  }
                  local_418 = (undefined *)0x0;
                  local_410 = (undefined1 *)0x0;
                  local_408 = local_3f8;
                  local_3f8[0] = local_3e8;
                  local_3e8[0] = local_3d8;
                  local_3d8[0] = 0;
                  if (local_3c8 != (undefined1 *)0x0) {
                    local_418 = (undefined *)0x300000000;
                    local_410 = local_3c8;
                  }
                  local_480 = (undefined *)0x0;
                  local_478 = (undefined1 *)0x0;
                  local_470 = local_460;
                  local_460[0] = local_450;
                  local_450[0] = local_440;
                  local_440[0] = 0;
                  if (local_430 != (undefined1 *)0x0) {
                    local_480 = (undefined *)0x300000000;
                    local_478 = local_430;
                  }
                  local_468 = local_470;
                  local_400 = local_408;
                  local_398 = local_3a0;
                  local_330 = local_338;
                  FUN_021fbb40(0,&local_348,&local_3b0,&local_480,&local_418,param_5);
                  local_490 = &local_1a0;
                  ppuStack_488 = &local_2e0;
                  FUN_01faaf40(&local_490,&local_348);
                  FUN_01faaf40(&local_490,&local_3b0);
                  FUN_01faaf40(&local_490,&local_480);
                  FUN_01faaf40(&local_490,&local_418);
                  if (0 < (int)local_480) {
                    lVar22 = 0;
                    do {
                      (**(code **)**(undefined8 **)(local_478 + lVar22 * 8))();
                      lVar22 = lVar22 + 1;
                    } while (lVar22 < (int)local_480);
                  }
                  if (0 < (int)local_418) {
                    lVar22 = 0;
                    do {
                      (**(code **)**(undefined8 **)(local_410 + lVar22 * 8))();
                      lVar22 = lVar22 + 1;
                    } while (lVar22 < (int)local_418);
                  }
                  if (0 < (int)local_3b0) {
                    lVar22 = 0;
                    do {
                      (**(code **)**(undefined8 **)(local_3a8 + lVar22 * 8))();
                      lVar22 = lVar22 + 1;
                    } while (lVar22 < (int)local_3b0);
                  }
                  if (0 < (int)local_348) {
                    lVar22 = 0;
                    do {
                      (**(code **)**(undefined8 **)(local_340 + lVar22 * 8))();
                      lVar22 = lVar22 + 1;
                    } while (lVar22 < (int)local_348);
                  }
                }
                bVar8 = 0 < (int)(uint)local_2e0;
                if (0 < (int)(uint)local_2e0) {
                  iVar11 = FUN_01ae98d0(&local_c0);
                  puVar6 = PTR_DAT_04bb5ce0;
                  puVar5 = PTR_DAT_04bb2720;
                  puVar1 = PTR_DAT_04bb2640;
                  iVar12 = 0;
                  iVar20 = 0;
                  if ((uint)local_2e0 != 0) {
                    lVar22 = (long)(int)(uint)local_2e0 << 3;
                    fVar39 = -3.4028235e+38;
                    uVar14 = (ulong)((float)iVar11 * 90.0 * 11930465.0);
                    pfVar2 = (float *)(PTR_DAT_04bb2d00 + (uVar14 >> 0x18 & 0xff) * 0x10);
                    fVar40 = (float)((uint)uVar14 & 0xffffff) * 5.9604645e-08;
                    fVar27 = *pfVar2;
                    fVar26 = pfVar2[1];
                    fVar25 = pfVar2[2];
                    fVar32 = pfVar2[3];
                    plVar21 = local_2d8;
                    do {
                      lVar24 = *plVar21;
                      fVar28 = (float)*(int *)(lVar24 + 8) * 5.0 - (float)local_144;
                      fVar30 = 0.0 - local_144._4_4_;
                      fVar29 = (float)*(int *)(lVar24 + 0xc) * 5.0 - local_13c;
                      fVar31 = SQRT(fVar30 * fVar30 + fVar28 * fVar28 + fVar29 * fVar29);
                      if (0.0 < fVar31) {
                        fVar31 = 1.0 / fVar31;
                        fVar28 = fVar28 * fVar31;
                        fVar30 = fVar30 * fVar31;
                        fVar29 = fVar29 * fVar31;
                      }
                      fVar28 = fVar30 * 0.0 + (fVar27 + fVar40 * fVar26) * fVar28 +
                               (fVar25 + fVar40 * fVar32) * fVar29;
                      if (((*(long *)puVar6 == 0) || (lVar18 = *(long *)puVar5, lVar18 == 0)) ||
                         (*(long *)(lVar18 + 0x330) == 0)) {
LAB_01fa9120:
                        fVar29 = fVar28 + -10.0;
                        if ((float)*(int *)(lVar24 + 0xc) * 5.0 <= local_13c + 1.0) {
                          fVar29 = fVar28;
                        }
                      }
                      else {
                        puVar15 = (undefined8 *)
                                  (**(code **)(**(long **)puVar1 + 0x18))
                                            (*(long **)puVar1,*(undefined4 *)(lVar18 + 0x338));
                        iVar11 = FUN_006bd550(*puVar15,0);
                        if (((iVar11 != 0x758f7eaf) || (lVar18 = *(long *)puVar5, lVar18 == 0)) ||
                           ((lVar18 = *(long *)(lVar18 + 0x330), lVar18 == 0 ||
                            (fVar29 = fVar28, *(int *)(lVar18 + 0x244) == 0)))) goto LAB_01fa9120;
                      }
                      if (fVar39 < fVar29) {
                        iVar12 = *(int *)(lVar24 + 8);
                        iVar20 = *(int *)(lVar24 + 0xc);
                        fVar39 = fVar29;
                      }
                      plVar21 = plVar21 + 1;
                      lVar22 = lVar22 + -8;
                    } while (lVar22 != 0);
                  }
                  if (param_2 != (float *)0x0) {
                    *param_2 = (float)iVar12 * 5.0;
                    param_2[2] = (float)iVar20 * 5.0;
                  }
                  if (0 < (int)(uint)local_2e0) {
                    lVar22 = 0;
                    do {
                      (*(code *)**(undefined8 **)local_2d8[lVar22])();
                      lVar22 = lVar22 + 1;
                    } while (lVar22 < (int)(uint)local_2e0);
                  }
                }
              }
              goto LAB_01fa97b0;
            }
          }
        }
      }
    }
  }
LAB_01fa97ac:
  bVar8 = 0;
LAB_01fa97b0:
  return bVar8 & 1;
}

