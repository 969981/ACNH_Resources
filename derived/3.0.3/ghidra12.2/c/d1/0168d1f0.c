
/* WARNING: Removing unreachable block (ram,0x0168e4f4) */
/* WARNING: Removing unreachable block (ram,0x0168e500) */
/* WARNING: Removing unreachable block (ram,0x0168e164) */
/* WARNING: Removing unreachable block (ram,0x0168e600) */
/* WARNING: Removing unreachable block (ram,0x0168e60c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0168d1f0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte bVar16;
  undefined1 uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  char cVar24;
  char cVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  int iVar29;
  uint uVar30;
  long lVar31;
  long *plVar32;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  undefined8 *puVar37;
  float fVar38;
  float fVar39;
  undefined *local_128;
  uint local_120;
  uint local_11c;
  short local_118;
  byte local_116;
  undefined1 local_115;
  undefined4 local_114;
  undefined *local_110;
  undefined8 local_108;
  undefined *local_100;
  uint local_f8;
  uint local_f4;
  undefined *local_f0;
  uint local_e8;
  undefined4 local_e4;
  byte local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  uint local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  uint local_98;
  uint local_94;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_68;
  
  local_e8 = 0;
  puVar37 = &DAT_055c04a0;
  lVar31 = *(long *)PTR_DAT_04bb2720;
  if ((lVar31 != 0) && (*(long *)(lVar31 + 0x330) != 0)) {
    puVar37 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar31 + 0x338));
    iVar18 = FUN_006bd550(*puVar37,0);
    puVar37 = (undefined8 *)PTR_DAT_04bc3a80;
    if (iVar18 != 0x758f7eaf) {
      puVar37 = &DAT_055c04a0;
    }
  }
  local_e4 = *(undefined4 *)(puVar37 + 7);
  local_e0 = FUN_017baf44();
  local_e0 = local_e0 & 1;
  puVar1 = PTR_DAT_04bb6268 + 0x10;
  local_f0 = puVar1;
  lVar31 = FUN_01a4fa00(&local_f0);
  uVar23 = *(int *)(lVar31 + 0x24) + 1;
  uVar30 = *(uint *)(lVar31 + 0x10);
  uVar27 = *(uint *)(lVar31 + 0x14);
  uVar20 = uVar30;
  if (uVar23 == uVar27) {
    if (uVar23 == uVar27) goto LAB_0168e410;
  }
  else {
    puVar2 = PTR_DAT_04bbbad8 + 0x10;
    puVar3 = PTR_DAT_04bb2010 + 0x10;
    puVar4 = PTR_DAT_04bbc1a0 + 0x10;
    puVar5 = PTR_DAT_04bb2018 + 0x10;
    puVar6 = PTR_DAT_04bc0510 + 0x10;
    uVar19 = uVar30;
    do {
      if (((uVar19 | uVar27) & 1) == 0) {
        local_108 = 0;
        local_110 = puVar3;
        local_100 = puVar2;
        local_f8 = uVar19;
        local_f4 = uVar27;
        FUN_01a5033c(&local_118,&local_f0,0,&local_100,&local_110);
        if (local_118 == -2) {
          local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
          local_120 = local_f8;
          local_11c = local_f4;
          local_128 = PTR_DAT_04bb2010 + 0x10;
          lVar36 = *(long *)PTR_DAT_04bb2720;
          if ((lVar36 == 0) || (*(long *)(lVar36 + 0x330) == 0)) {
            puVar37 = &DAT_055c04a0;
          }
          else {
            puVar37 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar36 + 0x338));
            iVar18 = FUN_006bd550(*puVar37,0);
            puVar37 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar18 != 0x758f7eaf) {
              puVar37 = &DAT_055c04a0;
            }
          }
          local_d0 = (undefined *)CONCAT44(*(undefined4 *)(puVar37 + 7),(undefined4)local_d0);
          uVar17 = FUN_017baf44();
          local_c8 = CONCAT71(local_c8._1_7_,uVar17) & 0xffffffffffffff01;
          local_120 = local_120 + 1;
          local_d8 = puVar1;
          FUN_01a50240(&local_b0,&local_d8,0,&local_128);
          if ((short)local_b0 == -2) {
            local_11c = local_11c + 1;
            FUN_01a50240(&uStack_88,&local_d8,0,&local_128);
            local_b0 = (undefined8 *)CONCAT44(uStack_84,uStack_88);
            if ((short)uStack_88 == -2) {
              local_120 = local_120 + -1;
              FUN_01a50240(&uStack_88,&local_d8,0,&local_128);
              uVar20 = local_f8;
              if ((short)uStack_88 == -2) {
                iVar18 = local_f8 + 1;
                uVar33 = local_f4 + 2;
                uVar26 = local_f4;
                uVar35 = local_f8;
                do {
                  local_a8 = (undefined **)CONCAT44(uVar26,uVar35);
                  local_c8 = CONCAT44(uVar26,uVar35);
                  local_d0 = PTR_DAT_04bb2010 + 0x10;
                  if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
                     (lVar36 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar36 == 0))
                  goto LAB_0168dbbc;
                  local_d8 = puVar4;
                  local_c0 = local_d0;
                  local_b8 = uVar35;
                  uStack_b4 = uVar26;
                  local_b0 = (undefined8 *)local_d0;
                  uVar22 = FUN_00971f80(lVar36,&local_d8,0);
                  if (((uVar22 & 1) == 0) || (uVar22 = FUN_00975dc0(&local_b0), (uVar22 & 1) == 0))
                  goto LAB_0168dbbc;
                  if ((int)uVar35 < iVar18) {
                    uVar35 = uVar35 + 1;
                  }
                  else {
                    uVar26 = uVar26 + 1;
                    uVar35 = uVar20;
                  }
                } while ((uVar20 != uVar35) || (uVar33 != uVar26));
                if ((DAT_05233970 <= (int)local_f8) &&
                   (((((int)local_f8 <= DAT_05233980 && (DAT_05233974 <= (int)local_f4)) &&
                     ((int)local_f4 <= DAT_05233984)) &&
                    (uVar20 = (local_f4 & 0x1fffffe) * 0x80 + ((int)local_f8 >> 1),
                    uVar20 >> 0xf == 0)))) {
                  lVar36 = (ulong)(uVar20 >> 5) * 4;
                  *(uint *)(param_1 + 8 + lVar36) =
                       *(uint *)(param_1 + 8 + lVar36) | 1 << (ulong)(local_f8 >> 1 & 0x1f);
                }
LAB_0168dbbc:
                uVar33 = local_f8;
                iVar18 = 0;
                local_d8 = PTR_DAT_04bbc1a0 + 0x10;
                local_d0 = PTR_DAT_04bb2010 + 0x10;
                local_c0 = local_d0;
                uVar20 = local_f4 + 2;
                local_c8 = CONCAT44(local_f4,local_f8);
                local_98 = local_f8;
                local_94 = local_f4;
                local_b8 = local_f8 + 1;
                uStack_b4 = local_f4 + 1;
                local_b0 = &local_d0;
                local_a8 = &local_c0;
                puStack_a0 = local_d0;
                do {
                  uStack_88 = 0;
                  local_68 = 0;
                  lVar36 = *(long *)PTR_DAT_04bb27c8;
                  local_8c = 0;
                  if ((((lVar36 != 0) && (*(long *)(lVar36 + 0xa8) != 0)) &&
                      (uVar22 = FUN_009493f8(lVar36 + 0x28,&puStack_a0,&uStack_88,
                                             (long)&local_68 + 4,&local_68,&local_8c),
                      (uVar22 & 1) != 0)) &&
                     (((uStack_88 - 0x29 < 3 || (local_68._4_4_ - 0x29U < 3)) ||
                      (((int)local_68 - 0x29U < 3 || (local_8c - 0x29U < 3)))))) goto LAB_0168df50;
                  uStack_88._0_2_ = 0xffff;
                  uStack_88._2_2_ = 0xffff;
                  uStack_84 = 0xffffffff;
                  local_80 = 0x1ff;
                  local_68 = CONCAT44(7,(int)local_68);
                  local_80 = 0x1ff;
                  uStack_84 = 0xffffffff;
                  uStack_88 = 0xffffff7f;
                  lVar36 = *(long *)PTR_DAT_04bb27c8;
                  if ((lVar36 != 0) && (*(long *)(lVar36 + 0xa8) != 0)) {
                    uVar22 = FUN_009499b0(lVar36 + 0x28,&puStack_a0,&uStack_88);
                    if ((uVar22 & 1) != 0) goto LAB_0168df50;
                    lVar36 = *(long *)PTR_DAT_04bb27c8;
                  }
                  local_8c = 0;
                  uStack_88 = 0;
                  local_68 = 0;
                  if ((((lVar36 == 0) || (*(long *)(lVar36 + 0xa8) == 0)) ||
                      (uVar22 = FUN_009493f8(lVar36 + 0x28,&puStack_a0,&uStack_88,
                                             (long)&local_68 + 4,&local_68,&local_8c),
                      (uVar22 & 1) == 0)) ||
                     (((uStack_88 != 0x1d || (local_68._4_4_ != 0x1d)) ||
                      (((int)local_68 != 0x1d || (local_8c != 0x1d)))))) {
                    local_80 = 0;
                    uStack_88._0_2_ = 0;
                    uStack_88._2_2_ = 0;
                    uStack_84 = 0;
                    local_68 = CONCAT44(0x1d,(int)local_68);
                    local_80 = 0;
                    uStack_84 = 0;
                    uStack_88 = 0x20000000;
                    lVar36 = *(long *)PTR_DAT_04bb27c8;
                    if (((lVar36 != 0) && (*(long *)(lVar36 + 0xa8) != 0)) &&
                       (uVar22 = FUN_00949898(lVar36 + 0x28,&puStack_a0,&uStack_88),
                       (uVar22 & 1) != 0)) goto LAB_0168ddf4;
                    uVar22 = FUN_00976070(&puStack_a0);
                    if ((uVar22 & 1) == 0) goto LAB_0168df50;
                  }
                  else {
LAB_0168ddf4:
                    iVar18 = iVar18 + 1;
                  }
                  if ((int)local_98 < *(int *)(local_a8 + 1)) {
                    local_98 = local_98 + 1;
                  }
                  else {
                    local_98 = *(uint *)(local_b0 + 1);
                    local_94 = local_94 + 1;
                  }
                } while ((uVar33 != local_98) || (uVar20 != local_94));
                if (((1 < iVar18) &&
                    (((DAT_05233970 <= (int)local_f8 && ((int)local_f8 <= DAT_05233980)) &&
                     (DAT_05233974 <= (int)local_f4)))) &&
                   (((int)local_f4 <= DAT_05233984 &&
                    (uVar20 = (local_f4 & 0x1fffffe) * 0x80 + ((int)local_f8 >> 1),
                    uVar20 >> 0xf == 0)))) {
                  lVar36 = (ulong)(uVar20 >> 5) * 4;
                  *(uint *)(param_1 + 0x6038 + lVar36) =
                       *(uint *)(param_1 + 0x6038 + lVar36) | 1 << (ulong)(local_f8 >> 1 & 0x1f);
                }
LAB_0168df50:
                uVar20 = local_f4;
                uVar26 = local_f8;
                fVar38 = (float)(int)local_f8 * 0.5;
                uVar33 = 0;
                if (fVar38 != (float)(int)fVar38) {
                  uVar33 = (uint)(fVar38 < 0.0);
                }
                fVar39 = (float)(int)local_f4 * 0.5;
                uVar35 = 0;
                if (fVar39 != (float)(int)fVar39) {
                  uVar35 = (uint)(fVar39 < 0.0);
                }
                local_d0 = (undefined *)CONCAT44((int)fVar39 - uVar35,(int)fVar38 - uVar33);
                local_d8 = puVar5;
                uVar22 = FUN_00977130(&local_d8);
                if ((uVar22 & 1) != 0) {
                  uVar33 = uVar20 + 2;
                  uVar35 = uVar26;
                  do {
                    local_d0 = (undefined *)CONCAT44(uVar20,uVar35);
                    local_d8 = PTR_DAT_04bb2010 + 0x10;
                    uVar22 = FUN_00976070(&local_d8);
                    if ((uVar22 & 1) != 0) goto LAB_0168d6c4;
                    if ((int)uVar35 < (int)(uVar26 + 1)) {
                      uVar35 = uVar35 + 1;
                    }
                    else {
                      uVar20 = uVar20 + 1;
                      uVar35 = uVar26;
                    }
                  } while ((uVar26 != uVar35) || (uVar33 != uVar20));
                  uVar22 = (ulong)local_f8;
                  if ((DAT_05233970 <= (int)local_f8) &&
                     (((((int)local_f8 <= DAT_05233980 && (DAT_05233974 <= (int)local_f4)) &&
                       ((int)local_f4 <= DAT_05233984)) &&
                      (uVar20 = (local_f4 & 0x1fffffe) * 0x80 + ((int)local_f8 >> 1),
                      uVar34 = (ulong)uVar20, uVar20 >> 0xf == 0)))) {
                    lVar36 = param_1 + 0x7040;
                    goto LAB_0168d6a4;
                  }
                }
              }
            }
          }
          goto LAB_0168d6c4;
        }
        lVar36 = *(long *)PTR_DAT_04bbbc68;
        if ((((lVar36 == 0) || (*(long *)(lVar36 + 0xb0) == 0)) ||
            ((*(long *)(*(long *)(lVar36 + 0xb0) + 8) == 0 ||
             ((*(long *)(lVar36 + 0x488) == 0 || (*(long *)(*(long *)(lVar36 + 0x488) + 8) == 0)))))
            ) || ((*(long *)(lVar36 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar36 + 0x2b0) + 8) == 0)
                  ))) {
LAB_0168d8c0:
          puVar12 = PTR_DAT_04bb43c0;
          lVar36 = *(long *)PTR_DAT_04bb43c0;
          uVar20 = FUN_0277d6c4(&local_118);
          bVar16 = local_116;
          lVar28 = *(long *)puVar12;
          if (lVar28 != 0) {
            lVar36 = *(long *)(lVar36 + 0x57e58);
            uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar36 + 0x1f8);
            if ((uVar20 < *(uint *)(lVar36 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar36 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
              local_c8 = 0;
              local_d0 = (undefined *)
                         CONCAT44(local_114,CONCAT22(CONCAT11(local_115,local_116),local_118));
              local_d8 = puVar6;
              uVar20 = FUN_0277d6c4(&local_d0);
              if (*(long *)PTR_DAT_04bb43c0 != 0) {
                lVar36 = *(long *)(lVar28 + 0x57e58);
                uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar36 + 0x1f8);
                if ((uVar20 < *(uint *)(lVar36 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar36 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) {
                  lVar36 = *(long *)PTR_DAT_04bc0428;
                  uVar20 = FUN_0277d6c4(&local_118);
                  uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar36 + 0x1f8);
                  if (uVar20 < *(uint *)(lVar36 + 0x1d8)) {
                    uVar22 = *(ulong *)(*(long *)(lVar36 + 0x1e0) + (long)(int)uVar20 * 8);
                    if (uVar22 != 0) {
                      local_c8 = uVar22;
                    }
                  }
                }
              }
              iVar18 = FUN_0277d6c4(&local_118);
              if (iVar18 == 0x595) {
                uVar22 = FUN_01ae59b0(&local_d8);
                if ((uVar22 & 1) != 0) {
                  *(undefined4 *)(param_1 + 0x9050) = (undefined4)local_108;
                  *(undefined4 *)(param_1 + 0x9054) = local_108._4_4_;
                }
              }
              else {
                iVar18 = FUN_0277d6c4(&local_118);
                if (iVar18 == 0x9c6) {
                  uVar22 = FUN_01a4f798(&local_f0,0,&local_110);
                  if ((uVar22 & 1) != 0) {
                    if (local_e8 == 0) {
                      local_b0 = (undefined8 *)((ulong)local_b0._4_4_ << 0x20);
LAB_0168e0bc:
                      plVar32 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_0168e0c0:
                      lVar36 = *plVar32;
                    }
                    else {
                      uStack_88 = local_e8;
                      if (local_e8 != 0) {
                        local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,local_e8);
                        if (local_e8 == 0) goto LAB_0168e0bc;
                        plVar7 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
                        plVar32 = plVar7 + local_e8;
                        if (0x38 < local_e8) {
                          plVar32 = plVar7;
                        }
                        goto LAB_0168e0c0;
                      }
                      lVar36 = 0;
                    }
                    local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffff00000000);
                    if (*(long *)(lVar36 + 0xd0) != 0) {
                      FUN_012e5af4(*(long *)(lVar36 + 0xd0),&local_110);
                    }
                  }
                }
                else {
                  uVar22 = FUN_01ae59b0(&local_d8);
                  bVar9 = bVar16 >> 2 & 1;
                  if ((uVar22 & 1) == 0) {
                    bVar9 = bVar16 & 4;
                  }
                  if (bVar9 != 0) {
                    FUN_011f3520(&local_f0,0,&local_110);
                  }
                }
              }
            }
          }
        }
        else {
          uVar20 = FUN_0277d6c4(&local_118);
          uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar36 + 0x1f8);
          if ((*(uint *)(lVar36 + 0x1d8) <= uVar20) ||
             (*(long *)(*(long *)(lVar36 + 0x1e0) + (long)(int)uVar20 * 8) == 0)) goto LAB_0168d8c0;
          FUN_0124c030(&local_d8,&local_118);
          iVar21 = FUN_0123db50(&local_d0,local_c8);
          local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,iVar21);
          iVar18 = (int)local_f8 >> 1;
          if (iVar21 < 9) {
            if (iVar21 == 1) {
              if ((((DAT_05233970 <= (int)local_f8) && ((int)local_f8 <= DAT_05233980)) &&
                  (DAT_05233974 <= (int)local_f4)) &&
                 (((int)local_f4 <= DAT_05233984 &&
                  (uVar20 = (local_f4 & 0x1fffffe) * 0x80 + iVar18, uVar20 >> 0xf == 0)))) {
                lVar36 = (ulong)(uVar20 >> 5) * 4;
                *(uint *)(param_1 + 0x1010 + lVar36) =
                     *(uint *)(param_1 + 0x1010 + lVar36) | 1 << (ulong)(local_f8 >> 1 & 0x1f);
              }
              iVar18 = FUN_0277d6c4(&local_d0);
              if ((((iVar18 == 0xec9a) || (iVar18 = FUN_0277d6c4(&local_d0), iVar18 == 0xec97)) ||
                  (uVar22 = FUN_012509c0(&local_d8,0), (uVar22 & 1) != 0)) &&
                 (((ulong)local_d0 & 0x1000000000000) != 0)) {
                FUN_01250bf0(&local_d8);
                FUN_011f3520(&local_f0,0,&local_110);
                FUN_011f3880(&local_f0,0,&local_d0,&local_110);
              }
            }
            else {
              if (iVar21 != 5) goto LAB_0168e17c;
              uVar22 = (ulong)local_f8;
              if ((((DAT_05233970 <= (int)local_f8) && ((int)local_f8 <= DAT_05233980)) &&
                  (DAT_05233974 <= (int)local_f4)) &&
                 (((int)local_f4 <= DAT_05233984 &&
                  (uVar20 = (local_f4 & 0x1fffffe) * 0x80 + iVar18, uVar34 = (ulong)uVar20,
                  uVar20 >> 0xf == 0)))) {
                lVar36 = param_1 + 0x2018;
                goto LAB_0168d6a4;
              }
            }
          }
          else if (iVar21 == 9) {
            uVar22 = (ulong)local_f8;
            if (((DAT_05233970 <= (int)local_f8) && ((int)local_f8 <= DAT_05233980)) &&
               ((DAT_05233974 <= (int)local_f4 &&
                (((int)local_f4 <= DAT_05233984 &&
                 (uVar20 = (local_f4 & 0x1fffffe) * 0x80 + iVar18, uVar34 = (ulong)uVar20,
                 uVar20 >> 0xf == 0)))))) {
              lVar36 = param_1 + 0x4028;
              goto LAB_0168d6a4;
            }
          }
          else if (iVar21 == 0x2e) {
            uVar22 = (ulong)local_f8;
            if (((DAT_05233970 <= (int)local_f8) && ((int)local_f8 <= DAT_05233980)) &&
               ((DAT_05233974 <= (int)local_f4 &&
                (((int)local_f4 <= DAT_05233984 &&
                 (uVar20 = (local_f4 & 0x1fffffe) * 0x80 + iVar18, uVar34 = (ulong)uVar20,
                 uVar20 >> 0xf == 0)))))) {
              lVar36 = param_1 + 0x3020;
              goto LAB_0168d6a4;
            }
          }
          else {
LAB_0168e17c:
            iVar18 = FUN_0123db50(&local_d0,local_c8);
            if (iVar18 - 0x23U < 9) {
              uVar22 = (ulong)local_f8;
              if ((((DAT_05233970 <= (int)local_f8) && ((int)local_f8 <= DAT_05233980)) &&
                  (DAT_05233974 <= (int)local_f4)) &&
                 (((int)local_f4 <= DAT_05233984 &&
                  (uVar20 = (local_f4 & 0x1fffffe) * 0x80 + ((int)local_f8 >> 1),
                  uVar34 = (ulong)uVar20, uVar20 >> 0xf == 0)))) {
                lVar36 = param_1 + 0x5030;
                goto LAB_0168d6a4;
              }
            }
            else {
              iVar18 = FUN_0123db50(&local_d0,local_c8);
              if (((iVar18 - 0x18U < 7) && (uVar22 = (ulong)local_f8, DAT_05233970 <= (int)local_f8)
                  ) && (((int)local_f8 <= DAT_05233980 &&
                        (((DAT_05233974 <= (int)local_f4 && ((int)local_f4 <= DAT_05233984)) &&
                         (uVar20 = (local_f4 & 0x1fffffe) * 0x80 + ((int)local_f8 >> 1),
                         uVar34 = (ulong)uVar20, uVar20 >> 0xf == 0)))))) {
                lVar36 = param_1 + 0x8048;
LAB_0168d6a4:
                lVar28 = (uVar34 >> 5) * 4;
                *(uint *)(lVar36 + lVar28) =
                     *(uint *)(lVar36 + lVar28) | 1 << (ulong)((uint)(uVar22 >> 1) & 0x1f);
              }
            }
          }
        }
LAB_0168d6c4:
        uVar20 = *(uint *)(lVar31 + 0x10);
      }
      if ((int)uVar19 < *(int *)(lVar31 + 0x20)) {
        uVar19 = uVar19 + 1;
      }
      else {
        uVar27 = uVar27 + 1;
        uVar19 = uVar20;
      }
    } while (uVar30 != uVar19 || uVar23 != uVar27);
    uVar23 = *(int *)(lVar31 + 0x24) + 1;
    uVar27 = *(uint *)(lVar31 + 0x14);
    if (uVar23 == uVar27) {
LAB_0168e410:
      iVar18 = *(int *)(lVar31 + 0x20);
      uVar30 = uVar20;
      if (iVar18 < (int)uVar20) {
        return;
      }
      goto LAB_0168e440;
    }
  }
  iVar15 = DAT_05233984;
  iVar14 = DAT_05233980;
  iVar13 = DAT_05233974;
  iVar21 = DAT_05233970;
  lVar36 = param_1 + 8;
  lVar28 = param_1 + 0x7040;
  uVar30 = uVar20;
  uVar19 = uVar20;
  do {
    if ((((((uVar19 | uVar27) & 1) == 0) && (iVar21 <= (int)uVar19)) && ((int)uVar19 <= iVar14)) &&
       ((iVar13 <= (int)uVar27 && ((int)uVar27 <= iVar15)))) {
      uVar33 = (uVar27 << 7 & 0xffffff00) + ((int)uVar19 >> 1);
      if ((((uVar33 >> 0xf == 0) &&
           ((*(uint *)(param_1 + 0x1010 + (ulong)(uVar33 >> 5) * 4) >> (ulong)(uVar19 >> 1 & 0x1f) &
            1) != 0)) ||
          ((uVar33 >> 0xf == 0 &&
           ((*(uint *)(param_1 + 0x4028 + (ulong)(uVar33 >> 5) * 4) >> (ulong)(uVar19 >> 1 & 0x1f) &
            1) != 0)))) ||
         ((uVar33 = (uVar27 << 7 & 0xffffff00) + ((int)uVar19 >> 1), uVar33 >> 0xf == 0 &&
          ((*(uint *)(param_1 + 0x2018 + (ulong)(uVar33 >> 5) * 4) >> (ulong)(uVar19 >> 1 & 0x1f) &
           1) != 0)))) {
        uVar26 = uVar19 - 2;
        uVar33 = uVar27 - 4;
        uVar30 = uVar33;
        uVar35 = uVar26;
        do {
          if ((((iVar21 <= (int)uVar35) && ((int)uVar35 <= iVar14)) && (iVar13 <= (int)uVar30)) &&
             (((int)uVar30 <= iVar15 &&
              (uVar8 = (uVar30 & 0x1fffffe) * 0x80 + ((int)uVar35 >> 1), uVar8 >> 0xf == 0)))) {
            lVar11 = (ulong)(uVar8 >> 5) * 4;
            *(uint *)(lVar36 + lVar11) =
                 *(uint *)(lVar36 + lVar11) & (1 << (ulong)(uVar35 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          if ((int)uVar35 < (int)(uVar19 + 3)) {
            uVar35 = uVar35 + 1;
          }
          else {
            uVar30 = uVar30 + 1;
            uVar35 = uVar26;
          }
        } while ((uVar26 != uVar35) || (uVar27 - 2 != uVar30));
        uVar30 = uVar26;
        do {
          if ((((iVar21 <= (int)uVar30) && ((int)uVar30 <= iVar14)) && (iVar13 <= (int)uVar33)) &&
             (((int)uVar33 <= iVar15 &&
              (uVar35 = (uVar33 & 0x1fffffe) * 0x80 + ((int)uVar30 >> 1), uVar35 >> 0xf == 0)))) {
            lVar11 = (ulong)(uVar35 >> 5) * 4;
            *(uint *)(lVar28 + lVar11) =
                 *(uint *)(lVar28 + lVar11) & (1 << (ulong)(uVar30 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          if ((int)uVar30 < (int)(uVar19 + 3)) {
            uVar30 = uVar30 + 1;
          }
          else {
            uVar33 = uVar33 + 1;
            uVar30 = uVar26;
          }
        } while ((uVar26 != uVar30) || (uVar27 - 2 != uVar33));
        uVar33 = uVar27 - 6;
        uVar26 = uVar19;
        uVar30 = uVar33;
        do {
          if ((((iVar21 <= (int)uVar26) && ((int)uVar26 <= iVar14)) && (iVar13 <= (int)uVar30)) &&
             (((int)uVar30 <= iVar15 &&
              (uVar35 = (uVar30 & 0x1fffffe) * 0x80 + ((int)uVar26 >> 1), uVar35 >> 0xf == 0)))) {
            lVar11 = (ulong)(uVar35 >> 5) * 4;
            *(uint *)(lVar36 + lVar11) =
                 *(uint *)(lVar36 + lVar11) & (1 << (ulong)(uVar26 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          if ((int)uVar26 < (int)(uVar19 + 1)) {
            uVar26 = uVar26 + 1;
          }
          else {
            uVar30 = uVar30 + 1;
            uVar26 = uVar19;
          }
        } while ((uVar19 != uVar26) || (uVar27 != uVar30));
        uVar30 = uVar19;
        do {
          if ((((iVar21 <= (int)uVar30) && ((int)uVar30 <= iVar14)) && (iVar13 <= (int)uVar33)) &&
             (((int)uVar33 <= iVar15 &&
              (uVar26 = (uVar33 & 0x1fffffe) * 0x80 + ((int)uVar30 >> 1), uVar26 >> 0xf == 0)))) {
            lVar11 = (ulong)(uVar26 >> 5) * 4;
            *(uint *)(lVar28 + lVar11) =
                 *(uint *)(lVar28 + lVar11) & (1 << (ulong)(uVar30 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          if ((int)uVar30 < (int)(uVar19 + 1)) {
            uVar30 = uVar30 + 1;
          }
          else {
            uVar33 = uVar33 + 1;
            uVar30 = uVar19;
          }
        } while ((uVar19 != uVar30) || (uVar27 != uVar33));
        uVar30 = *(uint *)(lVar31 + 0x10);
      }
    }
    iVar18 = *(int *)(lVar31 + 0x20);
    if ((int)uVar19 < iVar18) {
      uVar19 = uVar19 + 1;
    }
    else {
      uVar27 = uVar27 + 1;
      uVar19 = uVar30;
    }
  } while (uVar20 != uVar19 || uVar23 != uVar27);
  if (iVar18 < (int)uVar30) {
    return;
  }
LAB_0168e440:
  iVar15 = DAT_05233984;
  iVar14 = DAT_05233980;
  iVar13 = DAT_05233974;
  iVar21 = DAT_05233970;
  lVar36 = *(long *)PTR_DAT_04bb27a8;
  do {
    fVar39 = (float)(int)uVar30 * 0.5;
    fVar38 = (float)*(int *)(lVar31 + 0x24) * 0.5;
    uVar23 = 0;
    if (fVar39 != (float)(int)fVar39) {
      uVar23 = (uint)(fVar39 < 0.0);
    }
    uVar27 = 0;
    if (fVar38 != (float)(int)fVar38) {
      uVar27 = (uint)(fVar38 < 0.0);
    }
    iVar10 = (int)fVar39 - uVar23;
    lVar28 = *(long *)(lVar36 + 0x1f8);
    cVar24 = '\0';
    if (lVar28 != 0) {
      lVar28 = *(long *)(lVar28 + 0xb0);
      cVar24 = '\0';
      if (lVar28 != 0) {
        uVar23 = iVar10 - *(int *)(lVar28 + 0x28);
        uVar20 = *(uint *)(lVar28 + 0x18);
        uVar19 = ((int)fVar38 - uVar27) - *(int *)(lVar28 + 0x2c);
        if ((uVar23 < uVar20 && uVar19 <= *(uint *)(lVar28 + 0x1c)) &&
            (uVar20 <= uVar23 || *(uint *)(lVar28 + 0x1c) != uVar19)) {
          uVar23 = uVar23 + uVar20 * uVar19;
LAB_0168e57c:
          if (*(uint *)(lVar28 + 0x30) <= uVar23) {
            uVar23 = 0;
          }
          puVar37 = (undefined8 *)(*(long *)(lVar28 + 0x38) + (long)(int)uVar23 * 0x68);
        }
        else if (*(char *)(lVar28 + 0x88) == '\0') {
          puVar37 = &DAT_051a50f0;
        }
        else {
          uVar23 = ((int)fVar38 - uVar27) - *(int *)(lVar28 + 0x9c);
          uVar27 = iVar10 - *(int *)(lVar28 + 0x98);
          puVar37 = &DAT_051a50f0;
          if (uVar27 < *(uint *)(lVar28 + 0xa0) && uVar23 < *(uint *)(lVar28 + 0xa4)) {
            uVar23 = uVar27 + *(uint *)(lVar28 + 0xa0) * uVar23 + *(int *)(lVar28 + 0x8c);
            goto LAB_0168e57c;
          }
        }
        cVar24 = *(char *)(puVar37 + 2);
      }
    }
    iVar29 = *(int *)(lVar31 + 0x14);
    uVar23 = *(int *)(lVar31 + 0x24) - 2;
    if (iVar29 <= (int)uVar23) {
      do {
        fVar38 = (float)(int)uVar23 * 0.5;
        uVar27 = 0;
        if (fVar38 != (float)(int)fVar38) {
          uVar27 = (uint)(fVar38 < 0.0);
        }
        lVar28 = *(long *)(lVar36 + 0x1f8);
        cVar25 = '\0';
        if (lVar28 != 0) {
          lVar28 = *(long *)(lVar28 + 0xb0);
          cVar25 = '\0';
          if (lVar28 != 0) {
            uVar20 = iVar10 - *(int *)(lVar28 + 0x28);
            if ((uVar20 < *(uint *)(lVar28 + 0x18)) &&
               (uVar19 = ((int)fVar38 - uVar27) - *(int *)(lVar28 + 0x2c),
               uVar19 < *(uint *)(lVar28 + 0x1c))) {
              uVar20 = uVar20 + *(uint *)(lVar28 + 0x18) * uVar19;
LAB_0168e698:
              if (*(uint *)(lVar28 + 0x30) <= uVar20) {
                uVar20 = 0;
              }
              puVar37 = (undefined8 *)(*(long *)(lVar28 + 0x38) + (long)(int)uVar20 * 0x68);
            }
            else {
              if (*(char *)(lVar28 + 0x88) != '\0') {
                uVar20 = iVar10 - *(int *)(lVar28 + 0x98);
                if (uVar20 < *(uint *)(lVar28 + 0xa0)) {
                  uVar27 = ((int)fVar38 - uVar27) - *(int *)(lVar28 + 0x9c);
                  puVar37 = &DAT_051a50f0;
                  if (uVar27 < *(uint *)(lVar28 + 0xa4)) {
                    uVar20 = uVar20 + *(uint *)(lVar28 + 0xa0) * uVar27 + *(int *)(lVar28 + 0x8c);
                    goto LAB_0168e698;
                  }
                  goto LAB_0168e6b4;
                }
              }
              puVar37 = &DAT_051a50f0;
            }
LAB_0168e6b4:
            cVar25 = *(char *)(puVar37 + 2);
          }
        }
        if (((cVar25 != '\x04') && (cVar24 != '\x04')) && (cVar25 < cVar24)) {
          uVar20 = uVar23 - 8;
          uVar19 = uVar30;
          uVar27 = uVar20;
          do {
            if (((iVar21 <= (int)uVar19) && ((int)uVar19 <= iVar14)) &&
               ((iVar13 <= (int)uVar27 &&
                (((int)uVar27 <= iVar15 &&
                 (uVar33 = (uVar27 & 0x1fffffe) * 0x80 + ((int)uVar19 >> 1), uVar33 >> 0xf == 0)))))
               ) {
              lVar28 = (ulong)(uVar33 >> 5) * 4;
              *(uint *)(param_1 + 8 + lVar28) =
                   *(uint *)(param_1 + 8 + lVar28) &
                   (1 << (ulong)(uVar19 >> 1 & 0x1f) ^ 0xffffffffU);
            }
            if ((int)uVar19 < (int)(uVar30 + 1)) {
              uVar19 = uVar19 + 1;
            }
            else {
              uVar27 = uVar27 + 1;
              uVar19 = uVar30;
            }
          } while ((uVar30 != uVar19) || (uVar23 != uVar27));
          uVar27 = uVar30;
          do {
            if ((((iVar21 <= (int)uVar27) && ((int)uVar27 <= iVar14)) && (iVar13 <= (int)uVar20)) &&
               (((int)uVar20 <= iVar15 &&
                (uVar19 = (uVar20 & 0x1fffffe) * 0x80 + ((int)uVar27 >> 1), uVar19 >> 0xf == 0)))) {
              lVar28 = (ulong)(uVar19 >> 5) * 4;
              *(uint *)(param_1 + 0x7040 + lVar28) =
                   *(uint *)(param_1 + 0x7040 + lVar28) &
                   (1 << (ulong)(uVar27 >> 1 & 0x1f) ^ 0xffffffffU);
            }
            if ((int)uVar27 < (int)(uVar30 + 1)) {
              uVar27 = uVar27 + 1;
            }
            else {
              uVar20 = uVar20 + 1;
              uVar27 = uVar30;
            }
          } while ((uVar30 != uVar27) || (uVar23 != uVar20));
          iVar29 = *(int *)(lVar31 + 0x14);
        }
        uVar23 = uVar23 - 2;
        cVar24 = cVar25;
      } while (iVar29 <= (int)uVar23);
      iVar18 = *(int *)(lVar31 + 0x20);
    }
    uVar30 = uVar30 + 2;
    if (iVar18 < (int)uVar30) {
      return;
    }
  } while( true );
}

