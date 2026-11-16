
void FUN_02883a90(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined *puVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  int *piVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  int iVar24;
  float fVar25;
  float fVar26;
  int local_cfc;
  undefined4 local_ce4;
  undefined4 uStack_ce0;
  uint local_cdc;
  float local_cd8 [384];
  undefined *local_6d8;
  undefined4 local_6d0;
  undefined4 local_6cc;
  byte local_6c8;
  undefined8 local_d8;
  int local_d0;
  int iStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  int local_bc;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  undefined8 local_90;
  
  local_cdc = 0;
  uVar14 = FUN_0291e130(local_cd8,&local_cdc,0);
  uVar8 = local_cdc;
  puVar7 = PTR_DAT_04bb43c0;
  if (((uVar14 & 1) != 0) && (local_cdc != 0)) {
    lVar1 = param_1 + 0x70;
    uVar14 = 0;
    uVar23 = 0;
    iVar24 = 0;
    bVar6 = 1;
    puVar2 = PTR_DAT_04bbfe68 + 0x10;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    puVar4 = PTR_DAT_04bb2010 + 0x10;
    do {
      piVar20 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*(short *)piVar20 == 0) {
        local_a8 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)((ulong)local_a8 >> 0x20) < '\x05') {
          lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
          local_6d8 = (undefined *)(lVar15 + -0x15180);
          local_a8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_6d8);
        }
        uVar16 = (ulong)local_a8 >> 0x30;
        local_a8._0_6_ = CONCAT24(5,(int)local_a8);
        local_a8 = (undefined *)(CONCAT26((short)uVar16,(undefined6)local_a8) & 0xff00ffffffffffff);
        piVar20 = (int *)&local_a8;
      }
      iVar11 = *piVar20;
      uVar10 = nn::time::GetDayOfWeek((int)(short)iVar11,(iVar11 << 8) >> 0x18,iVar11 >> 0x18);
      local_6d8 = (undefined *)CONCAT44(local_6d8._4_4_,uVar10);
      lVar22 = *(long *)puVar7;
      lVar15 = param_1 + (ulong)uVar10 * 0x10;
      if (6 < uVar10) {
        lVar15 = param_1;
      }
      puVar5 = (undefined4 *)(lVar15 + uVar14 * 8);
      local_ce4 = *puVar5;
      uStack_ce0 = puVar5[1];
      uVar10 = FUN_0277d6c4(&local_ce4);
      if (*(long *)puVar7 != 0) {
        lVar15 = *(long *)(lVar22 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
          uVar16 = FUN_0291e130(&local_6d8,&local_d8,0);
          if (((uVar16 & 1) != 0) && (uVar14 < ((ulong)local_d8 & 0xffffffff))) {
            piVar20 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
            if (*(short *)piVar20 == 0) {
              local_c8 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
              if ((char)((ulong)local_c8 >> 0x20) < '\x05') {
                lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
                local_a8 = (undefined *)(lVar15 + -0x15180);
                local_c8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
              }
              uVar16 = (ulong)local_c8 >> 0x30;
              local_c8._0_6_ = CONCAT24(5,(int)local_c8);
              local_c8 = (undefined *)
                         (CONCAT26((short)uVar16,(undefined6)local_c8) & 0xff00ffffffffffff);
              piVar20 = (int *)&local_c8;
            }
            iVar11 = *piVar20;
            uVar10 = nn::time::GetDayOfWeek((int)(short)iVar11,(iVar11 << 8) >> 0x18,iVar11 >> 0x18)
            ;
            local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar10);
            lVar15 = param_1 + 0xa8 + (ulong)uVar10 * 2;
            if (6 < uVar10) {
              lVar15 = param_1 + 0xa8;
            }
            if (*(char *)(lVar15 + uVar14) != '\0') {
              local_6d0 = 0;
              fVar26 = local_cd8[(long)iVar24 * 3];
              fVar25 = local_cd8[(long)iVar24 * 3 + 2];
              lVar15 = *(long *)PTR_DAT_04bb2720;
              local_6d8 = puVar2;
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0x330) == 0)) {
                puVar17 = &DAT_055c04a0;
              }
              else {
                puVar17 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
                iVar11 = FUN_006bd550(*puVar17,0);
                puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar11 != 0x758f7eaf) {
                  puVar17 = &DAT_055c04a0;
                }
              }
              local_6cc = *(undefined4 *)(puVar17 + 7);
              bVar9 = FUN_017baf44();
              local_6c8 = bVar9 & 1;
              piVar20 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
              if (*(short *)piVar20 == 0) {
                local_c8 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
                if ((char)((ulong)local_c8 >> 0x20) < '\x05') {
                  lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c8);
                  local_a8 = (undefined *)(lVar15 + -0x15180);
                  local_c8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
                }
                uVar16 = (ulong)local_c8 >> 0x30;
                local_c8._0_6_ = CONCAT24(5,(int)local_c8);
                local_c8 = (undefined *)
                           (CONCAT26((short)uVar16,(undefined6)local_c8) & 0xff00ffffffffffff);
                piVar20 = (int *)&local_c8;
              }
              iVar11 = *piVar20;
              uVar10 = nn::time::GetDayOfWeek
                                 ((int)(short)iVar11,(iVar11 << 8) >> 0x18,iVar11 >> 0x18);
              local_98 = 0;
              lVar22 = *(long *)puVar7;
              lVar15 = param_1 + (ulong)uVar10 * 0x10;
              if (6 < uVar10) {
                lVar15 = param_1;
              }
              puVar17 = (undefined8 *)(lVar15 + uVar14 * 8);
              local_a0 = *(undefined4 *)puVar17;
              uStack_9c = *(undefined4 *)((long)puVar17 + 4);
              local_a8 = puVar3;
              uVar10 = FUN_0277d6c4(&local_a0);
              if (*(long *)puVar7 != 0) {
                lVar15 = *(long *)(lVar22 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  lVar15 = *(long *)PTR_DAT_04bc0428;
                  uVar10 = FUN_0277d6c4(puVar17);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if (uVar10 < *(uint *)(lVar15 + 0x1d8)) {
                    lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8);
                    if (lVar15 != 0) {
                      local_98 = lVar15;
                    }
                  }
                }
              }
              iVar11 = FUN_01aee3b4(&local_a8);
              if ((((iVar11 == 1) || (iVar11 = FUN_01aee3b4(&local_a8), iVar11 == 7)) ||
                  (iVar11 = FUN_01aee3b4(&local_a8), iVar11 == 2)) ||
                 (iVar11 = FUN_01aee3b4(&local_a8), iVar11 == 9)) {
LAB_02883f78:
                iVar11 = -2;
              }
              else {
                local_c8 = (undefined *)CONCAT44(local_c8._4_4_,10);
                iVar11 = FUN_01ae7550(&local_a8);
                local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar11);
                if (iVar11 == (int)local_c8) goto LAB_02883f78;
                local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xb);
                iVar11 = FUN_01ae7550(&local_a8);
                local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar11);
                if (iVar11 == (int)local_c8) goto LAB_02883f78;
                local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xc);
                iVar11 = FUN_01ae7550(&local_a8);
                local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar11);
                if (iVar11 == (int)local_c8) goto LAB_02883f78;
                local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xe);
                iVar11 = FUN_01ae7550(&local_a8);
                local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar11);
                if (iVar11 == (int)local_c8) goto LAB_02883f78;
                iVar11 = FUN_01aee3b4(&local_a8);
                if ((iVar11 == 3) || (iVar11 = FUN_01aee3b4(&local_a8), iVar11 == 4)) {
LAB_02884660:
                  iVar11 = -3;
                }
                else {
                  iVar12 = FUN_01aee3b4(&local_a8);
                  iVar11 = -1;
                  if (iVar12 == 5) goto LAB_02884660;
                }
              }
              local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xe);
              iVar12 = FUN_01ae7550(&local_a8);
              local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar12);
              if (iVar12 == (int)local_c8) {
LAB_02883fa0:
                local_cfc = -2;
              }
              else {
                iVar12 = FUN_01aee3b4(&local_a8);
                if ((iVar12 == 6) || (iVar12 = FUN_01aee3b4(&local_a8), iVar12 == 7)) {
                  local_cfc = 0;
                }
                else {
                  iVar12 = FUN_01aee3b4(&local_a8);
                  if ((iVar12 == 2) || (iVar12 = FUN_01aee3b4(&local_a8), iVar12 == 9))
                  goto LAB_02883fa0;
                  iVar12 = FUN_01aee3b4(&local_a8);
                  local_cfc = -3;
                  if (iVar12 != 5) {
                    local_cfc = -1;
                  }
                }
              }
              iVar21 = (int)((fVar26 + 2.5) / 5.0);
              iVar19 = (int)((fVar25 + 2.5) / 5.0);
              iVar12 = FUN_01ae7550(&local_a8);
              if ((iVar12 == 7) || (iVar12 = FUN_01ae7550(&local_a8), iVar12 == 5)) {
                local_b0 = 0x471;
                FUN_0277d4ac(&local_b0);
                iVar12 = FUN_01aee3b4(&local_a8);
                if ((iVar12 == 1) || (iVar12 = FUN_01aee3b4(&local_a8), iVar12 == 7)) {
                  local_c8 = (undefined *)0x472;
                  FUN_0277d4ac(&local_c8);
                  local_b0 = local_c8;
                }
                else {
                  local_c8._2_1_ = local_b0._2_1_;
                  local_c8._3_1_ = local_b0._3_1_;
                  local_c8._4_4_ = local_b0._4_4_;
                  local_c8._0_2_ = (undefined2)local_b0;
                }
                local_c0 = CONCAT13(local_c8._3_1_,CONCAT12(local_c8._2_1_,(undefined2)local_c8));
                lVar15 = *(long *)puVar7;
                local_b8 = 0;
                local_bc = local_c8._4_4_;
                local_c8 = PTR_DAT_04bc0510 + 0x10;
                uVar10 = FUN_0277d6c4(&local_c0);
                if (*(long *)puVar7 != 0) {
                  lVar15 = *(long *)(lVar15 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                    lVar15 = *(long *)PTR_DAT_04bc0428;
                    uVar10 = FUN_0277d6c4(&local_b0);
                    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                    if (uVar10 < *(uint *)(lVar15 + 0x1d8)) {
                      lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8);
                      if (lVar15 != 0) {
                        local_b8 = lVar15;
                      }
                    }
                  }
                }
                uVar13 = FUN_01ae98d0(&local_a8);
                FUN_01afade0(&local_c8,uVar13);
                local_90 = CONCAT44(local_bc,local_c0);
                local_d8 = puVar4;
                local_d0 = iVar11 + iVar21;
                iStack_cc = local_cfc + iVar19;
                FUN_01a50970(&local_6d8,0,&local_90,&local_d8);
                piVar20 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
                if (*(short *)piVar20 == 0) {
                  local_90 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
                  if ((char)(local_90 >> 0x20) < '\x05') {
                    lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
                    local_d8 = (undefined *)(lVar15 + -0x15180);
                    local_90 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_d8);
                  }
                  uVar16 = local_90 >> 0x30;
                  local_90._0_6_ = CONCAT24(5,(int)local_90);
                  local_90 = CONCAT26((short)uVar16,(undefined6)local_90) & 0xff00ffffffffffff;
                  piVar20 = (int *)&local_90;
                }
                iVar12 = *piVar20;
                uVar10 = nn::time::GetDayOfWeek
                                   ((int)(short)iVar12,(iVar12 << 8) >> 0x18,iVar12 >> 0x18);
                local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar10);
                lVar15 = lVar1 + (ulong)uVar10 * 8;
                if (6 < uVar10) {
                  lVar15 = lVar1;
                }
                if (*(int *)(lVar15 + uVar14 * 4) == 0) {
                  local_90 = 0x1cf2;
                  FUN_0277d4ac(&local_90);
                  puVar17 = &local_90;
                  local_d0 = iVar21 + -1;
                  iStack_cc = iVar19 + -1;
                }
                else {
                  local_d0 = iVar11 + iVar21;
                  iStack_cc = local_cfc + iVar19;
                }
                local_d8 = PTR_DAT_04bb2010 + 0x10;
                FUN_01a50970(&local_6d8,1,puVar17,&local_d8);
              }
              else {
                piVar20 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
                if (*(short *)piVar20 == 0) {
                  local_d8 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
                  if ((char)((ulong)local_d8 >> 0x20) < '\x05') {
                    lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_d8);
                    local_c8 = (undefined *)(lVar15 + -0x15180);
                    local_d8 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_c8);
                  }
                  uVar16 = (ulong)local_d8 >> 0x30;
                  local_d8._0_6_ = CONCAT24(5,(int)local_d8);
                  local_d8 = (undefined *)
                             (CONCAT26((short)uVar16,(undefined6)local_d8) & 0xff00ffffffffffff);
                  piVar20 = (int *)&local_d8;
                }
                iVar12 = *piVar20;
                uVar10 = nn::time::GetDayOfWeek
                                   ((int)(short)iVar12,(iVar12 << 8) >> 0x18,iVar12 >> 0x18);
                local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar10);
                lVar15 = lVar1 + (ulong)uVar10 * 8;
                if (6 < uVar10) {
                  lVar15 = lVar1;
                }
                if (*(int *)(lVar15 + uVar14 * 4) == 0) {
                  local_d8 = (undefined *)0x1cf2;
                  FUN_0277d4ac(&local_d8);
                  puVar17 = &local_d8;
                  local_c0 = iVar21 + -1;
                  local_bc = iVar19 + -1;
LAB_028844f4:
                  puVar18 = &local_c8;
                  local_c8 = PTR_DAT_04bb2010 + 0x10;
                }
                else {
                  local_c8._0_4_ = 10;
                  iVar12 = FUN_01ae7550(&local_a8);
                  local_d8._0_4_ = iVar12;
                  if (iVar12 == (int)local_c8) {
LAB_02884188:
                    local_90 = 0x3805;
                    FUN_0277d4ac(&local_90);
                    local_b8 = 0;
                    local_c0 = (int)local_90;
                    local_bc = local_90._4_4_;
                    lVar15 = *(long *)puVar7;
                    local_c8 = PTR_DAT_04bc0510 + 0x10;
                    uVar10 = FUN_0277d6c4(&local_c0);
                    if (*(long *)puVar7 != 0) {
                      lVar15 = *(long *)(lVar15 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        lVar15 = *(long *)PTR_DAT_04bc0428;
                        uVar10 = FUN_0277d6c4(&local_90);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                        if (uVar10 < *(uint *)(lVar15 + 0x1d8)) {
                          lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8);
                          if (lVar15 != 0) {
                            local_b8 = lVar15;
                          }
                        }
                      }
                    }
                    FUN_01b01548(&local_c8,puVar17);
                  }
                  else {
                    local_c8._0_4_ = 0xb;
                    local_d8._0_4_ = FUN_01ae7550(&local_a8);
                    if ((int)local_d8 == (int)local_c8) goto LAB_02884188;
                    local_c8._0_4_ = 0xc;
                    local_d8._0_4_ = FUN_01ae7550(&local_a8);
                    if ((int)local_d8 == (int)local_c8) goto LAB_02884188;
                    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0xe);
                    iVar12 = FUN_01ae7550(&local_a8);
                    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar12);
                    if (iVar12 != (int)local_c8) {
                      local_c0 = iVar11 + iVar21;
                      local_bc = local_cfc + iVar19;
                      goto LAB_028844f4;
                    }
                    local_90 = 0x342f;
                    FUN_0277d4ac(&local_90);
                    local_b8 = 0;
                    local_c0 = (int)local_90;
                    local_bc = local_90._4_4_;
                    lVar15 = *(long *)puVar7;
                    local_c8 = PTR_DAT_04bc0510 + 0x10;
                    uVar10 = FUN_0277d6c4(&local_c0);
                    if (*(long *)puVar7 != 0) {
                      lVar15 = *(long *)(lVar15 + 0x57e58);
                      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                      if ((uVar10 < *(uint *)(lVar15 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                        lVar15 = *(long *)PTR_DAT_04bc0428;
                        uVar10 = FUN_0277d6c4(&local_90);
                        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                        if (uVar10 < *(uint *)(lVar15 + 0x1d8)) {
                          lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar10 * 8);
                          if (lVar15 != 0) {
                            local_b8 = lVar15;
                          }
                        }
                      }
                    }
                    FUN_01b01cc0(&local_c8,puVar17);
                  }
                  puVar17 = &local_b0;
                  puVar18 = &local_d8;
                  local_b0 = CONCAT44(local_bc,local_c0);
                  local_d8 = PTR_DAT_04bb2010 + 0x10;
                  local_d0 = iVar11 + iVar21;
                  iStack_cc = local_cfc + iVar19;
                }
                FUN_01a50970(&local_6d8,0,puVar17,puVar18);
              }
              uVar23 = uVar23 + 1;
            }
          }
        }
      }
      iVar24 = iVar24 + 1;
      if ((bool)(iVar24 == 0x80 | bVar6 ^ 1)) {
        return;
      }
      bVar6 = 0;
      uVar14 = 1;
    } while (uVar23 < uVar8);
  }
  return;
}

