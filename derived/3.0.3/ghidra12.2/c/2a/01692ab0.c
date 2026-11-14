
/* WARNING: Removing unreachable block (ram,0x01693ea8) */
/* WARNING: Removing unreachable block (ram,0x01693eb4) */
/* WARNING: Removing unreachable block (ram,0x01693988) */
/* WARNING: Removing unreachable block (ram,0x01693fb8) */
/* WARNING: Removing unreachable block (ram,0x01693fc4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01692ab0(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  long lVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  undefined1 uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  char cVar25;
  uint uVar26;
  long lVar27;
  char cVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  long lVar32;
  long *plVar33;
  uint uVar34;
  ulong uVar35;
  uint uVar36;
  long lVar37;
  undefined8 *puVar38;
  float fVar39;
  float fVar40;
  undefined *local_128;
  uint local_120;
  uint local_11c;
  short local_118;
  byte local_116;
  undefined1 local_115;
  undefined4 local_114;
  undefined *local_110;
  undefined8 uStack_108;
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
  puVar38 = &DAT_055c04a0;
  lVar32 = *(long *)PTR_DAT_04bb2720;
  if ((lVar32 != 0) && (*(long *)(lVar32 + 0x330) != 0)) {
    puVar38 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar32 + 0x338));
    iVar19 = FUN_006bd550(*puVar38,0);
    puVar38 = (undefined8 *)PTR_DAT_04bc3a80;
    if (iVar19 != 0x758f7eaf) {
      puVar38 = &DAT_055c04a0;
    }
  }
  local_e4 = *(undefined4 *)(puVar38 + 7);
  local_e0 = FUN_017baf44();
  local_e0 = local_e0 & 1;
  puVar2 = PTR_DAT_04bb6268 + 0x10;
  local_f0 = puVar2;
  lVar32 = FUN_01a4fa00(&local_f0);
  uVar24 = *(int *)(lVar32 + 0x24) + 1;
  uVar31 = *(uint *)(lVar32 + 0x10);
  uVar26 = *(uint *)(lVar32 + 0x14);
  uVar21 = uVar31;
  if (uVar24 == uVar26) {
    if (uVar24 == uVar26) goto LAB_01693dcc;
  }
  else {
    puVar3 = PTR_DAT_04bbbad8 + 0x10;
    puVar4 = PTR_DAT_04bb2010 + 0x10;
    puVar5 = PTR_DAT_04bbc1a0 + 0x10;
    puVar6 = PTR_DAT_04bb2018 + 0x10;
    puVar7 = PTR_DAT_04bc0510 + 0x10;
    uVar20 = uVar31;
    do {
      if (((uVar20 | uVar26) & 1) == 0) {
        uStack_108 = 0;
        local_110 = puVar4;
        local_100 = puVar3;
        local_f8 = uVar20;
        local_f4 = uVar26;
        FUN_01a5033c(&local_118,&local_f0,0,&local_100,&local_110);
        if (local_118 == -2) {
          local_d0 = (undefined *)((ulong)local_d0 & 0xffffffff00000000);
          local_120 = local_f8;
          local_11c = local_f4;
          local_128 = PTR_DAT_04bb2010 + 0x10;
          lVar37 = *(long *)PTR_DAT_04bb2720;
          if ((lVar37 == 0) || (*(long *)(lVar37 + 0x330) == 0)) {
            puVar38 = &DAT_055c04a0;
          }
          else {
            puVar38 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar37 + 0x338));
            iVar19 = FUN_006bd550(*puVar38,0);
            puVar38 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar19 != 0x758f7eaf) {
              puVar38 = &DAT_055c04a0;
            }
          }
          local_d0 = (undefined *)CONCAT44(*(undefined4 *)(puVar38 + 7),(undefined4)local_d0);
          uVar18 = FUN_017baf44();
          local_c8 = CONCAT71(local_c8._1_7_,uVar18) & 0xffffffffffffff01;
          local_120 = local_120 + 1;
          local_d8 = puVar2;
          FUN_01a50240(&local_b0,&local_d8,0,&local_128);
          if ((short)local_b0 == -2) {
            local_11c = local_11c + 1;
            FUN_01a50240(&uStack_88,&local_d8,0,&local_128);
            local_b0 = (undefined8 *)CONCAT44(uStack_84,uStack_88);
            if ((short)uStack_88 == -2) {
              local_120 = local_120 + -1;
              FUN_01a50240(&uStack_88,&local_d8,0,&local_128);
              uVar21 = local_f8;
              if ((short)uStack_88 == -2) {
                iVar19 = local_f8 + 1;
                uVar34 = local_f4 + 2;
                uVar29 = local_f4;
                uVar36 = local_f8;
                do {
                  local_a8 = (undefined **)CONCAT44(uVar29,uVar36);
                  local_c8 = CONCAT44(uVar29,uVar36);
                  local_d0 = PTR_DAT_04bb2010 + 0x10;
                  if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
                     (lVar37 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar37 == 0))
                  goto LAB_016934c8;
                  local_d8 = puVar5;
                  local_c0 = local_d0;
                  local_b8 = uVar36;
                  uStack_b4 = uVar29;
                  local_b0 = (undefined8 *)local_d0;
                  uVar23 = FUN_00971f80(lVar37,&local_d8,0);
                  if (((uVar23 & 1) == 0) || (uVar23 = FUN_00975dc0(&local_b0), (uVar23 & 1) == 0))
                  goto LAB_016934c8;
                  if ((int)uVar36 < iVar19) {
                    uVar36 = uVar36 + 1;
                  }
                  else {
                    uVar29 = uVar29 + 1;
                    uVar36 = uVar21;
                  }
                } while ((uVar21 != uVar36) || (uVar34 != uVar29));
                if ((DAT_05233970 <= (int)local_f8) &&
                   (((((int)local_f8 <= DAT_05233980 && (DAT_05233974 <= (int)local_f4)) &&
                     ((int)local_f4 <= DAT_05233984)) &&
                    (uVar21 = (local_f4 & 0x1fffffe) * 0x80 + ((int)local_f8 >> 1),
                    uVar21 >> 0xf == 0)))) {
                  lVar37 = (ulong)(uVar21 >> 5) * 4;
                  *(uint *)(param_1 + 8 + lVar37) =
                       *(uint *)(param_1 + 8 + lVar37) | 1 << (ulong)(local_f8 >> 1 & 0x1f);
                }
LAB_016934c8:
                uVar34 = local_f8;
                iVar19 = 0;
                local_d8 = PTR_DAT_04bbc1a0 + 0x10;
                local_d0 = PTR_DAT_04bb2010 + 0x10;
                local_b8 = local_f8 + 1;
                uStack_b4 = local_f4 + 1;
                uVar21 = local_f4 + 2;
                local_c8 = CONCAT44(local_f4,local_f8);
                local_98 = local_f8;
                local_94 = local_f4;
                local_c0 = local_d0;
                local_b0 = &local_d0;
                local_a8 = &local_c0;
                puStack_a0 = local_d0;
                do {
                  uStack_88 = 0;
                  local_68 = 0;
                  lVar37 = *(long *)PTR_DAT_04bb27c8;
                  local_8c = 0;
                  if ((((lVar37 != 0) && (*(long *)(lVar37 + 0xa8) != 0)) &&
                      (uVar23 = FUN_009493f8(lVar37 + 0x28,&puStack_a0,&uStack_88,
                                             (long)&local_68 + 4,&local_68,&local_8c),
                      (uVar23 & 1) != 0)) &&
                     (((uStack_88 - 0x29 < 3 || (local_68._4_4_ - 0x29U < 3)) ||
                      (((int)local_68 - 0x29U < 3 || (local_8c - 0x29U < 3)))))) goto LAB_01693828;
                  uStack_88._0_2_ = 0xffff;
                  uStack_88._2_2_ = 0xffff;
                  uStack_84 = 0xffffffff;
                  local_80 = 0x1ff;
                  local_68 = CONCAT44(7,(int)local_68);
                  local_80 = 0x1ff;
                  uStack_84 = 0xffffffff;
                  uStack_88 = 0xffffff7f;
                  lVar37 = *(long *)PTR_DAT_04bb27c8;
                  if ((lVar37 != 0) && (*(long *)(lVar37 + 0xa8) != 0)) {
                    uVar23 = FUN_009499b0(lVar37 + 0x28,&puStack_a0,&uStack_88);
                    if ((uVar23 & 1) != 0) goto LAB_01693828;
                    lVar37 = *(long *)PTR_DAT_04bb27c8;
                  }
                  local_8c = 0;
                  uStack_88 = 0;
                  local_68 = 0;
                  if ((((lVar37 == 0) || (*(long *)(lVar37 + 0xa8) == 0)) ||
                      (uVar23 = FUN_009493f8(lVar37 + 0x28,&puStack_a0,&uStack_88,
                                             (long)&local_68 + 4,&local_68,&local_8c),
                      (uVar23 & 1) == 0)) ||
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
                    lVar37 = *(long *)PTR_DAT_04bb27c8;
                    if (((lVar37 != 0) && (*(long *)(lVar37 + 0xa8) != 0)) &&
                       (uVar23 = FUN_00949898(lVar37 + 0x28,&puStack_a0,&uStack_88),
                       (uVar23 & 1) != 0)) goto LAB_01693704;
                    uVar23 = FUN_00976070(&puStack_a0);
                    if ((uVar23 & 1) == 0) goto LAB_01693828;
                  }
                  else {
LAB_01693704:
                    iVar19 = iVar19 + 1;
                  }
                  if ((int)local_98 < *(int *)(local_a8 + 1)) {
                    local_98 = local_98 + 1;
                  }
                  else {
                    local_98 = *(uint *)(local_b0 + 1);
                    local_94 = local_94 + 1;
                  }
                } while ((uVar34 != local_98) || (uVar21 != local_94));
                if (((1 < iVar19) &&
                    (((DAT_05233970 <= (int)local_f8 && ((int)local_f8 <= DAT_05233980)) &&
                     (DAT_05233974 <= (int)local_f4)))) &&
                   (((int)local_f4 <= DAT_05233984 &&
                    (uVar21 = (local_f4 & 0x1fffffe) * 0x80 + ((int)local_f8 >> 1),
                    uVar21 >> 0xf == 0)))) {
                  lVar37 = (ulong)(uVar21 >> 5) * 4;
                  *(uint *)(param_1 + 0x9050 + lVar37) =
                       *(uint *)(param_1 + 0x9050 + lVar37) | 1 << (ulong)(local_f8 >> 1 & 0x1f);
                }
LAB_01693828:
                uVar21 = local_f4;
                uVar29 = local_f8;
                fVar39 = (float)(int)local_f8 * 0.5;
                uVar34 = 0;
                if (fVar39 != (float)(int)fVar39) {
                  uVar34 = (uint)(fVar39 < 0.0);
                }
                fVar40 = (float)(int)local_f4 * 0.5;
                uVar36 = 0;
                if (fVar40 != (float)(int)fVar40) {
                  uVar36 = (uint)(fVar40 < 0.0);
                }
                local_d0 = (undefined *)CONCAT44((int)fVar40 - uVar36,(int)fVar39 - uVar34);
                local_d8 = puVar6;
                uVar23 = FUN_00977130(&local_d8);
                if ((uVar23 & 1) != 0) {
                  uVar34 = uVar21 + 2;
                  uVar36 = uVar29;
                  do {
                    local_d0 = (undefined *)CONCAT44(uVar21,uVar36);
                    local_d8 = PTR_DAT_04bb2010 + 0x10;
                    uVar23 = FUN_00976070(&local_d8);
                    if ((uVar23 & 1) != 0) goto LAB_01692f94;
                    if ((int)uVar36 < (int)(uVar29 + 1)) {
                      uVar36 = uVar36 + 1;
                    }
                    else {
                      uVar21 = uVar21 + 1;
                      uVar36 = uVar29;
                    }
                  } while ((uVar29 != uVar36) || (uVar34 != uVar21));
                  if (((int)local_f4 < 100) &&
                     ((((uVar23 = (ulong)local_f8, DAT_05233970 <= (int)local_f8 &&
                        ((int)local_f8 <= DAT_05233980)) && (DAT_05233974 <= (int)local_f4)) &&
                      (((int)local_f4 <= DAT_05233984 &&
                       (uVar21 = ((int)local_f8 >> 1) + (local_f4 >> 1) * 0x100,
                       uVar35 = (ulong)uVar21, uVar21 >> 0xf == 0)))))) {
                    lVar37 = param_1 + 0xa058;
                    goto LAB_01692f74;
                  }
                }
              }
            }
          }
          goto LAB_01692f94;
        }
        lVar37 = *(long *)PTR_DAT_04bbbc68;
        if ((((lVar37 == 0) || (*(long *)(lVar37 + 0xb0) == 0)) ||
            ((*(long *)(*(long *)(lVar37 + 0xb0) + 8) == 0 ||
             (((*(long *)(lVar37 + 0x488) == 0 || (*(long *)(*(long *)(lVar37 + 0x488) + 8) == 0))
              || (*(long *)(lVar37 + 0x2b0) == 0)))))) ||
           (*(long *)(*(long *)(lVar37 + 0x2b0) + 8) == 0)) {
LAB_01693190:
          puVar13 = PTR_DAT_04bb43c0;
          lVar37 = *(long *)PTR_DAT_04bb43c0;
          uVar21 = FUN_0277d6c4(&local_118);
          bVar17 = local_116;
          lVar27 = *(long *)puVar13;
          if (lVar27 != 0) {
            lVar37 = *(long *)(lVar37 + 0x57e58);
            uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
            if ((uVar21 < *(uint *)(lVar37 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
              local_c8 = 0;
              local_d0 = (undefined *)
                         CONCAT44(local_114,CONCAT22(CONCAT11(local_115,local_116),local_118));
              local_d8 = puVar7;
              uVar21 = FUN_0277d6c4(&local_d0);
              if (*(long *)PTR_DAT_04bb43c0 != 0) {
                lVar37 = *(long *)(lVar27 + 0x57e58);
                uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
                if ((uVar21 < *(uint *)(lVar37 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar21 * 8) != 0)) {
                  lVar37 = *(long *)PTR_DAT_04bc0428;
                  uVar21 = FUN_0277d6c4(&local_118);
                  uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
                  if (uVar21 < *(uint *)(lVar37 + 0x1d8)) {
                    uVar23 = *(ulong *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar21 * 8);
                    if (uVar23 != 0) {
                      local_c8 = uVar23;
                    }
                  }
                }
              }
              iVar19 = FUN_0277d6c4(&local_118);
              if (iVar19 == 0x9c6) {
                uVar23 = FUN_01a4f798(&local_f0,0,&local_110);
                if ((uVar23 & 1) != 0) {
                  if (local_e8 == 0) {
                    local_b0 = (undefined8 *)((ulong)local_b0._4_4_ << 0x20);
LAB_01693964:
                    plVar33 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_01693968:
                    lVar37 = *plVar33;
                  }
                  else {
                    uStack_88 = local_e8;
                    if (local_e8 != 0) {
                      local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,local_e8);
                      if (local_e8 == 0) goto LAB_01693964;
                      plVar8 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
                      plVar33 = plVar8 + local_e8;
                      if (0x38 < local_e8) {
                        plVar33 = plVar8;
                      }
                      goto LAB_01693968;
                    }
                    lVar37 = 0;
                  }
                  local_b0 = (undefined8 *)((ulong)local_b0 & 0xffffffff00000000);
                  if (*(long *)(lVar37 + 0xd0) != 0) {
                    FUN_012e5af4(*(long *)(lVar37 + 0xd0),&local_110);
                  }
                }
              }
              else {
                uVar23 = FUN_01ae59b0(&local_d8);
                bVar10 = bVar17 >> 2 & 1;
                if ((uVar23 & 1) == 0) {
                  bVar10 = bVar17 & 4;
                }
                if (bVar10 != 0) {
                  FUN_011f3520(&local_f0,0,&local_110);
                }
              }
            }
          }
        }
        else {
          uVar21 = FUN_0277d6c4(&local_118);
          uVar21 = (uVar21 & 0xffff) - (uint)*(ushort *)(lVar37 + 0x1f8);
          if ((*(uint *)(lVar37 + 0x1d8) <= uVar21) ||
             (*(long *)(*(long *)(lVar37 + 0x1e0) + (long)(int)uVar21 * 8) == 0)) goto LAB_01693190;
          FUN_0124c030(&local_d8,&local_118);
          iVar22 = FUN_0123db50(&local_d0,local_c8);
          local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,iVar22);
          iVar19 = (int)local_f8 >> 1;
          if (iVar22 < 9) {
            if (iVar22 == 1) {
              if ((((DAT_05233970 <= (int)local_f8) && ((int)local_f8 <= DAT_05233980)) &&
                  (DAT_05233974 <= (int)local_f4)) &&
                 (((int)local_f4 <= DAT_05233984 &&
                  (uVar21 = (local_f4 & 0x1fffffe) * 0x80 + iVar19, uVar21 >> 0xf == 0)))) {
                lVar37 = (ulong)(uVar21 >> 5) * 4;
                *(uint *)(param_1 + 0x1010 + lVar37) =
                     *(uint *)(param_1 + 0x1010 + lVar37) | 1 << (ulong)(local_f8 >> 1 & 0x1f);
              }
              iVar19 = FUN_0277d6c4(&local_d0);
              if ((((iVar19 == 0xec9a) || (iVar19 = FUN_0277d6c4(&local_d0), iVar19 == 0xec97)) ||
                  (uVar23 = FUN_012509c0(&local_d8,0), (uVar23 & 1) != 0)) &&
                 (((ulong)local_d0 & 0x1000000000000) != 0)) {
                FUN_01250bf0(&local_d8);
                FUN_011f3520(&local_f0,0,&local_110);
                FUN_011f3880(&local_f0,0,&local_d0,&local_110);
              }
            }
            else {
              if (iVar22 != 5) goto LAB_01693a24;
              uVar23 = (ulong)local_f8;
              if ((((DAT_05233970 <= (int)local_f8) && ((int)local_f8 <= DAT_05233980)) &&
                  (DAT_05233974 <= (int)local_f4)) &&
                 (((int)local_f4 <= DAT_05233984 &&
                  (uVar21 = (local_f4 & 0x1fffffe) * 0x80 + iVar19, uVar35 = (ulong)uVar21,
                  uVar21 >> 0xf == 0)))) {
                lVar37 = param_1 + 0x2018;
                goto LAB_01692f74;
              }
            }
          }
          else if (iVar22 == 9) {
            uVar23 = (ulong)local_f8;
            if (((DAT_05233970 <= (int)local_f8) && ((int)local_f8 <= DAT_05233980)) &&
               ((DAT_05233974 <= (int)local_f4 &&
                (((int)local_f4 <= DAT_05233984 &&
                 (uVar21 = (local_f4 & 0x1fffffe) * 0x80 + iVar19, uVar35 = (ulong)uVar21,
                 uVar21 >> 0xf == 0)))))) {
              lVar37 = param_1 + 0x5030;
              goto LAB_01692f74;
            }
          }
          else if (iVar22 == 0x2e) {
            uVar23 = (ulong)local_f8;
            if (((DAT_05233970 <= (int)local_f8) && ((int)local_f8 <= DAT_05233980)) &&
               ((DAT_05233974 <= (int)local_f4 &&
                (((int)local_f4 <= DAT_05233984 &&
                 (uVar21 = (local_f4 & 0x1fffffe) * 0x80 + iVar19, uVar35 = (ulong)uVar21,
                 uVar21 >> 0xf == 0)))))) {
              lVar37 = param_1 + 0x4028;
              goto LAB_01692f74;
            }
          }
          else {
LAB_01693a24:
            iVar19 = FUN_0123db50(&local_d0,local_c8);
            if (iVar19 - 0x23U < 9) {
              uVar23 = (ulong)local_f8;
              if ((((DAT_05233970 <= (int)local_f8) && ((int)local_f8 <= DAT_05233980)) &&
                  (DAT_05233974 <= (int)local_f4)) &&
                 (((int)local_f4 <= DAT_05233984 &&
                  (uVar21 = (local_f4 & 0x1fffffe) * 0x80 + ((int)local_f8 >> 1),
                  uVar35 = (ulong)uVar21, uVar21 >> 0xf == 0)))) {
                lVar37 = param_1 + 0x7040;
                goto LAB_01692f74;
              }
            }
            else {
              iVar19 = FUN_0123db50(&local_d0,local_c8);
              if (iVar19 - 0x18U < 7) {
                uVar23 = (ulong)local_f8;
                if (((DAT_05233970 <= (int)local_f8) && ((int)local_f8 <= DAT_05233980)) &&
                   ((DAT_05233974 <= (int)local_f4 &&
                    (((int)local_f4 <= DAT_05233984 &&
                     (uVar21 = (local_f4 & 0x1fffffe) * 0x80 + ((int)local_f8 >> 1),
                     uVar35 = (ulong)uVar21, uVar21 >> 0xf == 0)))))) {
                  lVar37 = param_1 + 0xb060;
                  goto LAB_01692f74;
                }
              }
              else {
                iVar19 = FUN_0123db50(&local_d0,local_c8);
                if (iVar19 - 0xbU < 7) {
                  uVar23 = (ulong)local_f8;
                  if ((((DAT_05233970 <= (int)local_f8) && ((int)local_f8 <= DAT_05233980)) &&
                      (DAT_05233974 <= (int)local_f4)) &&
                     (((int)local_f4 <= DAT_05233984 &&
                      (uVar21 = (local_f4 & 0x1fffffe) * 0x80 + ((int)local_f8 >> 1),
                      uVar35 = (ulong)uVar21, uVar21 >> 0xf == 0)))) {
                    lVar37 = param_1 + 0x6038;
                    goto LAB_01692f74;
                  }
                }
                else {
                  iVar19 = FUN_0123db50(&local_d0,local_c8);
                  if (((iVar19 - 0x12U < 6) &&
                      (uVar23 = (ulong)local_f8, DAT_05233970 <= (int)local_f8)) &&
                     (((int)local_f8 <= DAT_05233980 &&
                      (((DAT_05233974 <= (int)local_f4 && ((int)local_f4 <= DAT_05233984)) &&
                       (uVar21 = (local_f4 & 0x1fffffe) * 0x80 + ((int)local_f8 >> 1),
                       uVar35 = (ulong)uVar21, uVar21 >> 0xf == 0)))))) {
                    lVar37 = param_1 + 0x8048;
LAB_01692f74:
                    lVar27 = (uVar35 >> 5) * 4;
                    *(uint *)(lVar37 + lVar27) =
                         *(uint *)(lVar37 + lVar27) | 1 << (ulong)((uint)(uVar23 >> 1) & 0x1f);
                  }
                }
              }
            }
          }
        }
LAB_01692f94:
        uVar21 = *(uint *)(lVar32 + 0x10);
      }
      if ((int)uVar20 < *(int *)(lVar32 + 0x20)) {
        uVar20 = uVar20 + 1;
      }
      else {
        uVar26 = uVar26 + 1;
        uVar20 = uVar21;
      }
    } while (uVar31 != uVar20 || uVar24 != uVar26);
    uVar24 = *(int *)(lVar32 + 0x24) + 1;
    uVar26 = *(uint *)(lVar32 + 0x14);
    if (uVar24 == uVar26) {
LAB_01693dcc:
      iVar19 = *(int *)(lVar32 + 0x20);
      uVar31 = uVar21;
      if (iVar19 < (int)uVar21) {
        return;
      }
      goto LAB_01693dfc;
    }
  }
  iVar16 = DAT_05233984;
  iVar15 = DAT_05233980;
  iVar14 = DAT_05233974;
  iVar22 = DAT_05233970;
  lVar37 = param_1 + 8;
  lVar27 = param_1 + 0xa058;
  uVar31 = uVar21;
  uVar20 = uVar21;
  do {
    if ((((((uVar20 | uVar26) & 1) == 0) && (iVar22 <= (int)uVar20)) && ((int)uVar20 <= iVar15)) &&
       ((iVar14 <= (int)uVar26 && ((int)uVar26 <= iVar16)))) {
      uVar34 = (uVar26 << 7 & 0xffffff00) + ((int)uVar20 >> 1);
      if ((((uVar34 >> 0xf == 0) &&
           ((*(uint *)(param_1 + 0x1010 + (ulong)(uVar34 >> 5) * 4) >> (ulong)(uVar20 >> 1 & 0x1f) &
            1) != 0)) ||
          ((uVar34 >> 0xf == 0 &&
           ((*(uint *)(param_1 + 0x2018 + (ulong)(uVar34 >> 5) * 4) >> (ulong)(uVar20 >> 1 & 0x1f) &
            1) != 0)))) ||
         ((uVar34 = (uVar26 << 7 & 0xffffff00) + ((int)uVar20 >> 1), uVar34 >> 0xf == 0 &&
          ((*(uint *)(param_1 + 0x5030 + (ulong)(uVar34 >> 5) * 4) >> (ulong)(uVar20 >> 1 & 0x1f) &
           1) != 0)))) {
        uVar29 = uVar20 - 2;
        uVar34 = uVar26 - 4;
        uVar31 = uVar34;
        uVar36 = uVar29;
        do {
          if ((((iVar22 <= (int)uVar36) && ((int)uVar36 <= iVar15)) && (iVar14 <= (int)uVar31)) &&
             (((int)uVar31 <= iVar16 &&
              (uVar9 = (uVar31 & 0x1fffffe) * 0x80 + ((int)uVar36 >> 1), uVar9 >> 0xf == 0)))) {
            lVar12 = (ulong)(uVar9 >> 5) * 4;
            *(uint *)(lVar37 + lVar12) =
                 *(uint *)(lVar37 + lVar12) & (1 << (ulong)(uVar36 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          if ((int)uVar36 < (int)(uVar20 + 3)) {
            uVar36 = uVar36 + 1;
          }
          else {
            uVar31 = uVar31 + 1;
            uVar36 = uVar29;
          }
        } while ((uVar29 != uVar36) || (uVar26 - 2 != uVar31));
        uVar31 = uVar29;
        do {
          if ((((iVar22 <= (int)uVar31) && ((int)uVar31 <= iVar15)) && (iVar14 <= (int)uVar34)) &&
             (((int)uVar34 <= iVar16 &&
              (uVar36 = (uVar34 & 0x1fffffe) * 0x80 + ((int)uVar31 >> 1), uVar36 >> 0xf == 0)))) {
            lVar12 = (ulong)(uVar36 >> 5) * 4;
            *(uint *)(lVar27 + lVar12) =
                 *(uint *)(lVar27 + lVar12) & (1 << (ulong)(uVar31 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          if ((int)uVar31 < (int)(uVar20 + 3)) {
            uVar31 = uVar31 + 1;
          }
          else {
            uVar34 = uVar34 + 1;
            uVar31 = uVar29;
          }
        } while ((uVar29 != uVar31) || (uVar26 - 2 != uVar34));
        uVar34 = uVar26 - 6;
        uVar29 = uVar20;
        uVar31 = uVar34;
        do {
          if ((((iVar22 <= (int)uVar29) && ((int)uVar29 <= iVar15)) && (iVar14 <= (int)uVar31)) &&
             (((int)uVar31 <= iVar16 &&
              (uVar36 = (uVar31 & 0x1fffffe) * 0x80 + ((int)uVar29 >> 1), uVar36 >> 0xf == 0)))) {
            lVar12 = (ulong)(uVar36 >> 5) * 4;
            *(uint *)(lVar37 + lVar12) =
                 *(uint *)(lVar37 + lVar12) & (1 << (ulong)(uVar29 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          if ((int)uVar29 < (int)(uVar20 + 1)) {
            uVar29 = uVar29 + 1;
          }
          else {
            uVar31 = uVar31 + 1;
            uVar29 = uVar20;
          }
        } while ((uVar20 != uVar29) || (uVar26 != uVar31));
        uVar31 = uVar20;
        do {
          if ((((iVar22 <= (int)uVar31) && ((int)uVar31 <= iVar15)) && (iVar14 <= (int)uVar34)) &&
             (((int)uVar34 <= iVar16 &&
              (uVar29 = (uVar34 & 0x1fffffe) * 0x80 + ((int)uVar31 >> 1), uVar29 >> 0xf == 0)))) {
            lVar12 = (ulong)(uVar29 >> 5) * 4;
            *(uint *)(lVar27 + lVar12) =
                 *(uint *)(lVar27 + lVar12) & (1 << (ulong)(uVar31 >> 1 & 0x1f) ^ 0xffffffffU);
          }
          if ((int)uVar31 < (int)(uVar20 + 1)) {
            uVar31 = uVar31 + 1;
          }
          else {
            uVar34 = uVar34 + 1;
            uVar31 = uVar20;
          }
        } while ((uVar20 != uVar31) || (uVar26 != uVar34));
        uVar31 = *(uint *)(lVar32 + 0x10);
      }
    }
    iVar19 = *(int *)(lVar32 + 0x20);
    if ((int)uVar20 < iVar19) {
      uVar20 = uVar20 + 1;
    }
    else {
      uVar26 = uVar26 + 1;
      uVar20 = uVar31;
    }
  } while (uVar21 != uVar20 || uVar24 != uVar26);
  if (iVar19 < (int)uVar31) {
    return;
  }
LAB_01693dfc:
  iVar16 = DAT_05233984;
  iVar15 = DAT_05233980;
  iVar14 = DAT_05233974;
  iVar22 = DAT_05233970;
  lVar37 = *(long *)PTR_DAT_04bb27a8;
  do {
    fVar40 = (float)(int)uVar31 * 0.5;
    fVar39 = (float)*(int *)(lVar32 + 0x24) * 0.5;
    uVar24 = 0;
    if (fVar40 != (float)(int)fVar40) {
      uVar24 = (uint)(fVar40 < 0.0);
    }
    uVar26 = 0;
    if (fVar39 != (float)(int)fVar39) {
      uVar26 = (uint)(fVar39 < 0.0);
    }
    iVar11 = (int)fVar40 - uVar24;
    lVar27 = *(long *)(lVar37 + 0x1f8);
    cVar25 = '\0';
    if (lVar27 != 0) {
      lVar27 = *(long *)(lVar27 + 0xb0);
      cVar25 = '\0';
      if (lVar27 != 0) {
        uVar24 = iVar11 - *(int *)(lVar27 + 0x28);
        uVar21 = *(uint *)(lVar27 + 0x18);
        uVar20 = ((int)fVar39 - uVar26) - *(int *)(lVar27 + 0x2c);
        if ((uVar24 < uVar21 && uVar20 <= *(uint *)(lVar27 + 0x1c)) &&
            (uVar21 <= uVar24 || *(uint *)(lVar27 + 0x1c) != uVar20)) {
          uVar24 = uVar24 + uVar21 * uVar20;
LAB_01693f30:
          if (*(uint *)(lVar27 + 0x30) <= uVar24) {
            uVar24 = 0;
          }
          puVar38 = (undefined8 *)(*(long *)(lVar27 + 0x38) + (long)(int)uVar24 * 0x68);
        }
        else if (*(char *)(lVar27 + 0x88) == '\0') {
          puVar38 = &DAT_051a50f0;
        }
        else {
          uVar24 = ((int)fVar39 - uVar26) - *(int *)(lVar27 + 0x9c);
          uVar26 = iVar11 - *(int *)(lVar27 + 0x98);
          puVar38 = &DAT_051a50f0;
          if (uVar26 < *(uint *)(lVar27 + 0xa0) && uVar24 < *(uint *)(lVar27 + 0xa4)) {
            uVar24 = uVar26 + *(uint *)(lVar27 + 0xa0) * uVar24 + *(int *)(lVar27 + 0x8c);
            goto LAB_01693f30;
          }
        }
        cVar25 = *(char *)(puVar38 + 2);
      }
    }
    iVar30 = *(int *)(lVar32 + 0x14);
    uVar26 = *(int *)(lVar32 + 0x24) - 2;
    uVar24 = uVar31 + 1;
    if (iVar30 <= (int)uVar26) {
      do {
        if (((uVar26 | uVar31) & 1) == 0) {
          fVar39 = (float)(int)uVar26 * 0.5;
          uVar21 = 0;
          if (fVar39 != (float)(int)fVar39) {
            uVar21 = (uint)(fVar39 < 0.0);
          }
          lVar27 = *(long *)(lVar37 + 0x1f8);
          cVar28 = '\0';
          if (lVar27 != 0) {
            lVar27 = *(long *)(lVar27 + 0xb0);
            cVar28 = '\0';
            if (lVar27 != 0) {
              uVar20 = iVar11 - *(int *)(lVar27 + 0x28);
              if ((uVar20 < *(uint *)(lVar27 + 0x18)) &&
                 (uVar34 = ((int)fVar39 - uVar21) - *(int *)(lVar27 + 0x2c),
                 uVar34 < *(uint *)(lVar27 + 0x1c))) {
                uVar20 = uVar20 + *(uint *)(lVar27 + 0x18) * uVar34;
LAB_01694050:
                if (*(uint *)(lVar27 + 0x30) <= uVar20) {
                  uVar20 = 0;
                }
                puVar38 = (undefined8 *)(*(long *)(lVar27 + 0x38) + (long)(int)uVar20 * 0x68);
              }
              else {
                if (*(char *)(lVar27 + 0x88) != '\0') {
                  uVar20 = iVar11 - *(int *)(lVar27 + 0x98);
                  if (uVar20 < *(uint *)(lVar27 + 0xa0)) {
                    uVar21 = ((int)fVar39 - uVar21) - *(int *)(lVar27 + 0x9c);
                    puVar38 = &DAT_051a50f0;
                    if (uVar21 < *(uint *)(lVar27 + 0xa4)) {
                      uVar20 = uVar20 + *(uint *)(lVar27 + 0xa0) * uVar21 + *(int *)(lVar27 + 0x8c);
                      goto LAB_01694050;
                    }
                    goto LAB_0169406c;
                  }
                }
                puVar38 = &DAT_051a50f0;
              }
LAB_0169406c:
              cVar28 = *(char *)(puVar38 + 2);
            }
          }
          if (((cVar28 != '\x04') && (cVar25 != '\x04')) && (cVar28 < cVar25)) {
            uVar20 = uVar26 - 6;
            uVar34 = uVar31;
            uVar21 = uVar20;
            do {
              if (((iVar22 <= (int)uVar34) && ((int)uVar34 <= iVar15)) &&
                 ((iVar14 <= (int)uVar21 &&
                  (((int)uVar21 <= iVar16 &&
                   (uVar29 = (uVar21 & 0x1fffffe) * 0x80 + ((int)uVar34 >> 1), uVar29 >> 0xf == 0)))
                  ))) {
                lVar27 = (ulong)(uVar29 >> 5) * 4;
                *(uint *)(param_1 + 8 + lVar27) =
                     *(uint *)(param_1 + 8 + lVar27) &
                     (1 << (ulong)(uVar34 >> 1 & 0x1f) ^ 0xffffffffU);
              }
              if ((int)uVar34 < (int)uVar24) {
                uVar34 = uVar34 + 1;
              }
              else {
                uVar21 = uVar21 + 1;
                uVar34 = uVar31;
              }
            } while ((uVar31 != uVar34) || (uVar26 + 2 != uVar21));
            uVar21 = uVar31;
            do {
              if ((((iVar22 <= (int)uVar21) && ((int)uVar21 <= iVar15)) && (iVar14 <= (int)uVar20))
                 && (((int)uVar20 <= iVar16 &&
                     (uVar34 = (uVar20 & 0x1fffffe) * 0x80 + ((int)uVar21 >> 1), uVar34 >> 0xf == 0)
                     ))) {
                lVar27 = (ulong)(uVar34 >> 5) * 4;
                *(uint *)(param_1 + 0xa058 + lVar27) =
                     *(uint *)(param_1 + 0xa058 + lVar27) &
                     (1 << (ulong)(uVar21 >> 1 & 0x1f) ^ 0xffffffffU);
              }
              if ((int)uVar21 < (int)uVar24) {
                uVar21 = uVar21 + 1;
              }
              else {
                uVar20 = uVar20 + 1;
                uVar21 = uVar31;
              }
            } while ((uVar31 != uVar21) || (uVar26 + 2 != uVar20));
            iVar30 = *(int *)(lVar32 + 0x14);
          }
          cVar25 = cVar28;
        }
        bVar1 = iVar30 < (int)uVar26;
        uVar26 = uVar26 - 1;
      } while (bVar1);
      iVar19 = *(int *)(lVar32 + 0x20);
    }
    bVar1 = iVar19 <= (int)uVar31;
    uVar31 = uVar24;
    if (bVar1) {
      return;
    }
  } while( true );
}

