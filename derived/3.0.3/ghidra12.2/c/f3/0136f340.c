
/* WARNING: Removing unreachable block (ram,0x0136fa60) */
/* WARNING: Removing unreachable block (ram,0x0136f3f0) */
/* WARNING: Removing unreachable block (ram,0x0136f3e8) */
/* WARNING: Removing unreachable block (ram,0x0136fa58) */
/* WARNING: Removing unreachable block (ram,0x0136fa50) */
/* WARNING: Removing unreachable block (ram,0x0136fa80) */
/* WARNING: Removing unreachable block (ram,0x0136fabc) */
/* WARNING: Removing unreachable block (ram,0x0136fab4) */
/* WARNING: Removing unreachable block (ram,0x0136f9d8) */
/* WARNING: Removing unreachable block (ram,0x0136fad8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0136f340(int *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  int iVar8;
  byte bVar9;
  undefined2 uVar10;
  ushort uVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  short *psVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  uint *puVar25;
  uint uVar26;
  long lVar27;
  long *plVar28;
  bool bVar29;
  long lVar30;
  float fVar31;
  float fVar32;
  undefined *local_218;
  uint local_210;
  uint local_20c;
  undefined *local_208;
  undefined *puStack_200;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  long *local_1d0;
  undefined8 local_1c8;
  long *local_1c0;
  undefined8 local_1b8;
  undefined8 **local_1a0 [3];
  undefined8 *local_188 [3];
  undefined8 local_170 [3];
  long alStack_158 [4];
  long *local_138;
  undefined *puStack_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_118;
  long *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  byte local_c0;
  uint local_b4;
  undefined **local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90;
  int iStack_8c;
  
  param_1[0xc] = 0;
  if (*(char *)((long)param_2 + 0x32) == '\0') {
    iVar17 = 1;
    if (*(char *)((long)param_2 + 0x33) == '\0') {
      iVar17 = 2;
    }
    param_1[0xc] = iVar17;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  bVar9 = (byte)param_2[0xc];
  *(byte *)(param_1 + 8) = bVar9;
  if (*(char *)((long)param_2 + 0x35) != '\0') {
    bVar9 = bVar9 | 2;
  }
  *(byte *)(param_1 + 8) = bVar9;
  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,1);
  local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,1);
  lVar20 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38);
  if (lVar20 == 0) {
    uVar26 = 0;
  }
  else {
    local_1f8 = 0;
    local_208 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_200 = PTR_DAT_04bb2010 + 0x10;
    local_1e8 = 0;
    local_1f0 = puStack_200;
    if (((char)param_2[0xd] == '\0') && ((*param_2 & 0xfffffffe) != 2)) {
      FUN_01378228(&local_208,param_2[1]);
      uVar26 = (uint)local_1f8;
      local_20c = local_1f8._4_4_;
      uVar22 = local_1e8._4_4_;
    }
    else {
      local_1f8 = *(undefined8 *)(param_2 + 6);
      local_1e8 = *(undefined8 *)(param_2 + 10);
      uVar26 = param_2[6];
      local_20c = param_2[7];
      uVar22 = param_2[0xb];
    }
    puVar12 = PTR_DAT_04bbbf90;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    if (uVar22 + 1 != local_20c) {
      puVar2 = PTR_DAT_04bbfe68 + 0x10;
      ppuVar3 = (undefined **)(PTR_DAT_04bb2018 + 0x10);
      puVar4 = PTR_DAT_04bbc1a0 + 0x10;
      ppuVar5 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      ppuVar6 = (undefined **)(PTR_DAT_04bbc5d8 + 0x10);
      local_218 = puVar1;
      local_210 = uVar26;
      do {
        uStack_c4 = *(undefined4 *)(puVar12 + 0xc);
        local_c8 = 1;
        local_d0 = puVar2;
        local_c0 = FUN_017baf44();
        local_c0 = local_c0 & 1;
        local_d8 = 0;
        local_e0 = puVar1;
        psVar18 = (short *)FUN_01a5190c(&local_d0,0,&local_218,&local_e0);
        local_e8 = *(undefined4 *)psVar18;
        local_e4 = *(undefined4 *)(psVar18 + 2);
        if (1 < (ushort)(*psVar18 + 3U)) {
          plVar28 = (long *)(PTR_DAT_04bbc1a0 + 0x10);
          local_100 = 0;
          puVar7 = PTR_DAT_04bb2010 + 0x10;
          local_f0 = 0;
          local_110 = plVar28;
          local_108 = puVar7;
          local_f8 = puVar7;
          FUN_0277f02c(&local_e8,&local_110);
          local_100 = CONCAT44(local_100._4_4_ + local_d8._4_4_,(int)local_100 + (int)local_d8);
          local_f0 = CONCAT44(local_f0._4_4_ + local_d8._4_4_,(int)local_f0 + (int)local_d8);
          uVar19 = FUN_01370014(param_2,&local_218,&local_208,&local_110,&local_e0);
          if ((uVar19 & 1) != 0) {
            local_128 = (undefined **)0x0;
            local_118 = 0;
            local_138 = plVar28;
            puStack_130 = puVar7;
            local_120 = puVar7;
            FUN_0277f02c(&local_e8,&local_138);
            local_170[0] = 0;
            iVar8 = (int)local_128 + (int)local_d8;
            iVar17 = local_128._4_4_ + local_d8._4_4_;
            iVar24 = local_118._4_4_ + local_d8._4_4_;
            local_1d8 = (undefined *)0x0;
            local_1d0 = (long *)0x0;
            local_118 = CONCAT44(iVar24,(int)local_118 + (int)local_d8);
            local_128 = (undefined **)CONCAT44(iVar17,iVar8);
            if (alStack_158 != (long *)0x0) {
              local_1d8 = (undefined *)0x400000000;
              local_1d0 = alStack_158;
            }
            local_98 = (undefined **)CONCAT44(iVar17,iVar8);
            uVar16 = 0;
            local_a0 = (uint *)(PTR_DAT_04bb2010 + 0x10);
            local_b0 = &puStack_130;
            local_a8 = &local_120;
            local_1c8 = &local_1b8;
            local_1c0 = &local_1b8;
            local_1b8 = local_1a0;
            local_1a0[0] = local_188;
            local_188[0] = local_170;
            while (iVar24 + 1 != iVar17) {
              do {
                FUN_01a50240(&local_1e0,&local_d0,1,&local_a0);
                if (1 < ((local_1e0 & 0xffff) + 3 & 0xffff)) {
                  local_b4 = local_b4 & 0xffffff00;
                  uVar15 = FUN_0137022c(param_1,&local_1e0,&local_a0,0,&local_b4);
                  plVar28 = local_1c8;
                  if ((char)local_b4 != '\0') {
                    if ((int)local_1d8 < local_1d8._4_4_) {
                      if (local_1c8 != (long *)0x0) {
                        local_1c8 = (long *)*local_1c8;
                      }
                      uVar13 = (int)local_98;
                      uVar14 = local_98._4_4_;
                      *(undefined2 *)plVar28 = (undefined2)local_1e0;
                      *(undefined1 *)((long)plVar28 + 2) = local_1e0._2_1_;
                      *(undefined1 *)((long)plVar28 + 3) = local_1e0._3_1_;
                      *(undefined4 *)((long)plVar28 + 4) = local_1dc;
                      *(undefined4 *)(plVar28 + 2) = uVar13;
                      *(undefined4 *)((long)plVar28 + 0x14) = uVar14;
                      plVar28[1] = (long)(PTR_DAT_04bb2010 + 0x10);
                      if ((int)local_1d8 < local_1d8._4_4_) {
                        local_1d0[(int)local_1d8] = (long)plVar28;
                        local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,(int)local_1d8 + 1);
                      }
                    }
                  }
                  uVar16 = uVar15 | uVar16;
                }
                if ((int)local_98 < *(int *)(local_a8 + 1)) {
                  iVar23 = (int)local_98 + 1;
                  iVar17 = local_98._4_4_;
                }
                else {
                  iVar23 = *(int *)(local_b0 + 1);
                  iVar17 = local_98._4_4_ + 1;
                  local_98 = (undefined **)CONCAT44(iVar17,(int)local_98);
                }
                local_98 = (undefined **)CONCAT44(local_98._4_4_,iVar23);
              } while (iVar8 != iVar23);
            }
            uVar15 = FUN_0137022c(param_1,&local_e8,&local_e0,1,0);
            puVar7 = PTR_DAT_04bb43c0;
            if (((*(byte *)(param_1 + 8) & 1) == 0) && (((uVar16 | uVar15) & 1) != 0)) {
              uVar10 = *(undefined2 *)PTR_DAT_04bb6298;
              lVar30 = *(long *)PTR_DAT_04bb43c0;
              uVar16 = FUN_0277d6c4(&local_e8);
              lVar27 = *(long *)puVar7;
              if (lVar27 == 0) {
LAB_0136f954:
                bVar29 = false;
              }
              else {
                lVar30 = *(long *)(lVar30 + 0x57e58);
                uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
                if ((*(uint *)(lVar30 + 0x1d8) <= uVar16) ||
                   (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar16 * 8) == 0))
                goto LAB_0136f954;
                local_a0 = (uint *)0x0;
                local_b0 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
                local_a8 = (undefined **)CONCAT44(local_e4,local_e8);
                uVar16 = FUN_0277d6c4(&local_a8);
                if (*(long *)PTR_DAT_04bb43c0 != 0) {
                  lVar27 = *(long *)(lVar27 + 0x57e58);
                  uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                  if ((uVar16 < *(uint *)(lVar27 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
                    lVar27 = *(long *)PTR_DAT_04bc0428;
                    uVar16 = FUN_0277d6c4(&local_e8);
                    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                    if (uVar16 < *(uint *)(lVar27 + 0x1d8)) {
                      lVar27 = *(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8);
                      if (lVar27 != 0) {
                        local_a0 = (uint *)lVar27;
                      }
                    }
                  }
                }
                uVar19 = FUN_01ae59b0(&local_b0);
                bVar29 = true;
                if ((uVar19 & 1) != 0) {
                  FUN_01513b9c(&local_e0,0,1);
                }
              }
              iVar8 = (int)local_128;
              local_98 = local_128;
              local_a0 = (uint *)(PTR_DAT_04bb2010 + 0x10);
              iVar17 = local_118._4_4_ + 1;
              local_b0 = &puStack_130;
              local_a8 = &local_120;
              if (iVar17 != local_128._4_4_) {
                do {
                  uVar19 = FUN_01a4f798(&local_d0,1,&local_a0);
                  if ((uVar19 & 1) != 0) {
                    local_b4 = 1;
                    local_1e0 = 1;
                    lVar27 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xe0);
                    if (lVar27 != 0) {
                      FUN_012e5af4(lVar27,&local_a0);
                    }
                  }
                  if ((int)local_98 < *(int *)(local_a8 + 1)) {
                    iVar23 = (int)local_98 + 1;
                    iVar24 = local_98._4_4_;
                  }
                  else {
                    iVar24 = local_98._4_4_ + 1;
                    iVar23 = *(int *)(local_b0 + 1);
                    local_98 = (undefined **)CONCAT44(iVar24,(int)local_98);
                  }
                  local_98 = (undefined **)CONCAT44(local_98._4_4_,iVar23);
                } while (iVar8 != iVar23 || iVar17 != iVar24);
              }
              uVar19 = FUN_01a4f798(&local_d0,0,&local_e0);
              if ((uVar19 & 1) != 0) {
                local_1e0 = 1;
                local_b0 = (undefined **)CONCAT44(local_b0._4_4_,1);
                local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
                lVar27 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xd0);
                if (lVar27 != 0) {
                  FUN_012e5af4(lVar27,&local_e0);
                }
              }
              if ((int)local_1d8 != 0) {
                lVar27 = (long)(int)local_1d8 << 3;
                plVar28 = local_1d0;
                do {
                  FUN_01a50970(&local_d0,0,*plVar28,*plVar28 + 8);
                  lVar27 = lVar27 + -8;
                  plVar28 = plVar28 + 1;
                } while (lVar27 != 0);
              }
              puVar7 = PTR_DAT_04bb43c0;
              if (bVar29) {
                local_a0 = (uint *)0x0;
                local_a8 = (undefined **)CONCAT44(local_e4,local_e8);
                lVar27 = *(long *)PTR_DAT_04bb43c0;
                local_b0 = ppuVar5;
                uVar16 = FUN_0277d6c4(&local_a8);
                if (*(long *)puVar7 == 0) {
LAB_0136fd00:
                  local_b4 = 0;
                }
                else {
                  lVar27 = *(long *)(lVar27 + 0x57e58);
                  uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                  if ((*(uint *)(lVar27 + 0x1d8) <= uVar16) ||
                     (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) == 0))
                  goto LAB_0136fd00;
                  lVar27 = *(long *)PTR_DAT_04bc0428;
                  uVar16 = FUN_0277d6c4(&local_e8);
                  uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                  if ((*(uint *)(lVar27 + 0x1d8) <= uVar16) ||
                     (puVar21 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8),
                     puVar21 == (uint *)0x0)) goto LAB_0136fd00;
                  uVar16 = *puVar21;
                  local_a0 = puVar21;
                  if (uVar16 == 0 || puVar21 == (uint *)(ulong)uVar16) {
LAB_0136fc48:
                    local_b4 = 0;
                  }
                  else {
                    puVar25 = (uint *)((long)puVar21 - (long)(ulong)uVar16);
                    if (((*puVar25 == 0) || (uVar16 = puVar25[1], uVar16 == 0)) ||
                       ((ulong)(ushort)puVar25[2] == 0)) goto LAB_0136fc48;
                    lVar27 = 0xc;
                    if (*(char *)((long)puVar25 + 10) != '\0') {
                      lVar27 = 0x1c;
                    }
                    lVar27 = (long)puVar25 + lVar27 + (ulong)(ushort)puVar25[2] * 8;
                    if (lVar27 == 0) goto LAB_0136fc48;
                    uVar15 = 0;
                    if ((ulong)uVar16 != 0) {
                      uVar15 = (uint)((ulong)((long)puVar21 - lVar27) / (ulong)uVar16);
                    }
                    if (*puVar25 <= uVar15) {
                      uVar15 = 0xffffffff;
                    }
                    if ((*(uint *)PTR_DAT_04bc0048 <= uVar15) ||
                       (uVar11 = *(ushort *)
                                  (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar15 * 2),
                       local_b4 = (uint)uVar11, 0x51 < uVar11)) goto LAB_0136fc48;
                  }
                }
                local_1e0 = 0x41;
                if (local_b4 == 0x41) {
                  FUN_015549a0(*(long *)PTR_DAT_04bb4c80 + 0x2540,uVar10,&local_e0);
                }
                uVar19 = FUN_01ae59b0(&local_b0);
                if ((uVar19 & 1) == 0) {
LAB_0136fd48:
                  if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
                    local_a8 = (undefined **)(PTR_DAT_04bb2018 + 0x10);
                    fVar31 = (float)(int)local_d8 * 0.5;
                    uVar16 = 0;
                    if (fVar31 != (float)(int)fVar31) {
                      uVar16 = (uint)(fVar31 < 0.0);
                    }
                    local_90 = (int)fVar31 - uVar16;
                    fVar31 = (float)local_d8._4_4_ * 0.5;
                    uVar16 = 0;
                    if (fVar31 != (float)(int)fVar31) {
                      uVar16 = (uint)(fVar31 < 0.0);
                    }
                    iStack_8c = (int)fVar31 - uVar16;
                    local_a0 = (uint *)CONCAT44(iStack_8c,local_90);
                    local_b0 = ppuVar6;
                    local_98 = local_a8;
                    FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_b0);
                  }
                  FUN_011dbc54(&local_e0,0);
                }
              }
              else {
                lVar27 = *(long *)PTR_DAT_04bbbc68;
                if (((lVar27 != 0) && (*(long *)(lVar27 + 0xb0) != 0)) &&
                   ((*(long *)(*(long *)(lVar27 + 0xb0) + 8) != 0 &&
                    ((((*(long *)(lVar27 + 0x488) != 0 &&
                       (*(long *)(*(long *)(lVar27 + 0x488) + 8) != 0)) &&
                      (*(long *)(lVar27 + 0x2b0) != 0)) &&
                     (*(long *)(*(long *)(lVar27 + 0x2b0) + 8) != 0)))))) {
                  uVar16 = FUN_0277d6c4(&local_e8);
                  uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
                  if ((uVar16 < *(uint *)(lVar27 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
                    FUN_0124c030(&local_b0,&local_e8);
                    iVar17 = FUN_0123db50(&local_a8,local_a0);
                    if (iVar17 == 0x2d) {
                      FUN_01225ba0(*(undefined8 *)PTR_DAT_04bb4778,&local_e0,2);
                      goto LAB_0136fde4;
                    }
                    goto LAB_0136fd48;
                  }
                }
              }
LAB_0136fde4:
              FUN_01a188c0(&local_138);
            }
          }
        }
        if (*(char *)((long)param_2 + 0x31) == '\0') {
          lVar27 = *(long *)(lVar20 + 0xc0);
          if (lVar27 != 0) {
            fVar32 = (float)(int)local_20c * 0.5;
            fVar31 = (float)(int)local_210 * 0.5;
            uVar16 = 0;
            if (fVar31 != (float)(int)fVar31) {
              uVar16 = (uint)(fVar31 < 0.0);
            }
            iVar17 = (int)fVar31 - uVar16;
            uVar16 = 0;
            if (fVar32 != (float)(int)fVar32) {
              uVar16 = (uint)(fVar32 < 0.0);
            }
            iVar8 = (int)fVar32 - uVar16;
            local_a8 = (undefined **)CONCAT44(iVar8,iVar17);
            local_1d0 = (long *)(PTR_DAT_04bb2010 + 0x10);
            fVar31 = (float)iVar17 * 10.0 + 2.5;
            fVar32 = (float)iVar8 * 10.0 + 2.5;
            iVar24 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
            iVar23 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
            local_108 = (undefined *)CONCAT44(iVar23,iVar24);
            local_1c8 = (long *)CONCAT44(iVar23,iVar24);
            local_1b8 = (undefined8 ***)CONCAT44(iVar23 + 1,iVar24 + 1);
            local_1d8 = puVar4;
            local_1c0 = local_1d0;
            local_110 = local_1d0;
            local_b0 = ppuVar3;
            if ((uint)(iVar17 - *(int *)(lVar27 + 0x40)) < *(uint *)(lVar27 + 0x30) &&
                (uint)(iVar8 - *(int *)(lVar27 + 0x44)) < *(uint *)(lVar27 + 0x34)) {
              FUN_01320eac(&local_138,lVar27,&local_b0);
              if ((short)local_138 != *(short *)PTR_DAT_04bb3170) {
                local_138 = (long *)0xfffe;
                FUN_0277d4ac(&local_138);
                uVar19 = FUN_01370014(param_2,&local_218,&local_208,&local_1d8,&local_110);
                if ((uVar19 & 1) != 0) {
                  if ((*(byte *)(param_1 + 8) & 1) == 0) {
                    FUN_0132101c(lVar27,&local_b0,PTR_DAT_04bb3170);
                  }
                  param_1[3] = param_1[3] + 1;
                }
              }
            }
          }
        }
        if ((int)local_210 < (int)local_1e8) {
          local_210 = local_210 + 1;
        }
        else {
          local_20c = local_20c + 1;
          local_210 = (uint)local_1f8;
        }
      } while ((uVar26 != local_210) || (uVar22 + 1 != local_20c));
    }
    if (param_1[3] < 0) {
      uVar26 = (uint)~(param_1[1] + *param_1 + param_1[2] + param_1[6] + param_1[5]) >> 0x1f;
    }
    else {
      uVar26 = 1;
    }
  }
  return uVar26;
}

