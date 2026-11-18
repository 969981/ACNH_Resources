
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_036835b0(undefined8 *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  long lVar12;
  uint uVar13;
  int *piVar14;
  long lVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_3c80;
  undefined8 local_3c78;
  undefined8 local_3c70;
  undefined8 uStack_3c68;
  undefined8 local_3c60;
  undefined8 uStack_3c58;
  undefined8 local_3c50;
  undefined8 uStack_3c48;
  undefined8 local_3c40;
  undefined8 uStack_3c38;
  float local_3c30;
  uint local_3524;
  uint local_3520;
  uint local_351c;
  int local_3518;
  undefined *local_3510;
  undefined1 auStack_3508 [1876];
  uint local_2db4;
  uint local_2db0;
  uint local_2dac;
  int local_2da8;
  undefined *local_2da0;
  undefined1 auStack_2d98 [1876];
  uint local_2644;
  uint local_2640;
  uint local_263c;
  int local_2638;
  undefined *local_2630;
  undefined1 auStack_2628 [1876];
  uint local_1ed4;
  uint local_1ed0;
  uint local_1ecc;
  int local_1ec8;
  undefined *local_1ec0;
  undefined1 auStack_1eb8 [1876];
  uint local_1764;
  uint local_1760;
  uint local_175c;
  int local_1758;
  undefined *local_1750;
  undefined1 auStack_1748 [1876];
  uint local_ff4;
  uint local_ff0;
  uint local_fec;
  int local_fe8;
  undefined *local_fe0;
  undefined1 auStack_fd8 [1876];
  uint local_884;
  uint local_880;
  uint local_87c;
  int local_878;
  undefined *local_870;
  undefined1 auStack_868 [1876];
  uint local_114;
  uint local_110;
  uint local_10c;
  int local_108;
  float local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  undefined8 local_a0;
  float *local_98;
  uint local_90;
  uint local_80;
  uint uStack_7c;
  
  piVar14 = (int *)*param_1;
  fVar23 = 0.0;
  iVar18 = *piVar14;
  iVar3 = piVar14[2];
  iVar4 = piVar14[3];
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  local_3c30 = 0.0;
  local_a8 = 0.0;
  local_3c40 = 0;
  uStack_3c38 = 0;
  iVar3 = iVar18 * iVar3 + -1;
  iVar4 = iVar4 * iVar18 + -1;
  local_3c50 = 0;
  uStack_3c48 = 0;
  local_3c60 = 0;
  uStack_3c58 = 0;
  local_3c70 = 0;
  uStack_3c68 = 0;
  local_3c80 = (undefined **)0x0;
  local_3c78 = (undefined8 *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = (undefined **)0x0;
  uStack_f0 = (undefined8 *)0x0;
  uVar10 = 0;
  do {
    piVar14 = (int *)*param_1;
    local_a0 = &PTR_FUN_04b43390;
    local_98 = (float *)CONCAT44(local_98._4_4_,uVar10);
    iVar18 = *piVar14;
    uVar13 = 0;
    if (iVar18 != 0) {
      uVar13 = iVar3 / iVar18;
    }
    local_fc = uVar10;
    if ((int)uVar13 < 0) {
LAB_03683774:
      iVar18 = 0;
    }
    else {
      iVar5 = 0;
      if (iVar18 != 0) {
        iVar5 = iVar4 / iVar18;
      }
      if (iVar5 < 0) goto LAB_03683774;
      uVar17 = 0;
      iVar18 = 0;
      do {
        uVar19 = 0;
        do {
          lVar15 = (long)(int)(uVar17 + piVar14[2] * uVar19);
          if ((uint)piVar14[3] <= uVar19 || (uint)piVar14[2] <= uVar17) {
            lVar15 = 0;
          }
          if ((*(ushort *)(*(long *)(piVar14 + 4) + lVar15 * 0x23c + 0x238) & 1) != 0)
          goto LAB_03683774;
          iVar9 = (*(code *)*local_a0)(&local_a0,*(long *)(piVar14 + 4) + lVar15 * 0x23c);
          uVar19 = uVar19 + 1;
          iVar18 = iVar9 + iVar18;
        } while (iVar5 + 1U != uVar19);
        bVar8 = uVar17 != uVar13;
        uVar17 = uVar17 + 1;
      } while (bVar8);
    }
    local_100 = 0.0;
    piVar16 = (int *)*param_1;
    local_90 = local_fc;
    piVar14 = (int *)((long)param_1 + 0x2c) + local_fc;
    if (0x14 < local_fc) {
      piVar14 = (int *)((long)param_1 + 0x2c);
    }
    *piVar14 = iVar18;
    local_98 = &local_100;
    local_a0 = &PTR_FUN_04b433e0;
    uVar13 = 0;
    if (*piVar16 != 0) {
      uVar13 = iVar3 / *piVar16;
    }
    if (-1 < (int)uVar13) {
      uVar17 = 0;
      do {
        iVar18 = 0;
        if (*piVar16 != 0) {
          iVar18 = iVar4 / *piVar16;
        }
        if (-1 < iVar18) {
          uVar19 = 0;
          do {
            lVar15 = *(long *)(piVar16 + 4) + (long)(int)(uVar17 + piVar16[2] * uVar19) * 0x23c;
            if ((uint)piVar16[3] <= uVar19 || (uint)piVar16[2] <= uVar17) {
              lVar15 = 0;
            }
            local_80 = uVar17;
            uStack_7c = uVar19;
            (*(code *)*local_a0)(&local_a0,lVar15,&local_80);
            uVar19 = uVar19 + 1;
          } while (iVar18 + 1U != uVar19);
        }
        bVar8 = uVar17 != uVar13;
        uVar17 = uVar17 + 1;
      } while (bVar8);
    }
    uVar20 = (*(code *)(&PTR_LAB_04b43230)[(long)(int)local_fc * 2])(local_100);
    *(undefined4 *)((long)&local_f8 + (long)(int)local_fc * 4) = uVar20;
    fVar21 = (float)(*(code *)(&PTR_LAB_04b43238)[(long)(int)local_fc * 2])(local_100);
    *(float *)((long)&local_3c80 + (long)(int)local_fc * 4) = fVar21;
    uVar6 = local_3c60;
    fVar21 = local_100 - fVar21;
    if (2 < local_fc - 10) {
      fVar21 = -0.0;
    }
    uVar13 = 0x15;
    if ((int)uVar10 < 0x15) {
      uVar13 = uVar10 + 1;
    }
    fVar23 = fVar23 + fVar21;
    uVar10 = uVar13;
  } while (uVar13 != 0x15);
  uVar20 = (undefined4)((ulong)local_a0 >> 0x20);
  local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
  fVar21 = local_3c60._4_4_;
  local_3c60 = local_3c60 & 0xffffffff;
  uVar7 = local_3c60;
  piVar14 = (int *)(param_1 + 0x10);
  fVar21 = (float)NEON_fminnm(uStack_3c68._4_4_ + fVar21,0x433e0000);
  uStack_3c68 = CONCAT44(fVar21,(float)uStack_3c68);
  local_a0 = (undefined **)CONCAT44(uVar20,1);
  local_a0 = (undefined **)CONCAT44(uVar20,2);
  fVar22 = *(float *)((long)param_1 + 0x24) + (float)local_f8 + local_f8._4_4_;
  local_a0 = (undefined **)CONCAT44(uVar20,3);
  local_a0 = (undefined **)CONCAT44(uVar20,4);
  local_a0 = (undefined **)CONCAT44(uVar20,5);
  local_a0 = (undefined **)CONCAT44(uVar20,6);
  local_a0 = (undefined **)CONCAT44(uVar20,7);
  local_a0 = (undefined **)CONCAT44(uVar20,8);
  local_3c60._0_4_ = (float)uVar6;
  local_a0 = (undefined **)CONCAT44(uVar20,9);
  local_a0 = (undefined **)CONCAT44(uVar20,10);
  local_a0 = (undefined **)CONCAT44(uVar20,0xb);
  local_a0 = (undefined **)CONCAT44(uVar20,0xc);
  local_a0 = (undefined **)CONCAT44(uVar20,0xd);
  local_a0 = (undefined **)CONCAT44(uVar20,0xe);
  local_a0 = (undefined **)CONCAT44(uVar20,0xf);
  local_a0 = (undefined **)CONCAT44(uVar20,0x10);
  local_a0 = (undefined **)CONCAT44(uVar20,0x11);
  local_a0 = (undefined **)CONCAT44(uVar20,0x12);
  local_a0 = (undefined **)CONCAT44(uVar20,0x13);
  local_a0 = (undefined **)CONCAT44(uVar20,0x14);
  local_f8 = (undefined **)((ulong)local_f8 & 0xffffffff00000000);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_1 + 0xf);
  *(float *)((long)param_1 + 0x1c) =
       *(float *)((long)param_1 + 0x1c) + (float)local_3c80 + local_3c80._4_4_ + (float)local_3c78 +
       local_3c78._4_4_ + (float)local_3c70 + local_3c70._4_4_ + (float)uStack_3c68 + fVar21 +
       (float)local_3c60 + 0.0 + (float)uStack_3c58 + uStack_3c58._4_4_ + (float)local_3c50 +
       local_3c50._4_4_ + (float)uStack_3c48 + uStack_3c48._4_4_ + (float)local_3c40 +
       local_3c40._4_4_ + (float)uStack_3c38 + uStack_3c38._4_4_ + local_3c30;
  *(float *)((long)param_1 + 0x24) =
       fVar22 + (float)uStack_f0 + uStack_f0._4_4_ + (float)local_e8 + local_e8._4_4_ +
       (float)uStack_e0 + uStack_e0._4_4_ + (float)local_d8 + local_d8._4_4_ + (float)uStack_d0 +
       uStack_d0._4_4_ + (float)local_c8 + local_c8._4_4_ + (float)uStack_c0 + uStack_c0._4_4_ +
       (float)local_b8 + local_b8._4_4_ + (float)uStack_b0 + uStack_b0._4_4_ + local_a8;
  piVar16 = (int *)*param_1;
  local_3c80 = &PTR_FUN_04b433b8;
  iVar18 = *piVar16;
  uVar10 = 0;
  if (iVar18 != 0) {
    uVar10 = iVar3 / iVar18;
  }
  local_3c60 = uVar7;
  if ((int)uVar10 < 0) {
LAB_03683bbc:
    iVar18 = 0;
  }
  else {
    iVar5 = 0;
    if (iVar18 != 0) {
      iVar5 = iVar4 / iVar18;
    }
    if (iVar5 < 0) goto LAB_03683bbc;
    uVar13 = 0;
    iVar18 = 0;
    do {
      uVar17 = 0;
      do {
        lVar15 = (long)(int)(uVar13 + piVar16[2] * uVar17);
        if ((uint)piVar16[3] <= uVar17 || (uint)piVar16[2] <= uVar13) {
          lVar15 = 0;
        }
        if ((*(ushort *)(*(long *)(piVar16 + 4) + lVar15 * 0x23c + 0x238) & 1) != 0) {
          iVar18 = 0;
          goto LAB_03683bd8;
        }
        iVar9 = (*(code *)*local_3c80)(&local_3c80,*(long *)(piVar16 + 4) + lVar15 * 0x23c);
        uVar17 = uVar17 + 1;
        iVar18 = iVar9 + iVar18;
      } while (iVar5 + 1U != uVar17);
      bVar8 = uVar13 != uVar10;
      uVar13 = uVar13 + 1;
    } while (bVar8);
  }
LAB_03683bd8:
  piVar16 = piVar14 + ((ulong)local_f8 & 0xffffffff);
  if (1 < (uint)(float)local_f8) {
    piVar16 = piVar14;
  }
  *piVar16 = iVar18;
  *(float *)((long)param_1 + 0x1c) = *(float *)((long)param_1 + 0x1c) + 0.0;
  local_f8 = (undefined **)CONCAT44(local_f8._4_4_,1);
  *(float *)((long)param_1 + 0x24) = *(float *)((long)param_1 + 0x24) + 0.0;
  piVar16 = (int *)*param_1;
  local_3c80 = &PTR_FUN_04b433b8;
  local_3c78 = (undefined8 *)CONCAT44(local_3c78._4_4_,1);
  iVar18 = *piVar16;
  uVar10 = 0;
  if (iVar18 != 0) {
    uVar10 = iVar3 / iVar18;
  }
  if (-1 < (int)uVar10) {
    iVar5 = 0;
    if (iVar18 != 0) {
      iVar5 = iVar4 / iVar18;
    }
    if (-1 < iVar5) {
      uVar13 = 0;
      iVar18 = 0;
      do {
        uVar17 = 0;
        do {
          lVar15 = (long)(int)(uVar13 + piVar16[2] * uVar17);
          if ((uint)piVar16[3] <= uVar17 || (uint)piVar16[2] <= uVar13) {
            lVar15 = 0;
          }
          if ((*(ushort *)(*(long *)(piVar16 + 4) + lVar15 * 0x23c + 0x238) & 1) != 0)
          goto LAB_03683cb8;
          iVar9 = (*(code *)*local_3c80)(&local_3c80,*(long *)(piVar16 + 4) + lVar15 * 0x23c);
          uVar17 = uVar17 + 1;
          iVar18 = iVar9 + iVar18;
        } while (iVar5 + 1U != uVar17);
        bVar8 = uVar13 != uVar10;
        uVar13 = uVar13 + 1;
      } while (bVar8);
      goto LAB_03683cbc;
    }
  }
LAB_03683cb8:
  iVar18 = 0;
LAB_03683cbc:
  piVar16 = piVar14 + ((ulong)local_f8 & 0xffffffff);
  if (1 < (uint)(float)local_f8) {
    piVar16 = piVar14;
  }
  *piVar16 = iVar18;
  fVar21 = *(float *)((long)param_1 + 0x1c) + 0.0;
  *(float *)((long)param_1 + 0x1c) = fVar21;
  puVar2 = PTR_DAT_04bbfe60 + 0x10;
  *(float *)(param_1 + 4) = fVar23 + fVar21;
  *(float *)((long)param_1 + 0x24) = *(float *)((long)param_1 + 0x24) + 0.0;
  local_3c80 = (undefined **)puVar2;
  memset(&local_3c78,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_3524 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_3520 = (local_3524 ^ local_3524 >> 0x1e) * 0x6c078965 + 2;
  local_351c = (local_3520 ^ local_3520 >> 0x1e) * 0x6c078965 + 3;
  local_3518 = (local_351c ^ local_351c >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(**(code **)((long)local_3c80 + 0x18))(&local_3c80);
  memset(pvVar11,0,0x754);
  local_3510 = puVar2;
  memset(auStack_3508,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_2db4 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_2db0 = (local_2db4 ^ local_2db4 >> 0x1e) * 0x6c078965 + 2;
  local_2dac = (local_2db0 ^ local_2db0 >> 0x1e) * 0x6c078965 + 3;
  local_2da8 = (local_2dac ^ local_2dac >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(**(code **)(local_3510 + 0x18))(&local_3510);
  memset(pvVar11,0,0x754);
  local_2da0 = puVar2;
  memset(auStack_2d98,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_2644 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_2640 = (local_2644 ^ local_2644 >> 0x1e) * 0x6c078965 + 2;
  local_263c = (local_2640 ^ local_2640 >> 0x1e) * 0x6c078965 + 3;
  local_2638 = (local_263c ^ local_263c >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(**(code **)(local_2da0 + 0x18))(&local_2da0);
  memset(pvVar11,0,0x754);
  local_2630 = puVar2;
  memset(auStack_2628,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_1ed4 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_1ed0 = (local_1ed4 ^ local_1ed4 >> 0x1e) * 0x6c078965 + 2;
  local_1ecc = (local_1ed0 ^ local_1ed0 >> 0x1e) * 0x6c078965 + 3;
  local_1ec8 = (local_1ecc ^ local_1ecc >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(**(code **)(local_2630 + 0x18))(&local_2630);
  memset(pvVar11,0,0x754);
  local_1ec0 = puVar2;
  memset(auStack_1eb8,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_1764 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_1760 = (local_1764 ^ local_1764 >> 0x1e) * 0x6c078965 + 2;
  local_175c = (local_1760 ^ local_1760 >> 0x1e) * 0x6c078965 + 3;
  local_1758 = (local_175c ^ local_175c >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(**(code **)(local_1ec0 + 0x18))(&local_1ec0);
  memset(pvVar11,0,0x754);
  local_1750 = puVar2;
  memset(auStack_1748,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_ff4 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_ff0 = (local_ff4 ^ local_ff4 >> 0x1e) * 0x6c078965 + 2;
  local_fec = (local_ff0 ^ local_ff0 >> 0x1e) * 0x6c078965 + 3;
  local_fe8 = (local_fec ^ local_fec >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(**(code **)(local_1750 + 0x18))(&local_1750);
  memset(pvVar11,0,0x754);
  local_fe0 = puVar2;
  memset(auStack_fd8,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_884 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_880 = (local_884 ^ local_884 >> 0x1e) * 0x6c078965 + 2;
  local_87c = (local_880 ^ local_880 >> 0x1e) * 0x6c078965 + 3;
  local_878 = (local_87c ^ local_87c >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(**(code **)(local_fe0 + 0x18))(&local_fe0);
  memset(pvVar11,0,0x754);
  local_870 = puVar2;
  memset(auStack_868,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_114 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_110 = (local_114 ^ local_114 >> 0x1e) * 0x6c078965 + 2;
  local_10c = (local_110 ^ local_110 >> 0x1e) * 0x6c078965 + 3;
  local_108 = (local_10c ^ local_10c >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(**(code **)(local_870 + 0x18))(&local_870);
  memset(pvVar11,0,0x754);
  piVar14 = (int *)*param_1;
  iVar5 = *piVar14;
  iVar18 = piVar14[3];
  local_f8 = &PTR_FUN_04b43408;
  uVar10 = 0;
  if (*piVar14 != 0) {
    uVar10 = (iVar5 * piVar14[2] + -1) / *piVar14;
  }
  uStack_f0 = &local_3c80;
  if (-1 < (int)uVar10) {
    uVar13 = 0;
    do {
      iVar9 = 0;
      if (*piVar14 != 0) {
        iVar9 = (iVar18 * iVar5 + -1) / *piVar14;
      }
      if (-1 < iVar9) {
        uVar17 = 0;
        do {
          local_a0 = (undefined **)CONCAT44(uVar17,uVar13);
          lVar15 = *(long *)(piVar14 + 4) + (long)(int)(uVar13 + piVar14[2] * uVar17) * 0x23c;
          if ((uint)piVar14[3] <= uVar17 || (uint)piVar14[2] <= uVar13) {
            lVar15 = 0;
          }
          (*(code *)*local_f8)(&local_f8,lVar15,&local_a0);
          uVar17 = uVar17 + 1;
        } while (iVar9 + 1U != uVar17);
      }
      bVar8 = uVar13 != uVar10;
      uVar13 = uVar13 + 1;
    } while (bVar8);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  lVar12 = (**(code **)((long)local_3c80 + 0x20))(&local_3c80);
  lVar15 = 0;
  iVar18 = 0;
  do {
    puVar1 = (uint *)(lVar12 + lVar15);
    lVar15 = lVar15 + 4;
    uVar10 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    iVar18 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar18;
  } while (lVar15 != 0x754);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar18;
  lVar12 = (**(code **)(local_3510 + 0x20))(&local_3510);
  lVar15 = 0;
  iVar18 = 0;
  do {
    puVar1 = (uint *)(lVar12 + lVar15);
    lVar15 = lVar15 + 4;
    uVar10 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    iVar18 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar18;
  } while (lVar15 != 0x754);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar18;
  lVar12 = (**(code **)(local_2da0 + 0x20))(&local_2da0);
  lVar15 = 0;
  iVar18 = 0;
  do {
    puVar1 = (uint *)(lVar12 + lVar15);
    lVar15 = lVar15 + 4;
    uVar10 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    iVar18 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar18;
  } while (lVar15 != 0x754);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar18;
  lVar12 = (**(code **)(local_2630 + 0x20))(&local_2630);
  lVar15 = 0;
  iVar18 = 0;
  do {
    puVar1 = (uint *)(lVar12 + lVar15);
    lVar15 = lVar15 + 4;
    uVar10 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    iVar18 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar18;
  } while (lVar15 != 0x754);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar18;
  lVar12 = (**(code **)(local_1ec0 + 0x20))(&local_1ec0);
  lVar15 = 0;
  iVar18 = 0;
  do {
    puVar1 = (uint *)(lVar12 + lVar15);
    lVar15 = lVar15 + 4;
    uVar10 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    iVar18 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar18;
  } while (lVar15 != 0x754);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar18;
  lVar12 = (**(code **)(local_1750 + 0x20))(&local_1750);
  lVar15 = 0;
  iVar18 = 0;
  do {
    puVar1 = (uint *)(lVar12 + lVar15);
    lVar15 = lVar15 + 4;
    uVar10 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    iVar18 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar18;
  } while (lVar15 != 0x754);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar18;
  lVar12 = (**(code **)(local_fe0 + 0x20))(&local_fe0);
  lVar15 = 0;
  iVar18 = 0;
  do {
    puVar1 = (uint *)(lVar12 + lVar15);
    lVar15 = lVar15 + 4;
    uVar10 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    iVar18 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar18;
  } while (lVar15 != 0x754);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar18;
  lVar12 = (**(code **)(local_870 + 0x20))(&local_870);
  lVar15 = 0;
  iVar18 = 0;
  do {
    puVar1 = (uint *)(lVar12 + lVar15);
    lVar15 = lVar15 + 4;
    uVar10 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    iVar18 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + iVar18;
  } while (lVar15 != 0x754);
  local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
  piVar14 = (int *)*param_1;
  local_3c78 = &local_a0;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar18;
  local_3c80 = &PTR_FUN_04b43430;
  uVar10 = 0;
  if (*piVar14 != 0) {
    uVar10 = iVar3 / *piVar14;
  }
  fVar23 = 0.0;
  if (-1 < (int)uVar10) {
    uVar13 = 0;
    do {
      iVar3 = 0;
      if (*piVar14 != 0) {
        iVar3 = iVar4 / *piVar14;
      }
      if (-1 < iVar3) {
        uVar17 = 0;
        do {
          local_f8 = (undefined **)CONCAT44(uVar17,uVar13);
          lVar15 = *(long *)(piVar14 + 4) + (long)(int)(uVar13 + piVar14[2] * uVar17) * 0x23c;
          if ((uint)piVar14[3] <= uVar17 || (uint)piVar14[2] <= uVar13) {
            lVar15 = 0;
          }
          (*(code *)*local_3c80)(&local_3c80,lVar15,&local_f8);
          uVar17 = uVar17 + 1;
        } while (iVar3 + 1U != uVar17);
      }
      bVar8 = uVar13 != uVar10;
      uVar13 = uVar13 + 1;
    } while (bVar8);
    fVar23 = (float)local_a0;
  }
  *(undefined1 *)((long)param_1 + 0x8a) = 0;
  fVar22 = (float)(1000 - *(int *)((long)param_1 + 0x74)) / 30.0;
  iVar3 = *(int *)(param_1 + 1);
  fVar21 = 30.0;
  if (fVar22 <= 30.0) {
    fVar21 = fVar22;
  }
  if (iVar3 < 2) {
    iVar3 = 1;
  }
  fVar23 = fVar23 + *(float *)((long)param_1 + 0x24) + fVar21 +
           (float)(iVar3 + *(int *)((long)param_1 + 0xc) + -1) * 15.0;
  if (*(char *)(param_1 + 3) != '\0') {
    fVar23 = fVar23 + 15.0;
  }
  if (*(char *)((long)param_1 + 0x19) != '\0') {
    fVar23 = fVar23 + 15.0;
  }
  if (*(char *)((long)param_1 + 0x1a) != '\0') {
    fVar23 = fVar23 + 15.0;
  }
  fVar21 = 30.0;
  if (*(int *)((long)param_1 + 0x14) < 10) {
    fVar21 = 0.0;
  }
  fVar22 = 15.0;
  if (*(int *)((long)param_1 + 0x14) != 9) {
    fVar22 = fVar21;
  }
  *(float *)((long)param_1 + 0x24) = fVar22 + fVar23;
  return;
}

