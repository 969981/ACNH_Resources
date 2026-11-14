
uint FUN_01521d80(undefined8 param_1,float *param_2)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  short *psVar13;
  long lVar14;
  undefined8 *puVar15;
  float fVar16;
  float fVar17;
  undefined *local_138;
  short local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined4 local_12c;
  long local_128;
  short local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined4 local_11c;
  undefined **local_118;
  undefined **local_110;
  undefined *local_108;
  int local_100;
  int local_fc;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  long local_c0;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  
  local_98 = 0;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar8 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_94 = *(undefined4 *)(puVar15 + 7);
  local_90 = FUN_017baf44();
  pfVar1 = param_2 + 6;
  local_90 = local_90 & 1;
  local_ac = 0;
  local_a0 = PTR_DAT_04bb3140 + 0x10;
  local_a8 = *(undefined4 *)PTR_DAT_04bb37e0;
  uStack_a4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  puVar11 = (undefined4 *)FUN_01a5190c(&local_a0,1,pfVar1,0);
  local_b4 = *puVar11;
  local_b0 = puVar11[1];
  uVar12 = FUN_0277e294(&local_b4);
  puVar3 = PTR_DAT_04bb43c0;
  if ((uVar12 & 1) == 0) {
LAB_015220a0:
    puVar11 = (undefined4 *)FUN_01a5190c(&local_a0,0,pfVar1,0);
    local_b4 = *puVar11;
    local_b0 = puVar11[1];
    psVar13 = (short *)FUN_0277e294(&local_b4);
    puVar4 = PTR_DAT_04bc0510;
    puVar3 = PTR_DAT_04bb43c0;
    if (((ulong)psVar13 & 1) == 0) goto LAB_01522490;
    local_c0 = 0;
    local_d0 = PTR_DAT_04bc0510 + 0x10;
    local_c8 = local_b4;
    uStack_c4 = local_b0;
    lVar14 = *(long *)PTR_DAT_04bb43c0;
    uVar9 = FUN_0277d6c4(&local_c8);
    if (*(long *)puVar3 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_b4);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (uVar9 < *(uint *)(lVar14 + 0x1d8)) {
          lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8);
          if (lVar14 != 0) {
            local_c0 = lVar14;
          }
        }
      }
    }
    puVar2 = PTR_DAT_04bb2010;
    local_d8 = 0;
    local_f8 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_f0 = PTR_DAT_04bb2010 + 0x10;
    local_e8 = 0;
    local_e0 = puStack_f0;
    FUN_01afb480(&local_d0,&local_f8);
    local_e8 = CONCAT44(local_e8._4_4_ + (int)param_2[9],(int)local_e8 + (int)param_2[8]);
    local_d8 = CONCAT44(local_d8._4_4_ + (int)param_2[9],(int)local_d8 + (int)param_2[8]);
    psVar13 = (short *)FUN_015114c0(param_2[4],&local_b4,&local_f8,param_2,param_2 + 3,0);
    if (((ulong)psVar13 & 1) == 0) goto LAB_01522490;
    iVar8 = (int)local_e8;
    iVar5 = local_e8._4_4_;
    iVar6 = (int)local_d8;
    iVar7 = local_d8._4_4_;
    uVar12 = FUN_01aeec60(&local_d0);
    if ((uVar12 & 1) != 0) {
      fVar16 = ((float)iVar8 * 5.0 + (float)iVar6 * 5.0 + 5.0) * 0.5;
      fVar17 = ((float)iVar5 * 5.0 + (float)iVar7 * 5.0 + 5.0) * 0.5;
      iVar8 = FUN_006f0400(*param_2 - fVar16,param_2[2] - fVar17);
      uVar9 = iVar8 + 0x20000000U >> 0x1e;
      local_118 = (undefined **)CONCAT44(local_118._4_4_,uVar9);
      uVar10 = FUN_01ae98d0(&local_d0);
      local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar10);
      if (uVar9 != uVar10) {
        iVar8 = FUN_006f0400(*param_2 - fVar16,param_2[2] - fVar17);
        psVar13 = (short *)FUN_01ae98d0(&local_d0);
        if (0x80000000 < (uint)((int)(long)((float)(int)psVar13 * 90.0 * 11930465.0) - iVar8))
        goto LAB_01522490;
      }
    }
    psVar13 = (short *)FUN_01ae7550(&local_d0);
    local_118 = (undefined **)CONCAT44(local_118._4_4_,(int)psVar13);
    if ((int)psVar13 - 1U < 6) {
      local_118 = &puStack_f0;
      local_110 = &local_e0;
      local_108 = puVar2 + 0x10;
      iVar8 = local_d8._4_4_ + 1;
      iVar5 = (int)local_e8;
      local_100 = (int)local_e8;
      local_fc = local_e8._4_4_;
      if (iVar8 != local_e8._4_4_) {
        do {
          psVar13 = (short *)FUN_01a5190c(&local_a0,1,&local_108,0);
          local_120 = *psVar13;
          local_11e = (undefined1)psVar13[1];
          local_11d = *(undefined1 *)((long)psVar13 + 3);
          local_11c = *(undefined4 *)(psVar13 + 2);
          if (local_120 != -2) {
            lVar14 = *(long *)puVar3;
            local_128 = 0;
            local_138 = puVar4 + 0x10;
            local_130 = local_120;
            local_12e = local_11e;
            local_12d = local_11d;
            local_12c = local_11c;
            uVar9 = FUN_0277d6c4(&local_130);
            if (*(long *)puVar3 != 0) {
              lVar14 = *(long *)(lVar14 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                lVar14 = *(long *)PTR_DAT_04bc0428;
                uVar9 = FUN_0277d6c4(&local_120);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                if (uVar9 < *(uint *)(lVar14 + 0x1d8)) {
                  lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8);
                  if (lVar14 != 0) {
                    local_128 = lVar14;
                  }
                }
              }
            }
            psVar13 = (short *)FUN_01ae59b0(&local_138);
          }
          if (local_100 < *(int *)(local_110 + 1)) {
            local_100 = local_100 + 1;
          }
          else {
            local_fc = local_fc + 1;
            local_100 = *(int *)(local_118 + 1);
          }
        } while ((iVar5 != local_100) || (iVar8 != local_fc));
      }
    }
    local_ac = 0;
  }
  else {
    local_c0 = 0;
    local_d0 = PTR_DAT_04bc0510 + 0x10;
    local_c8 = local_b4;
    uStack_c4 = local_b0;
    lVar14 = *(long *)PTR_DAT_04bb43c0;
    uVar9 = FUN_0277d6c4(&local_c8);
    if (*(long *)puVar3 != 0) {
      lVar14 = *(long *)(lVar14 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar14 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        lVar14 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_b4);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if (uVar9 < *(uint *)(lVar14 + 0x1d8)) {
          lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar9 * 8);
          if (lVar14 != 0) {
            local_c0 = lVar14;
          }
        }
      }
    }
    local_e8 = 0;
    local_f8 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_f0 = PTR_DAT_04bb2010 + 0x10;
    local_d8 = 0;
    local_e0 = puStack_f0;
    FUN_01afb480(&local_d0,&local_f8);
    local_e8 = CONCAT44(local_e8._4_4_ + (int)param_2[9],(int)local_e8 + (int)param_2[8]);
    local_d8 = CONCAT44(local_d8._4_4_ + (int)param_2[9],(int)local_d8 + (int)param_2[8]);
    uVar12 = FUN_015114c0(param_2[4],&local_b4,&local_f8,param_2,param_2 + 3,0);
    if ((uVar12 & 1) == 0) goto LAB_015220a0;
    iVar8 = (int)local_e8;
    iVar5 = local_e8._4_4_;
    iVar6 = (int)local_d8;
    iVar7 = local_d8._4_4_;
    psVar13 = (short *)FUN_01aeec60(&local_d0);
    if (((ulong)psVar13 & 1) != 0) {
      fVar16 = ((float)iVar8 * 5.0 + (float)iVar6 * 5.0 + 5.0) * 0.5;
      fVar17 = ((float)iVar5 * 5.0 + (float)iVar7 * 5.0 + 5.0) * 0.5;
      iVar8 = FUN_006f0400(*param_2 - fVar16,param_2[2] - fVar17);
      uVar9 = iVar8 + 0x20000000U >> 0x1e;
      local_118 = (undefined **)CONCAT44(local_118._4_4_,uVar9);
      psVar13 = (short *)FUN_01ae98d0(&local_d0);
      local_138 = (undefined *)CONCAT44(local_138._4_4_,(uint)psVar13);
      if (uVar9 != (uint)psVar13) {
        iVar8 = FUN_006f0400(*param_2 - fVar16,param_2[2] - fVar17);
        psVar13 = (short *)FUN_01ae98d0(&local_d0);
        if (0x80000000 < (uint)((int)(long)((float)(int)psVar13 * 90.0 * 11930465.0) - iVar8))
        goto LAB_015220a0;
      }
    }
    local_ac = 1;
  }
  local_a8 = local_b4;
  uStack_a4 = local_b0;
LAB_01522490:
  uVar9 = FUN_015224d0(psVar13,&local_a8,pfVar1,&local_ac,*(undefined1 *)(param_2 + 5));
  return uVar9 & 1;
}

