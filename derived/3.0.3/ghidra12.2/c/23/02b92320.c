
/* WARNING: Removing unreachable block (ram,0x02b92d0c) */
/* WARNING: Removing unreachable block (ram,0x02b92cb4) */
/* WARNING: Removing unreachable block (ram,0x02b92c5c) */
/* WARNING: Removing unreachable block (ram,0x02b92b14) */
/* WARNING: Removing unreachable block (ram,0x02b9270c) */
/* WARNING: Removing unreachable block (ram,0x02b926ac) */
/* WARNING: Removing unreachable block (ram,0x02b92678) */
/* WARNING: Removing unreachable block (ram,0x02b926fc) */
/* WARNING: Removing unreachable block (ram,0x02b92ac4) */
/* WARNING: Removing unreachable block (ram,0x02b92b50) */
/* WARNING: Removing unreachable block (ram,0x02b92c6c) */
/* WARNING: Removing unreachable block (ram,0x02b92c78) */
/* WARNING: Removing unreachable block (ram,0x02b92ee0) */
/* WARNING: Removing unreachable block (ram,0x02b92d54) */
/* WARNING: Removing unreachable block (ram,0x02b92d44) */
/* WARNING: Removing unreachable block (ram,0x02b92eac) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_02b92320(undefined4 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  short *psVar13;
  undefined **ppuVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined **ppuVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined **local_810;
  undefined **local_808;
  undefined *local_800;
  uint local_7f8;
  uint local_7f4;
  undefined *local_7f0;
  int local_7e8;
  int local_7e4;
  undefined4 uStack_7e0;
  undefined3 uStack_7dc;
  undefined4 local_7d8;
  uint uStack_7d4;
  undefined *local_7d0;
  undefined8 local_7c8;
  undefined4 local_7c0;
  undefined *local_7b8;
  undefined *puStack_7b0;
  undefined8 local_7a8;
  undefined *puStack_7a0;
  undefined8 local_798;
  undefined *puStack_790;
  undefined *local_788;
  undefined8 local_780;
  undefined *local_778;
  undefined8 local_770;
  undefined *local_768;
  undefined *puStack_760;
  undefined8 local_758;
  undefined *puStack_750;
  undefined8 local_748;
  undefined *puStack_740;
  undefined *local_738;
  undefined8 local_730;
  undefined *local_728;
  undefined8 local_720;
  undefined1 auStack_718 [8];
  long local_710;
  undefined4 local_708;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined1 auStack_6d8 [40];
  undefined *apuStack_6b0 [42];
  undefined *apuStack_560 [14];
  undefined *apuStack_4f0 [14];
  undefined *apuStack_480 [81];
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_178;
  undefined4 local_174;
  undefined *apuStack_170 [2];
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_108;
  undefined4 local_104;
  undefined *apuStack_100 [2];
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b4;
  undefined8 local_b0;
  float local_a8 [2];
  long local_a0;
  undefined4 local_94;
  undefined4 local_90;
  uint local_8c [3];
  
  local_b4 = FUN_02b59f30(*(undefined2 *)(param_1 + 4));
  puVar3 = PTR_DAT_04bb2010;
  uVar10 = local_b4;
  if (1 < local_b4) {
    uVar10 = 0;
  }
  iVar7 = *(int *)((long)&DAT_04102290 +
                  (-(ulong)(uVar10 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar10 << 3));
  local_7c0 = 0;
  local_7d0 = PTR_DAT_04bc4568 + 0x10;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_790 = PTR_DAT_04bbc5d8 + 0x10;
  local_788 = PTR_DAT_04bb2018 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  fVar20 = (float)param_1[1] - ((float)iVar7 * 0.5 * 5.0 + -2.5);
  local_7c8 = 0;
  local_798 = 0;
  local_780 = 0;
  local_770 = 0;
  local_7a8 = 0;
  local_758 = 0;
  local_748 = 0;
  local_730 = 0;
  local_720 = 0;
  iVar9 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  iVar11 = (int)((float)(int)((float)param_1[3] + -17.5) / 5.0) -
           (uint)((float)param_1[3] + -17.5 < 0.0);
  local_7b8 = puVar1;
  puStack_7b0 = puVar2;
  puStack_7a0 = puVar2;
  local_778 = local_788;
  local_768 = puVar1;
  puStack_760 = puVar2;
  puStack_750 = puVar2;
  puStack_740 = puVar1;
  local_738 = puVar2;
  local_728 = puVar2;
  FUN_02ad636c(auStack_718);
  local_810._0_4_ = *param_1;
  uStack_7e0 = 0;
  uStack_7dc = 0;
  local_7d8 = 0;
  uStack_7d4 = local_b4;
  local_808 = (undefined **)puVar1;
  local_800 = puVar2;
  local_7f8 = iVar9;
  local_7f4 = iVar11;
  local_7f0 = puVar2;
  local_7e8 = iVar7 + iVar9 + -1;
  local_7e4 = iVar11 + 7;
  FUN_02a7bc88(&local_7d0,&local_810);
  if (param_2 != 0) {
    *(undefined8 *)(param_2 + 8) = local_7c8;
    *(undefined4 *)(param_2 + 0x10) = local_7c0;
    *(undefined4 *)(param_2 + 0x28) = (undefined4)local_7a8;
    *(undefined4 *)(param_2 + 0x2c) = local_7a8._4_4_;
    *(undefined4 *)(param_2 + 0x38) = (undefined4)local_798;
    *(undefined4 *)(param_2 + 0x3c) = local_798._4_4_;
    *(undefined4 *)(param_2 + 0x50) = (undefined4)local_780;
    *(undefined4 *)(param_2 + 0x54) = local_780._4_4_;
    *(undefined4 *)(param_2 + 0x60) = (undefined4)local_770;
    *(undefined4 *)(param_2 + 100) = local_770._4_4_;
    *(undefined4 *)(param_2 + 0x78) = (undefined4)local_758;
    *(undefined4 *)(param_2 + 0x7c) = local_758._4_4_;
    *(undefined4 *)(param_2 + 0x88) = (undefined4)local_748;
    *(undefined4 *)(param_2 + 0x8c) = local_748._4_4_;
    *(undefined4 *)(param_2 + 0xa0) = (undefined4)local_730;
    *(undefined4 *)(param_2 + 0xa4) = local_730._4_4_;
    *(undefined4 *)(param_2 + 0xb0) = (undefined4)local_720;
    *(undefined4 *)(param_2 + 0xb4) = local_720._4_4_;
    *(long *)(param_2 + 0xc0) = local_710;
    *(undefined4 *)(param_2 + 200) = local_708;
    *(undefined4 *)(param_2 + 0xe0) = local_6f0;
    *(undefined4 *)(param_2 + 0xe4) = local_6ec;
    *(undefined4 *)(param_2 + 0xf0) = local_6e0;
    *(undefined4 *)(param_2 + 0xf4) = local_6dc;
    FUN_0228efe8(param_2 + 0xf8,auStack_6d8);
    *(undefined4 *)(param_2 + 0x5d8) = local_1f8;
    *(undefined4 *)(param_2 + 0x5dc) = local_1f4;
    *(undefined4 *)(param_2 + 0x5e8) = local_1e8;
    *(undefined4 *)(param_2 + 0x5ec) = local_1e4;
    *(undefined4 *)(param_2 + 0x600) = local_1d0;
    *(undefined4 *)(param_2 + 0x604) = local_1cc;
    *(undefined4 *)(param_2 + 0x610) = local_1c0;
    *(undefined4 *)(param_2 + 0x614) = local_1bc;
    *(undefined4 *)(param_2 + 0x620) = local_1b0;
    *(undefined4 *)(param_2 + 0x624) = local_1ac;
    *(undefined4 *)(param_2 + 0x630) = local_1a0;
    *(undefined4 *)(param_2 + 0x634) = local_19c;
    *(undefined4 *)(param_2 + 0x648) = local_188;
    *(undefined4 *)(param_2 + 0x64c) = local_184;
    *(undefined4 *)(param_2 + 0x658) = local_178;
    *(undefined4 *)(param_2 + 0x65c) = local_174;
    *(undefined4 *)(param_2 + 0x670) = local_160;
    *(undefined4 *)(param_2 + 0x674) = local_15c;
    *(undefined4 *)(param_2 + 0x680) = local_150;
    *(undefined4 *)(param_2 + 0x684) = local_14c;
    *(undefined4 *)(param_2 + 0x690) = local_140;
    *(undefined4 *)(param_2 + 0x694) = local_13c;
    *(undefined4 *)(param_2 + 0x6a0) = local_130;
    *(undefined4 *)(param_2 + 0x6a4) = local_12c;
    *(undefined4 *)(param_2 + 0x6b8) = local_118;
    *(undefined4 *)(param_2 + 0x6bc) = local_114;
    *(undefined4 *)(param_2 + 0x6c8) = local_108;
    *(undefined4 *)(param_2 + 0x6cc) = local_104;
    *(undefined4 *)(param_2 + 0x6e0) = local_f0;
    *(undefined4 *)(param_2 + 0x6e4) = local_ec;
    *(undefined4 *)(param_2 + 0x6f0) = local_e0;
    *(undefined4 *)(param_2 + 0x6f4) = local_dc;
    *(undefined4 *)(param_2 + 0x700) = local_d0;
    *(undefined4 *)(param_2 + 0x704) = local_cc;
    *(undefined4 *)(param_2 + 0x710) = local_c0;
    *(undefined4 *)(param_2 + 0x714) = local_bc;
  }
  puVar1 = PTR_DAT_04bb27c8;
  if ((((byte)local_7c8 >> 1 & 1) != 0) ||
     (((ppuVar14 = &local_768, local_710 != 0 && (*(long *)(local_710 + 0x88) != 0)) &&
      (*(char *)(*(long *)(local_710 + 0x88) + 0x48) != '\0')))) {
    ppuVar14 = apuStack_560;
  }
  local_810 = ppuVar14 + 1;
  local_808 = ppuVar14 + 3;
  local_800 = puVar3 + 0x10;
  iVar9 = *(int *)(ppuVar14 + 2);
  local_7f4 = *(int *)((long)ppuVar14 + 0x14);
  iVar7 = *(int *)((long)ppuVar14 + 0x24) + 1;
  if (iVar7 != local_7f4) {
    fVar20 = -100.0;
    local_7f8 = iVar9;
    do {
      uVar12 = FUN_02a7c78c(&local_7d0,&local_800);
      if ((uVar12 & 1) != 0) {
        local_a8[0] = 0.0;
        local_b0 = 0;
        local_94 = 0x1d;
        local_b0 = 0x20000000;
        local_94 = 0x1d;
        local_a8[0] = 0.0;
        lVar15 = *(long *)puVar1;
        if (((lVar15 != 0) && (*(long *)(lVar15 + 0xa8) != 0)) &&
           (uVar12 = FUN_00949898(lVar15 + 0x28,&local_800,&local_b0), (uVar12 & 1) != 0)) {
          return 0;
        }
        local_a8[0] = 0.0;
        local_b0 = 0;
        local_94 = 0x2e;
        local_94 = 0x2e;
        local_a8[0] = 0.0;
        local_b0 = 0x400000000000;
        lVar15 = *(long *)puVar1;
        if (((lVar15 != 0) && (*(long *)(lVar15 + 0xa8) != 0)) &&
           (uVar12 = FUN_00949898(lVar15 + 0x28,&local_800,&local_b0), (uVar12 & 1) != 0)) {
          return 0;
        }
        local_a8[0] = 0.0;
        local_b0 = 0;
        local_94 = 1;
        local_b0._0_4_ = 2;
        local_b0._4_4_ = 0;
        local_94 = 1;
        local_a8[0] = 0.0;
        lVar15 = *(long *)puVar1;
        if (((lVar15 != 0) && (*(long *)(lVar15 + 0xa8) != 0)) &&
           (uVar12 = FUN_00949898(lVar15 + 0x28,&local_800,&local_b0), (uVar12 & 1) != 0)) {
          return 0;
        }
        if (-100.0 < fVar20) {
          lVar15 = *(long *)puVar1;
          local_a8[0] = (float)(int)local_7f4 * 5.0 + 2.5;
          local_b0 = CONCAT44(local_b0._4_4_,(float)(int)local_7f8 * 5.0 + 2.5);
          if (((lVar15 == 0) || (*(long *)(lVar15 + 0xa8) == 0)) ||
             (*(char *)(lVar15 + 0x11c8) != '\0')) {
            fVar21 = -500.0;
          }
          else {
            local_8c[0] = (uint)local_8c[0]._1_3_ << 8;
            sVar8 = *(short *)PTR_DAT_04bb6298;
            if (sVar8 == -1) {
              local_94 = 7;
            }
            else {
              puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
              if (0xff < (uint)(int)sVar8) {
                puVar4 = (uint *)PTR_DAT_04bc39f8;
              }
              local_94 = 7;
              if ((*puVar4 & 2) != 0) {
                local_94 = 5;
              }
            }
            fVar21 = (float)FUN_00962700(*(long *)(lVar15 + 0xa8),&local_b0,&local_94,1,local_8c);
          }
          fVar20 = fVar21 - fVar20;
          fVar22 = -fVar20;
          if (0.0 <= fVar20) {
            fVar22 = fVar20;
          }
          fVar20 = fVar21;
          if (1.25 <= fVar22) {
            return 0;
          }
        }
        else {
          lVar15 = *(long *)puVar1;
          local_a8[0] = (float)(int)local_7f4 * 5.0 + 2.5;
          local_b0 = CONCAT44(local_b0._4_4_,(float)(int)local_7f8 * 5.0 + 2.5);
          if (((lVar15 == 0) || (*(long *)(lVar15 + 0xa8) == 0)) ||
             (*(char *)(lVar15 + 0x11c8) != '\0')) {
            fVar20 = -500.0;
          }
          else {
            local_8c[0] = (uint)local_8c[0]._1_3_ << 8;
            sVar8 = *(short *)PTR_DAT_04bb6298;
            if (sVar8 == -1) {
              local_94 = 7;
            }
            else {
              puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
              if (0xff < (uint)(int)sVar8) {
                puVar4 = (uint *)PTR_DAT_04bc39f8;
              }
              local_94 = 7;
              if ((*puVar4 & 2) != 0) {
                local_94 = 5;
              }
            }
            fVar20 = (float)FUN_00962700(*(long *)(lVar15 + 0xa8),&local_b0,&local_94,1,local_8c);
          }
        }
      }
      if ((int)local_7f8 < *(int *)(local_808 + 1)) {
        local_7f8 = local_7f8 + 1;
      }
      else {
        local_7f4 = local_7f4 + 1;
        local_7f8 = *(uint *)(local_810 + 1);
      }
    } while (iVar9 != local_7f8 || iVar7 != local_7f4);
  }
  puVar3 = PTR_DAT_04bb27a8;
  ppuVar14 = &puStack_740;
  lVar15 = *(long *)PTR_DAT_04bb27a8;
  puVar5 = &DAT_05636dd8;
  if (*(long *)(lVar15 + 0x1f8) != 0) {
    puVar5 = (undefined8 *)(*(long *)(lVar15 + 0x1f8) + 0x148);
  }
  if (((byte)local_7c8 >> 1 & 1) == 0) {
    ppuVar18 = ppuVar14;
    if (local_710 != 0) {
      if ((*(long *)(local_710 + 0xd8) != 0) &&
         (*(char *)(*(long *)(local_710 + 0xd8) + 0x48) != '\0')) {
        ppuVar18 = apuStack_100;
        goto LAB_02b92b50;
      }
      if ((*(long *)(local_710 + 0x90) != 0) &&
         (*(char *)(*(long *)(local_710 + 0x90) + 0x48) != '\0')) goto LAB_02b92b30;
    }
  }
  else {
LAB_02b92b30:
    ppuVar18 = apuStack_4f0;
LAB_02b92b50:
  }
  local_810 = ppuVar18 + 1;
  local_808 = ppuVar18 + 3;
  local_800 = PTR_DAT_04bb2010 + 0x10;
  uVar19 = *(uint *)(ppuVar18 + 2);
  local_7f4 = *(uint *)((long)ppuVar18 + 0x14);
  uVar10 = *(int *)((long)ppuVar18 + 0x24) + 1;
  if (uVar10 != local_7f4) {
    local_7f8 = uVar19;
    do {
      uVar12 = FUN_02a7c2e0(&local_7d0,&local_800);
      if (((((((uVar12 & 1) != 0) && (*(int *)(puVar5 + 4) <= (int)local_7f8)) &&
            ((int)local_7f8 <= *(int *)(puVar5 + 6))) &&
           ((*(int *)((long)puVar5 + 0x24) <= (int)local_7f4 &&
            ((int)local_7f4 <= *(int *)((long)puVar5 + 0x34))))) && (puVar5[1] != 0)) &&
         (((local_7f8 < 0x120 && (local_7f4 < 0x100)) &&
          (*(int *)(puVar5[1] + (ulong)local_7f8 * 0x400 + (ulong)local_7f4 * 4 + 0x30) != -1)))) {
        return 0;
      }
      if ((int)local_7f8 < *(int *)(local_808 + 1)) {
        local_7f8 = local_7f8 + 1;
      }
      else {
        local_7f4 = local_7f4 + 1;
        local_7f8 = *(uint *)(local_810 + 1);
      }
    } while (uVar19 != local_7f8 || uVar10 != local_7f4);
    lVar15 = *(long *)puVar3;
  }
  if (*(long *)(lVar15 + 0x1f8) == 0) {
    return 0;
  }
  if (((byte)local_7c8 >> 1 & 1) == 0) {
    ppuVar18 = &local_7b8;
    if (((local_710 != 0) && (*(long *)(local_710 + 0xd0) != 0)) &&
       (*(char *)(*(long *)(local_710 + 0xd0) + 0x48) != '\0')) {
      ppuVar18 = apuStack_170;
    }
  }
  else {
    ppuVar18 = apuStack_480;
  }
  local_b0 = CONCAT44(local_b0._4_4_,1);
  local_810._0_4_ = 0;
  lVar15 = *(long *)(lVar15 + 0x1f8) + 200;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  uVar10 = (uint)local_810;
  do {
    lVar17 = lVar15 + (ulong)uVar10 * 0x10;
    if (7 < uVar10) {
      lVar17 = lVar15;
    }
    if (*(long *)(lVar17 + 8) != 0) {
      iVar9 = *(int *)(ppuVar18 + 2);
      local_7f4 = *(int *)((long)ppuVar18 + 0x14);
      iVar7 = *(int *)((long)ppuVar18 + 0x24) + 1;
      local_810 = ppuVar18 + 1;
      local_808 = ppuVar18 + 3;
      local_800 = puVar3;
      local_7f8 = iVar9;
      if (iVar7 != local_7f4) {
        do {
          uVar12 = FUN_02a7c8c0(&local_7d0,&local_800);
          if ((uVar12 & 1) == 0) {
            lVar16 = *(long *)(lVar17 + 8);
            if (lVar16 == 0) {
              psVar13 = (short *)PTR_DAT_04bb37e0;
            }
            else {
              lVar6 = lVar16 + 0x130 + (ulong)*(uint *)(lVar16 + 0x198) * 0x30;
              if (1 < *(uint *)(lVar16 + 0x198)) {
                lVar6 = lVar16 + 0x130;
              }
              psVar13 = (short *)FUN_012eb21c(lVar6,&local_800,0);
            }
            if (*psVar13 != -2) {
              return 0;
            }
          }
          if ((int)local_7f8 < *(int *)(local_808 + 1)) {
            local_7f8 = local_7f8 + 1;
          }
          else {
            local_7f4 = local_7f4 + 1;
            local_7f8 = *(uint *)(local_810 + 1);
          }
        } while (iVar9 != local_7f8 || iVar7 != local_7f4);
      }
    }
    puVar2 = PTR_DAT_04bbbc68;
    puVar1 = PTR_DAT_04bb37e0;
    uVar19 = 8;
    if ((int)uVar10 < 8) {
      uVar19 = uVar10 + 1;
    }
    uVar10 = uVar19;
  } while (uVar19 != 2);
  lVar15 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if ((lVar15 == 0) || (*(long *)(lVar15 + 0xd0) == 0)) {
    return 0;
  }
  if (((byte)local_7c8 >> 1 & 1) == 0) {
    if (local_710 == 0) goto LAB_02b92f1c;
    uVar10 = 10;
    if ((*(long *)(local_710 + 0xc0) == 0) ||
       (*(char *)(*(long *)(local_710 + 0xc0) + 0x48) == '\0')) goto LAB_02b92f1c;
  }
  else {
    uVar10 = 4;
  }
  ppuVar14 = apuStack_6b0 + (ulong)uVar10 * 0xe;
  if (10 < uVar10) {
    ppuVar14 = apuStack_6b0;
  }
LAB_02b92f1c:
  local_810 = ppuVar14 + 1;
  local_808 = ppuVar14 + 3;
  local_800 = PTR_DAT_04bb2010 + 0x10;
  iVar7 = *(int *)((long)ppuVar14 + 0x24) + 1;
  iVar9 = *(int *)(ppuVar14 + 2);
  local_7f4 = *(int *)((long)ppuVar14 + 0x14);
  if (iVar7 != local_7f4) {
    local_7f8 = iVar9;
    do {
      lVar17 = *(long *)(lVar15 + 0xd0);
      if (lVar17 == 0) {
        psVar13 = (short *)puVar1;
      }
      else {
        lVar16 = lVar17 + 0x130 + (ulong)*(uint *)(lVar17 + 0x198) * 0x30;
        if (1 < *(uint *)(lVar17 + 0x198)) {
          lVar16 = lVar17 + 0x130;
        }
        psVar13 = (short *)FUN_012eb21c(lVar16,&local_800,0);
      }
      local_94 = *(undefined4 *)psVar13;
      local_90 = *(undefined4 *)(psVar13 + 2);
      if (((((*psVar13 != -2) && (uVar12 = FUN_02a7c208(&local_7d0,&local_800), (uVar12 & 1) != 0))
           && (lVar17 = *(long *)puVar2, lVar17 != 0)) &&
          (((*(long *)(lVar17 + 0xb0) != 0 && (*(long *)(*(long *)(lVar17 + 0xb0) + 8) != 0)) &&
           ((*(long *)(lVar17 + 0x488) != 0 &&
            ((*(long *)(*(long *)(lVar17 + 0x488) + 8) != 0 && (*(long *)(lVar17 + 0x2b0) != 0))))))
          )) && (*(long *)(*(long *)(lVar17 + 0x2b0) + 8) != 0)) {
        uVar10 = FUN_0277d6c4(&local_94);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          FUN_0124c030(&local_b0,&local_94);
          if (local_a0 != 0) {
            local_8c[0] = 4;
            lVar17 = FUN_01246470(local_a0,0x16,0x623dc307,*(undefined8 *)PTR_DAT_04bbbc98);
            if (lVar17 != 0) {
              uVar10 = local_8c[0] + 7;
              if (-1 < (int)local_8c[0]) {
                uVar10 = local_8c[0];
              }
              if ((*(byte *)(lVar17 + (ulong)(uint)((int)uVar10 >> 3)) >> (ulong)(local_8c[0] & 7) &
                  1) != 0) {
                return 0;
              }
            }
          }
          iVar11 = FUN_0123db50(local_a8,local_a0);
          if ((iVar11 - 2U & 0xfffffff9) == 0) {
            return 0;
          }
        }
      }
      if ((int)local_7f8 < *(int *)(local_808 + 1)) {
        local_7f8 = local_7f8 + 1;
      }
      else {
        local_7f4 = local_7f4 + 1;
        local_7f8 = *(uint *)(local_810 + 1);
      }
    } while ((iVar9 != local_7f8) || (iVar7 != local_7f4));
  }
  return 1;
}

