
/* WARNING: Removing unreachable block (ram,0x01212e30) */
/* WARNING: Removing unreachable block (ram,0x01212a08) */
/* WARNING: Removing unreachable block (ram,0x012131fc) */
/* WARNING: Removing unreachable block (ram,0x01213178) */
/* WARNING: Removing unreachable block (ram,0x01213590) */
/* WARNING: Removing unreachable block (ram,0x01212420) */
/* WARNING: Removing unreachable block (ram,0x012123f4) */
/* WARNING: Removing unreachable block (ram,0x01212320) */
/* WARNING: Removing unreachable block (ram,0x01212414) */
/* WARNING: Removing unreachable block (ram,0x01213180) */
/* WARNING: Removing unreachable block (ram,0x01213e08) */
/* WARNING: Removing unreachable block (ram,0x01213988) */
/* WARNING: Removing unreachable block (ram,0x012130ec) */
/* WARNING: Removing unreachable block (ram,0x01213588) */
/* WARNING: Removing unreachable block (ram,0x01212e28) */
/* WARNING: Removing unreachable block (ram,0x01212a84) */
/* WARNING: Removing unreachable block (ram,0x01212a00) */
/* WARNING: Removing unreachable block (ram,0x01213e00) */
/* WARNING: Removing unreachable block (ram,0x01212960) */
/* WARNING: Removing unreachable block (ram,0x01213980) */
/* WARNING: Removing unreachable block (ram,0x01213bc0) */
/* WARNING: Removing unreachable block (ram,0x01213bb8) */

void FUN_01212220(long param_1,int param_2,uint param_3,uint *param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,long param_10)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  ulong uVar22;
  ushort uVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  undefined4 *puVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  undefined8 *puVar32;
  uint uVar33;
  uint uVar34;
  long lVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined4 local_5128;
  undefined4 uStack_5124;
  short local_5120 [4];
  undefined1 auStack_5118 [8];
  uint local_5110;
  uint local_510c;
  undefined8 local_5108;
  undefined8 local_5100;
  uint local_50f8;
  uint uStack_50f4;
  undefined *local_50f0;
  int local_50e8;
  int local_50e4;
  undefined8 local_50e0;
  char *local_50d8 [2048];
  undefined1 auStack_10d8 [8];
  undefined1 auStack_10d0 [8];
  undefined8 local_10c8;
  undefined4 local_10c0;
  undefined4 uStack_10bc;
  undefined *local_10b8;
  uint local_10b0;
  uint local_10ac;
  undefined *local_10a8;
  uint local_10a0 [1024];
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  
  if (*param_4 < param_5) {
    local_98 = 1;
    local_94 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
    local_90 = FUN_017baf44();
    local_90 = local_90 & 1;
    local_a0 = PTR_DAT_04bb6268 + 0x10;
    lVar21 = FUN_01a4fa00(&local_a0);
    local_50e0 = (undefined **)CONCAT44(local_50e0._4_4_,0x13);
    local_10a8 = PTR_DAT_04bbdd38 + 0x10;
    memset(local_10a0,0,0x1000);
    lVar27 = 0;
    do {
      puVar9 = (uint *)(param_1 + 0x270c8 + lVar27);
      uVar11 = *(uint *)((long)local_10a0 + lVar27 + 4);
      lVar2 = lVar27 + 8;
      uVar33 = puVar9[1];
      *(uint *)((long)local_50d8 + lVar27 + -8) = *puVar9 | *(uint *)((long)local_10a0 + lVar27);
      *(uint *)((long)local_50d8 + lVar27 + -4) = uVar33 | uVar11;
      lVar27 = lVar2;
    } while (lVar2 != 0x1000);
    memcpy(local_10a0,&local_50e0,0x1000);
    puVar17 = PTR_DAT_04bb2020;
    local_50e0 = (undefined **)CONCAT44(local_50e0._4_4_,0x1a);
    uVar33 = *(uint *)(lVar21 + 0x14);
    uVar11 = *(int *)(lVar21 + 0x24) + 1;
    if (uVar11 != uVar33) {
      uVar12 = *(uint *)(lVar21 + 0x10);
      lVar27 = param_1 + 0x2e100;
      lVar2 = param_1 + 0x16040;
      lVar3 = param_10 + 8;
      puVar4 = PTR_DAT_04bbbad8 + 0x10;
      puVar5 = PTR_DAT_04bb2018 + 0x10;
      puVar6 = PTR_DAT_04bbc1a0 + 0x10;
      puVar7 = PTR_DAT_04bb2010 + 0x10;
      uVar34 = uVar12;
      do {
        if ((((((uVar34 | uVar33) & 1) == 0) &&
             (DAT_05233970 <= (int)uVar34 && (int)uVar34 <= DAT_05233980)) &&
            (DAT_05233974 <= (int)uVar33)) && ((int)uVar33 <= DAT_05233984)) {
          uVar18 = (uVar33 & 0x1fffffe) * 0x80 + ((int)uVar34 >> 1);
          if ((uVar18 >> 0xf == 0) &&
             ((local_10a0[uVar18 >> 5] >> (ulong)(uVar34 >> 1 & 0x1f) & 1) != 0)) {
            local_10b8 = puVar4;
            local_10b0 = uVar34;
            local_10ac = uVar33;
            FUN_01a50240(&local_10c0,&local_a0,0,&local_10b8);
            lVar35 = *(long *)PTR_DAT_04bbbc68;
            if (lVar35 != 0) {
              if ((*(long *)(lVar35 + 0xb0) != 0) && (*(long *)(*(long *)(lVar35 + 0xb0) + 8) != 0))
              {
                if ((*(long *)(lVar35 + 0x488) != 0) &&
                   (*(long *)(*(long *)(lVar35 + 0x488) + 8) != 0)) {
                  if ((*(long *)(lVar35 + 0x2b0) != 0) &&
                     (*(long *)(*(long *)(lVar35 + 0x2b0) + 8) != 0)) {
                    uVar18 = FUN_0277d6c4(&local_10c0);
                    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                    if ((uVar18 < *(uint *)(lVar35 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
                      FUN_0124c030(auStack_10d8,&local_10c0);
                      iVar19 = FUN_0123db50(auStack_10d0,local_10c8);
                      if (iVar19 - 0x18U < 7) {
                        iVar19 = FUN_0124fd60(auStack_10d8);
                        if (((((param_3 & 1) == 0) || ((int)local_10b0 < DAT_05233970)) ||
                            (DAT_05233980 < (int)local_10b0)) ||
                           ((((int)local_10ac < DAT_05233974 || (DAT_05233984 < (int)local_10ac)) ||
                            (uVar18 = local_10b0 + local_10ac * 0x200, uVar18 >> 0x11 != 0)))) {
                          uVar18 = 0;
                          if (iVar19 != 3) goto LAB_012126b4;
LAB_01212690:
                          uVar29 = param_9;
                          if (uVar18 == 0) {
                            uVar29 = 0x50;
                          }
                          puVar16 = puVar17;
                        }
                        else {
                          uVar18 = *(uint *)(param_1 + 0xc020 + (ulong)(uVar18 >> 5) * 4) >>
                                   (ulong)(local_10b0 & 0x1f) & 1;
                          if (iVar19 == 3) goto LAB_01212690;
LAB_012126b4:
                          if (iVar19 == 2) {
                            uVar25 = 10;
                            uVar29 = param_8;
                          }
                          else {
                            if (iVar19 != 1) goto LAB_012124d0;
                            uVar25 = param_6;
                            uVar29 = param_7;
                          }
                          if (uVar18 == 0) {
                            uVar29 = uVar25;
                          }
                          puVar16 = PTR_DAT_04bb2020;
                        }
                        local_50e0 = (undefined **)(puVar16 + 0x10);
                        local_50d8[0] = "RegulationType1";
                        uVar22 = FUN_0273f0a0(&local_50e0);
                        uVar18 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                        DAT_05582b70 = DAT_05582b74;
                        DAT_05582b74 = DAT_05582b78;
                        uVar18 = uVar18 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar18 ^ DAT_05582b7c;
                        DAT_05582b78 = DAT_05582b7c;
                        DAT_05582b7c = uVar18;
                        if ((uint)((ulong)uVar18 * 100 >> 0x20) <= uVar29 >> (uVar22 & 1)) {
                          local_50e0 = &PTR_LAB_04987210;
                          memset(local_50d8,0,0x4000);
                          fVar36 = (float)(int)local_10b0 * 0.5;
                          uVar18 = 0;
                          if (fVar36 != (float)(int)fVar36) {
                            uVar18 = (uint)(fVar36 < 0.0);
                          }
                          fVar37 = (float)(int)local_10ac * 0.5;
                          uVar29 = 0;
                          if (fVar37 != (float)(int)fVar37) {
                            uVar29 = (uint)(fVar37 < 0.0);
                          }
                          local_5100 = (undefined *)
                                       CONCAT44((int)fVar37 - uVar29,(int)fVar36 - uVar18);
                          lVar35 = *(long *)PTR_DAT_04bb27c8;
                          local_5108 = puVar5;
                          if ((lVar35 == 0) || (*(long *)(lVar35 + 0x90) == 0)) {
                            fVar36 = -500.0;
                          }
                          else {
                            fVar36 = (float)FUN_0094bce0(lVar35 + 0x28,&local_5108);
                          }
                          if (param_10 == 0) {
                            iVar19 = DAT_05233980;
                            iVar20 = -2;
                            iVar24 = DAT_05233970;
                            do {
                              uVar18 = local_10b0 - 2;
                              if (iVar24 <= (int)uVar18 && (int)uVar18 <= iVar19) {
                                iVar8 = iVar20 + local_10ac;
                                uVar29 = (iVar8 * 0x80 & 0xffffff00U) + ((int)uVar18 >> 1);
                                if (((DAT_05233974 <= iVar8 && iVar8 <= DAT_05233984) &&
                                     uVar29 >> 0xf == 0) &&
                                   ((*(uint *)(lVar2 + (ulong)(uVar29 >> 5) * 4) >>
                                     (ulong)(uVar18 >> 1 & 0x1f) & 1) != 0)) {
                                  local_5108 = (undefined *)CONCAT44(local_5108._4_4_,1);
                                  fVar38 = (float)(int)uVar18 * 0.5;
                                  fVar37 = (float)iVar8 * 0.5;
                                  uVar29 = 0;
                                  if (fVar38 != (float)(int)fVar38) {
                                    uVar29 = (uint)(fVar38 < 0.0);
                                  }
                                  uVar25 = 0;
                                  if (fVar37 != (float)(int)fVar37) {
                                    uVar25 = (uint)(fVar37 < 0.0);
                                  }
                                  iVar13 = (int)fVar38 - uVar29;
                                  iVar14 = (int)fVar37 - uVar25;
                                  if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) &&
                                     (lVar35 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38)
                                                        + 0xb0), lVar35 != 0)) {
                                    uVar29 = iVar13 - *(int *)(lVar35 + 0x28);
                                    uVar25 = *(uint *)(lVar35 + 0x18);
                                    uVar26 = iVar14 - *(int *)(lVar35 + 0x2c);
                                    if ((uVar29 < uVar25 && uVar26 <= *(uint *)(lVar35 + 0x1c)) &&
                                        (uVar25 <= uVar29 || *(uint *)(lVar35 + 0x1c) != uVar26)) {
                                      uVar29 = uVar29 + uVar25 * uVar26;
LAB_0121327c:
                                      if (*(uint *)(lVar35 + 0x30) <= uVar29) {
                                        uVar29 = 0;
                                      }
                                      puVar32 = (undefined8 *)
                                                (*(long *)(lVar35 + 0x38) + (long)(int)uVar29 * 0x68
                                                );
                                    }
                                    else if (*(char *)(lVar35 + 0x88) == '\0') {
                                      puVar32 = &DAT_051a50f0;
                                    }
                                    else {
                                      uVar29 = iVar13 - *(int *)(lVar35 + 0x98);
                                      uVar25 = iVar14 - *(int *)(lVar35 + 0x9c);
                                      puVar32 = &DAT_051a50f0;
                                      if (uVar29 < *(uint *)(lVar35 + 0xa0) &&
                                          uVar25 < *(uint *)(lVar35 + 0xa4)) {
                                        uVar29 = uVar29 + *(uint *)(lVar35 + 0xa0) * uVar25 +
                                                 *(int *)(lVar35 + 0x8c);
                                        goto LAB_0121327c;
                                      }
                                    }
                                    if (*(char *)(puVar32 + 2) == '\x03') goto LAB_0121301c;
                                  }
                                  local_5108 = PTR_DAT_04bb2018 + 0x10;
                                  local_5100 = (undefined *)CONCAT44(iVar14,iVar13);
                                  lVar35 = *(long *)PTR_DAT_04bb27c8;
                                  if ((lVar35 == 0) || (*(long *)(lVar35 + 0x90) == 0)) {
                                    fVar37 = -500.0;
                                  }
                                  else {
                                    fVar37 = (float)FUN_0094bce0(lVar35 + 0x28,&local_5108);
                                    iVar19 = DAT_05233980;
                                    iVar24 = DAT_05233970;
                                  }
                                  if ((((-5.0 <= fVar37 - fVar36) && (fVar37 - fVar36 <= 5.0)) &&
                                      (iVar24 <= (int)uVar18)) &&
                                     ((((int)uVar18 <= iVar19 && (DAT_05233974 <= iVar8)) &&
                                      ((iVar8 <= DAT_05233984 &&
                                       (uVar29 = uVar18 + iVar8 * 0x200, uVar29 >> 0x11 == 0)))))) {
                                    uVar22 = (ulong)(uVar29 >> 5);
                                    *(uint *)((long)local_50d8 + uVar22 * 4) =
                                         *(uint *)((long)local_50d8 + uVar22 * 4) |
                                         1 << (ulong)(uVar18 & 0x1f);
                                  }
                                }
                              }
LAB_0121301c:
                              uVar18 = local_10b0;
                              if (((iVar20 != 0) && (iVar24 <= (int)local_10b0)) &&
                                 (((int)local_10b0 <= iVar19 &&
                                  ((((iVar8 = iVar20 + local_10ac, DAT_05233974 <= iVar8 &&
                                     (iVar8 <= DAT_05233984)) &&
                                    (uVar29 = (iVar8 * 0x80 & 0xffffff00U) + ((int)local_10b0 >> 1),
                                    uVar29 >> 0xf == 0)) &&
                                   ((*(uint *)(lVar2 + (ulong)(uVar29 >> 5) * 4) >>
                                     (ulong)(local_10b0 >> 1 & 0x1f) & 1) != 0)))))) {
                                local_5108 = (undefined *)CONCAT44(local_5108._4_4_,1);
                                fVar38 = (float)(int)local_10b0 * 0.5;
                                fVar37 = (float)iVar8 * 0.5;
                                uVar29 = 0;
                                if (fVar38 != (float)(int)fVar38) {
                                  uVar29 = (uint)(fVar38 < 0.0);
                                }
                                uVar25 = 0;
                                if (fVar37 != (float)(int)fVar37) {
                                  uVar25 = (uint)(fVar37 < 0.0);
                                }
                                iVar13 = (int)fVar38 - uVar29;
                                iVar14 = (int)fVar37 - uVar25;
                                if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) &&
                                   (lVar35 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) +
                                                      0xb0), lVar35 != 0)) {
                                  uVar29 = iVar13 - *(int *)(lVar35 + 0x28);
                                  uVar25 = *(uint *)(lVar35 + 0x18);
                                  uVar26 = iVar14 - *(int *)(lVar35 + 0x2c);
                                  if ((uVar29 < uVar25 && uVar26 <= *(uint *)(lVar35 + 0x1c)) &&
                                      (uVar25 <= uVar29 || *(uint *)(lVar35 + 0x1c) != uVar26)) {
                                    uVar29 = uVar29 + uVar25 * uVar26;
LAB_0121329c:
                                    if (*(uint *)(lVar35 + 0x30) <= uVar29) {
                                      uVar29 = 0;
                                    }
                                    puVar32 = (undefined8 *)
                                              (*(long *)(lVar35 + 0x38) + (long)(int)uVar29 * 0x68);
                                  }
                                  else if (*(char *)(lVar35 + 0x88) == '\0') {
                                    puVar32 = &DAT_051a50f0;
                                  }
                                  else {
                                    uVar29 = iVar13 - *(int *)(lVar35 + 0x98);
                                    uVar25 = iVar14 - *(int *)(lVar35 + 0x9c);
                                    puVar32 = &DAT_051a50f0;
                                    if (uVar29 < *(uint *)(lVar35 + 0xa0) &&
                                        uVar25 < *(uint *)(lVar35 + 0xa4)) {
                                      uVar29 = uVar29 + *(uint *)(lVar35 + 0xa0) * uVar25 +
                                               *(int *)(lVar35 + 0x8c);
                                      goto LAB_0121329c;
                                    }
                                  }
                                  if (*(char *)(puVar32 + 2) == '\x03') goto LAB_012134b8;
                                }
                                local_5108 = PTR_DAT_04bb2018 + 0x10;
                                local_5100 = (undefined *)CONCAT44(iVar14,iVar13);
                                lVar35 = *(long *)PTR_DAT_04bb27c8;
                                if ((lVar35 == 0) || (*(long *)(lVar35 + 0x90) == 0)) {
                                  fVar37 = -500.0;
                                }
                                else {
                                  fVar37 = (float)FUN_0094bce0(lVar35 + 0x28,&local_5108);
                                  iVar19 = DAT_05233980;
                                  iVar24 = DAT_05233970;
                                }
                                if ((((-5.0 <= fVar37 - fVar36) && (fVar37 - fVar36 <= 5.0)) &&
                                    (iVar24 <= (int)uVar18)) &&
                                   ((((int)uVar18 <= iVar19 && (DAT_05233974 <= iVar8)) &&
                                    ((iVar8 <= DAT_05233984 &&
                                     (uVar29 = uVar18 + iVar8 * 0x200, uVar29 >> 0x11 == 0)))))) {
                                  uVar22 = (ulong)(uVar29 >> 5);
                                  *(uint *)((long)local_50d8 + uVar22 * 4) =
                                       *(uint *)((long)local_50d8 + uVar22 * 4) |
                                       1 << (ulong)(uVar18 & 0x1f);
                                }
                              }
LAB_012134b8:
                              uVar18 = local_10b0 + 2;
                              if (((iVar24 <= (int)uVar18) && ((int)uVar18 <= iVar19)) &&
                                 ((iVar8 = iVar20 + local_10ac, DAT_05233974 <= iVar8 &&
                                  (((iVar8 <= DAT_05233984 &&
                                    (uVar29 = (iVar8 * 0x80 & 0xffffff00U) + ((int)uVar18 >> 1),
                                    uVar29 >> 0xf == 0)) &&
                                   ((*(uint *)(lVar2 + (ulong)(uVar29 >> 5) * 4) >>
                                     (ulong)(uVar18 >> 1 & 0x1f) & 1) != 0)))))) {
                                local_5108 = (undefined *)CONCAT44(local_5108._4_4_,1);
                                fVar38 = (float)(int)uVar18 * 0.5;
                                fVar37 = (float)iVar8 * 0.5;
                                uVar29 = 0;
                                if (fVar38 != (float)(int)fVar38) {
                                  uVar29 = (uint)(fVar38 < 0.0);
                                }
                                uVar25 = 0;
                                if (fVar37 != (float)(int)fVar37) {
                                  uVar25 = (uint)(fVar37 < 0.0);
                                }
                                iVar13 = (int)fVar38 - uVar29;
                                iVar14 = (int)fVar37 - uVar25;
                                if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) &&
                                   (lVar35 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) +
                                                      0xb0), lVar35 != 0)) {
                                  uVar29 = iVar13 - *(int *)(lVar35 + 0x28);
                                  uVar25 = *(uint *)(lVar35 + 0x18);
                                  uVar26 = iVar14 - *(int *)(lVar35 + 0x2c);
                                  if ((uVar29 < uVar25 && uVar26 <= *(uint *)(lVar35 + 0x1c)) &&
                                      (uVar25 <= uVar29 || *(uint *)(lVar35 + 0x1c) != uVar26)) {
                                    uVar29 = uVar29 + uVar25 * uVar26;
LAB_01213610:
                                    if (*(uint *)(lVar35 + 0x30) <= uVar29) {
                                      uVar29 = 0;
                                    }
                                    puVar32 = (undefined8 *)
                                              (*(long *)(lVar35 + 0x38) + (long)(int)uVar29 * 0x68);
                                  }
                                  else if (*(char *)(lVar35 + 0x88) == '\0') {
                                    puVar32 = &DAT_051a50f0;
                                  }
                                  else {
                                    uVar29 = iVar13 - *(int *)(lVar35 + 0x98);
                                    uVar25 = iVar14 - *(int *)(lVar35 + 0x9c);
                                    puVar32 = &DAT_051a50f0;
                                    if (uVar29 < *(uint *)(lVar35 + 0xa0) &&
                                        uVar25 < *(uint *)(lVar35 + 0xa4)) {
                                      uVar29 = uVar29 + *(uint *)(lVar35 + 0xa0) * uVar25 +
                                               *(int *)(lVar35 + 0x8c);
                                      goto LAB_01213610;
                                    }
                                  }
                                  if (*(char *)(puVar32 + 2) == '\x03') goto LAB_01212fcc;
                                }
                                local_5108 = PTR_DAT_04bb2018 + 0x10;
                                local_5100 = (undefined *)CONCAT44(iVar14,iVar13);
                                lVar35 = *(long *)PTR_DAT_04bb27c8;
                                if ((lVar35 == 0) || (*(long *)(lVar35 + 0x90) == 0)) {
                                  fVar37 = -500.0;
                                }
                                else {
                                  fVar37 = (float)FUN_0094bce0(lVar35 + 0x28,&local_5108);
                                  iVar19 = DAT_05233980;
                                  iVar24 = DAT_05233970;
                                }
                                if ((((((-5.0 <= fVar37 - fVar36) && (fVar37 - fVar36 <= 5.0)) &&
                                      (iVar24 <= (int)uVar18)) &&
                                     (((int)uVar18 <= iVar19 && (DAT_05233974 <= iVar8)))) &&
                                    (iVar8 <= DAT_05233984)) &&
                                   (uVar29 = uVar18 + iVar8 * 0x200, uVar29 >> 0x11 == 0)) {
                                  uVar22 = (ulong)(uVar29 >> 5);
                                  *(uint *)((long)local_50d8 + uVar22 * 4) =
                                       *(uint *)((long)local_50d8 + uVar22 * 4) |
                                       1 << (ulong)(uVar18 & 0x1f);
                                }
                              }
LAB_01212fcc:
                              bVar1 = iVar20 < 1;
                              iVar20 = iVar20 + 2;
                            } while (bVar1);
                          }
                          else {
                            iVar19 = DAT_05233980;
                            iVar20 = -2;
                            iVar24 = DAT_05233970;
                            do {
                              uVar18 = local_10b0 - 2;
                              if (iVar24 <= (int)uVar18 && (int)uVar18 <= iVar19) {
                                iVar8 = iVar20 + local_10ac;
                                uVar29 = (iVar8 * 0x80 & 0xffffff00U) + ((int)uVar18 >> 1);
                                if ((DAT_05233974 <= iVar8 && iVar8 <= DAT_05233984) &&
                                    uVar29 >> 0xf == 0) {
                                  uVar22 = (ulong)(uVar29 >> 5);
                                  uVar29 = 1 << (ulong)(uVar18 >> 1 & 0x1f);
                                  if ((*(uint *)(lVar2 + uVar22 * 4) & uVar29) != 0) {
                                    if ((*(uint *)(lVar3 + uVar22 * 4) & uVar29) != 0) {
                                      fVar38 = (float)(int)uVar18 * 0.5;
                                      fVar37 = (float)iVar8 * 0.5;
                                      local_5108 = (undefined *)CONCAT44(local_5108._4_4_,1);
                                      uVar29 = 0;
                                      if (fVar38 != (float)(int)fVar38) {
                                        uVar29 = (uint)(fVar38 < 0.0);
                                      }
                                      uVar25 = 0;
                                      if (fVar37 != (float)(int)fVar37) {
                                        uVar25 = (uint)(fVar37 < 0.0);
                                      }
                                      iVar13 = (int)fVar38 - uVar29;
                                      iVar14 = (int)fVar37 - uVar25;
                                      if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) &&
                                         (lVar35 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 +
                                                                      0x38) + 0xb0), lVar35 != 0)) {
                                        uVar29 = iVar13 - *(int *)(lVar35 + 0x28);
                                        uVar25 = *(uint *)(lVar35 + 0x18);
                                        uVar26 = iVar14 - *(int *)(lVar35 + 0x2c);
                                        if ((uVar29 < uVar25 && uVar26 <= *(uint *)(lVar35 + 0x1c))
                                            && (uVar25 <= uVar29 ||
                                               *(uint *)(lVar35 + 0x1c) != uVar26)) {
                                          uVar29 = uVar29 + uVar25 * uVar26;
LAB_01212b04:
                                          if (*(uint *)(lVar35 + 0x30) <= uVar29) {
                                            uVar29 = 0;
                                          }
                                          puVar32 = (undefined8 *)
                                                    (*(long *)(lVar35 + 0x38) +
                                                    (long)(int)uVar29 * 0x68);
                                        }
                                        else if (*(char *)(lVar35 + 0x88) == '\0') {
                                          puVar32 = &DAT_051a50f0;
                                        }
                                        else {
                                          uVar29 = iVar13 - *(int *)(lVar35 + 0x98);
                                          uVar25 = iVar14 - *(int *)(lVar35 + 0x9c);
                                          puVar32 = &DAT_051a50f0;
                                          if (uVar29 < *(uint *)(lVar35 + 0xa0) &&
                                              uVar25 < *(uint *)(lVar35 + 0xa4)) {
                                            uVar29 = uVar29 + *(uint *)(lVar35 + 0xa0) * uVar25 +
                                                     *(int *)(lVar35 + 0x8c);
                                            goto LAB_01212b04;
                                          }
                                        }
                                        if (*(char *)(puVar32 + 2) == '\x03') goto LAB_0121287c;
                                      }
                                      local_5108 = PTR_DAT_04bb2018 + 0x10;
                                      local_5100 = (undefined *)CONCAT44(iVar14,iVar13);
                                      lVar35 = *(long *)PTR_DAT_04bb27c8;
                                      if ((lVar35 == 0) || (*(long *)(lVar35 + 0x90) == 0)) {
                                        fVar37 = -500.0;
                                      }
                                      else {
                                        fVar37 = (float)FUN_0094bce0(lVar35 + 0x28,&local_5108);
                                      }
                                      iVar19 = DAT_05233980;
                                      iVar24 = DAT_05233970;
                                      if ((((-5.0 <= fVar37 - fVar36) && (fVar37 - fVar36 <= 5.0))
                                          && (DAT_05233970 <= (int)uVar18)) &&
                                         ((((int)uVar18 <= DAT_05233980 && (DAT_05233974 <= iVar8))
                                          && ((iVar8 <= DAT_05233984 &&
                                              (uVar29 = uVar18 + iVar8 * 0x200, uVar29 >> 0x11 == 0)
                                              ))))) {
                                        uVar22 = (ulong)(uVar29 >> 5);
                                        *(uint *)((long)local_50d8 + uVar22 * 4) =
                                             *(uint *)((long)local_50d8 + uVar22 * 4) |
                                             1 << (ulong)(uVar18 & 0x1f);
                                      }
                                    }
                                  }
                                }
                              }
LAB_0121287c:
                              uVar18 = local_10b0;
                              if (((iVar20 != 0) && (iVar24 <= (int)local_10b0)) &&
                                 (((int)local_10b0 <= iVar19 &&
                                  (((iVar8 = iVar20 + local_10ac, DAT_05233974 <= iVar8 &&
                                    (iVar8 <= DAT_05233984)) &&
                                   (uVar29 = (iVar8 * 0x80 & 0xffffff00U) + ((int)local_10b0 >> 1),
                                   uVar29 >> 0xf == 0)))))) {
                                uVar22 = (ulong)(uVar29 >> 5);
                                uVar29 = 1 << (ulong)(local_10b0 >> 1 & 0x1f);
                                if (((*(uint *)(lVar2 + uVar22 * 4) & uVar29) != 0) &&
                                   ((*(uint *)(lVar3 + uVar22 * 4) & uVar29) != 0)) {
                                  fVar38 = (float)(int)local_10b0 * 0.5;
                                  fVar37 = (float)iVar8 * 0.5;
                                  local_5108 = (undefined *)CONCAT44(local_5108._4_4_,1);
                                  uVar29 = 0;
                                  if (fVar38 != (float)(int)fVar38) {
                                    uVar29 = (uint)(fVar38 < 0.0);
                                  }
                                  uVar25 = 0;
                                  if (fVar37 != (float)(int)fVar37) {
                                    uVar25 = (uint)(fVar37 < 0.0);
                                  }
                                  iVar13 = (int)fVar38 - uVar29;
                                  iVar14 = (int)fVar37 - uVar25;
                                  if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) &&
                                     (lVar35 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38)
                                                        + 0xb0), lVar35 != 0)) {
                                    uVar29 = iVar13 - *(int *)(lVar35 + 0x28);
                                    uVar25 = *(uint *)(lVar35 + 0x18);
                                    uVar26 = iVar14 - *(int *)(lVar35 + 0x2c);
                                    if ((uVar29 < uVar25 && uVar26 <= *(uint *)(lVar35 + 0x1c)) &&
                                        (uVar25 <= uVar29 || *(uint *)(lVar35 + 0x1c) != uVar26)) {
                                      uVar29 = uVar29 + uVar25 * uVar26;
LAB_01212b24:
                                      if (*(uint *)(lVar35 + 0x30) <= uVar29) {
                                        uVar29 = 0;
                                      }
                                      puVar32 = (undefined8 *)
                                                (*(long *)(lVar35 + 0x38) + (long)(int)uVar29 * 0x68
                                                );
                                    }
                                    else if (*(char *)(lVar35 + 0x88) == '\0') {
                                      puVar32 = &DAT_051a50f0;
                                    }
                                    else {
                                      uVar29 = iVar13 - *(int *)(lVar35 + 0x98);
                                      uVar25 = iVar14 - *(int *)(lVar35 + 0x9c);
                                      puVar32 = &DAT_051a50f0;
                                      if (uVar29 < *(uint *)(lVar35 + 0xa0) &&
                                          uVar25 < *(uint *)(lVar35 + 0xa4)) {
                                        uVar29 = uVar29 + *(uint *)(lVar35 + 0xa0) * uVar25 +
                                                 *(int *)(lVar35 + 0x8c);
                                        goto LAB_01212b24;
                                      }
                                    }
                                    if (*(char *)(puVar32 + 2) == '\x03') goto LAB_01212d44;
                                  }
                                  local_5108 = PTR_DAT_04bb2018 + 0x10;
                                  local_5100 = (undefined *)CONCAT44(iVar14,iVar13);
                                  lVar35 = *(long *)PTR_DAT_04bb27c8;
                                  if ((lVar35 == 0) || (*(long *)(lVar35 + 0x90) == 0)) {
                                    fVar37 = -500.0;
                                  }
                                  else {
                                    fVar37 = (float)FUN_0094bce0(lVar35 + 0x28,&local_5108);
                                    iVar19 = DAT_05233980;
                                    iVar24 = DAT_05233970;
                                  }
                                  if (((((-5.0 <= fVar37 - fVar36) && (fVar37 - fVar36 <= 5.0)) &&
                                       (iVar24 <= (int)uVar18)) &&
                                      (((int)uVar18 <= iVar19 && (DAT_05233974 <= iVar8)))) &&
                                     ((iVar8 <= DAT_05233984 &&
                                      (uVar29 = uVar18 + iVar8 * 0x200, uVar29 >> 0x11 == 0)))) {
                                    uVar22 = (ulong)(uVar29 >> 5);
                                    *(uint *)((long)local_50d8 + uVar22 * 4) =
                                         *(uint *)((long)local_50d8 + uVar22 * 4) |
                                         1 << (ulong)(uVar18 & 0x1f);
                                  }
                                }
                              }
LAB_01212d44:
                              uVar18 = local_10b0 + 2;
                              if (((iVar24 <= (int)uVar18) && ((int)uVar18 <= iVar19)) &&
                                 ((iVar8 = iVar20 + local_10ac, DAT_05233974 <= iVar8 &&
                                  ((iVar8 <= DAT_05233984 &&
                                   (uVar29 = (iVar8 * 0x80 & 0xffffff00U) + ((int)uVar18 >> 1),
                                   uVar29 >> 0xf == 0)))))) {
                                uVar22 = (ulong)(uVar29 >> 5);
                                uVar29 = 1 << (ulong)(uVar18 >> 1 & 0x1f);
                                if (((*(uint *)(lVar2 + uVar22 * 4) & uVar29) != 0) &&
                                   ((*(uint *)(lVar3 + uVar22 * 4) & uVar29) != 0)) {
                                  fVar38 = (float)(int)uVar18 * 0.5;
                                  fVar37 = (float)iVar8 * 0.5;
                                  local_5108 = (undefined *)CONCAT44(local_5108._4_4_,1);
                                  uVar29 = 0;
                                  if (fVar38 != (float)(int)fVar38) {
                                    uVar29 = (uint)(fVar38 < 0.0);
                                  }
                                  uVar25 = 0;
                                  if (fVar37 != (float)(int)fVar37) {
                                    uVar25 = (uint)(fVar37 < 0.0);
                                  }
                                  iVar13 = (int)fVar38 - uVar29;
                                  iVar14 = (int)fVar37 - uVar25;
                                  if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) &&
                                     (lVar35 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38)
                                                        + 0xb0), lVar35 != 0)) {
                                    uVar29 = iVar13 - *(int *)(lVar35 + 0x28);
                                    uVar25 = *(uint *)(lVar35 + 0x18);
                                    uVar26 = iVar14 - *(int *)(lVar35 + 0x2c);
                                    if ((uVar29 < uVar25 && uVar26 <= *(uint *)(lVar35 + 0x1c)) &&
                                        (uVar25 <= uVar29 || *(uint *)(lVar35 + 0x1c) != uVar26)) {
                                      uVar29 = uVar29 + uVar25 * uVar26;
LAB_01212eb0:
                                      if (*(uint *)(lVar35 + 0x30) <= uVar29) {
                                        uVar29 = 0;
                                      }
                                      puVar32 = (undefined8 *)
                                                (*(long *)(lVar35 + 0x38) + (long)(int)uVar29 * 0x68
                                                );
                                    }
                                    else if (*(char *)(lVar35 + 0x88) == '\0') {
                                      puVar32 = &DAT_051a50f0;
                                    }
                                    else {
                                      uVar29 = iVar13 - *(int *)(lVar35 + 0x98);
                                      uVar25 = iVar14 - *(int *)(lVar35 + 0x9c);
                                      puVar32 = &DAT_051a50f0;
                                      if (uVar29 < *(uint *)(lVar35 + 0xa0) &&
                                          uVar25 < *(uint *)(lVar35 + 0xa4)) {
                                        uVar29 = uVar29 + *(uint *)(lVar35 + 0xa0) * uVar25 +
                                                 *(int *)(lVar35 + 0x8c);
                                        goto LAB_01212eb0;
                                      }
                                    }
                                    if (*(char *)(puVar32 + 2) == '\x03') goto LAB_0121282c;
                                  }
                                  local_5108 = PTR_DAT_04bb2018 + 0x10;
                                  local_5100 = (undefined *)CONCAT44(iVar14,iVar13);
                                  lVar35 = *(long *)PTR_DAT_04bb27c8;
                                  if ((lVar35 == 0) || (*(long *)(lVar35 + 0x90) == 0)) {
                                    fVar37 = -500.0;
                                  }
                                  else {
                                    fVar37 = (float)FUN_0094bce0(lVar35 + 0x28,&local_5108);
                                    iVar19 = DAT_05233980;
                                    iVar24 = DAT_05233970;
                                  }
                                  if ((((-5.0 <= fVar37 - fVar36) && (fVar37 - fVar36 <= 5.0)) &&
                                      (iVar24 <= (int)uVar18)) &&
                                     ((((int)uVar18 <= iVar19 && (DAT_05233974 <= iVar8)) &&
                                      ((iVar8 <= DAT_05233984 &&
                                       (uVar29 = uVar18 + iVar8 * 0x200, uVar29 >> 0x11 == 0)))))) {
                                    uVar22 = (ulong)(uVar29 >> 5);
                                    *(uint *)((long)local_50d8 + uVar22 * 4) =
                                         *(uint *)((long)local_50d8 + uVar22 * 4) |
                                         1 << (ulong)(uVar18 & 0x1f);
                                  }
                                }
                              }
LAB_0121282c:
                              bVar1 = iVar20 < 1;
                              iVar20 = iVar20 + 2;
                            } while (bVar1);
                          }
                          iVar19 = 0;
                          lVar35 = 8;
                          do {
                            uVar18 = *(uint *)((long)local_50d8 + lVar35 + -8);
                            lVar35 = lVar35 + 4;
                            uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
                            uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
                            uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
                            uVar18 = uVar18 + (uVar18 >> 8);
                            iVar19 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar19;
                          } while (lVar35 != 0x4008);
                          if (iVar19 == 0) {
                            lVar35 = *(long *)PTR_DAT_04bb27a8;
                            iVar19 = -2;
                            do {
                              local_5108 = (undefined *)CONCAT44(local_5108._4_4_,1);
                              uVar25 = local_10b0 - 2;
                              uVar18 = iVar19 + local_10ac;
                              fVar36 = (float)(int)uVar25 * 0.5;
                              uVar29 = 0;
                              if (fVar36 != (float)(int)fVar36) {
                                uVar29 = (uint)(fVar36 < 0.0);
                              }
                              fVar37 = (float)(int)uVar18 * 0.5;
                              uVar26 = 0;
                              if (fVar37 != (float)(int)fVar37) {
                                uVar26 = (uint)(fVar37 < 0.0);
                              }
                              if ((*(long *)(lVar35 + 0x38) == 0) ||
                                 (lVar35 = *(long *)(*(long *)(lVar35 + 0x38) + 0xb0), lVar35 == 0))
                              {
LAB_01213a38:
                                if ((((DAT_05233970 <= (int)uVar25) && ((int)uVar25 <= DAT_05233980)
                                     ) && (DAT_05233974 <= (int)uVar18)) &&
                                   ((((int)uVar18 <= DAT_05233984 &&
                                     (uVar29 = (uVar18 * 0x80 & 0xffffff00) + ((int)uVar25 >> 1),
                                     uVar29 >> 0xf == 0)) &&
                                    ((*(uint *)(lVar27 + (ulong)(uVar29 >> 5) * 4) >>
                                      (ulong)(uVar25 >> 1 & 0x1f) & 1) != 0)))) {
                                  local_50e8 = local_10b0 - 1;
                                  local_50e4 = uVar18 + 1;
                                  local_5108 = puVar6;
                                  local_5100 = puVar7;
                                  local_50f8 = uVar25;
                                  uStack_50f4 = uVar18;
                                  local_50f0 = puVar7;
                                  uVar22 = FUN_01676430(&local_5108);
                                  if ((((uVar22 & 1) != 0) && (DAT_05233970 <= (int)uVar25)) &&
                                     (((int)uVar25 <= DAT_05233980 &&
                                      (((DAT_05233974 <= (int)uVar18 &&
                                        ((int)uVar18 <= DAT_05233984)) &&
                                       (uVar18 = uVar25 + uVar18 * 0x200, uVar18 >> 0x11 == 0))))))
                                  {
                                    uVar22 = (ulong)(uVar18 >> 5);
                                    *(uint *)((long)local_50d8 + uVar22 * 4) =
                                         *(uint *)((long)local_50d8 + uVar22 * 4) |
                                         1 << (ulong)(uVar25 & 0x1f);
                                  }
                                }
                              }
                              else {
                                uVar30 = ((int)fVar36 - uVar29) - *(int *)(lVar35 + 0x28);
                                uVar10 = *(uint *)(lVar35 + 0x18);
                                uVar15 = ((int)fVar37 - uVar26) - *(int *)(lVar35 + 0x2c);
                                if ((uVar30 < uVar10 && uVar15 <= *(uint *)(lVar35 + 0x1c)) &&
                                    (uVar10 <= uVar30 || *(uint *)(lVar35 + 0x1c) != uVar15)) {
                                  uVar30 = uVar30 + uVar10 * uVar15;
LAB_01213a08:
                                  if (*(uint *)(lVar35 + 0x30) <= uVar30) {
                                    uVar30 = 0;
                                  }
                                  puVar32 = (undefined8 *)
                                            (*(long *)(lVar35 + 0x38) + (long)(int)uVar30 * 0x68);
                                }
                                else if (*(char *)(lVar35 + 0x88) == '\0') {
                                  puVar32 = &DAT_051a50f0;
                                }
                                else {
                                  uVar29 = ((int)fVar36 - uVar29) - *(int *)(lVar35 + 0x98);
                                  uVar26 = ((int)fVar37 - uVar26) - *(int *)(lVar35 + 0x9c);
                                  puVar32 = &DAT_051a50f0;
                                  if (uVar29 < *(uint *)(lVar35 + 0xa0) &&
                                      uVar26 < *(uint *)(lVar35 + 0xa4)) {
                                    uVar30 = uVar29 + *(uint *)(lVar35 + 0xa0) * uVar26 +
                                             *(int *)(lVar35 + 0x8c);
                                    goto LAB_01213a08;
                                  }
                                }
                                if (*(char *)(puVar32 + 2) != '\x03') goto LAB_01213a38;
                              }
                              uVar18 = local_10b0;
                              if (iVar19 != 0) {
                                uVar29 = iVar19 + local_10ac;
                                fVar37 = (float)(int)local_10b0 * 0.5;
                                fVar36 = (float)(int)uVar29 * 0.5;
                                uVar25 = 0;
                                if (fVar37 != (float)(int)fVar37) {
                                  uVar25 = (uint)(fVar37 < 0.0);
                                }
                                uVar26 = 0;
                                if (fVar36 != (float)(int)fVar36) {
                                  uVar26 = (uint)(fVar36 < 0.0);
                                }
                                local_5108 = (undefined *)CONCAT44(local_5108._4_4_,1);
                                if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) &&
                                   (lVar35 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) +
                                                      0xb0), lVar35 != 0)) {
                                  uVar30 = ((int)fVar37 - uVar25) - *(int *)(lVar35 + 0x28);
                                  uVar10 = *(uint *)(lVar35 + 0x18);
                                  uVar15 = ((int)fVar36 - uVar26) - *(int *)(lVar35 + 0x2c);
                                  if ((uVar30 < uVar10 && uVar15 <= *(uint *)(lVar35 + 0x1c)) &&
                                      (uVar10 <= uVar30 || *(uint *)(lVar35 + 0x1c) != uVar15)) {
                                    uVar30 = uVar30 + uVar10 * uVar15;
LAB_01213c40:
                                    if (*(uint *)(lVar35 + 0x30) <= uVar30) {
                                      uVar30 = 0;
                                    }
                                    puVar32 = (undefined8 *)
                                              (*(long *)(lVar35 + 0x38) + (long)(int)uVar30 * 0x68);
                                  }
                                  else if (*(char *)(lVar35 + 0x88) == '\0') {
                                    puVar32 = &DAT_051a50f0;
                                  }
                                  else {
                                    uVar25 = ((int)fVar37 - uVar25) - *(int *)(lVar35 + 0x98);
                                    uVar26 = ((int)fVar36 - uVar26) - *(int *)(lVar35 + 0x9c);
                                    puVar32 = &DAT_051a50f0;
                                    if (uVar25 < *(uint *)(lVar35 + 0xa0) &&
                                        uVar26 < *(uint *)(lVar35 + 0xa4)) {
                                      uVar30 = uVar25 + *(uint *)(lVar35 + 0xa0) * uVar26 +
                                               *(int *)(lVar35 + 0x8c);
                                      goto LAB_01213c40;
                                    }
                                  }
                                  if (*(char *)(puVar32 + 2) == '\x03') goto LAB_01213d88;
                                }
                                if (((DAT_05233970 <= (int)local_10b0) &&
                                    ((int)local_10b0 <= DAT_05233980)) &&
                                   ((DAT_05233974 <= (int)uVar29 &&
                                    ((((int)uVar29 <= DAT_05233984 &&
                                      (uVar25 = (uVar29 * 0x80 & 0xffffff00) +
                                                ((int)local_10b0 >> 1), uVar25 >> 0xf == 0)) &&
                                     ((*(uint *)(lVar27 + (ulong)(uVar25 >> 5) * 4) >>
                                       (ulong)(local_10b0 >> 1 & 0x1f) & 1) != 0)))))) {
                                  local_50f8 = local_10b0;
                                  local_5108 = PTR_DAT_04bbc1a0 + 0x10;
                                  local_5100 = PTR_DAT_04bb2010 + 0x10;
                                  local_50e8 = local_10b0 + 1;
                                  local_50e4 = uVar29 + 1;
                                  uStack_50f4 = uVar29;
                                  local_50f0 = local_5100;
                                  uVar22 = FUN_01676430(&local_5108);
                                  if ((((uVar22 & 1) != 0) && (DAT_05233970 <= (int)uVar18)) &&
                                     (((int)uVar18 <= DAT_05233980 &&
                                      (((DAT_05233974 <= (int)uVar29 &&
                                        ((int)uVar29 <= DAT_05233984)) &&
                                       (uVar29 = uVar18 + uVar29 * 0x200, uVar29 >> 0x11 == 0))))))
                                  {
                                    uVar22 = (ulong)(uVar29 >> 5);
                                    *(uint *)((long)local_50d8 + uVar22 * 4) =
                                         *(uint *)((long)local_50d8 + uVar22 * 4) |
                                         1 << (ulong)(uVar18 & 0x1f);
                                  }
                                }
                              }
LAB_01213d88:
                              uVar18 = local_10b0 + 2;
                              uVar29 = iVar19 + local_10ac;
                              fVar37 = (float)(int)uVar18 * 0.5;
                              fVar36 = (float)(int)uVar29 * 0.5;
                              uVar25 = 0;
                              if (fVar37 != (float)(int)fVar37) {
                                uVar25 = (uint)(fVar37 < 0.0);
                              }
                              uVar26 = 0;
                              if (fVar36 != (float)(int)fVar36) {
                                uVar26 = (uint)(fVar36 < 0.0);
                              }
                              local_5108 = (undefined *)CONCAT44(local_5108._4_4_,1);
                              lVar35 = *(long *)PTR_DAT_04bb27a8;
                              if ((*(long *)(lVar35 + 0x38) == 0) ||
                                 (lVar31 = *(long *)(*(long *)(lVar35 + 0x38) + 0xb0), lVar31 == 0))
                              {
LAB_01213eb8:
                                if (((((DAT_05233970 <= (int)uVar18) &&
                                      ((int)uVar18 <= DAT_05233980)) &&
                                     (DAT_05233974 <= (int)uVar29)) &&
                                    (((int)uVar29 <= DAT_05233984 &&
                                     (uVar25 = (uVar29 * 0x80 & 0xffffff00) + ((int)uVar18 >> 1),
                                     uVar25 >> 0xf == 0)))) &&
                                   ((*(uint *)(lVar27 + (ulong)(uVar25 >> 5) * 4) >>
                                     (ulong)(uVar18 >> 1 & 0x1f) & 1) != 0)) {
                                  local_5108 = PTR_DAT_04bbc1a0 + 0x10;
                                  local_5100 = PTR_DAT_04bb2010 + 0x10;
                                  local_50e8 = local_10b0 + 3;
                                  local_50e4 = uVar29 + 1;
                                  local_50f8 = uVar18;
                                  uStack_50f4 = uVar29;
                                  local_50f0 = local_5100;
                                  uVar22 = FUN_01676430(&local_5108);
                                  lVar35 = *(long *)PTR_DAT_04bb27a8;
                                  if ((((uVar22 & 1) != 0) && (DAT_05233970 <= (int)uVar18)) &&
                                     (((int)uVar18 <= DAT_05233980 &&
                                      (((DAT_05233974 <= (int)uVar29 &&
                                        ((int)uVar29 <= DAT_05233984)) &&
                                       (uVar29 = uVar18 + uVar29 * 0x200, uVar29 >> 0x11 == 0))))))
                                  {
                                    uVar22 = (ulong)(uVar29 >> 5);
                                    *(uint *)((long)local_50d8 + uVar22 * 4) =
                                         *(uint *)((long)local_50d8 + uVar22 * 4) |
                                         1 << (ulong)(uVar18 & 0x1f);
                                  }
                                }
                              }
                              else {
                                uVar30 = ((int)fVar37 - uVar25) - *(int *)(lVar31 + 0x28);
                                uVar10 = *(uint *)(lVar31 + 0x18);
                                uVar15 = ((int)fVar36 - uVar26) - *(int *)(lVar31 + 0x2c);
                                if ((uVar30 < uVar10 && uVar15 <= *(uint *)(lVar31 + 0x1c)) &&
                                    (uVar10 <= uVar30 || *(uint *)(lVar31 + 0x1c) != uVar15)) {
                                  uVar30 = uVar30 + uVar10 * uVar15;
LAB_01213e88:
                                  if (*(uint *)(lVar31 + 0x30) <= uVar30) {
                                    uVar30 = 0;
                                  }
                                  puVar32 = (undefined8 *)
                                            (*(long *)(lVar31 + 0x38) + (long)(int)uVar30 * 0x68);
                                }
                                else if (*(char *)(lVar31 + 0x88) == '\0') {
                                  puVar32 = &DAT_051a50f0;
                                }
                                else {
                                  uVar25 = ((int)fVar37 - uVar25) - *(int *)(lVar31 + 0x98);
                                  uVar26 = ((int)fVar36 - uVar26) - *(int *)(lVar31 + 0x9c);
                                  puVar32 = &DAT_051a50f0;
                                  if (uVar25 < *(uint *)(lVar31 + 0xa0) &&
                                      uVar26 < *(uint *)(lVar31 + 0xa4)) {
                                    uVar30 = uVar25 + *(uint *)(lVar31 + 0xa0) * uVar26 +
                                             *(int *)(lVar31 + 0x8c);
                                    goto LAB_01213e88;
                                  }
                                }
                                if (*(char *)(puVar32 + 2) != '\x03') goto LAB_01213eb8;
                              }
                              bVar1 = iVar19 < 1;
                              iVar19 = iVar19 + 2;
                            } while (bVar1);
                          }
                          iVar19 = 0;
                          lVar35 = 8;
                          do {
                            uVar18 = *(uint *)((long)local_50d8 + lVar35 + -8);
                            lVar35 = lVar35 + 4;
                            uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
                            uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
                            uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
                            uVar18 = uVar18 + (uVar18 >> 8);
                            iVar19 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar19;
                          } while (lVar35 != 0x4008);
                          if (iVar19 != 0) {
                            FUN_01695da0(auStack_5118,&local_50e0);
                            uVar26 = local_5110;
                            iVar19 = local_5110 + 1;
                            uVar18 = local_510c + 2;
                            uVar25 = local_5110;
                            uVar29 = local_510c;
                            do {
                              local_5100 = (undefined *)CONCAT44(uVar29,uVar25);
                              local_5108 = PTR_DAT_04bb2010 + 0x10;
                              FUN_01a5033c(local_5120,&local_a0,0,&local_5108,0);
                              if (local_5120[0] != -2) goto LAB_012124d0;
                              if ((int)uVar25 < iVar19) {
                                uVar25 = uVar25 + 1;
                              }
                              else {
                                uVar29 = uVar29 + 1;
                                uVar25 = uVar26;
                              }
                            } while ((uVar26 != uVar25) || (uVar18 != uVar29));
                            local_5128 = local_10c0;
                            uStack_5124 = uStack_10bc;
                            iVar19 = FUN_01214190(&local_5128,param_2);
                            puVar28 = &DAT_04c47ee0;
                            if (param_2 - 1U < 6) {
                              puVar28 = (undefined4 *)(&PTR_DAT_04987220)[(int)(param_2 - 1U)];
                            }
                            uVar18 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
                            DAT_05582b70 = DAT_05582b74;
                            DAT_05582b74 = DAT_05582b78;
                            uVar29 = uVar18 ^ DAT_05582b7c;
                            uVar18 = uVar18 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar29;
                            DAT_05582b78 = DAT_05582b7c;
                            if (iVar19 == 6) {
                              uVar23 = (ushort)*(undefined4 *)
                                                ((long)puVar28 + ((ulong)uVar18 * 3 >> 0x1e & 0xc));
                            }
                            else {
                              uVar29 = -((int)uVar29 >> 0x1f);
                              switch(iVar19) {
                              case 0:
                              case 3:
                                uVar29 = uVar29 + 1;
                                break;
                              default:
                                if ((int)uVar18 < 0) {
                                  uVar29 = 2;
                                }
                                break;
                              case 2:
                              case 5:
                                uVar23 = (ushort)puVar28[uVar29];
                                goto LAB_01214030;
                              }
                              uVar23 = (ushort)puVar28[uVar29];
                            }
LAB_01214030:
                            local_5108 = (undefined *)(ulong)uVar23;
                            DAT_05582b7c = uVar18;
                            FUN_0277d4ac(&local_5108);
                            local_10c0 = (undefined4)local_5108;
                            uStack_10bc = local_5108._4_4_;
                            uVar22 = FUN_011f3880(&local_a0,0,&local_10c0,auStack_5118);
                            if ((uVar22 & 1) != 0) {
                              uVar29 = *(uint *)(param_1 + 0x32164);
                              uVar18 = 0x7d000;
                              if ((uVar29 >> 8 & 0x7ff) < 2000) {
                                uVar18 = (uVar29 & 0xffffff00) + 0x100 & 0x7ff00;
                              }
                              *(uint *)(param_1 + 0x32164) = uVar18 | uVar29 & 0xfff800ff;
                              local_5108 = PTR_DAT_04bbc1a0 + 0x10;
                              local_5100 = PTR_DAT_04bb2010 + 0x10;
                              local_50f8 = local_5110;
                              uStack_50f4 = local_510c;
                              local_50e8 = local_5110 + 1;
                              *param_4 = *param_4 + 1;
                              local_50e4 = local_510c + 1;
                              local_50f0 = local_5100;
                              FUN_01686550(param_1,&local_5108);
                              if (((DAT_05233970 <= (int)local_5110) &&
                                  ((int)local_5110 <= DAT_05233980)) &&
                                 ((DAT_05233974 <= (int)local_510c &&
                                  (((int)local_510c <= DAT_05233984 &&
                                   (uVar18 = (local_510c & 0x1fffffe) * 0x80 +
                                             ((int)local_5110 >> 1), uVar18 >> 0xf == 0)))))) {
                                lVar35 = (ulong)(uVar18 >> 5) * 4;
                                *(uint *)(param_1 + 0x270c8 + lVar35) =
                                     *(uint *)(param_1 + 0x270c8 + lVar35) |
                                     1 << (ulong)(local_5110 >> 1 & 0x1f);
                              }
                              if (param_5 <= *param_4) {
                                return;
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
          }
        }
LAB_012124d0:
        if ((int)uVar34 < *(int *)(lVar21 + 0x20)) {
          uVar34 = uVar34 + 1;
        }
        else {
          uVar33 = uVar33 + 1;
          uVar34 = *(uint *)(lVar21 + 0x10);
        }
      } while (uVar12 != uVar34 || uVar11 != uVar33);
    }
  }
  return;
}

