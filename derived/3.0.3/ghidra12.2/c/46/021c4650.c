
/* WARNING: Removing unreachable block (ram,0x021c4804) */
/* WARNING: Removing unreachable block (ram,0x021c47fc) */
/* WARNING: Removing unreachable block (ram,0x021c510c) */
/* WARNING: Removing unreachable block (ram,0x021c511c) */
/* WARNING: Removing unreachable block (ram,0x021c5128) */
/* WARNING: Removing unreachable block (ram,0x021c4700) */
/* WARNING: Removing unreachable block (ram,0x021c4710) */

void FUN_021c4650(uint *param_1)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  short *psVar13;
  void *pvVar14;
  undefined8 uVar15;
  long lVar16;
  uint *puVar17;
  int iVar18;
  long *plVar19;
  int *piVar20;
  short *psVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  undefined8 *puVar25;
  uint uVar26;
  long *plVar27;
  long lVar28;
  undefined8 *puVar29;
  long *plVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  uint uVar34;
  undefined **local_2698;
  char *local_2690;
  uint *local_2688;
  char local_2674 [4];
  undefined *local_2670;
  undefined4 local_2668;
  undefined4 local_2664;
  byte local_2660;
  undefined *local_2658;
  undefined4 local_2650;
  undefined4 uStack_264c;
  undefined *local_2648;
  undefined4 local_2640;
  undefined4 uStack_263c;
  undefined8 local_2638;
  undefined8 *local_2630;
  long **local_2628;
  long **local_2620;
  long *local_2618 [5];
  long alStack_25f0 [990];
  undefined8 local_700;
  undefined8 local_6d8 [200];
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  
  param_1[2] = param_1[2] & 0xfffffc02;
  uVar8 = FUN_0180da90();
  uVar8 = param_1[1] | 1 << (ulong)(uVar8 & 0x1f);
  param_1[1] = uVar8;
  if ((*param_1 & (uVar8 ^ 0xffffffff)) != 0) {
    param_1[2] = param_1[2] | 1;
  }
  plVar30 = (long *)PTR_DAT_04bb27a8;
  plVar27 = (long *)PTR_DAT_04bb2720;
  puVar6 = PTR_DAT_04bb2010;
  local_88 = 0;
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_90 = PTR_DAT_04bb2010 + 0x10;
  local_78 = 0;
  local_2638 = (ulong)local_2638._4_4_ << 0x20;
  lVar28 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_80 = puStack_90;
  if (lVar28 != 0) {
    lVar16 = *(long *)PTR_DAT_04bb2720;
    if (lVar16 == 0) {
      puVar25 = &DAT_055c04a0;
    }
    else {
      puVar25 = &DAT_055c04a0;
      if (*(long *)(lVar16 + 0x330) != 0) {
        puVar25 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
        iVar9 = FUN_006bd550(*puVar25,0);
        puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar9 != 0x758f7eaf) {
          puVar25 = &DAT_055c04a0;
        }
      }
    }
    uVar12 = FUN_017ba710(*(undefined4 *)(puVar25 + 7),&local_98);
    puVar7 = PTR_DAT_04bb37e0;
    if ((uVar12 & 1) != 0) {
      uVar12 = local_78 & 0xffffffff;
      uVar8 = 0;
      iVar9 = (int)local_78 - (int)local_88;
      iVar11 = local_78._4_4_ - local_88._4_4_;
      local_2638 = CONCAT44((int)((ulong)local_2638 >> 0x20),6);
      if ((iVar11 != 0 && local_88._4_4_ <= local_78._4_4_) && ((int)local_88 < (int)local_78)) {
        uVar8 = 0;
        iVar18 = local_78._4_4_;
        iVar10 = local_88._4_4_;
        do {
          iVar33 = (int)local_88;
          if ((int)local_88 < (int)uVar12) {
            do {
              lVar16 = *(long *)(lVar28 + 0xd0);
              psVar13 = (short *)puVar7;
              if (lVar16 != 0) {
                lVar3 = lVar16 + 0x130 + (ulong)*(uint *)(lVar16 + 0x198) * 0x30;
                if (1 < *(uint *)(lVar16 + 0x198)) {
                  lVar3 = lVar16 + 0x130;
                }
                iVar18 = *(int *)(lVar3 + 0x28);
                if (iVar18 <= iVar33 && iVar33 <= *(int *)(lVar3 + 8) + iVar18 + -1) {
                  iVar4 = *(int *)(lVar3 + 0x2c);
                  if ((iVar4 <= iVar10 && iVar10 <= *(int *)(lVar3 + 0xc) + iVar4 + -1) &&
                     (uVar23 = (iVar10 - iVar4) + (iVar33 - iVar18) * *(int *)(lVar3 + 0xc),
                     uVar23 < *(uint *)(lVar3 + 0x10))) {
                    psVar13 = (short *)(*(long *)(lVar3 + 0x18) + (long)(int)uVar23 * 8);
                  }
                }
              }
              lVar16 = *(long *)(lVar28 + 0x130);
              psVar21 = (short *)puVar7;
              if (lVar16 != 0) {
                lVar3 = lVar16 + 0x130 + (ulong)*(uint *)(lVar16 + 0x198) * 0x30;
                if (1 < *(uint *)(lVar16 + 0x198)) {
                  lVar3 = lVar16 + 0x130;
                }
                iVar18 = *(int *)(lVar3 + 0x28);
                if (iVar18 <= iVar33 && iVar33 <= *(int *)(lVar3 + 8) + iVar18 + -1) {
                  iVar4 = *(int *)(lVar3 + 0x2c);
                  if ((iVar4 <= iVar10 && iVar10 <= *(int *)(lVar3 + 0xc) + iVar4 + -1) &&
                     (uVar23 = (iVar10 - iVar4) + (iVar33 - iVar18) * *(int *)(lVar3 + 0xc),
                     uVar23 < *(uint *)(lVar3 + 0x10))) {
                    psVar21 = (short *)(*(long *)(lVar3 + 0x18) + (long)(int)uVar23 * 8);
                  }
                }
              }
              if (*psVar13 == -2 && *psVar21 == -2) {
                uVar8 = uVar8 + 1;
              }
              else {
                FUN_0277e158();
                uVar12 = local_78 & 0xffffffff;
              }
              iVar33 = iVar33 + 1;
            } while (iVar33 < (int)uVar12);
            iVar18 = local_78._4_4_;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar18);
      }
      plVar30 = (long *)PTR_DAT_04bb27a8;
      plVar27 = (long *)PTR_DAT_04bb2720;
      if ((float)(uint)(iVar11 * iVar9) * 0.75 <= (float)uVar8) {
        param_1[2] = param_1[2] | 0x100;
      }
    }
  }
  lVar28 = 0xc6;
  local_2628 = local_2618;
  local_2618[0] = alStack_25f0;
  local_2638._4_4_ = 0;
  local_2630 = (undefined8 *)0x0;
  plVar19 = local_2618[0];
  do {
    lVar28 = lVar28 + -2;
    *plVar19 = (long)(plVar19 + 5);
    plVar19[5] = (long)(plVar19 + 10);
    plVar19 = plVar19 + 10;
  } while (lVar28 != 0);
  local_700 = 0;
  if (local_6d8 != (undefined8 *)0x0) {
    local_2638._4_4_ = 200;
    local_2630 = local_6d8;
  }
  local_2638 = (ulong)local_2638._4_4_ << 0x20;
  local_2620 = local_2628;
  FUN_01521078(&local_2638);
  param_1[2] = param_1[2] | 0x20;
  local_2658 = puVar6 + 0x10;
  lVar28 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar28 == 0) {
    local_2640 = 0;
    uStack_263c = 0;
    local_2650 = 0x10;
    uStack_264c = 0x10;
  }
  else {
    local_2640 = *(undefined4 *)(lVar28 + 0xd88);
    uStack_263c = *(undefined4 *)(lVar28 + 0xd8c);
    local_2650 = *(undefined4 *)(lVar28 + 0xd98);
    uStack_264c = *(undefined4 *)(lVar28 + 0xd9c);
  }
  local_2648 = local_2658;
  if ((uint)local_2638 == 0) {
    uVar23 = 0;
    iVar9 = 0;
    uVar34 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    uVar32 = 0;
    uVar31 = 0;
    puVar2 = local_2630 + (int)(uint)local_2638;
    uVar34 = 0;
    iVar9 = 0;
    iVar11 = 0;
    ppuVar1 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    puVar25 = local_2630;
    do {
      puVar6 = PTR_DAT_04bb43c0;
      puVar29 = (undefined8 *)*puVar25;
      local_2690 = (char *)*puVar29;
      local_2688 = (uint *)0x0;
      lVar28 = *(long *)PTR_DAT_04bb43c0;
      local_2698 = ppuVar1;
      pvVar14 = (void *)FUN_0277d6c4(&local_2690);
      if (*(long *)puVar6 != 0) {
        lVar28 = *(long *)(lVar28 + 0x57e58);
        uVar23 = ((uint)pvVar14 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
        if ((uVar23 < *(uint *)(lVar28 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar23 * 8) != 0)) {
          lVar28 = *(long *)PTR_DAT_04bc0428;
          pvVar14 = (void *)FUN_0277d6c4(puVar29);
          uVar23 = ((uint)pvVar14 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if (uVar23 < *(uint *)(lVar28 + 0x1d8)) {
            puVar17 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar23 * 8);
            if (puVar17 != (uint *)0x0) {
              local_2688 = puVar17;
            }
          }
        }
      }
      puVar17 = local_2688;
      if (((((byte)param_1[2] >> 2 & 1) == 0) && (local_2688 != (uint *)0x0)) &&
         (uVar23 = *local_2688, uVar23 != 0)) {
        cVar22 = *PTR_DAT_04bbfe88;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *PTR_DAT_04bbfe88 = 1;
            pvVar14 = memset(PTR_DAT_04bbfe90,0xff,0x1ac);
            uVar23 = *puVar17;
          }
          else {
            uVar24 = *(uint *)(PTR_DAT_04bbfe90 + 0x180);
            if (-1 < (int)uVar24) {
              if ((((char *)((ulong)uVar24 + (long)puVar17) != (char *)0x0) &&
                  (*(char *)((ulong)uVar24 + (long)puVar17) != '\0')) &&
                 (uVar12 = FUN_021c5250(pvVar14,&local_2648,&local_2658,puVar29), (uVar12 & 1) != 0)
                 ) {
                param_1[2] = param_1[2] | 4;
              }
              break;
            }
            if (uVar24 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar23;
          if ((puVar5 == (uint *)0x0) || (puVar17 == puVar5)) break;
          lVar28 = 0xc;
          if (*(char *)((long)puVar17 + (10 - (long)puVar5)) != '\0') {
            lVar28 = 0x1c;
          }
          lVar28 = (long)puVar17 + (lVar28 - (long)puVar5);
          if (lVar28 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar5));
          *(undefined4 *)(PTR_DAT_04bbfe90 + 0x180) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar20 = (int *)(lVar28 + 4);
          while (piVar20[-1] != 0x3cda3274) {
            piVar20 = piVar20 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_021c4d00;
          }
          iVar10 = 0;
          if (*piVar20 != -1) {
            iVar10 = *piVar20;
          }
          *(int *)(PTR_DAT_04bbfe90 + 0x180) = iVar10;
          uVar23 = *puVar17;
          if (uVar23 == 0) break;
        } while( true );
      }
LAB_021c4d00:
      if (uVar34 == 0) {
        if (local_2688 == (uint *)0x0) {
LAB_021c4f24:
          uVar34 = 0;
        }
        else {
          uVar23 = *local_2688;
          uVar34 = 0;
          if ((uVar23 != 0) && (local_2688 != (uint *)(ulong)uVar23)) {
            puVar17 = (uint *)((long)local_2688 - (long)(ulong)uVar23);
            uVar34 = 0;
            if (*puVar17 != 0) {
              uVar23 = puVar17[1];
              if ((uVar23 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar28 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar28 = 0x1c;
                }
                lVar28 = (long)puVar17 + lVar28 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar28 != 0) {
                  uVar34 = 0;
                  if ((ulong)uVar23 != 0) {
                    uVar34 = (uint)((ulong)((long)local_2688 - lVar28) / (ulong)uVar23);
                  }
                  if (*puVar17 <= uVar34) {
                    uVar34 = 0xffffffff;
                  }
                  if ((uVar34 < *(uint *)PTR_DAT_04bc0048) &&
                     (uVar34 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar34 * 2),
                     uVar34 < 0x52)) goto LAB_021c4f28;
                }
              }
              goto LAB_021c4f24;
            }
          }
        }
LAB_021c4f28:
        local_2670 = (undefined *)CONCAT44(local_2670._4_4_,uVar34);
        uVar34 = (uint)((uVar34 & 0xfffffffe) == 10);
        if (uVar31 == 0) goto LAB_021c4d0c;
LAB_021c4f40:
        uVar31 = 1;
        if (uVar32 == 0) goto LAB_021c4dbc;
LAB_021c4f48:
        uVar32 = 1;
        if (uVar8 == 0) goto LAB_021c4de0;
LAB_021c4f54:
        uVar8 = 1;
      }
      else {
        uVar34 = 1;
        if (uVar31 != 0) goto LAB_021c4f40;
LAB_021c4d0c:
        if (local_2688 == (uint *)0x0) {
LAB_021c4da0:
          uVar31 = 0;
        }
        else {
          uVar23 = *local_2688;
          uVar31 = 0;
          if ((uVar23 != 0) && (local_2688 != (uint *)(ulong)uVar23)) {
            puVar17 = (uint *)((long)local_2688 - (long)(ulong)uVar23);
            uVar31 = 0;
            if (*puVar17 != 0) {
              uVar23 = puVar17[1];
              if ((uVar23 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                lVar28 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar28 = 0x1c;
                }
                lVar28 = (long)puVar17 + lVar28 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar28 != 0) {
                  uVar31 = 0;
                  if ((ulong)uVar23 != 0) {
                    uVar31 = (uint)((ulong)((long)local_2688 - lVar28) / (ulong)uVar23);
                  }
                  if (*puVar17 <= uVar31) {
                    uVar31 = 0xffffffff;
                  }
                  if ((uVar31 < *(uint *)PTR_DAT_04bc0048) &&
                     (uVar31 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar31 * 2),
                     uVar31 < 0x52)) goto LAB_021c4da4;
                }
              }
              goto LAB_021c4da0;
            }
          }
        }
LAB_021c4da4:
        local_2670 = (undefined *)CONCAT44(local_2670._4_4_,uVar31);
        uVar31 = (uint)(uVar31 - 1 < 9);
        if (uVar32 != 0) goto LAB_021c4f48;
LAB_021c4dbc:
        iVar10 = FUN_01ae7550(&local_2698);
        uVar32 = (uint)(iVar10 - 1U < 6);
        if (uVar8 != 0) goto LAB_021c4f54;
LAB_021c4de0:
        uVar8 = 0;
        if (((local_2688 != (uint *)0x0) && (uVar23 = *local_2688, uVar23 != 0)) &&
           (local_2688 != (uint *)(ulong)uVar23)) {
          puVar17 = (uint *)((long)local_2688 - (long)(ulong)uVar23);
          uVar8 = 0;
          if (*puVar17 != 0) {
            uVar8 = puVar17[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
              lVar28 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                lVar28 = 0x1c;
              }
              lVar28 = (long)puVar17 + lVar28 + (ulong)(ushort)puVar17[2] * 8;
              if (lVar28 != 0) {
                uVar23 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar23 = (uint)((ulong)((long)local_2688 - lVar28) / (ulong)uVar8);
                }
                if (*puVar17 <= uVar23) {
                  uVar23 = 0xffffffff;
                }
                if ((uVar23 < *(uint *)PTR_DAT_04bc0048) &&
                   (uVar8 = (uint)*(ushort *)
                                   (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar23 * 2),
                   uVar8 < 0x52)) goto LAB_021c4e70;
              }
            }
            uVar8 = 0;
          }
        }
LAB_021c4e70:
        uVar8 = (uint)(uVar8 < 0x11) & 0x17000U >> (ulong)(uVar8 & 0x1f);
      }
      local_2670 = (undefined *)CONCAT44(local_2670._4_4_,1);
      if (local_2688 == (uint *)0x0) {
        local_6c = 2;
      }
      else {
        uVar23 = *local_2688;
        local_6c = 0;
        if ((uVar23 != 0) && (local_2688 != (uint *)(ulong)uVar23)) {
          puVar17 = (uint *)((long)local_2688 - (long)(ulong)uVar23);
          local_6c = 0;
          if (*puVar17 != 0) {
            uVar23 = puVar17[1];
            if ((uVar23 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
              lVar28 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                lVar28 = 0x1c;
              }
              lVar28 = (long)puVar17 + lVar28 + (ulong)(ushort)puVar17[2] * 8;
              if (lVar28 != 0) {
                uVar24 = 0;
                if ((ulong)uVar23 != 0) {
                  uVar24 = (uint)((ulong)((long)local_2688 - lVar28) / (ulong)uVar23);
                }
                if (*puVar17 <= uVar24) {
                  uVar24 = 0xffffffff;
                }
                if ((uVar24 < *(uint *)PTR_DAT_04bc0050) &&
                   (local_6c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc0050 + 8) + (long)(int)uVar24 * 2),
                   local_6c < 3)) goto LAB_021c4ab4;
              }
            }
            local_6c = 0;
          }
        }
      }
LAB_021c4ab4:
      if (local_6c == 1) {
        iVar11 = iVar11 + 1;
      }
      iVar10 = FUN_01aed730(&local_2698);
      puVar25 = puVar25 + 1;
      if (9999 < iVar10) {
        iVar9 = iVar9 + 1;
      }
    } while (puVar25 != puVar2);
    uVar23 = iVar11 << 1;
    plVar27 = (long *)PTR_DAT_04bb2720;
    plVar30 = (long *)PTR_DAT_04bb27a8;
  }
  local_2668 = 0;
  local_2670 = PTR_DAT_04bbfe68 + 0x10;
  lVar28 = *plVar27;
  if (lVar28 == 0) {
    puVar25 = &DAT_055c04a0;
  }
  else {
    puVar25 = &DAT_055c04a0;
    if (*(long *)(lVar28 + 0x330) != 0) {
      puVar25 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar28 + 0x338));
      iVar11 = FUN_006bd550(*puVar25,0);
      puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar11 != 0x758f7eaf) {
        puVar25 = &DAT_055c04a0;
      }
    }
  }
  local_2664 = *(undefined4 *)(puVar25 + 7);
  local_2660 = FUN_017baf44();
  local_2660 = local_2660 & 1;
  local_2690 = local_2674;
  local_2674[0] = '\0';
  local_2698 = &PTR_LAB_04a767d8;
  local_70 = 5;
  local_6c = 2;
  uVar24 = 2;
  while( true ) {
    uVar15 = FUN_01a4fa00(&local_2670);
    local_6c = 0;
    if (*(long *)(*plVar30 + 0x1f8) != 0) {
      lVar28 = *(long *)(*plVar30 + 0x1f8) + 200;
      lVar16 = lVar28 + (ulong)uVar24 * 0x10;
      if (7 < uVar24) {
        lVar16 = lVar28;
      }
      local_6c = uVar24;
      if (*(long *)(lVar16 + 8) != 0) {
        FUN_012e6150(*(long *)(lVar16 + 8),&local_2698,uVar15);
      }
    }
    if (local_2674[0] != '\0') break;
    uVar26 = 8;
    if ((int)uVar24 < 8) {
      uVar26 = uVar24 + 1;
    }
    uVar24 = uVar26;
    if (uVar26 == 6) {
LAB_021c5190:
      if ((uVar34 == 0 && uVar31 == 0) && (uVar32 == 0 && uVar8 == 0)) {
        param_1[2] = param_1[2] | 8;
      }
      if ((uVar34 & uVar31 & uVar32 & uVar8) == 1) {
        param_1[2] = param_1[2] | 0x10;
      }
      if ((9 < (int)(uint)local_2638) && ((uint)local_2638 <= uVar23)) {
        param_1[2] = param_1[2] | 0x40;
      }
      if (((9 < (int)(uint)local_2638) && (iVar9 != 0)) && ((uint)local_2638 <= (uint)(iVar9 << 1)))
      {
        param_1[2] = param_1[2] | 0x80;
      }
      return;
    }
  }
  param_1[2] = param_1[2] & 0xffffffdf;
  goto LAB_021c5190;
}

