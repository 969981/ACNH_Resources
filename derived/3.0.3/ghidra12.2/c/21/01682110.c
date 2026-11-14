
/* WARNING: Removing unreachable block (ram,0x01682ea8) */
/* WARNING: Removing unreachable block (ram,0x01682e98) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_01682110(long param_1)

{
  uint *puVar1;
  int iVar2;
  void *__s;
  void *__s_00;
  void *__s_01;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *__s_02;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  int iVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  undefined *local_40f8;
  undefined8 local_40f0;
  undefined8 local_40e8;
  undefined *local_40e0;
  undefined8 local_40d8;
  undefined4 local_40d0;
  undefined4 uStack_40cc;
  undefined *local_40c8;
  undefined8 local_40c0;
  undefined *local_40b8;
  uint local_40b0;
  uint uStack_40ac;
  undefined *local_40a8;
  undefined8 local_40a0;
  undefined *local_4098;
  uint auStack_4090 [4096];
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  byte local_80;
  
  __s = (void *)(param_1 + 8);
  memset(__s,0,0x4000);
  memset((void *)(param_1 + 0x4010),0,0x4000);
  memset((void *)(param_1 + 0x8018),0,0x4000);
  __s_02 = (void *)(param_1 + 0xc020);
  memset(__s_02,0,0x4000);
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
  memset((void *)(param_1 + 0x2a0e0),0,0x1000);
  __s_01 = (void *)(param_1 + 0x2b0e8);
  memset(__s_01,0,0x1000);
  memset((void *)(param_1 + 0x2c0f0),0,0x1000);
  memset((void *)(param_1 + 0x2d0f8),0,0x1000);
  memset((void *)(param_1 + 0x2e100),0,0x1000);
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
  uStack_84 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_88 = 1;
  local_80 = FUN_017baf44();
  local_80 = local_80 & 1;
  local_90 = PTR_DAT_04bb6268 + 0x10;
  lVar20 = FUN_01a4fa00(&local_90);
  uVar6 = *(uint *)(lVar20 + 0x10);
  iVar25 = *(int *)(lVar20 + 0x14);
  iVar7 = *(int *)(lVar20 + 0x20);
  local_4098 = PTR_DAT_04bbbc40 + 0x10;
  iVar26 = *(int *)(lVar20 + 0x24) + 1;
  memset(auStack_4090,0,0x4000);
  if (iVar26 != iVar25) {
    iVar2 = iVar25 + 0x20;
    puVar3 = PTR_DAT_04bc35c0 + 0x10;
    puVar4 = PTR_DAT_04bb2010 + 0x10;
    puVar5 = PTR_DAT_04bbc1a0 + 0x10;
    uVar22 = uVar6;
    do {
      local_40a0 = CONCAT44(iVar25,uVar22);
      local_40a8 = puVar4;
      if (((((int)uVar22 < DAT_05233970 || DAT_05233980 < (int)uVar22) ||
           (uVar17 = uVar22 + iVar25 * 0x200,
           (iVar25 < DAT_05233974 || DAT_05233984 < iVar25) || uVar17 >> 0x11 != 0)) ||
          ((auStack_4090[uVar17 >> 5] >> (ulong)(uVar22 & 0x1f) & 1) == 0)) && (iVar2 <= iVar25)) {
        local_40f0 = (undefined *)((ulong)local_40f0 & 0xffffffff00000000);
        local_40f8 = (undefined *)0x0;
        local_40c8 = (undefined *)CONCAT44(local_40c8._4_4_,1);
        local_40f8 = (undefined *)0x2;
        lVar20 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar20 == 0) || (*(long *)(lVar20 + 0x90) == 0)) ||
           (uVar21 = FUN_0094b728(lVar20 + 0x28,&local_40a8,&local_40f8), (uVar21 & 1) == 0)) {
          uVar21 = FUN_01675460(&local_40a8,0);
          if ((uVar21 & 1) == 0) {
            lVar20 = *(long *)PTR_DAT_04bb5c90;
            if (((((int)(uint)local_40a0 < *(int *)(lVar20 + 0x28)) ||
                 (*(int *)(lVar20 + 0x38) < (int)(uint)local_40a0)) ||
                (((int)local_40a0._4_4_ < *(int *)(lVar20 + 0x2c) ||
                 (*(int *)(lVar20 + 0x3c) < (int)local_40a0._4_4_)))) &&
               (uVar21 = FUN_0097ce60(&local_40a8), (uVar21 & 1) == 0)) {
              if (((((*(long *)PTR_DAT_04bb27c8 != 0) &&
                    (lVar20 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar20 != 0)) &&
                   (-1 < (int)(uint)local_40a0)) &&
                  ((-1 < (long)local_40a0 && ((uint)local_40a0 < *(uint *)(lVar20 + 0x38))))) &&
                 ((local_40a0._4_4_ < *(uint *)(lVar20 + 0x3c) &&
                  ((uVar17 = (uint)local_40a0 + *(uint *)(lVar20 + 0x38) * local_40a0._4_4_,
                   uVar17 < *(uint *)(lVar20 + 0x68) && (*(long *)(lVar20 + 0x70) != 0)))))) {
                local_40f8 = (undefined *)CONCAT44(local_40f8._4_4_,5);
                if ((*(uint *)(*(long *)(lVar20 + 0x70) + (long)(int)uVar17 * 4) >> 5 & 1) != 0)
                goto LAB_01682b30;
              }
              local_40b8 = PTR_DAT_04bb2010 + 0x10;
              local_40b0 = (uint)local_40a0;
              uStack_40ac = local_40a0._4_4_;
              uVar21 = FUN_016771a0(&local_40b8);
              if ((uVar21 & 1) != 0) {
                if ((((DAT_05233970 <= (int)(uint)local_40a0) &&
                     ((int)(uint)local_40a0 <= DAT_05233980)) &&
                    (DAT_05233974 <= (int)local_40a0._4_4_)) &&
                   (((int)local_40a0._4_4_ <= DAT_05233984 &&
                    (uVar17 = (local_40a0._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_40a0 >> 1),
                    uVar17 >> 0xf == 0)))) {
                  lVar20 = (ulong)(uVar17 >> 5) * 4;
                  *(uint *)((long)__s_01 + lVar20) =
                       *(uint *)((long)__s_01 + lVar20) | 1 << (ulong)((uint)local_40a0 >> 1 & 0x1f)
                  ;
                }
                local_40c8 = PTR_DAT_04bb2010 + 0x10;
                local_40c0 = 0;
                FUN_01a5033c(&local_40d0,&local_90,0,&local_40a8,&local_40c8);
                puVar10 = PTR_DAT_04bb43c0;
                if ((short)local_40d0 == -2) {
                  if (((DAT_05233970 <= (int)(uint)local_40a0) &&
                      ((((int)(uint)local_40a0 <= DAT_05233980 &&
                        (DAT_05233974 <= (int)local_40a0._4_4_)) &&
                       ((int)local_40a0._4_4_ <= DAT_05233984)))) &&
                     (uVar17 = (uint)local_40a0 + local_40a0._4_4_ * 0x200, uVar17 >> 0x11 == 0)) {
                    lVar20 = (ulong)(uVar17 >> 5) * 4;
                    *(uint *)((long)__s + lVar20) =
                         *(uint *)((long)__s + lVar20) | 1 << (ulong)((uint)local_40a0 & 0x1f);
                  }
                }
                else {
                  lVar20 = *(long *)PTR_DAT_04bb43c0;
                  uVar17 = FUN_0277d6c4(&local_40d0);
                  if (*(long *)puVar10 == 0) {
LAB_016828e4:
                    bVar15 = false;
                  }
                  else {
                    lVar20 = *(long *)(lVar20 + 0x57e58);
                    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                    if (*(uint *)(lVar20 + 0x1d8) <= uVar17) goto LAB_016828e4;
                    bVar15 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar17 * 8) != 0;
                  }
                  lVar20 = *(long *)PTR_DAT_04bbbc68;
                  bVar16 = false;
                  if (lVar20 != 0) {
                    if (((*(long *)(lVar20 + 0xb0) != 0) &&
                        (*(long *)(*(long *)(lVar20 + 0xb0) + 8) != 0)) &&
                       ((*(long *)(lVar20 + 0x488) != 0 &&
                        (((*(long *)(*(long *)(lVar20 + 0x488) + 8) != 0 &&
                          (*(long *)(lVar20 + 0x2b0) != 0)) &&
                         (*(long *)(*(long *)(lVar20 + 0x2b0) + 8) != 0)))))) {
                      uVar17 = FUN_0277d6c4(&local_40d0);
                      uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                      if (uVar17 < *(uint *)(lVar20 + 0x1d8)) {
                        bVar16 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar17 * 8) != 0;
                        goto LAB_01682964;
                      }
                    }
                    bVar16 = false;
                  }
LAB_01682964:
                  local_40f0 = (undefined *)CONCAT44(uStack_40cc,local_40d0);
                  local_40f8 = puVar3;
                  iVar18 = FUN_0277d6c4(&local_40f0);
                  if ((bVar15 || bVar16) || (iVar18 - 0xf619U < 7)) {
                    local_40e8 = 0;
                    local_40f0 = PTR_DAT_04bb2010 + 0x10;
                    local_40d8 = 0;
                    local_40f8 = puVar5;
                    local_40e0 = local_40f0;
                    FUN_0277f02c(&local_40d0,&local_40f8);
                    local_40e8 = CONCAT44(local_40e8._4_4_ + local_40c0._4_4_,
                                          (uint)local_40e8 + (int)local_40c0);
                    local_40d8 = CONCAT44(local_40d8._4_4_ + local_40c0._4_4_,
                                          (int)local_40d8 + (int)local_40c0);
                    iVar19 = FUN_0277ebd0(&local_40d0);
                    iVar14 = DAT_05233984;
                    iVar13 = DAT_05233980;
                    iVar12 = DAT_05233974;
                    iVar11 = DAT_05233970;
                    iVar18 = local_40d8._4_4_ + 1;
                    if (iVar19 == 0) {
                      if (iVar18 != local_40e8._4_4_) {
                        iVar19 = local_40e8._4_4_;
                        uVar17 = (uint)local_40e8;
                        do {
                          if (((iVar11 <= (int)uVar17) && ((int)uVar17 <= iVar13)) &&
                             ((iVar12 <= iVar19 &&
                              ((iVar19 <= iVar14 &&
                               (uVar23 = uVar17 + iVar19 * 0x200, uVar23 >> 0x11 == 0)))))) {
                            lVar20 = (ulong)(uVar23 >> 5) * 4;
                            *(uint *)((long)__s + lVar20) =
                                 *(uint *)((long)__s + lVar20) | 1 << (ulong)(uVar17 & 0x1f);
                            auStack_4090[uVar23 >> 5] =
                                 auStack_4090[uVar23 >> 5] | 1 << (ulong)(uVar17 & 0x1f);
                          }
                          if ((int)uVar17 < (int)local_40d8) {
                            uVar17 = uVar17 + 1;
                          }
                          else {
                            iVar19 = iVar19 + 1;
                            uVar17 = (uint)local_40e8;
                          }
                        } while (((uint)local_40e8 != uVar17) || (iVar18 != iVar19));
                      }
                    }
                    else if (iVar18 != local_40e8._4_4_) {
                      iVar19 = local_40e8._4_4_;
                      uVar17 = (uint)local_40e8;
                      do {
                        if ((((iVar11 <= (int)uVar17) && ((int)uVar17 <= iVar13)) &&
                            (iVar12 <= iVar19)) &&
                           ((iVar19 <= iVar14 &&
                            (uVar23 = uVar17 + iVar19 * 0x200, uVar23 >> 0x11 == 0)))) {
                          uVar23 = uVar23 >> 5;
                          auStack_4090[uVar23] = auStack_4090[uVar23] | 1 << (ulong)(uVar17 & 0x1f);
                        }
                        if ((int)uVar17 < (int)local_40d8) {
                          uVar17 = uVar17 + 1;
                        }
                        else {
                          iVar19 = iVar19 + 1;
                          uVar17 = (uint)local_40e8;
                        }
                      } while (((uint)local_40e8 != uVar17) || (iVar18 != iVar19));
                    }
                  }
                }
              }
            }
          }
        }
        else if (((DAT_05233970 <= (int)(uint)local_40a0) && ((int)(uint)local_40a0 <= DAT_05233980)
                 ) && ((DAT_05233974 <= (int)local_40a0._4_4_ &&
                       (((int)local_40a0._4_4_ <= DAT_05233984 &&
                        (uVar17 = (local_40a0._4_4_ & 0x1fffffe) * 0x80 +
                                  ((int)(uint)local_40a0 >> 1), uVar17 >> 0xf == 0)))))) {
          lVar20 = (ulong)(uVar17 >> 5) * 4;
          *(uint *)((long)__s_00 + lVar20) =
               *(uint *)((long)__s_00 + lVar20) | 1 << (ulong)((uint)local_40a0 >> 1 & 0x1f);
        }
      }
LAB_01682b30:
      if ((int)uVar22 < iVar7) {
        uVar22 = uVar22 + 1;
      }
      else {
        iVar25 = iVar25 + 1;
        uVar22 = uVar6;
      }
    } while ((uVar6 != uVar22) || (iVar26 != iVar25));
  }
  puVar3 = PTR_DAT_04bb2010;
  lVar20 = 8;
  uVar6 = 0;
  do {
    uVar17 = uVar6;
    puVar1 = (uint *)(param_1 + lVar20);
    lVar20 = lVar20 + 4;
    uVar6 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar22 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
    uVar22 = uVar22 + (uVar22 >> 8);
    uVar22 = uVar22 + (uVar22 >> 0x10);
    uVar6 = (uVar22 & 0x3f) + uVar17;
  } while (lVar20 != 0x4008);
  if (3 < uVar6) {
    iVar26 = 0;
    puVar4 = PTR_DAT_04bb2010 + 0x10;
    puVar5 = PTR_DAT_04bbc1a0 + 0x10;
    do {
      iVar26 = iVar26 + 1;
      local_40a0 = 0;
      local_40a8 = puVar4;
      uVar21 = FUN_01695c60(param_1,iVar26,&local_40a8);
      if ((((uVar21 & 1) != 0) && ((local_40a0 & 1) == 0)) && ((local_40a0 & 0x100000000) == 0)) {
        local_40f0 = puVar3 + 0x10;
        local_40e8 = local_40a0;
        local_40d8 = CONCAT44(local_40a0._4_4_ + 1,(uint)local_40a0 + 1);
        local_40f8 = puVar5;
        local_40e0 = local_40f0;
        if (((*(long *)PTR_DAT_04bb27c8 != 0) &&
            (lVar20 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar20 != 0)) &&
           (uVar21 = FUN_00971f80(lVar20,&local_40f8,0), (uVar21 & 1) != 0)) {
          uVar6 = (uint)local_40a0 + 1;
          if (((DAT_05233970 <= (int)uVar6) && ((int)(uint)local_40a0 < DAT_05233980)) &&
             ((DAT_05233974 <= (int)local_40a0._4_4_ && ((int)local_40a0._4_4_ <= DAT_05233984)))) {
            uVar23 = local_40a0._4_4_ * 0x200 + uVar6;
            if ((((uVar23 >> 0x11 == 0) &&
                 (uVar8 = 1 << (ulong)(uVar6 & 0x1f),
                 (*(uint *)((long)__s + (ulong)(uVar23 >> 5) * 4) & uVar8) != 0)) &&
                (DAT_05233974 <= (int)(local_40a0._4_4_ + 1))) &&
               ((int)local_40a0._4_4_ < DAT_05233984)) {
              iVar25 = (local_40a0._4_4_ + 1) * 0x200;
              uVar6 = iVar25 + uVar6;
              if (((uVar6 >> 0x11 == 0) &&
                  ((*(uint *)((long)__s + (ulong)(uVar6 >> 5) * 4) & uVar8) != 0)) &&
                 ((DAT_05233970 <= (int)(uint)local_40a0 &&
                  (((uVar6 = iVar25 + (uint)local_40a0, uVar6 >> 0x11 == 0 &&
                    (uVar23 = 1 << (ulong)((uint)local_40a0 & 0x1f),
                    (*(uint *)((long)__s + (ulong)(uVar6 >> 5) * 4) & uVar23) != 0)) &&
                   (uVar6 = local_40a0._4_4_ * 0x200 + (uint)local_40a0, uVar6 >> 0x11 == 0)))))) {
                lVar20 = (ulong)(uVar6 >> 5) * 4;
                *(uint *)((long)__s_02 + lVar20) = *(uint *)((long)__s_02 + lVar20) | uVar23;
              }
            }
          }
        }
      }
      puVar10 = PTR_DAT_04bb27a8;
    } while (uVar17 + (uVar22 & 0x3f) != iVar26);
    lVar20 = 0;
    iVar26 = 0;
    do {
      iVar25 = iVar26;
      puVar1 = (uint *)((long)__s_00 + lVar20);
      lVar20 = lVar20 + 4;
      uVar6 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      uVar6 = uVar6 + (uVar6 >> 0x10);
      iVar26 = (uVar6 & 0x3f) + iVar25;
    } while (lVar20 != 0x1000);
    if (iVar26 != 0) {
      local_40c8 = (undefined *)((ulong)local_40c8 & 0xffffffff00000000);
      iVar26 = 0;
      do {
        iVar26 = iVar26 + 1;
        local_40f0 = (undefined *)0x0;
        local_40f8 = puVar3 + 0x10;
        uVar21 = FUN_01696a90(param_1 + 0x290d0,iVar26,&local_40f8);
        if ((((uVar21 & 1) != 0) && (((ulong)local_40f0 & 1) == 0)) &&
           (((ulong)local_40f0 & 0x100000000) == 0)) {
          local_40a8 = (undefined *)CONCAT44(local_40a8._4_4_,1);
          fVar28 = (float)(int)local_40f0 * 0.5;
          fVar27 = (float)local_40f0._4_4_ * 0.5;
          uVar22 = 0;
          if (fVar28 != (float)(int)fVar28) {
            uVar22 = (uint)(fVar28 < 0.0);
          }
          uVar17 = 0;
          if (fVar27 != (float)(int)fVar27) {
            uVar17 = (uint)(fVar27 < 0.0);
          }
          if ((*(long *)(*(long *)puVar10 + 0x38) == 0) ||
             (lVar20 = *(long *)(*(long *)(*(long *)puVar10 + 0x38) + 0xb0), lVar20 == 0)) {
            lVar20 = 0;
          }
          else {
            uVar23 = ((int)fVar28 - uVar22) - *(int *)(lVar20 + 0x28);
            uVar8 = *(uint *)(lVar20 + 0x18);
            uVar9 = ((int)fVar27 - uVar17) - *(int *)(lVar20 + 0x2c);
            if ((uVar23 < uVar8 && uVar9 <= *(uint *)(lVar20 + 0x1c)) &&
                (uVar8 <= uVar23 || *(uint *)(lVar20 + 0x1c) != uVar9)) {
              uVar23 = uVar23 + uVar8 * uVar9;
LAB_01682f28:
              if (*(uint *)(lVar20 + 0x30) <= uVar23) {
                uVar23 = 0;
              }
              puVar24 = (undefined8 *)(*(long *)(lVar20 + 0x38) + (long)(int)uVar23 * 0x68);
            }
            else if (*(char *)(lVar20 + 0x88) == '\0') {
              puVar24 = &DAT_051a50f0;
            }
            else {
              uVar22 = ((int)fVar28 - uVar22) - *(int *)(lVar20 + 0x98);
              uVar17 = ((int)fVar27 - uVar17) - *(int *)(lVar20 + 0x9c);
              puVar24 = &DAT_051a50f0;
              if (uVar22 < *(uint *)(lVar20 + 0xa0) && uVar17 < *(uint *)(lVar20 + 0xa4)) {
                uVar23 = uVar22 + *(uint *)(lVar20 + 0xa0) * uVar17 + *(int *)(lVar20 + 0x8c);
                goto LAB_01682f28;
              }
            }
            lVar20 = (long)*(char *)(puVar24 + 2);
          }
          FUN_01681c18(param_1,&local_40f8,&local_40f8,lVar20,1,0,&local_40c8);
        }
        if (iVar25 + (uVar6 & 0x3f) == iVar26) {
          lVar20 = 0;
          iVar26 = 0;
          do {
            uVar6 = *(uint *)(param_1 + 0x10028 + lVar20);
            lVar20 = lVar20 + 4;
            uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
            uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
            uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
            uVar6 = uVar6 + (uVar6 >> 8);
            iVar26 = (uVar6 + (uVar6 >> 0x10) & 0x3f) + iVar26;
          } while (lVar20 != 0x4000);
          return iVar26 != 0;
        }
      } while( true );
    }
  }
  return false;
}

