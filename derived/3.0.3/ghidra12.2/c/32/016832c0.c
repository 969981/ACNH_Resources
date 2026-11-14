
/* WARNING: Removing unreachable block (ram,0x01683fd0) */
/* WARNING: Removing unreachable block (ram,0x01683e3c) */
/* WARNING: Removing unreachable block (ram,0x01683e2c) */

undefined8 FUN_016832c0(long param_1)

{
  uint *puVar1;
  void *__s;
  void *__s_00;
  void *__s_01;
  void *__s_02;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  bool bVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  int local_5120 [2];
  undefined *local_5118;
  undefined8 uStack_5110;
  undefined *local_5108;
  uint local_5100;
  uint uStack_50fc;
  undefined *local_50f8;
  uint local_50f0;
  uint local_50ec;
  undefined *local_50e8;
  undefined *puStack_50e0;
  undefined8 local_50d8;
  undefined *local_50d0;
  undefined8 local_50c8;
  undefined *local_50c0;
  undefined *puStack_50b8;
  undefined8 local_50b0;
  undefined *puStack_50a8;
  undefined8 local_50a0;
  undefined *local_5098;
  uint auStack_5090 [4096];
  undefined *local_1090;
  undefined4 local_1088;
  undefined4 uStack_1084;
  byte local_1080;
  undefined8 local_1078;
  undefined8 local_1070;
  uint local_1068;
  int iStack_1064;
  int local_1058;
  int local_1054;
  
  __s = (void *)(param_1 + 8);
  memset(__s,0,0x4000);
  memset((void *)(param_1 + 0x4010),0,0x4000);
  memset((void *)(param_1 + 0x8018),0,0x4000);
  memset((void *)(param_1 + 0xc020),0,0x4000);
  memset((void *)(param_1 + 0x10028),0,0x4000);
  memset((void *)(param_1 + 0x14030),0,0x1000);
  memset((void *)(param_1 + 0x15038),0,0x1000);
  memset((void *)(param_1 + 0x16040),0,0x1000);
  memset((void *)(param_1 + 0x17048),0,0x1000);
  memset((void *)(param_1 + 0x18050),0,0x1000);
  memset((void *)(param_1 + 0x19058),0,0x1000);
  memset((void *)(param_1 + 0x1a060),0,0x1000);
  memset((void *)(param_1 + 0x1b068),0,0x1000);
  memset((void *)(param_1 + 0x1c070),0,0x1000);
  memset((void *)(param_1 + 0x1d078),0,0x1000);
  memset((void *)(param_1 + 0x1e080),0,0x1000);
  memset((void *)(param_1 + 0x1f088),0,0x1000);
  memset((void *)(param_1 + 0x20090),0,0x1000);
  memset((void *)(param_1 + 0x21098),0,0x1000);
  memset((void *)(param_1 + 0x220a0),0,0x1000);
  memset((void *)(param_1 + 0x230a8),0,0x1000);
  memset((void *)(param_1 + 0x240b0),0,0x1000);
  memset((void *)(param_1 + 0x250b8),0,0x1000);
  memset((void *)(param_1 + 0x260c0),0,0x1000);
  memset((void *)(param_1 + 0x270c8),0,0x1000);
  memset((void *)(param_1 + 0x280d0),0,0x1000);
  __s_00 = (void *)(param_1 + 0x290d8);
  memset(__s_00,0,0x1000);
  __s_01 = (void *)(param_1 + 0x2a0e0);
  memset(__s_01,0,0x1000);
  memset((void *)(param_1 + 0x2b0e8),0,0x1000);
  memset((void *)(param_1 + 0x2c0f0),0,0x1000);
  memset((void *)(param_1 + 0x2d0f8),0,0x1000);
  __s_02 = (void *)(param_1 + 0x2e100);
  memset(__s_02,0,0x1000);
  memset((void *)(param_1 + 0x2f108),0,0x1000);
  memset((void *)(param_1 + 0x30110),0,0x1000);
  *(undefined1 *)(param_1 + 0x321a0) = 0;
  memset((void *)(param_1 + 0x31118),0,0x1058);
  *(undefined1 *)(param_1 + 0x321a1) = 0;
  DAT_052338a0 = 3;
  DAT_052338a4 = 9;
  *(undefined8 *)(param_1 + 0x32170) = 0;
  *(undefined8 *)(param_1 + 0x32178) = 0;
  *(undefined8 *)(param_1 + 0x32180) = 0;
  *(undefined8 *)(param_1 + 0x32188) = 0;
  *(undefined8 *)(param_1 + 0x32190) = 0;
  *(undefined8 *)(param_1 + 0x32198) = 0;
  uStack_1084 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_1088 = 1;
  local_1080 = FUN_017baf44();
  local_1080 = local_1080 & 1;
  local_1090 = PTR_DAT_04bb6268 + 0x10;
  lVar14 = FUN_01a4fa00(&local_1090);
  uVar20 = *(uint *)(lVar14 + 0x10);
  uVar17 = *(uint *)(lVar14 + 0x14);
  iVar28 = *(int *)(lVar14 + 0x20);
  iVar27 = *(int *)(lVar14 + 0x24);
  local_5098 = PTR_DAT_04bbbc40 + 0x10;
  memset(auStack_5090,0,0x4000);
  local_50a0 = 0;
  local_50d8 = 0;
  local_50e8 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_50b0 = 0;
  local_50c8 = 0;
  puStack_50e0 = puVar2;
  local_50d0 = puVar2;
  local_50c0 = local_50e8;
  puStack_50b8 = puVar2;
  puStack_50a8 = puVar2;
  FUN_0125f884(&local_50c0,&local_50e8);
  uVar16 = iVar27 + 1;
  if (uVar16 != uVar17) {
    iVar27 = uVar17 + 0x20;
    puVar3 = PTR_DAT_04bc35c0 + 0x10;
    uVar26 = uVar20;
    do {
      local_50f8 = puVar2;
      local_50f0 = uVar26;
      local_50ec = uVar17;
      if ((((int)uVar26 < DAT_05233970 || DAT_05233980 < (int)uVar26) ||
          (uVar22 = uVar26 + uVar17 * 0x200,
          ((int)uVar17 < DAT_05233974 || DAT_05233984 < (int)uVar17) || uVar22 >> 0x11 != 0)) ||
         ((auStack_5090[uVar22 >> 5] >> (ulong)(uVar26 & 0x1f) & 1) == 0)) {
        uVar15 = FUN_0097ce60(&local_50f8);
        if ((uVar15 & 1) == 0) {
          if (iVar27 <= (int)local_50ec) {
            uVar15 = FUN_01675460(&local_50f8,0);
            if ((uVar15 & 1) == 0) {
              lVar14 = *(long *)PTR_DAT_04bb5c90;
              if ((!((int)local_50f0 < *(int *)(lVar14 + 0x28) ||
                    *(int *)(lVar14 + 0x38) < (int)local_50f0)) &&
                 (*(int *)(lVar14 + 0x2c) <= (int)local_50ec)) {
                if ((int)local_50ec <= *(int *)(lVar14 + 0x3c)) goto LAB_01683ae0;
              }
              uVar15 = FUN_0097ce60(&local_50f8);
              if ((uVar15 & 1) == 0) {
                if (((*(long *)PTR_DAT_04bb27c8 != 0) &&
                    (lVar14 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar14 != 0)) &&
                   ((-1 < (int)local_50f0 &&
                    ((((-1 < (int)local_50ec && (local_50f0 < *(uint *)(lVar14 + 0x38))) &&
                      (local_50ec < *(uint *)(lVar14 + 0x3c))) &&
                     ((uVar22 = local_50f0 + *(uint *)(lVar14 + 0x38) * local_50ec,
                      uVar22 < *(uint *)(lVar14 + 0x68) && (*(long *)(lVar14 + 0x70) != 0)))))))) {
                  local_1078 = (undefined *)CONCAT44(local_1078._4_4_,5);
                  if ((*(uint *)(*(long *)(lVar14 + 0x70) + (long)(int)uVar22 * 4) >> 5 & 1) != 0)
                  goto LAB_01683ae0;
                }
                if ((((int)local_50b0 <= (int)local_50f0) && ((int)local_50f0 <= (int)local_50a0))
                   && (local_50b0._4_4_ <= (int)local_50ec)) {
                  if ((int)local_50ec <= local_50a0._4_4_) goto LAB_01683ae0;
                }
                if ((((int)local_50d8 <= (int)local_50f0) && ((int)local_50f0 <= (int)local_50c8))
                   && (local_50d8._4_4_ <= (int)local_50ec)) {
                  if ((int)local_50ec <= local_50c8._4_4_) goto LAB_01683ae0;
                }
                uVar15 = FUN_0097d6c0(&local_50f8,0);
                if ((uVar15 & 1) == 0) {
                  local_5100 = local_50f0;
                  uStack_50fc = local_50ec;
                  local_5108 = PTR_DAT_04bb2010 + 0x10;
                  uVar15 = FUN_016771a0(&local_5108);
                  if ((uVar15 & 1) != 0) {
                    FUN_01696154(param_1 + 0x2b0e0,&local_50f8);
                    FUN_0137d59c(&local_1078,&local_50f8);
                    uVar15 = FUN_0097df30(&local_1078);
                    if ((uVar15 & 1) == 0) {
                      local_5118 = PTR_DAT_04bb2010 + 0x10;
                      uStack_5110 = 0;
                      FUN_01a5033c(local_5120,&local_1090,0,&local_50f8,&local_5118);
                      if ((short)local_5120[0] == -2) {
                        FUN_01695708(param_1,&local_50f8);
                      }
                      else {
                        uVar15 = FUN_0277d9a8(local_5120);
                        if (((uVar15 & 1) == 0) &&
                           (uVar15 = FUN_0277db54(local_5120), (uVar15 & 1) == 0)) {
                          local_1078 = puVar3;
                          iVar11 = FUN_0277d6c4(&local_1070);
                          if (6 < iVar11 - 0xf619U) goto LAB_01683ae0;
                        }
                        FUN_01a50900(&local_1078,local_5120,&local_50f8);
                        iVar12 = FUN_0277ebd0(local_5120);
                        iVar19 = DAT_05233984;
                        iVar10 = DAT_05233980;
                        iVar9 = DAT_05233974;
                        iVar8 = DAT_05233970;
                        iVar11 = local_1054 + 1;
                        if (iVar12 == 0) {
                          if (iVar11 != iStack_1064) {
                            iVar12 = iStack_1064;
                            uVar22 = local_1068;
                            do {
                              do {
                                if (((iVar8 <= (int)uVar22) && ((int)uVar22 <= iVar10)) &&
                                   ((iVar9 <= iVar12 && (iVar12 <= iVar19)))) {
                                  uVar5 = uVar22 + iVar12 * 0x200;
                                  uVar7 = 1 << (ulong)(uVar22 & 0x1f);
                                  if (uVar5 >> 0x11 == 0) {
                                    auStack_5090[uVar5 >> 5] = auStack_5090[uVar5 >> 5] | uVar7;
                                    lVar14 = (ulong)(uVar5 >> 5) * 4;
                                    *(uint *)((long)__s + lVar14) =
                                         *(uint *)((long)__s + lVar14) | uVar7;
                                  }
                                }
                                if ((int)uVar22 < local_1058) {
                                  uVar22 = uVar22 + 1;
                                }
                                else {
                                  iVar12 = iVar12 + 1;
                                  uVar22 = local_1068;
                                }
                              } while (local_1068 != uVar22);
                            } while (iVar11 != iVar12);
                          }
                        }
                        else if (iVar11 != iStack_1064) {
                          iVar12 = iStack_1064;
                          uVar22 = local_1068;
                          do {
                            if ((((iVar8 <= (int)uVar22) && ((int)uVar22 <= iVar10)) &&
                                (iVar9 <= iVar12)) &&
                               ((iVar12 <= iVar19 &&
                                (uVar5 = uVar22 + iVar12 * 0x200, uVar5 >> 0x11 == 0)))) {
                              uVar5 = uVar5 >> 5;
                              auStack_5090[uVar5] =
                                   auStack_5090[uVar5] | 1 << (ulong)(uVar22 & 0x1f);
                            }
                            if ((int)uVar22 < local_1058) {
                              uVar22 = uVar22 + 1;
                            }
                            else {
                              iVar12 = iVar12 + 1;
                              uVar22 = local_1068;
                            }
                          } while ((local_1068 != uVar22) || (iVar11 != iVar12));
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
LAB_01683ae0:
      if ((int)uVar26 < iVar28) {
        uVar26 = uVar26 + 1;
      }
      else {
        uVar17 = uVar17 + 1;
        uVar26 = uVar20;
      }
    } while ((uVar20 != uVar26) || (uVar16 != uVar17));
  }
  lVar14 = 8;
  uVar16 = 0;
  do {
    uVar20 = uVar16;
    puVar1 = (uint *)(param_1 + lVar14);
    lVar14 = lVar14 + 4;
    uVar16 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
    uVar17 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
    uVar17 = uVar17 + (uVar17 >> 8);
    uVar17 = uVar17 + (uVar17 >> 0x10);
    uVar16 = (uVar17 & 0x3f) + uVar20;
  } while (lVar14 != 0x4008);
  if (3 < uVar16) {
    iVar28 = 0;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    do {
      iVar28 = iVar28 + 1;
      local_1070 = 0;
      local_1078 = puVar2;
      uVar15 = FUN_01695c60(param_1,iVar28,&local_1078);
      if ((((((uVar15 & 1) != 0) && ((local_1070 & 1) == 0)) && ((local_1070 & 0x100000000) == 0))
          && ((uVar16 = (uint)local_1070 + 1, DAT_05233970 <= (int)uVar16 &&
              ((int)(uint)local_1070 < DAT_05233980)))) &&
         ((((DAT_05233974 <= (int)local_1070._4_4_ &&
            (((int)local_1070._4_4_ <= DAT_05233984 &&
             (uVar26 = uVar16 + local_1070._4_4_ * 0x200, uVar26 >> 0x11 == 0)))) &&
           (uVar22 = 1 << (ulong)(uVar16 & 0x1f),
           (*(uint *)((long)__s + (ulong)(uVar26 >> 5) * 4) & uVar22) != 0)) &&
          ((DAT_05233974 <= (int)(local_1070._4_4_ + 1) && ((int)local_1070._4_4_ < DAT_05233984))))
         )) {
        iVar27 = (local_1070._4_4_ + 1) * 0x200;
        uVar16 = iVar27 + uVar16;
        if (((uVar16 >> 0x11 == 0) &&
            ((((*(uint *)((long)__s + (ulong)(uVar16 >> 5) * 4) & uVar22) != 0 &&
              (DAT_05233970 <= (int)(uint)local_1070)) &&
             (uVar16 = iVar27 + (uint)local_1070, uVar16 >> 0x11 == 0)))) &&
           (((*(uint *)((long)__s + (ulong)(uVar16 >> 5) * 4) >> (ulong)((uint)local_1070 & 0x1f) &
             1) != 0 &&
            (uVar16 = (local_1070._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_1070 >> 1),
            uVar16 >> 0xf == 0)))) {
          lVar14 = (ulong)(uVar16 >> 5) * 4;
          *(uint *)((long)__s_02 + lVar14) =
               *(uint *)((long)__s_02 + lVar14) | 1 << (ulong)((uint)local_1070 >> 1 & 0x1f);
        }
      }
    } while (uVar20 + (uVar17 & 0x3f) != iVar28);
    lVar14 = 0;
    do {
      puVar1 = (uint *)(param_1 + 0x2b0e8 + lVar14);
      uVar17 = puVar1[0xc07];
      lVar4 = lVar14 + 8;
      uVar16 = puVar1[1];
      *(uint *)((long)&local_1078 + lVar14) = *puVar1 & puVar1[0xc06];
      *(uint *)((long)&local_1078 + lVar14 + 4) = uVar16 & uVar17;
      lVar14 = lVar4;
    } while (lVar4 != 0x1000);
    memcpy(__s_02,&local_1078,0x1000);
    puVar2 = PTR_DAT_04bb27a8;
    lVar14 = 0;
    iVar28 = 0;
    do {
      puVar1 = (uint *)((long)__s_02 + lVar14);
      lVar14 = lVar14 + 4;
      uVar16 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
      uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
      uVar16 = uVar16 + (uVar16 >> 8);
      iVar28 = (uVar16 + (uVar16 >> 0x10) & 0x3f) + iVar28;
    } while (lVar14 != 0x1000);
    if (iVar28 != 0) {
      iVar27 = 0;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      do {
        iVar27 = iVar27 + 1;
        local_1070 = 0;
        local_1078 = puVar3;
        uVar15 = FUN_01696a90(param_1 + 0x2e0f8,iVar27,&local_1078);
        iVar10 = DAT_05233984;
        iVar9 = DAT_05233980;
        iVar8 = DAT_05233974;
        iVar11 = DAT_05233970;
        if ((uVar15 & 1) != 0) {
          local_50f8 = (undefined *)CONCAT44(local_50f8._4_4_,1);
          fVar30 = (float)(int)(uint)local_1070 * 0.5;
          fVar29 = (float)(int)local_1070._4_4_ * 0.5;
          uVar16 = 0;
          if (fVar30 != (float)(int)fVar30) {
            uVar16 = (uint)(fVar30 < 0.0);
          }
          uVar17 = 0;
          if (fVar29 != (float)(int)fVar29) {
            uVar17 = (uint)(fVar29 < 0.0);
          }
          lVar14 = *(long *)(*(long *)puVar2 + 0x38);
          if (lVar14 == 0) {
            iVar19 = 0;
          }
          else {
            lVar14 = *(long *)(lVar14 + 0xb0);
            iVar19 = 0;
            if (lVar14 != 0) {
              uVar20 = ((int)fVar30 - uVar16) - *(int *)(lVar14 + 0x28);
              uVar26 = *(uint *)(lVar14 + 0x18);
              uVar22 = ((int)fVar29 - uVar17) - *(int *)(lVar14 + 0x2c);
              if ((uVar20 < uVar26 && uVar22 <= *(uint *)(lVar14 + 0x1c)) &&
                  (uVar26 <= uVar20 || *(uint *)(lVar14 + 0x1c) != uVar22)) {
                uVar20 = uVar20 + uVar26 * uVar22;
LAB_01683ebc:
                if (*(uint *)(lVar14 + 0x30) <= uVar20) {
                  uVar20 = 0;
                }
                puVar18 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)(int)uVar20 * 0x68);
              }
              else if (*(char *)(lVar14 + 0x88) == '\0') {
                puVar18 = &DAT_051a50f0;
              }
              else {
                uVar16 = ((int)fVar30 - uVar16) - *(int *)(lVar14 + 0x98);
                uVar17 = ((int)fVar29 - uVar17) - *(int *)(lVar14 + 0x9c);
                puVar18 = &DAT_051a50f0;
                if (uVar16 < *(uint *)(lVar14 + 0xa0) && uVar17 < *(uint *)(lVar14 + 0xa4)) {
                  uVar20 = uVar16 + *(uint *)(lVar14 + 0xa0) * uVar17 + *(int *)(lVar14 + 0x8c);
                  goto LAB_01683ebc;
                }
              }
              iVar19 = (int)*(char *)(puVar18 + 2);
            }
          }
          local_5118 = (undefined *)CONCAT44(local_5118._4_4_,iVar19);
          iVar21 = 0;
          bVar23 = true;
          iVar12 = -2;
          iVar24 = -2;
          do {
            do {
              if (iVar12 == 0 && iVar24 == 0) {
                iVar13 = 0;
                iVar25 = 0;
              }
              else {
                uVar16 = iVar12 + (uint)local_1070;
                iVar13 = iVar12;
                iVar25 = iVar24;
                if ((((int)uVar16 < DAT_05233970) || (DAT_05233980 < (int)uVar16)) ||
                   ((iVar6 = iVar24 + local_1070._4_4_, iVar6 < DAT_05233974 ||
                    (((DAT_05233984 < iVar6 ||
                      (uVar17 = (iVar6 * 0x80 & 0xffffff00U) + ((int)uVar16 >> 1),
                      uVar17 >> 0xf != 0)) ||
                     ((*(uint *)((long)__s_02 + (ulong)(uVar17 >> 5) * 4) >>
                       (ulong)(uVar16 >> 1 & 0x1f) & 1) == 0)))))) {
                  if (1 < iVar21) goto LAB_01684148;
                  bVar23 = false;
                }
                else {
                  local_50f8 = (undefined *)CONCAT44(local_50f8._4_4_,1);
                  fVar30 = (float)(int)uVar16 * 0.5;
                  fVar29 = (float)iVar6 * 0.5;
                  uVar16 = 0;
                  if (fVar30 != (float)(int)fVar30) {
                    uVar16 = (uint)(fVar30 < 0.0);
                  }
                  uVar17 = 0;
                  if (fVar29 != (float)(int)fVar29) {
                    uVar17 = (uint)(fVar29 < 0.0);
                  }
                  lVar14 = *(long *)(*(long *)puVar2 + 0x38);
                  local_5120[0] = 0;
                  if (lVar14 != 0) {
                    lVar14 = *(long *)(lVar14 + 0xb0);
                    local_5120[0] = 0;
                    if (lVar14 != 0) {
                      uVar20 = ((int)fVar30 - uVar16) - *(int *)(lVar14 + 0x28);
                      uVar26 = *(uint *)(lVar14 + 0x18);
                      uVar22 = ((int)fVar29 - uVar17) - *(int *)(lVar14 + 0x2c);
                      if ((uVar20 < uVar26 && uVar22 <= *(uint *)(lVar14 + 0x1c)) &&
                          (uVar26 <= uVar20 || *(uint *)(lVar14 + 0x1c) != uVar22)) {
                        uVar20 = uVar20 + uVar26 * uVar22;
LAB_01684080:
                        if (*(uint *)(lVar14 + 0x30) <= uVar20) {
                          uVar20 = 0;
                        }
                        puVar18 = (undefined8 *)
                                  (*(long *)(lVar14 + 0x38) + (long)(int)uVar20 * 0x68);
                      }
                      else if (*(char *)(lVar14 + 0x88) == '\0') {
                        puVar18 = &DAT_051a50f0;
                      }
                      else {
                        uVar16 = ((int)fVar30 - uVar16) - *(int *)(lVar14 + 0x98);
                        uVar17 = ((int)fVar29 - uVar17) - *(int *)(lVar14 + 0x9c);
                        puVar18 = &DAT_051a50f0;
                        if (uVar16 < *(uint *)(lVar14 + 0xa0) && uVar17 < *(uint *)(lVar14 + 0xa4))
                        {
                          uVar20 = uVar16 + *(uint *)(lVar14 + 0xa0) * uVar17 +
                                   *(int *)(lVar14 + 0x8c);
                          goto LAB_01684080;
                        }
                      }
                      local_5120[0] = (int)*(char *)(puVar18 + 2);
                    }
                  }
                  if (iVar19 == local_5120[0]) {
                    if (iVar12 == 0 || iVar24 == 0) {
                      iVar21 = iVar21 + 1;
                    }
                  }
                  else {
                    bVar23 = false;
                    iVar25 = 2;
                    if (iVar21 < 2) {
                      iVar25 = iVar24;
                    }
                    iVar13 = 2;
                    if (iVar21 < 2) {
                      iVar13 = iVar12;
                    }
                  }
                }
              }
              iVar12 = iVar13 + 2;
              iVar24 = iVar25;
            } while (iVar13 < 1);
            iVar24 = iVar25 + 2;
            iVar12 = -2;
          } while (iVar25 < 1);
          if ((((bVar23) && (DAT_05233970 <= (int)(uint)local_1070)) &&
              (((int)(uint)local_1070 <= DAT_05233980 &&
               ((DAT_05233974 <= (int)local_1070._4_4_ && ((int)local_1070._4_4_ <= DAT_05233984))))
              )) && (uVar16 = (local_1070._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_1070 >> 1),
                    uVar16 >> 0xf == 0)) {
            lVar14 = (ulong)(uVar16 >> 5) * 4;
            *(uint *)((long)__s_00 + lVar14) =
                 *(uint *)((long)__s_00 + lVar14) | 1 << (ulong)((uint)local_1070 >> 1 & 0x1f);
          }
          if (1 < iVar21) {
LAB_01684148:
            if ((((iVar11 <= (int)(uint)local_1070) && ((int)(uint)local_1070 <= iVar9)) &&
                (iVar8 <= (int)local_1070._4_4_)) &&
               (((int)local_1070._4_4_ <= iVar10 &&
                (uVar16 = (local_1070._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_1070 >> 1),
                uVar16 >> 0xf == 0)))) {
              lVar14 = (ulong)(uVar16 >> 5) * 4;
              *(uint *)((long)__s_01 + lVar14) =
                   *(uint *)((long)__s_01 + lVar14) | 1 << (ulong)((uint)local_1070 >> 1 & 0x1f);
            }
          }
        }
        if (iVar27 == iVar28) {
          return 1;
        }
      } while( true );
    }
  }
  return 0;
}

