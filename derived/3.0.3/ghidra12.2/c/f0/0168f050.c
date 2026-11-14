
/* WARNING: Removing unreachable block (ram,0x0169109c) */
/* WARNING: Removing unreachable block (ram,0x016910ac) */
/* WARNING: Removing unreachable block (ram,0x016910b8) */
/* WARNING: Removing unreachable block (ram,0x0168f700) */
/* WARNING: Removing unreachable block (ram,0x0168f710) */
/* WARNING: Removing unreachable block (ram,0x0168f71c) */
/* WARNING: Removing unreachable block (ram,0x0168f574) */
/* WARNING: Removing unreachable block (ram,0x0168f584) */
/* WARNING: Removing unreachable block (ram,0x01690c84) */
/* WARNING: Removing unreachable block (ram,0x01690c94) */
/* WARNING: Removing unreachable block (ram,0x01690e0c) */
/* WARNING: Removing unreachable block (ram,0x01690e1c) */
/* WARNING: Removing unreachable block (ram,0x01690e28) */
/* WARNING: Removing unreachable block (ram,0x01691214) */
/* WARNING: Removing unreachable block (ram,0x01691224) */
/* WARNING: Removing unreachable block (ram,0x01691380) */
/* WARNING: Removing unreachable block (ram,0x01691390) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0168f050(long param_1)

{
  bool bVar1;
  void *__s;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  uint **ppuVar9;
  void *__s_00;
  void *__s_01;
  void *__s_02;
  void *__s_03;
  void *__s_04;
  void *__s_05;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  uint uVar26;
  undefined *puVar27;
  float fVar28;
  float fVar29;
  undefined *puStack_1c1a8;
  int iStack_1c1a0;
  int iStack_1c19c;
  undefined *puStack_1c198;
  uint uStack_1c190;
  uint uStack_1c18c;
  undefined *puStack_1c188;
  uint uStack_1c180;
  uint uStack_1c17c;
  undefined *puStack_1c178;
  uint uStack_1c170;
  uint uStack_1c16c;
  undefined **ppuStack_1c168;
  undefined1 auStack_1c160 [16384];
  undefined *puStack_18160;
  undefined8 uStack_18158;
  undefined **ppuStack_17158;
  undefined1 auStack_17150 [16384];
  undefined *puStack_13150;
  uint auStack_13148 [1024];
  undefined **ppuStack_12148;
  undefined8 uStack_12140;
  uint *puStack_12138;
  uint uStack_12130;
  uint uStack_1212c;
  undefined **local_e140;
  undefined8 local_e138;
  undefined8 local_e130;
  uint *local_e128;
  undefined8 local_e120;
  undefined *local_a138;
  uint local_a130;
  uint uStack_a12c;
  undefined *local_a128;
  undefined4 local_a120;
  undefined4 uStack_a11c;
  undefined4 local_a118;
  undefined4 uStack_a114;
  undefined *local_a110;
  undefined4 local_a108;
  undefined4 uStack_a104;
  undefined **local_a100;
  undefined4 local_a0f8;
  undefined4 local_a0f4;
  byte local_a0f0;
  undefined **local_90f8;
  undefined1 auStack_90f0 [4096];
  undefined **local_80f0;
  undefined1 auStack_80e8 [4096];
  undefined **local_70e8;
  uint auStack_70e0 [1024];
  undefined **local_60e0;
  undefined1 auStack_60d8 [4096];
  undefined **local_50d8;
  uint auStack_50d0 [4096];
  undefined **local_10d0;
  undefined *puStack_10c8;
  uint local_10c0;
  uint local_10bc;
  undefined *local_10b8;
  int local_10b0;
  int local_10ac;
  undefined8 local_10a8;
  undefined8 local_10a0;
  uint local_1098;
  uint uStack_1094;
  undefined *local_1090;
  int local_1088;
  int iStack_1084;
  undefined8 *local_a8;
  undefined **local_a0;
  undefined *local_98;
  uint local_90;
  uint local_8c;
  
  __s = (void *)(param_1 + 8);
  memset(__s,0,0x1000);
  __s_00 = (void *)(param_1 + 0x1010);
  memset(__s_00,0,0x1000);
  __s_01 = (void *)(param_1 + 0x2018);
  memset(__s_01,0,0x1000);
  __s_02 = (void *)(param_1 + 0x3020);
  memset(__s_02,0,0x1000);
  __s_03 = (void *)(param_1 + 0x4028);
  memset(__s_03,0,0x1000);
  __s_04 = (void *)(param_1 + 0x5030);
  memset(__s_04,0,0x1000);
  __s_05 = (void *)(param_1 + 0x6038);
  memset(__s_05,0,0x4009);
  local_a0f8 = 0;
  puVar25 = &DAT_055c04a0;
  lVar20 = *(long *)PTR_DAT_04bb2720;
  if ((lVar20 != 0) && (*(long *)(lVar20 + 0x330) != 0)) {
    puVar25 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
    iVar14 = FUN_006bd550(*puVar25,0);
    puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
    if (iVar14 != 0x758f7eaf) {
      puVar25 = &DAT_055c04a0;
    }
  }
  local_a0f4 = *(undefined4 *)(puVar25 + 7);
  local_a0f0 = FUN_017baf44();
  local_a0f0 = local_a0f0 & 1;
  ppuVar2 = (undefined **)(PTR_DAT_04bb6268 + 0x10);
  local_a100 = ppuVar2;
  lVar20 = FUN_01a4fa00(&local_a100);
  uVar26 = *(uint *)(lVar20 + 0x10);
  local_10bc = *(uint *)(lVar20 + 0x14);
  iVar14 = *(int *)(lVar20 + 0x20);
  iVar19 = *(int *)(lVar20 + 0x24);
  ppuVar3 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  ppuVar5 = (undefined **)(PTR_DAT_04bbbc40 + 0x10);
  local_50d8 = ppuVar5;
  local_10d0 = ppuVar3;
  puStack_10c8 = puVar4;
  local_10c0 = uVar26;
  local_10b8 = puVar4;
  local_10b0 = iVar14;
  local_10ac = iVar19;
  memset(auStack_50d0,0,0x4000);
  local_a100 = &PTR_LAB_049bb2c8;
  local_90f8 = &PTR_LAB_049bb2c8;
  local_80f0 = &PTR_LAB_049bb2c8;
  local_70e8 = &PTR_LAB_049bb2c8;
  local_60e0 = &PTR_LAB_049bb2c8;
  memset(&local_a0f8,0,0x1000);
  memset(auStack_90f0,0,0x1000);
  memset(auStack_80e8,0,0x1000);
  memset(auStack_70e0,0,0x1000);
  memset(auStack_60d8,0,0x1000);
  puVar27 = PTR_DAT_04bb2010;
  if ((int)uVar26 <= iVar14) {
    ppuVar6 = (undefined **)(PTR_DAT_04bbfe68 + 0x10);
    puVar25 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
    do {
      fVar29 = (float)(int)uVar26 * 0.5;
      fVar28 = (float)(int)local_10bc * 0.5;
      uVar17 = 0;
      if (fVar29 != (float)(int)fVar29) {
        uVar17 = (uint)(fVar29 < 0.0);
      }
      uVar15 = 0;
      if (fVar28 != (float)(int)fVar28) {
        uVar15 = (uint)(fVar28 < 0.0);
      }
      iVar10 = (int)fVar29 - uVar17;
      iVar18 = 0;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
        lVar20 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
        iVar18 = 0;
        if (lVar20 != 0) {
          uVar17 = iVar10 - *(int *)(lVar20 + 0x28);
          uVar22 = *(uint *)(lVar20 + 0x18);
          uVar12 = ((int)fVar28 - uVar15) - *(int *)(lVar20 + 0x2c);
          if ((uVar17 < uVar22 && uVar12 <= *(uint *)(lVar20 + 0x1c)) &&
              (uVar22 <= uVar17 || *(uint *)(lVar20 + 0x1c) != uVar12)) {
            uVar17 = uVar17 + uVar22 * uVar12;
LAB_0168f61c:
            if (*(uint *)(lVar20 + 0x30) <= uVar17) {
              uVar17 = 0;
            }
            puVar23 = (undefined8 *)(*(long *)(lVar20 + 0x38) + (long)(int)uVar17 * 0x68);
          }
          else if (*(char *)(lVar20 + 0x88) == '\0') {
            puVar23 = &DAT_051a50f0;
          }
          else {
            uVar17 = ((int)fVar28 - uVar15) - *(int *)(lVar20 + 0x9c);
            uVar15 = iVar10 - *(int *)(lVar20 + 0x98);
            puVar23 = &DAT_051a50f0;
            if (uVar15 < *(uint *)(lVar20 + 0xa0) && uVar17 < *(uint *)(lVar20 + 0xa4)) {
              uVar17 = uVar15 + *(uint *)(lVar20 + 0xa0) * uVar17 + *(int *)(lVar20 + 0x8c);
              goto LAB_0168f61c;
            }
          }
          iVar18 = (int)*(char *)(puVar23 + 2);
        }
      }
      if (iVar19 < (int)local_10bc) {
      }
      else {
        uVar17 = local_10bc;
        do {
          auStack_13148[0] = uVar26;
          auStack_13148[1] = uVar17;
          puStack_13150 = puVar4;
          if (((uVar17 | uVar26) & 1) == 0) {
            fVar28 = (float)(int)uVar17 * 0.5;
            uVar15 = 0;
            if (fVar28 != (float)(int)fVar28) {
              uVar15 = (uint)(fVar28 < 0.0);
            }
            iVar14 = 0;
            if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
              lVar20 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
              iVar14 = 0;
              if (lVar20 != 0) {
                uVar22 = iVar10 - *(int *)(lVar20 + 0x28);
                uVar12 = *(uint *)(lVar20 + 0x18);
                uVar11 = ((int)fVar28 - uVar15) - *(int *)(lVar20 + 0x2c);
                if ((uVar22 < uVar12 && uVar11 <= *(uint *)(lVar20 + 0x1c)) &&
                    (uVar12 <= uVar22 || *(uint *)(lVar20 + 0x1c) != uVar11)) {
                  uVar22 = uVar22 + uVar12 * uVar11;
LAB_0168f7a0:
                  if (*(uint *)(lVar20 + 0x30) <= uVar22) {
                    uVar22 = 0;
                  }
                  puVar23 = (undefined8 *)(*(long *)(lVar20 + 0x38) + (long)(int)uVar22 * 0x68);
                }
                else if (*(char *)(lVar20 + 0x88) == '\0') {
                  puVar23 = &DAT_051a50f0;
                }
                else {
                  uVar15 = ((int)fVar28 - uVar15) - *(int *)(lVar20 + 0x9c);
                  uVar22 = iVar10 - *(int *)(lVar20 + 0x98);
                  puVar23 = &DAT_051a50f0;
                  if (uVar22 < *(uint *)(lVar20 + 0xa0) && uVar15 < *(uint *)(lVar20 + 0xa4)) {
                    uVar22 = uVar22 + *(uint *)(lVar20 + 0xa0) * uVar15 + *(int *)(lVar20 + 0x8c);
                    goto LAB_0168f7a0;
                  }
                }
                iVar14 = (int)*(char *)(puVar23 + 2);
              }
            }
            puStack_1c1a8 = (undefined *)CONCAT44(puStack_1c1a8._4_4_,iVar14);
            if ((((((iVar18 < iVar14) && (iVar14 != 4)) && (DAT_05233970 <= (int)uVar26)) &&
                 (((int)uVar26 <= DAT_05233980 && (DAT_05233974 <= (int)uVar17)))) &&
                ((int)uVar17 <= DAT_05233984)) &&
               (uVar15 = ((int)uVar26 >> 1) + (uVar17 >> 1) * 0x100, uVar15 >> 0xf == 0)) {
              uVar15 = uVar15 >> 5;
              auStack_70e0[uVar15] = auStack_70e0[uVar15] | 1 << (ulong)((int)uVar26 >> 1 & 0x1f);
            }
            local_e128 = (uint *)(puVar27 + 0x10);
            local_e130 = CONCAT44(uVar17,uVar26);
            local_e140 = ppuVar3;
            local_e138 = local_e128;
            local_e120 = CONCAT44(uVar17 + 1,uVar26 + 1);
            iVar18 = iVar14;
            if (((int)uVar17 < 0x3a || ((int)uVar26 < 0x8c || 0x91 < (int)(uVar26 + 1))) ||
               (0x3d < (int)(uVar17 + 1))) {
              iVar14 = 0;
              ppuStack_12148 = (undefined **)&local_e138;
              uStack_12140 = &local_e128;
              puStack_12138 = local_e128;
              uStack_12130 = uVar26;
              uStack_1212c = uVar17;
              do {
                puStack_18160 = (undefined *)((ulong)puStack_18160 & 0xffffffff00000000);
                local_10a8 = (uint **)((ulong)local_10a8 & 0xffffffff00000000);
                local_a8 = (undefined8 *)((ulong)local_a8 & 0xffffffff00000000);
                lVar20 = *(long *)PTR_DAT_04bb27c8;
                puStack_1c178 = (undefined *)((ulong)puStack_1c178 & 0xffffffff00000000);
                if ((((lVar20 != 0) && (*(long *)(lVar20 + 0xa8) != 0)) &&
                    (uVar16 = FUN_009493f8(lVar20 + 0x28,&puStack_12138,&puStack_18160,&local_10a8,
                                           &local_a8,&puStack_1c178), (uVar16 & 1) != 0)) &&
                   ((((int)puStack_18160 - 0x29U < 3 || ((int)local_10a8 - 0x29U < 3)) ||
                    (((int)local_a8 - 0x29U < 3 || ((int)puStack_1c178 - 0x29U < 3)))))) {
LAB_0168fbd0:
                  puVar27 = PTR_DAT_04bb2010;
                  goto LAB_0168fbf0;
                }
                puStack_18160 = (undefined *)0xffffffffffffffff;
                uStack_18158 = CONCAT44(uStack_18158._4_4_,0x1ff);
                local_10a8 = (uint **)CONCAT44(local_10a8._4_4_,7);
                puStack_18160 = (undefined *)0xffffffffffffff7f;
                lVar20 = *(long *)PTR_DAT_04bb27c8;
                if ((lVar20 != 0) && (*(long *)(lVar20 + 0xa8) != 0)) {
                  uVar16 = FUN_009499b0(lVar20 + 0x28,&puStack_12138,&puStack_18160);
                  if ((uVar16 & 1) != 0) goto LAB_0168fbd0;
                  lVar20 = *(long *)PTR_DAT_04bb27c8;
                }
                puStack_18160 = (undefined *)((ulong)puStack_18160 & 0xffffffff00000000);
                local_10a8 = (uint **)((ulong)local_10a8 & 0xffffffff00000000);
                local_a8 = (undefined8 *)((ulong)local_a8 & 0xffffffff00000000);
                puStack_1c178 = (undefined *)((ulong)puStack_1c178 & 0xffffffff00000000);
                if ((((lVar20 == 0) || (*(long *)(lVar20 + 0xa8) == 0)) ||
                    (uVar16 = FUN_009493f8(lVar20 + 0x28,&puStack_12138,&puStack_18160,&local_10a8,
                                           &local_a8,&puStack_1c178), (uVar16 & 1) == 0)) ||
                   ((((int)puStack_18160 != 0x1d || ((int)local_10a8 != 0x1d)) ||
                    (((int)local_a8 != 0x1d || ((int)puStack_1c178 != 0x1d)))))) {
                  uStack_18158 = uStack_18158 & 0xffffffff00000000;
                  puStack_18160 = (undefined *)0x0;
                  local_10a8 = (uint **)CONCAT44(local_10a8._4_4_,0x1d);
                  puStack_18160 = (undefined *)0x20000000;
                  lVar20 = *(long *)PTR_DAT_04bb27c8;
                  if (((lVar20 != 0) && (*(long *)(lVar20 + 0xa8) != 0)) &&
                     (uVar16 = FUN_00949898(lVar20 + 0x28,&puStack_12138,&puStack_18160),
                     (uVar16 & 1) != 0)) goto LAB_0168fac8;
                  uVar16 = FUN_00976070(&puStack_12138);
                  if ((uVar16 & 1) == 0) goto LAB_0168fbd0;
                }
                else {
LAB_0168fac8:
                  iVar14 = iVar14 + 1;
                }
                puVar27 = PTR_DAT_04bb2010;
                if ((int)uStack_12130 < *(int *)(uStack_12140 + 1)) {
                  uStack_12130 = uStack_12130 + 1;
                }
                else {
                  uStack_12130 = *(uint *)(ppuStack_12148 + 1);
                  uStack_1212c = uStack_1212c + 1;
                }
              } while ((uVar26 != uStack_12130) || (uVar17 + 2 != uStack_1212c));
              if (1 < iVar14) {
                if ((int)auStack_13148[0] < 0x42) goto LAB_0168fb54;
                if (0x5e < auStack_13148[0]) {
                  if (auStack_13148[0] - 0x92 < 0xfffffffa) {
                    if (auStack_13148[0] - 0x88 < 0xfffffffc) {
                      if (((auStack_13148[0] - 0x72 < 0xfffffffe) &&
                          (auStack_13148[0] - 0x62 < 0xfffffffe)) || (5 < auStack_13148[1] - 0x28))
                      goto LAB_0168fb54;
                    }
                    else if (7 < auStack_13148[1] - 0x26) {
LAB_0168fb54:
                      if (((DAT_05233970 <= (int)auStack_13148[0]) &&
                          ((int)auStack_13148[0] <= DAT_05233980)) &&
                         ((DAT_05233974 <= (int)auStack_13148[1] &&
                          ((int)auStack_13148[1] <= DAT_05233984)))) {
                        uVar15 = (auStack_13148[1] & 0x1fffffe) * 0x80 +
                                 ((int)auStack_13148[0] >> 1);
                        if (uVar15 >> 0xf == 0) {
                          lVar20 = (ulong)(uVar15 >> 5) * 4;
                          *(uint *)((long)__s_04 + lVar20) =
                               *(uint *)((long)__s_04 + lVar20) |
                               1 << (ulong)(auStack_13148[0] >> 1 & 0x1f);
                        }
                      }
                    }
                  }
                  else if (0xd < auStack_13148[1] - 0x30) goto LAB_0168fb54;
                }
              }
            }
          }
LAB_0168fbf0:
          lVar20 = *(long *)PTR_DAT_04bb27c8;
          if (((lVar20 == 0) || (lVar24 = *(long *)(lVar20 + 0xa8), lVar24 == 0)) ||
             (((int)auStack_13148[0] < 0 ||
              (((int)auStack_13148[1] < 0 ||
               (*(uint *)(lVar24 + 0x38) <= auStack_13148[0] ||
                *(uint *)(lVar24 + 0x3c) <= auStack_13148[1])))))) {
LAB_0168fcc0:
            local_e138 = (uint *)((ulong)local_e138 & 0xffffffff00000000);
            local_e140 = (undefined **)0x0;
            ppuStack_12148 = (undefined **)CONCAT44(ppuStack_12148._4_4_,8);
            local_e140 = (undefined **)0x100;
            if ((lVar20 == 0) || (*(long *)(lVar20 + 0xa8) == 0)) {
              if (DAT_05233970 <= (int)auStack_13148[0]) {
LAB_0168fde4:
                if ((((int)auStack_13148[0] <= DAT_05233980) &&
                    (DAT_05233974 <= (int)auStack_13148[1])) &&
                   (((int)auStack_13148[1] <= DAT_05233984 &&
                    ((uVar15 = auStack_13148[0] + auStack_13148[1] * 0x200, uVar15 >> 0x11 == 0 &&
                     ((auStack_50d0[uVar15 >> 5] >> (ulong)(auStack_13148[0] & 0x1f) & 1) != 0))))))
                goto LAB_0168f6a4;
              }
            }
            else {
              uVar16 = FUN_00949ac8(lVar20 + 0x28,&puStack_13150,&local_e140);
              if ((uVar16 & 1) != 0) {
                if ((((DAT_05233970 <= (int)auStack_13148[0]) &&
                     ((int)auStack_13148[0] <= DAT_05233980)) &&
                    (DAT_05233974 <= (int)auStack_13148[1])) &&
                   ((int)auStack_13148[1] <= DAT_05233984)) {
                  uVar15 = auStack_13148[0] + auStack_13148[1] * 0x200;
                  if (uVar15 >> 0x11 == 0) {
                    uVar15 = uVar15 >> 5;
                    auStack_50d0[uVar15] =
                         auStack_50d0[uVar15] | 1 << (ulong)(auStack_13148[0] & 0x1f);
                  }
                }
                goto LAB_0168f6a4;
              }
              if (DAT_05233970 <= (int)auStack_13148[0]) goto LAB_0168fde4;
            }
            puStack_18160 = puVar27 + 0x10;
            uStack_18158 = 0;
            local_e138 = (uint *)((ulong)local_e138 & 0xffffffff00000000);
            lVar20 = *(long *)PTR_DAT_04bb2720;
            if ((lVar20 == 0) || (*(long *)(lVar20 + 0x330) == 0)) {
              puVar23 = &DAT_055c04a0;
            }
            else {
              puVar23 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
              iVar14 = FUN_006bd550(*puVar23,0);
              puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar14 != 0x758f7eaf) {
                puVar23 = &DAT_055c04a0;
              }
            }
            local_e138 = (uint *)CONCAT44(*(undefined4 *)(puVar23 + 7),(undefined4)local_e138);
            uVar13 = FUN_017baf44();
            local_e130 = CONCAT71(local_e130._1_7_,uVar13) & 0xffffffffffffff01;
            local_e140 = ppuVar2;
            FUN_01a5033c(&local_10a8,&local_e140,0,&puStack_13150,&puStack_18160);
            puVar8 = PTR_DAT_04bb43c0;
            if ((short)local_10a8 == -2) {
              if ((((DAT_05233970 <= (int)auStack_13148[0]) &&
                   ((int)auStack_13148[0] <= DAT_05233980)) &&
                  (DAT_05233974 <= (int)auStack_13148[1])) &&
                 (((int)auStack_13148[1] <= DAT_05233984 &&
                  (uVar15 = auStack_13148[0] + auStack_13148[1] * 0x200, uVar15 >> 0x11 == 0)))) {
                lVar20 = (ulong)(uVar15 >> 5) * 4;
                *(uint *)((long)__s_05 + lVar20) =
                     *(uint *)((long)__s_05 + lVar20) | 1 << (ulong)(auStack_13148[0] & 0x1f);
              }
LAB_01690310:
              if (((DAT_05233970 <= (int)auStack_13148[0]) &&
                  ((((int)auStack_13148[0] <= DAT_05233980 &&
                    (DAT_05233974 <= (int)auStack_13148[1])) &&
                   ((int)auStack_13148[1] <= DAT_05233984)))) &&
                 (uVar15 = auStack_13148[0] + auStack_13148[1] * 0x200, uVar15 >> 0x11 == 0)) {
                uVar15 = uVar15 >> 5;
                auStack_50d0[uVar15] = auStack_50d0[uVar15] | 1 << (ulong)(auStack_13148[0] & 0x1f);
              }
            }
            else {
              lVar24 = *(long *)PTR_DAT_04bb43c0;
              uVar15 = FUN_0277d6c4(&local_10a8);
              puVar27 = PTR_DAT_04bb2010;
              lVar20 = *(long *)puVar8;
              if (lVar20 == 0) {
LAB_01690190:
                if ((((((uVar17 | uVar26) & 1) == 0) &&
                     (((lVar20 = *(long *)PTR_DAT_04bbbc68, lVar20 != 0 &&
                       (*(long *)(lVar20 + 0xb0) != 0)) &&
                      (*(long *)(*(long *)(lVar20 + 0xb0) + 8) != 0)))) &&
                    (((*(long *)(lVar20 + 0x488) != 0 &&
                      (*(long *)(*(long *)(lVar20 + 0x488) + 8) != 0)) &&
                     (*(long *)(lVar20 + 0x2b0) != 0)))) &&
                   (*(long *)(*(long *)(lVar20 + 0x2b0) + 8) != 0)) {
                  uVar15 = FUN_0277d6c4(&local_10a8);
                  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                  if ((uVar15 < *(uint *)(lVar20 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                    FUN_0124c030(&ppuStack_12148,&local_10a8);
                    FUN_0123db50(&uStack_12140,puStack_12138);
                    iVar14 = FUN_0123db50(&uStack_12140,puStack_12138);
                    if ((iVar14 == 5) ||
                       (iVar14 = FUN_0123db50(&uStack_12140,puStack_12138), iVar14 == 5)) {
                      FUN_0124e4d0(&ppuStack_12148);
                      puVar8 = puVar27 + 0x10;
                      local_a108 = (uint)uStack_18158;
                      uStack_a104 = uStack_18158._4_4_;
                      local_e138 = (uint *)((ulong)local_e138 & 0xffffffff00000000);
                      lVar20 = *(long *)PTR_DAT_04bb2720;
                      local_a110 = puVar8;
                      if ((lVar20 == 0) || (*(long *)(lVar20 + 0x330) == 0)) {
                        puVar23 = &DAT_055c04a0;
                        local_e140 = ppuVar6;
                      }
                      else {
                        local_e140 = ppuVar6;
                        puVar23 = (undefined8 *)
                                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                            (*(long **)PTR_DAT_04bb2640,
                                             *(undefined4 *)(lVar20 + 0x338));
                        iVar14 = FUN_006bd550(*puVar23,0);
                        puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
                        if (iVar14 != 0x758f7eaf) {
                          puVar23 = &DAT_055c04a0;
                        }
                      }
                      local_e138._4_4_ = *(uint *)(puVar23 + 7);
                      uVar13 = FUN_017baf44();
                      local_e130 = CONCAT71(local_e130._1_7_,uVar13) & 0xffffffffffffff01;
                      ppuVar7 = (undefined **)(PTR_DAT_04bb6268 + 0x10);
                      local_e140 = ppuVar7;
                      FUN_011f3520(&local_e140,0,&local_a110);
                      local_a120 = (uint)uStack_18158;
                      uStack_a11c = uStack_18158._4_4_;
                      local_a118 = (undefined4)uStack_12140;
                      uStack_a114 = uStack_12140._4_4_;
                      local_e140 = (undefined **)(PTR_DAT_04bbfe68 + 0x10);
                      local_e138 = (uint *)((ulong)local_e138._4_4_ << 0x20);
                      lVar20 = *(long *)PTR_DAT_04bb2720;
                      local_a128 = puVar8;
                      if ((lVar20 == 0) || (*(long *)(lVar20 + 0x330) == 0)) {
                        puVar23 = &DAT_055c04a0;
                      }
                      else {
                        puVar23 = (undefined8 *)
                                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                            (*(long **)PTR_DAT_04bb2640,
                                             *(undefined4 *)(lVar20 + 0x338));
                        iVar14 = FUN_006bd550(*puVar23,0);
                        puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
                        if (iVar14 != 0x758f7eaf) {
                          puVar23 = &DAT_055c04a0;
                        }
                      }
                      local_e138 = (uint *)CONCAT44(*(undefined4 *)(puVar23 + 7),
                                                    (undefined4)local_e138);
                      uVar13 = FUN_017baf44();
                      local_e130 = CONCAT71(local_e130._1_7_,uVar13) & 0xffffffffffffff01;
                      local_e140 = ppuVar7;
                      FUN_011f3880(&local_e140,0,&local_a118,&local_a128);
                    }
                    else {
                      iVar14 = FUN_0123db50(&uStack_12140,puStack_12138);
                      if (iVar14 == 0x21) {
                        *(int *)(param_1 + 0xa038) = *(int *)(param_1 + 0xa038) + 1;
                      }
                      else {
                        iVar14 = FUN_0123db50(&uStack_12140,puStack_12138);
                        if (iVar14 == 0x1f) {
                          if ((((uint)uStack_18158 | uStack_18158._4_4_) & 1) == 0) {
                            *(int *)(param_1 + 0xa03c) = *(int *)(param_1 + 0xa03c) + 1;
                            if ((((DAT_05233970 <= (int)auStack_13148[0]) &&
                                 ((int)auStack_13148[0] <= DAT_05233980)) &&
                                (DAT_05233974 <= (int)auStack_13148[1])) &&
                               (((int)auStack_13148[1] <= DAT_05233984 &&
                                (uVar15 = (auStack_13148[1] & 0x1fffffe) * 0x80 +
                                          ((int)auStack_13148[0] >> 1), uVar15 >> 0xf == 0)))) {
                              lVar20 = (ulong)(uVar15 >> 5) * 4;
                              *(uint *)((long)__s_03 + lVar20) =
                                   *(uint *)((long)__s_03 + lVar20) |
                                   1 << (ulong)(auStack_13148[0] >> 1 & 0x1f);
                            }
                          }
                          else {
                            local_a130 = (uint)uStack_18158;
                            uStack_a12c = uStack_18158._4_4_;
                            local_a138 = puVar27 + 0x10;
                            local_e140 = (undefined **)(PTR_DAT_04bbfe68 + 0x10);
                            local_e138 = (uint *)((ulong)local_e138 & 0xffffffff00000000);
                            lVar20 = *(long *)PTR_DAT_04bb2720;
                            if ((lVar20 == 0) || (*(long *)(lVar20 + 0x330) == 0)) {
                              puVar23 = &DAT_055c04a0;
                            }
                            else {
                              puVar23 = (undefined8 *)
                                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                                  (*(long **)PTR_DAT_04bb2640,
                                                   *(undefined4 *)(lVar20 + 0x338));
                              iVar14 = FUN_006bd550(*puVar23,0);
                              puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
                              if (iVar14 != 0x758f7eaf) {
                                puVar23 = &DAT_055c04a0;
                              }
                            }
                            local_e138 = (uint *)CONCAT44(*(undefined4 *)(puVar23 + 7),
                                                          (undefined4)local_e138);
                            uVar13 = FUN_017baf44();
                            local_e130 = CONCAT71(local_e130._1_7_,uVar13) & 0xffffffffffffff01;
                            local_e140 = (undefined **)(PTR_DAT_04bb6268 + 0x10);
                            FUN_011f3520(&local_e140,0,&local_a138);
                          }
                        }
                      }
                    }
                    iVar14 = uStack_18158._4_4_;
                    uVar15 = (uint)uStack_18158;
                    do {
                      if ((((DAT_05233970 <= (int)uVar15) && ((int)uVar15 <= DAT_05233980)) &&
                          (DAT_05233974 <= iVar14)) &&
                         ((iVar14 <= DAT_05233984 &&
                          (uVar22 = uVar15 + iVar14 * 0x200, uVar22 >> 0x11 == 0)))) {
                        uVar22 = uVar22 >> 5;
                        auStack_50d0[uVar22] = auStack_50d0[uVar22] | 1 << (ulong)(uVar15 & 0x1f);
                      }
                      if ((int)uVar15 < (int)((uint)uStack_18158 + 1)) {
                        uVar15 = uVar15 + 1;
                      }
                      else {
                        iVar14 = iVar14 + 1;
                        uVar15 = (uint)uStack_18158;
                      }
                    } while (((uint)uStack_18158 != uVar15) || (uStack_18158._4_4_ + 2 != iVar14));
                    goto LAB_0168f694;
                  }
                }
                goto LAB_01690310;
              }
              lVar24 = *(long *)(lVar24 + 0x57e58);
              uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
              if ((*(uint *)(lVar24 + 0x1d8) <= uVar15) ||
                 (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar15 * 8) == 0))
              goto LAB_01690190;
              puStack_12138 = (uint *)0x0;
              uStack_12140 = local_10a8;
              ppuStack_12148 = (undefined **)puVar25;
              uVar15 = FUN_0277d6c4(&uStack_12140);
              if (*(long *)PTR_DAT_04bb43c0 != 0) {
                lVar20 = *(long *)(lVar20 + 0x57e58);
                uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                if ((uVar15 < *(uint *)(lVar20 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                  lVar20 = *(long *)PTR_DAT_04bc0428;
                  uVar15 = FUN_0277d6c4(&local_10a8);
                  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                  if (uVar15 < *(uint *)(lVar20 + 0x1d8)) {
                    puVar21 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8);
                    if (puVar21 != (uint *)0x0) {
                      puStack_12138 = puVar21;
                    }
                  }
                }
              }
              uVar16 = FUN_01ae59b0(&ppuStack_12148);
              puVar27 = PTR_DAT_04bb2010;
              if ((uVar16 & 1) == 0) {
                if (puStack_12138 == (uint *)0x0) {
                  uVar15 = 0xbc;
                }
                else {
                  uVar22 = *puStack_12138;
                  uVar15 = 0;
                  if ((uVar22 != 0) && (puStack_12138 != (uint *)(ulong)uVar22)) {
                    puVar21 = (uint *)((long)puStack_12138 - (long)(ulong)uVar22);
                    uVar15 = 0;
                    if (*puVar21 != 0) {
                      uVar15 = puVar21[1];
                      if ((uVar15 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                        lVar20 = 0xc;
                        if (*(char *)((long)puVar21 + 10) != '\0') {
                          lVar20 = 0x1c;
                        }
                        lVar20 = (long)puVar21 + lVar20 + (ulong)(ushort)puVar21[2] * 8;
                        if (lVar20 != 0) {
                          uVar22 = 0;
                          if ((ulong)uVar15 != 0) {
                            uVar22 = (uint)((ulong)((long)puStack_12138 - lVar20) / (ulong)uVar15);
                          }
                          if (*puVar21 <= uVar22) {
                            uVar22 = 0xffffffff;
                          }
                          if ((uVar22 < *(uint *)PTR_DAT_04bc00c8) &&
                             (uVar15 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar22 * 2), uVar15 < 0xbd))
                          goto LAB_0169049c;
                        }
                      }
                      uVar15 = 0;
                    }
                  }
                }
LAB_0169049c:
                local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,uVar15);
                if (uVar15 == 0x7f) {
                  *(undefined1 *)(param_1 + 0xa040) = 1;
                }
                iVar14 = uStack_18158._4_4_;
                uVar15 = (uint)uStack_18158;
                do {
                  if ((((DAT_05233970 <= (int)uVar15) && ((int)uVar15 <= DAT_05233980)) &&
                      (DAT_05233974 <= iVar14)) &&
                     ((iVar14 <= DAT_05233984 &&
                      (uVar22 = uVar15 + iVar14 * 0x200, uVar22 >> 0x11 == 0)))) {
                    uVar22 = uVar22 >> 5;
                    auStack_50d0[uVar22] = auStack_50d0[uVar22] | 1 << (ulong)(uVar15 & 0x1f);
                  }
                  if ((int)uVar15 < (int)((uint)uStack_18158 + 1)) {
                    uVar15 = uVar15 + 1;
                  }
                  else {
                    iVar14 = iVar14 + 1;
                    uVar15 = (uint)uStack_18158;
                  }
                } while (((uint)uStack_18158 != uVar15) || (uStack_18158._4_4_ + 2 != iVar14));
              }
              else {
                local_e138 = (uint *)(PTR_DAT_04bb2010 + 0x10);
                local_e140 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
                local_e120 = 0;
                local_e130 = 0;
                local_e128 = local_e138;
                FUN_01afb480(&ppuStack_12148,&local_e140);
                iVar19 = local_e130._4_4_ + uStack_18158._4_4_;
                iVar14 = local_e120._4_4_ + uStack_18158._4_4_ + 1;
                if (iVar14 != iVar19) {
                  uVar15 = (int)local_e130 + (uint)uStack_18158;
                  uVar22 = uVar15;
                  do {
                    if ((((DAT_05233970 <= (int)uVar22) && ((int)uVar22 <= DAT_05233980)) &&
                        (DAT_05233974 <= iVar19)) &&
                       ((iVar19 <= DAT_05233984 &&
                        (uVar12 = uVar22 + iVar19 * 0x200, uVar12 >> 0x11 == 0)))) {
                      uVar12 = uVar12 >> 5;
                      auStack_50d0[uVar12] = auStack_50d0[uVar12] | 1 << (ulong)(uVar22 & 0x1f);
                    }
                    if ((int)uVar22 < (int)((int)local_e120 + (uint)uStack_18158)) {
                      uVar22 = uVar22 + 1;
                    }
                    else {
                      iVar19 = iVar19 + 1;
                      uVar22 = uVar15;
                    }
                  } while ((uVar15 != uVar22) || (iVar14 != iVar19));
                }
              }
            }
LAB_0168f694:
            iVar19 = local_10ac;
          }
          else {
            uVar15 = auStack_13148[0] + *(uint *)(lVar24 + 0x38) * auStack_13148[1];
            if ((*(uint *)(lVar24 + 0x68) <= uVar15 || *(long *)(lVar24 + 0x70) == 0) ||
               ((*(uint *)(*(long *)(lVar24 + 0x70) + (long)(int)uVar15 * 4) >> 3 & 1) == 0))
            goto LAB_0168fcc0;
            if ((((DAT_05233970 <= (int)auStack_13148[0]) && ((int)auStack_13148[0] <= DAT_05233980)
                 ) && (DAT_05233974 <= (int)auStack_13148[1])) &&
               ((int)auStack_13148[1] <= DAT_05233984)) {
              uVar15 = auStack_13148[0] + auStack_13148[1] * 0x200;
              if (uVar15 >> 0x11 == 0) {
                uVar15 = uVar15 >> 5;
                auStack_50d0[uVar15] = auStack_50d0[uVar15] | 1 << (ulong)(auStack_13148[0] & 0x1f);
              }
            }
          }
LAB_0168f6a4:
          bVar1 = (int)uVar17 < iVar19;
          uVar17 = uVar17 + 1;
        } while (bVar1);
        iVar14 = local_10b0;
      }
      bVar1 = (int)uVar26 < iVar14;
      uVar26 = uVar26 + 1;
    } while (bVar1);
  }
  ppuStack_12148 = ppuVar5;
  local_e140 = ppuVar5;
  memset(&local_e138,0xff,0x4000);
  memset(&uStack_12140,0,0x4000);
  FUN_01685d60(&local_10d0,&local_e140,&ppuStack_12148,&local_a100);
  ppuStack_17158 = ppuVar5;
  memcpy(auStack_17150,&local_e138,0x4000);
  FUN_01695f30(&puStack_13150,&ppuStack_17158,1);
  ppuStack_1c168 = ppuVar5;
  memcpy(auStack_1c160,__s_05,0x4000);
  FUN_01695f30(&puStack_18160,&ppuStack_1c168,1);
  memset(__s,0,0x1000);
  lVar20 = 0;
  do {
    uVar26 = ((uint *)((long)__s + lVar20))[1];
    lVar24 = lVar20 + 8;
    uVar17 = *(uint *)((long)&uStack_18158 + lVar20 + 4);
    *(uint *)((long)&local_10a8 + lVar20) =
         *(uint *)((long)&uStack_18158 + lVar20) | *(uint *)((long)__s + lVar20);
    *(uint *)((long)&local_10a8 + lVar20 + 4) = uVar17 | uVar26;
    lVar20 = lVar24;
  } while (lVar24 != 0x1000);
  memcpy(__s,&local_10a8,0x1000);
  if (((int)local_10c0 <= iVar14) && ((int)local_10bc <= iVar19)) {
    puVar4 = puVar27 + 0x10;
    puVar8 = PTR_DAT_04bbc1a0 + 0x10;
    ppuVar9 = (uint **)(PTR_DAT_04bb2018 + 0x10);
    uVar26 = local_10c0;
    do {
      if ((int)local_10bc <= iVar19) {
        uVar17 = local_10bc;
        do {
          if (((uVar17 | uVar26) & 1) == 0) {
            if (((DAT_05233970 <= (int)uVar26 && (int)uVar26 <= DAT_05233980) &&
                (DAT_05233974 <= (int)uVar17)) && ((int)uVar17 <= DAT_05233984)) {
              uVar15 = ((int)uVar26 >> 1) + (uVar17 >> 1) * 0x100;
              if ((uVar15 >> 0xf == 0) &&
                 ((*(uint *)((long)&uStack_18158 + (ulong)(uVar15 >> 5) * 4) &
                  1 << (ulong)((int)uVar26 >> 1 & 0x1f)) != 0)) {
                puStack_1c178 = puVar4;
                uStack_1c170 = uVar26;
                uStack_1c16c = uVar17;
                if (((DAT_05233868 & 1) == 0) &&
                   (iVar14 = __cxa_guard_acquire(&DAT_05233868), iVar14 != 0)) {
                  DAT_05233848 = puVar27 + 0x10;
                  DAT_05233850 = 0x3e00000032;
                  DAT_05233860 = 0x420000003d;
                  DAT_05233840 = puVar8;
                  DAT_05233858 = DAT_05233848;
                  FUN_001001d0(PTR_FUN_04bb2038,&DAT_05233840,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_05233868);
                }
                if ((0xb < uStack_1c170 - 0x3a) || ((uStack_1c16c & 0xfffffffe) != 0x4c)) {
                  fVar28 = (float)(int)uStack_1c170 * 5.0 + 5.0;
                  fVar29 = (float)(int)uStack_1c16c * 5.0 + 5.0;
                  local_10a0 = (undefined *)
                               CONCAT44((int)((float)(int)fVar29 / 10.0) - (uint)(fVar29 < 0.0),
                                        (int)((float)(int)fVar28 / 10.0) - (uint)(fVar28 < 0.0));
                  local_10a8 = ppuVar9;
                  uVar16 = FUN_01318310(&local_10a8);
                  if ((uVar16 & 1) == 0) {
                    local_10a0 = puVar27 + 0x10;
                    local_10a8 = (uint **)(PTR_DAT_04bbc1a0 + 0x10);
                    local_1098 = uStack_1c170;
                    uStack_1094 = uStack_1c16c;
                    local_1088 = uStack_1c170 + 1;
                    iStack_1084 = uStack_1c16c + 1;
                    local_1090 = local_10a0;
                    uVar16 = FUN_00978be0(&local_10a8);
                    if (((uVar16 & 1) != 0) &&
                       (((((int)uStack_1c170 < (int)DAT_05233850 ||
                          ((int)DAT_05233860 < (int)uStack_1c170)) ||
                         ((int)uStack_1c16c < DAT_05233850._4_4_)) ||
                        (DAT_05233860._4_4_ < (int)uStack_1c16c)))) {
                      fVar29 = (float)(int)uStack_1c170 * 0.5;
                      fVar28 = (float)(int)uStack_1c16c * 0.5;
                      uVar15 = 0;
                      if (fVar29 != (float)(int)fVar29) {
                        uVar15 = (uint)(fVar29 < 0.0);
                      }
                      uVar22 = 0;
                      if (fVar28 != (float)(int)fVar28) {
                        uVar22 = (uint)(fVar28 < 0.0);
                      }
                      iVar14 = (int)fVar29 - uVar15;
                      if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) ||
                         (lVar20 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0),
                         lVar20 == 0)) {
                        iVar19 = 0;
                      }
                      else {
                        uVar15 = iVar14 - *(int *)(lVar20 + 0x28);
                        if ((uVar15 < *(uint *)(lVar20 + 0x18)) &&
                           (uVar12 = ((int)fVar28 - uVar22) - *(int *)(lVar20 + 0x2c),
                           uVar12 < *(uint *)(lVar20 + 0x1c))) {
                          uVar15 = uVar15 + *(uint *)(lVar20 + 0x18) * uVar12;
LAB_01690d3c:
                          if (*(uint *)(lVar20 + 0x30) <= uVar15) {
                            uVar15 = 0;
                          }
                          puVar25 = (undefined8 *)
                                    (*(long *)(lVar20 + 0x38) + (long)(int)uVar15 * 0x68);
                        }
                        else {
                          if (*(char *)(lVar20 + 0x88) != '\0') {
                            uVar15 = iVar14 - *(int *)(lVar20 + 0x98);
                            if (uVar15 < *(uint *)(lVar20 + 0xa0)) {
                              uVar22 = ((int)fVar28 - uVar22) - *(int *)(lVar20 + 0x9c);
                              puVar25 = &DAT_051a50f0;
                              if (uVar22 < *(uint *)(lVar20 + 0xa4)) {
                                uVar15 = uVar15 + *(uint *)(lVar20 + 0xa0) * uVar22 +
                                         *(int *)(lVar20 + 0x8c);
                                goto LAB_01690d3c;
                              }
                              goto LAB_01690d60;
                            }
                          }
                          puVar25 = &DAT_051a50f0;
                        }
LAB_01690d60:
                        iVar19 = (int)*(char *)(puVar25 + 2);
                      }
                      iVar10 = uStack_1c16c - 2;
                      fVar28 = (float)(int)uStack_1c170 * 5.0 + 5.0;
                      local_10a8 = (uint **)(PTR_DAT_04bb2018 + 0x10);
                      fVar29 = (float)iVar10 * 5.0 + 5.0;
                      local_10a0 = (undefined *)
                                   CONCAT44((int)((float)(int)fVar29 / 10.0) - (uint)(fVar29 < 0.0),
                                            (int)((float)(int)fVar28 / 10.0) - (uint)(fVar28 < 0.0))
                      ;
                      uVar16 = FUN_01318310(&local_10a8);
                      if ((uVar16 & 1) == 0) {
                        fVar28 = (float)iVar10 * 0.5;
                        uVar15 = 0;
                        if (fVar28 != (float)(int)fVar28) {
                          uVar15 = (uint)(fVar28 < 0.0);
                        }
                        if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) ||
                           (lVar20 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0),
                           lVar20 == 0)) {
                          iVar14 = 0;
                        }
                        else {
                          uVar22 = iVar14 - *(int *)(lVar20 + 0x28);
                          if ((uVar22 < *(uint *)(lVar20 + 0x18)) &&
                             (uVar12 = ((int)fVar28 - uVar15) - *(int *)(lVar20 + 0x2c),
                             uVar12 < *(uint *)(lVar20 + 0x1c))) {
                            uVar22 = uVar22 + *(uint *)(lVar20 + 0x18) * uVar12;
LAB_01690ed8:
                            if (*(uint *)(lVar20 + 0x30) <= uVar22) {
                              uVar22 = 0;
                            }
                            puVar25 = (undefined8 *)
                                      (*(long *)(lVar20 + 0x38) + (long)(int)uVar22 * 0x68);
                          }
                          else {
                            if (*(char *)(lVar20 + 0x88) != '\0') {
                              uVar22 = iVar14 - *(int *)(lVar20 + 0x98);
                              if (uVar22 < *(uint *)(lVar20 + 0xa0)) {
                                uVar15 = ((int)fVar28 - uVar15) - *(int *)(lVar20 + 0x9c);
                                puVar25 = &DAT_051a50f0;
                                if (uVar15 < *(uint *)(lVar20 + 0xa4)) {
                                  uVar22 = uVar22 + *(uint *)(lVar20 + 0xa0) * uVar15 +
                                           *(int *)(lVar20 + 0x8c);
                                  goto LAB_01690ed8;
                                }
                                goto LAB_01690f04;
                              }
                            }
                            puVar25 = &DAT_051a50f0;
                          }
LAB_01690f04:
                          iVar14 = (int)*(char *)(puVar25 + 2);
                        }
                        local_10a8 = (uint **)CONCAT44((int)((ulong)local_10a8 >> 0x20),iVar14);
                        if ((iVar14 != 4) && (iVar14 == iVar19 + 1)) {
                          uStack_1c190 = uStack_1c170;
                          uStack_1c18c = uStack_1c16c;
                          puStack_1c198 = PTR_DAT_04bb2010 + 0x10;
                          uVar16 = FUN_022b6094(&puStack_1c198,0);
                          goto joined_r0x01690f44;
                        }
                      }
                    }
                  }
                  else {
                    iVar14 = FUN_022af654(&puStack_1c178,1);
                    if ((iVar14 == 7) || (iVar14 == 1)) {
                      uStack_1c180 = uStack_1c170;
                      uStack_1c17c = uStack_1c16c;
                      puStack_1c188 = PTR_DAT_04bb2010 + 0x10;
                      uVar16 = FUN_022b6094(&puStack_1c188,iVar14);
joined_r0x01690f44:
                      if (((((uVar16 & 1) != 0) && (DAT_05233970 <= (int)uStack_1c170)) &&
                          ((int)uStack_1c170 <= DAT_05233980)) &&
                         (((DAT_05233974 <= (int)uStack_1c16c && ((int)uStack_1c16c <= DAT_05233984)
                           ) && (uVar15 = (uStack_1c16c & 0x1fffffe) * 0x80 +
                                          ((int)uStack_1c170 >> 1), uVar15 >> 0xf == 0)))) {
                        lVar20 = (ulong)(uVar15 >> 5) * 4;
                        *(uint *)((long)__s_02 + lVar20) =
                             *(uint *)((long)__s_02 + lVar20) |
                             1 << (ulong)(uStack_1c170 >> 1 & 0x1f);
                      }
                    }
                  }
                  puStack_1c1a8 = PTR_DAT_04bb2018 + 0x10;
                  fVar28 = (float)(int)uStack_1c170 * 0.5;
                  uVar15 = 0;
                  if (fVar28 != (float)(int)fVar28) {
                    uVar15 = (uint)(fVar28 < 0.0);
                  }
                  iStack_1c1a0 = (int)fVar28 - uVar15;
                  fVar28 = (float)(int)uStack_1c16c * 0.5;
                  uVar15 = 0;
                  if (fVar28 != (float)(int)fVar28) {
                    uVar15 = (uint)(fVar28 < 0.0);
                  }
                  iStack_1c19c = (int)fVar28 - uVar15;
                  uVar16 = FUN_00977130(&puStack_1c1a8);
                  uVar15 = uStack_1c170;
                  puVar27 = PTR_DAT_04bb2010;
                  if ((uVar16 & 1) != 0) {
                    local_10a0 = PTR_DAT_04bb2010 + 0x10;
                    local_10a8 = (uint **)(PTR_DAT_04bbc1a0 + 0x10);
                    local_1088 = uStack_1c170 + 1;
                    local_90 = uStack_1c170;
                    iStack_1084 = uStack_1c16c + 1;
                    uVar22 = uStack_1c16c + 2;
                    local_1098 = uStack_1c170;
                    uStack_1094 = uStack_1c16c;
                    local_8c = uStack_1c16c;
                    local_1090 = local_10a0;
                    local_a8 = &local_10a0;
                    local_a0 = &local_1090;
                    local_98 = local_10a0;
                    do {
                      uVar16 = FUN_00976070(&local_98);
                      if ((uVar16 & 1) == 0) {
                        uVar16 = FUN_0097b460(&puStack_1c178);
                        puVar27 = PTR_DAT_04bb2010;
                        if ((uVar16 & 1) != 0) break;
                        local_10a8 = (uint **)((ulong)local_10a8 & 0xffffffff00000000);
                        if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) &&
                           (lVar20 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0),
                           lVar20 != 0)) {
                          uVar15 = iStack_1c1a0 - *(int *)(lVar20 + 0x28);
                          uVar22 = *(uint *)(lVar20 + 0x18);
                          uVar12 = iStack_1c19c - *(int *)(lVar20 + 0x2c);
                          if ((uVar15 < uVar22 && uVar12 <= *(uint *)(lVar20 + 0x1c)) &&
                              (uVar22 <= uVar15 || *(uint *)(lVar20 + 0x1c) != uVar12)) {
                            uVar15 = uVar15 + uVar22 * uVar12;
LAB_01691130:
                            if (*(uint *)(lVar20 + 0x30) <= uVar15) {
                              uVar15 = 0;
                            }
                            puVar25 = (undefined8 *)
                                      (*(long *)(lVar20 + 0x38) + (long)(int)uVar15 * 0x68);
                          }
                          else if (*(char *)(lVar20 + 0x88) == '\0') {
                            puVar25 = &DAT_051a50f0;
                          }
                          else {
                            uVar15 = iStack_1c1a0 - *(int *)(lVar20 + 0x98);
                            uVar22 = iStack_1c19c - *(int *)(lVar20 + 0x9c);
                            puVar25 = &DAT_051a50f0;
                            if (uVar15 < *(uint *)(lVar20 + 0xa0) &&
                                uVar22 < *(uint *)(lVar20 + 0xa4)) {
                              uVar15 = uVar15 + *(uint *)(lVar20 + 0xa0) * uVar22 +
                                       *(int *)(lVar20 + 0x8c);
                              goto LAB_01691130;
                            }
                          }
                          if (*(char *)(puVar25 + 2) == '\x03') break;
                        }
                        if (((DAT_05233838 & 1) == 0) &&
                           (iVar14 = __cxa_guard_acquire(&DAT_05233838), iVar14 != 0)) {
                          DAT_05233818 = puVar27 + 0x10;
                          DAT_05233810 = PTR_DAT_04bbc1a0 + 0x10;
                          _DAT_05233820 = 0x2c00000046;
                          _DAT_05233830 = 0x330000004f;
                          DAT_05233828 = DAT_05233818;
                          FUN_001001d0(PTR_FUN_04bb2038,&DAT_05233810,&__DT_FINI_ARRAY);
                          __cxa_guard_release(&DAT_05233838);
                        }
                        if (((DAT_05233820 <= (int)uStack_1c170) &&
                            ((int)uStack_1c170 <= DAT_05233830)) &&
                           (DAT_05233824 <= (int)uStack_1c16c)) {
                          if ((int)uStack_1c16c <= DAT_05233834) break;
                        }
                        fVar29 = (float)(int)uStack_1c170 * 0.5;
                        fVar28 = (float)(int)uStack_1c16c * 0.5;
                        uVar16 = (ulong)local_10a8 >> 0x20;
                        local_10a8 = (uint **)(uVar16 << 0x20);
                        uVar15 = 0;
                        if (fVar29 != (float)(int)fVar29) {
                          uVar15 = (uint)(fVar29 < 0.0);
                        }
                        uVar22 = 0;
                        if (fVar28 != (float)(int)fVar28) {
                          uVar22 = (uint)(fVar28 < 0.0);
                        }
                        iVar14 = (int)fVar29 - uVar15;
                        lVar20 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
                        iVar19 = (int)fVar28 - uVar22;
                        if ((lVar20 != 0) && (lVar20 = *(long *)(lVar20 + 0xb0), lVar20 != 0)) {
                          uVar15 = iVar14 - *(int *)(lVar20 + 0x28);
                          uVar22 = *(uint *)(lVar20 + 0x18);
                          uVar12 = iVar19 - *(int *)(lVar20 + 0x2c);
                          if ((uVar15 < uVar22 && uVar12 <= *(uint *)(lVar20 + 0x1c)) &&
                              (uVar22 <= uVar15 || *(uint *)(lVar20 + 0x1c) != uVar12)) {
                            uVar15 = uVar15 + uVar22 * uVar12;
LAB_016912ac:
                            if (*(uint *)(lVar20 + 0x30) <= uVar15) {
                              uVar15 = 0;
                            }
                            puVar25 = (undefined8 *)
                                      (*(long *)(lVar20 + 0x38) + (long)(int)uVar15 * 0x68);
                          }
                          else if (*(char *)(lVar20 + 0x88) == '\0') {
                            puVar25 = &DAT_051a50f0;
                          }
                          else {
                            uVar15 = iVar14 - *(int *)(lVar20 + 0x98);
                            uVar22 = iVar19 - *(int *)(lVar20 + 0x9c);
                            puVar25 = &DAT_051a50f0;
                            if (uVar15 < *(uint *)(lVar20 + 0xa0) &&
                                uVar22 < *(uint *)(lVar20 + 0xa4)) {
                              uVar15 = uVar15 + *(uint *)(lVar20 + 0xa0) * uVar22 +
                                       *(int *)(lVar20 + 0x8c);
                              goto LAB_016912ac;
                            }
                          }
                          if (*(char *)(puVar25 + 2) == '\x02') {
                            if (((DAT_05233970 <= (int)uStack_1c170) &&
                                ((int)uStack_1c170 <= DAT_05233980)) &&
                               ((DAT_05233974 <= (int)uStack_1c16c &&
                                ((int)uStack_1c16c <= DAT_05233984)))) {
                              uVar15 = (uStack_1c16c & 0x1fffffe) * 0x80 + ((int)uStack_1c170 >> 1);
                              if (uVar15 >> 0xf == 0) {
                                lVar20 = (ulong)(uVar15 >> 5) * 4;
                                *(uint *)((long)__s_00 + lVar20) =
                                     *(uint *)((long)__s_00 + lVar20) |
                                     1 << (ulong)(uStack_1c170 >> 1 & 0x1f);
                                lVar20 = (ulong)(uVar15 >> 5) * 4;
                                *(uint *)((long)__s_01 + lVar20) =
                                     *(uint *)((long)__s_01 + lVar20) |
                                     1 << (ulong)(uStack_1c170 >> 1 & 0x1f);
                              }
                            }
                            break;
                          }
                        }
                        local_10a8 = (uint **)(uVar16 << 0x20);
                        lVar20 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
                        if (lVar20 == 0) break;
                        lVar20 = *(long *)(lVar20 + 0xb0);
                        if (lVar20 == 0) break;
                        uVar15 = iVar14 - *(int *)(lVar20 + 0x28);
                        uVar22 = *(uint *)(lVar20 + 0x18);
                        uVar12 = iVar19 - *(int *)(lVar20 + 0x2c);
                        if ((uVar15 < uVar22 && uVar12 <= *(uint *)(lVar20 + 0x1c)) &&
                            (uVar22 <= uVar15 || *(uint *)(lVar20 + 0x1c) != uVar12)) {
                          uVar15 = uVar15 + uVar22 * uVar12;
LAB_0169140c:
                          if (*(uint *)(lVar20 + 0x30) <= uVar15) {
                            uVar15 = 0;
                          }
                          puVar25 = (undefined8 *)
                                    (*(long *)(lVar20 + 0x38) + (long)(int)uVar15 * 0x68);
                        }
                        else if (*(char *)(lVar20 + 0x88) == '\0') {
                          puVar25 = &DAT_051a50f0;
                        }
                        else {
                          uVar15 = iVar14 - *(int *)(lVar20 + 0x98);
                          uVar22 = iVar19 - *(int *)(lVar20 + 0x9c);
                          puVar25 = &DAT_051a50f0;
                          if (uVar15 < *(uint *)(lVar20 + 0xa0) && uVar22 < *(uint *)(lVar20 + 0xa4)
                             ) {
                            uVar15 = uVar15 + *(uint *)(lVar20 + 0xa0) * uVar22 +
                                     *(int *)(lVar20 + 0x8c);
                            goto LAB_0169140c;
                          }
                        }
                        if (*(char *)(puVar25 + 2) != '\x01') break;
                        if ((((int)DAT_05233850 <= (int)uStack_1c170) &&
                            ((int)uStack_1c170 <= (int)DAT_05233860)) &&
                           (DAT_05233850._4_4_ <= (int)uStack_1c16c)) {
                          if ((int)uStack_1c16c <= DAT_05233860._4_4_) break;
                        }
                        if (((DAT_05233898 & 1) == 0) &&
                           (iVar14 = __cxa_guard_acquire(&DAT_05233898), iVar14 != 0)) {
                          DAT_05233878 = puVar27 + 0x10;
                          DAT_05233870 = PTR_DAT_04bbc1a0 + 0x10;
                          _DAT_05233880 = 0x240000004a;
                          _DAT_05233890 = 0x4a00000063;
                          DAT_05233888 = DAT_05233878;
                          FUN_001001d0(PTR_FUN_04bb2038,&DAT_05233870,&__DT_FINI_ARRAY);
                          __cxa_guard_release(&DAT_05233898);
                        }
                        if (DAT_05233880 <= (int)uStack_1c170) {
                          if ((int)uStack_1c170 <= DAT_05233890) {
                            if (DAT_05233884 <= (int)uStack_1c16c) {
                              if ((((int)uStack_1c16c <= _DAT_05233894) &&
                                  (DAT_05233970 <= (int)uStack_1c170)) &&
                                 (((int)uStack_1c170 <= DAT_05233980 &&
                                  ((DAT_05233974 <= (int)uStack_1c16c &&
                                   ((int)uStack_1c16c <= DAT_05233984)))))) {
                                uVar15 = (uStack_1c16c & 0x1fffffe) * 0x80 +
                                         ((int)uStack_1c170 >> 1);
                                if ((uVar15 >> 0xf == 0) &&
                                   ((auStack_13148[uVar15 >> 5] >> (ulong)(uStack_1c170 >> 1 & 0x1f)
                                    & 1) != 0)) {
                                  FUN_01696154(param_1 + 0x1008,&puStack_1c178);
                                  FUN_01696154(param_1 + 0x2010,&puStack_1c178);
                                }
                              }
                            }
                          }
                        }
                        break;
                      }
                      if ((int)local_90 < *(int *)(local_a0 + 1)) {
                        local_90 = local_90 + 1;
                      }
                      else {
                        local_8c = local_8c + 1;
                        local_90 = *(uint *)(local_a8 + 1);
                      }
                      puVar27 = PTR_DAT_04bb2010;
                    } while (uVar15 != local_90 || uVar22 != local_8c);
                  }
                }
              }
            }
            iVar19 = local_10ac;
          }
          bVar1 = (int)uVar17 < iVar19;
          uVar17 = uVar17 + 1;
        } while (bVar1);
        iVar14 = local_10b0;
      }
      bVar1 = (int)uVar26 < iVar14;
      uVar26 = uVar26 + 1;
    } while (bVar1);
  }
  return;
}

