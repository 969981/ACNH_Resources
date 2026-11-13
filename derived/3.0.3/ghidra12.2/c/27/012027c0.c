
/* WARNING: Removing unreachable block (ram,0x012068b0) */
/* WARNING: Removing unreachable block (ram,0x01206520) */
/* WARNING: Removing unreachable block (ram,0x01205fdc) */
/* WARNING: Removing unreachable block (ram,0x01205db0) */
/* WARNING: Removing unreachable block (ram,0x01205bac) */
/* WARNING: Removing unreachable block (ram,0x01205808) */
/* WARNING: Removing unreachable block (ram,0x0120540c) */
/* WARNING: Removing unreachable block (ram,0x01204e7c) */
/* WARNING: Removing unreachable block (ram,0x01204d00) */
/* WARNING: Removing unreachable block (ram,0x012047c4) */
/* WARNING: Removing unreachable block (ram,0x01204258) */
/* WARNING: Removing unreachable block (ram,0x01204128) */
/* WARNING: Removing unreachable block (ram,0x01203d50) */
/* WARNING: Removing unreachable block (ram,0x01203c04) */
/* WARNING: Removing unreachable block (ram,0x01203b4c) */
/* WARNING: Removing unreachable block (ram,0x01203428) */
/* WARNING: Removing unreachable block (ram,0x0120332c) */
/* WARNING: Removing unreachable block (ram,0x01202fec) */
/* WARNING: Removing unreachable block (ram,0x01202dc0) */
/* WARNING: Removing unreachable block (ram,0x01202d60) */
/* WARNING: Removing unreachable block (ram,0x01202f84) */
/* WARNING: Removing unreachable block (ram,0x012032d0) */
/* WARNING: Removing unreachable block (ram,0x01203420) */
/* WARNING: Removing unreachable block (ram,0x01203a6c) */
/* WARNING: Removing unreachable block (ram,0x01203ae8) */
/* WARNING: Removing unreachable block (ram,0x01203c6c) */
/* WARNING: Removing unreachable block (ram,0x01203db0) */
/* WARNING: Removing unreachable block (ram,0x0120418c) */
/* WARNING: Removing unreachable block (ram,0x0120464c) */
/* WARNING: Removing unreachable block (ram,0x012047cc) */
/* WARNING: Removing unreachable block (ram,0x01204e74) */
/* WARNING: Removing unreachable block (ram,0x012053b0) */
/* WARNING: Removing unreachable block (ram,0x01205684) */
/* WARNING: Removing unreachable block (ram,0x01205b44) */
/* WARNING: Removing unreachable block (ram,0x01205d50) */
/* WARNING: Removing unreachable block (ram,0x01205f84) */
/* WARNING: Removing unreachable block (ram,0x012064b4) */
/* WARNING: Removing unreachable block (ram,0x012067c4) */
/* WARNING: Removing unreachable block (ram,0x01206910) */
/* WARNING: Removing unreachable block (ram,0x01206cbc) */
/* WARNING: Removing unreachable block (ram,0x01206ac8) */
/* WARNING: Removing unreachable block (ram,0x01206a94) */
/* WARNING: Removing unreachable block (ram,0x01206aa4) */
/* WARNING: Removing unreachable block (ram,0x01206cac) */
/* WARNING: Removing unreachable block (ram,0x01206ce0) */

void FUN_012027c0(void)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ushort uVar5;
  bool bVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  byte *pbVar21;
  byte bVar22;
  long lVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  undefined8 uVar29;
  undefined4 *puVar30;
  undefined8 *puVar31;
  ushort uVar32;
  undefined *local_b100;
  char *apcStack_b0f8 [512];
  undefined *local_a0f8;
  uint local_a0f0 [1024];
  undefined *local_90f0;
  undefined1 auStack_90e8 [4096];
  undefined *local_80e8;
  uint local_80e0 [1024];
  undefined *local_70e0;
  uint local_70d8 [1024];
  undefined *local_60d8;
  uint local_60d0 [1024];
  undefined *local_50d0;
  uint local_50c8 [1024];
  undefined *local_40c8;
  uint local_40c0 [1024];
  undefined *local_30c0;
  uint local_30b8 [1024];
  undefined *local_20b8;
  undefined8 local_20b0;
  undefined *local_20a8;
  undefined8 local_20a0;
  undefined *local_2090;
  uint local_2088;
  uint local_2084;
  undefined *local_2080;
  undefined8 local_2078;
  ulong local_2070;
  undefined8 uStack_2068;
  undefined8 local_2060;
  undefined8 uStack_2058;
  undefined8 local_2050;
  undefined8 uStack_2048;
  undefined8 local_2040;
  undefined8 uStack_2038;
  undefined8 local_2030;
  undefined8 uStack_2028;
  undefined8 local_2020;
  undefined8 uStack_2018;
  undefined8 local_2010;
  undefined8 uStack_2008;
  undefined8 local_2000;
  undefined8 uStack_1ff8;
  undefined8 local_1ff0;
  undefined8 uStack_1fe8;
  undefined8 local_1fe0;
  undefined8 uStack_1fd8;
  undefined8 local_1fd0;
  undefined8 uStack_1fc8;
  undefined8 local_1fc0;
  undefined8 uStack_1fb8;
  undefined8 local_1fb0;
  undefined8 uStack_1fa8;
  undefined8 local_1fa0;
  undefined8 uStack_1f98;
  undefined8 local_1f90;
  undefined8 uStack_1f88;
  undefined4 local_1078;
  uint uStack_1074;
  undefined8 local_1070;
  undefined8 local_1068;
  undefined8 local_1060;
  ulong local_1058;
  
  puVar4 = PTR_DAT_04bb4928;
  uVar12 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428;
  if (((uVar12 < DAT_0534f408) &&
      (puVar20 = *(uint **)(DAT_0534f410 + (long)(int)uVar12 * 8), puVar20 != (uint *)0x0)) &&
     (uVar12 = *puVar20, uVar12 != 0 && puVar20 != (uint *)(ulong)uVar12)) {
    puVar24 = (uint *)((long)puVar20 - (long)(ulong)uVar12);
    if (((*puVar24 == 0) || (uVar12 = puVar24[1], uVar12 == 0)) || ((ulong)(ushort)puVar24[2] == 0))
    goto LAB_012028a0;
    lVar23 = 0xc;
    if (*(char *)((long)puVar24 + 10) != '\0') {
      lVar23 = 0x1c;
    }
    lVar23 = (long)puVar24 + lVar23 + (ulong)(ushort)puVar24[2] * 8;
    if (lVar23 == 0) goto LAB_012028a0;
    uVar10 = 0;
    if ((ulong)uVar12 != 0) {
      uVar10 = (uint)((ulong)((long)puVar20 - lVar23) / (ulong)uVar12);
    }
    if (*puVar24 <= uVar10) {
      uVar10 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc0e98 <= uVar10) ||
       (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar10 * 2) != 1))
    goto LAB_012028a0;
  }
  else {
LAB_012028a0:
    iVar13 = -0xbb9f562;
    if (((*(int *)(PTR_DAT_04bc3a78 + 0x38) == -0xbb9f562) ||
        (iVar13 = 0x565b4aba, *(int *)(PTR_DAT_04bc3a78 + 0x38) == 0x565b4aba)) &&
       (*(int *)(PTR_DAT_04bc3a80 + 0x38) == iVar13)) {
      return;
    }
  }
  DAT_0514b408 = 0;
  lVar23 = *(long *)PTR_DAT_04bb39b0;
  pbVar21 = PTR_DAT_04bb32e0;
  if (lVar23 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01202980;
LAB_012029ec:
    bVar22 = *pbVar21;
    if (7 < bVar22) {
      bVar22 = 0xff;
    }
    local_2080 = (undefined *)CONCAT71(local_2080._1_7_,bVar22);
  }
  else {
    if (*(int *)(lVar23 + 0x15c) != 0) {
      pbVar21 = (byte *)(lVar23 + 0x158);
    }
    if ((*pbVar21 < 8) ||
       (((*(int *)(lVar23 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar21 < 8)))) goto LAB_012029ec;
LAB_01202980:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_012029e4:
      pbVar21 = PTR_DAT_04bb5038;
      goto LAB_012029ec;
    }
    lVar23 = **(long **)PTR_DAT_04bb27d0;
    bVar22 = *(byte *)(lVar23 + 0x473);
    pbVar21 = PTR_DAT_04bb5038;
    if ((long)(char)bVar22 != 0xffffffffffffffff) {
      puVar20 = (uint *)(lVar23 + 0x48) + ((long)(char)bVar22 & 0xffffffffU) * 0x20;
      if (7 < bVar22) {
        puVar20 = (uint *)(lVar23 + 0x48);
      }
      if ((*puVar20 & 8) != 0) {
        pbVar21 = (byte *)(lVar23 + 0x471);
      }
    }
    bVar22 = *pbVar21;
    bVar6 = 7 < bVar22;
    if (bVar6) {
      bVar22 = 0xff;
    }
    local_2080 = (undefined *)CONCAT71(local_2080._1_7_,bVar22);
    if (bVar6) goto LAB_012029e4;
  }
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  apcStack_b0f8[0] = "MysteryTourTalkSceneFlag";
  local_b100 = puVar3;
  FUN_027533a8(&local_2080,&local_b100,0);
  apcStack_b0f8[0] = "MysteryTourInviteFlag";
  local_b100 = puVar3;
  FUN_027533a8(&local_2080,&local_b100,0);
  uVar28 = DAT_0534f408;
  lVar23 = *(long *)puVar4;
  uVar32 = 0;
  uVar10 = (uint)DAT_0534f428;
  uVar12 = *(ushort *)(lVar23 + 8) - uVar10;
  if (uVar12 < DAT_0534f408) {
    puVar20 = *(uint **)(DAT_0534f410 + (long)(int)uVar12 * 8);
    if (puVar20 != (uint *)0x0) {
      uVar12 = *puVar20;
      uVar32 = 0;
      if ((uVar12 == 0) || (puVar20 == (uint *)(ulong)uVar12)) goto LAB_01202b14;
      puVar24 = (uint *)((long)puVar20 - (long)(ulong)uVar12);
      if ((*puVar24 != 0) &&
         ((uVar12 = puVar24[1], uVar12 != 0 && ((ulong)(ushort)puVar24[2] != 0)))) {
        lVar16 = 0xc;
        if (*(char *)((long)puVar24 + 10) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar24 + lVar16 + (ulong)(ushort)puVar24[2] * 8;
        if (lVar16 != 0) {
          uVar25 = 0;
          if ((ulong)uVar12 != 0) {
            uVar25 = (uint)((ulong)((long)puVar20 - lVar16) / (ulong)uVar12);
          }
          if (*puVar24 <= uVar25) {
            uVar25 = 0xffffffff;
          }
          if ((uVar25 < *(uint *)PTR_DAT_04bc0ea0) &&
             (uVar32 = *(ushort *)(*(long *)(PTR_DAT_04bc0ea0 + 8) + (long)(int)uVar25 * 2),
             uVar32 < 0x11)) goto LAB_01202b14;
        }
      }
    }
    uVar32 = 0;
  }
LAB_01202b14:
  local_b100 = PTR_DAT_04bbdd38 + 0x10;
  local_20b8 = PTR_DAT_04bb2010 + 0x10;
  local_a0f8 = local_b100;
  local_90f0 = local_b100;
  local_80e8 = local_b100;
  local_70e0 = local_b100;
  local_60d8 = local_b100;
  local_50d0 = local_b100;
  local_40c8 = local_b100;
  local_30c0 = local_b100;
  memset(apcStack_b0f8,0,0x1000);
  memset(local_a0f0,0,0x1000);
  memset(auStack_90e8,0,0x1000);
  memset(local_80e0,0,0x1000);
  memset(local_70d8,0,0x1000);
  memset(local_60d0,0,0x1000);
  memset(local_50c8,0,0x1000);
  memset(local_40c0,0,0x1000);
  memset(local_30b8,0,0x1000);
  local_20b0 = 0xffffffffffffffff;
  uVar10 = *(ushort *)(lVar23 + 8) - uVar10;
  if ((((uVar10 < uVar28) &&
       (puVar20 = *(uint **)(DAT_0534f410 + (long)(int)uVar10 * 8), puVar20 != (uint *)0x0)) &&
      (uVar12 = *puVar20, uVar12 != 0)) && (puVar20 != (uint *)(ulong)uVar12)) {
    puVar24 = (uint *)((long)puVar20 - (long)(ulong)uVar12);
    if (((*puVar24 != 0) && (uVar12 = puVar24[1], uVar12 != 0)) && ((ulong)(ushort)puVar24[2] != 0))
    {
      lVar23 = 0xc;
      if (*(char *)((long)puVar24 + 10) != '\0') {
        lVar23 = 0x1c;
      }
      lVar23 = (long)puVar24 + lVar23 + (ulong)(ushort)puVar24[2] * 8;
      if (lVar23 != 0) {
        uVar10 = 0;
        if ((ulong)uVar12 != 0) {
          uVar10 = (uint)((ulong)((long)puVar20 - lVar23) / (ulong)uVar12);
        }
        if (*puVar24 <= uVar10) {
          uVar10 = 0xffffffff;
        }
        if ((uVar10 < *(uint *)PTR_DAT_04bc0e98) &&
           (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar10 * 2) == 1)) {
          FUN_0168e7e0(&local_b100);
          return;
        }
      }
    }
  }
  FUN_0168d1f0(&local_b100);
  DAT_0514b408 = (int)local_20b0 != -1 && local_20b0._4_4_ != -1;
  if ((int)local_20b0 != -1 && local_20b0._4_4_ != -1) {
    DAT_0514b400 = (int)local_20b0;
    DAT_0514b404 = local_20b0._4_4_;
  }
  local_2080 = (undefined *)CONCAT44(local_2080._4_4_,3);
  lVar23 = 0;
  iVar13 = 0;
  do {
    iVar11 = iVar13;
    puVar20 = (uint *)((long)local_80e0 + lVar23);
    lVar23 = lVar23 + 4;
    uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
    uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
    uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
    uVar12 = uVar12 + (uVar12 >> 8);
    uVar12 = uVar12 + (uVar12 >> 0x10);
    iVar13 = (uVar12 & 0x3f) + iVar11;
  } while (lVar23 != 0x1000);
  local_2078 = (undefined *)((ulong)local_2078._4_4_ << 0x20);
  local_2080 = PTR_DAT_04bbfe68 + 0x10;
  lVar23 = *(long *)PTR_DAT_04bb2720;
  if (lVar23 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar23 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
      iVar9 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
  uVar7 = FUN_017baf44();
  local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
  local_1068 = PTR_DAT_04bb2010 + 0x10;
  local_1060 = (undefined *)0x0;
  local_2080 = PTR_DAT_04bb6268 + 0x10;
  if (0 < iVar13) {
    iVar13 = 0;
    do {
      iVar13 = iVar13 + 1;
      uVar15 = FUN_01696a90(&local_80e8,iVar13,&local_1068);
      if ((uVar15 & 1) == 0) break;
      uVar10 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      uVar10 = uVar10 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar10 ^ DAT_0514cb64;
      DAT_0514cb60 = DAT_0514cb64;
      local_20a8._0_4_ =
           *(uint *)(&DAT_04174a58 + ((ulong)uVar10 + (ulong)uVar10 * 4 >> 0x1e & 0x1c)) & 0xffff;
      local_20a8 = (undefined *)(ulong)(uint)local_20a8;
      DAT_0514cb64 = uVar10;
      FUN_0277d4ac(&local_20a8);
      FUN_011f3390(&local_2080,0,&local_20a8,&local_1068);
    } while (iVar11 + (uVar12 & 0x3f) != iVar13);
  }
  if (uVar32 == 2) {
    local_2080 = (undefined *)CONCAT44(local_2080._4_4_,3);
    lVar23 = 0;
    iVar13 = 0;
    do {
      iVar11 = iVar13;
      puVar20 = (uint *)((long)local_80e0 + lVar23);
      lVar23 = lVar23 + 4;
      uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
      uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
      uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
      uVar12 = uVar12 + (uVar12 >> 8);
      uVar12 = uVar12 + (uVar12 >> 0x10);
      iVar13 = (uVar12 & 0x3f) + iVar11;
    } while (lVar23 != 0x1000);
    local_2078 = (undefined *)((ulong)local_2078 & 0xffffffff00000000);
    local_2080 = PTR_DAT_04bbfe68 + 0x10;
    lVar23 = *(long *)PTR_DAT_04bb2720;
    if (lVar23 == 0) {
      puVar31 = &DAT_055c04a0;
    }
    else {
      puVar31 = &DAT_055c04a0;
      if (*(long *)(lVar23 + 0x330) != 0) {
        puVar31 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
        iVar9 = FUN_006bd550(*puVar31,0);
        puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar9 != 0x758f7eaf) {
          puVar31 = &DAT_055c04a0;
        }
      }
    }
    local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
    uVar7 = FUN_017baf44();
    local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
    local_2080 = PTR_DAT_04bb6268 + 0x10;
    local_20a8 = PTR_DAT_04bb2010 + 0x10;
    local_20a0 = 0;
    lVar23 = *(long *)PTR_DAT_04bb39b0;
    pbVar21 = PTR_DAT_04bb32e0;
    if (lVar23 == 0) {
LAB_0120310c:
      if (*pbVar21 < 8) goto LAB_01203178;
LAB_01203118:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01203170:
        pbVar21 = PTR_DAT_04bb5038;
        goto LAB_01203178;
      }
      lVar23 = **(long **)PTR_DAT_04bb27d0;
      bVar22 = *(byte *)(lVar23 + 0x473);
      pbVar21 = PTR_DAT_04bb5038;
      if ((long)(char)bVar22 != 0xffffffffffffffff) {
        puVar20 = (uint *)(lVar23 + 0x48) + ((long)(char)bVar22 & 0xffffffffU) * 0x20;
        if (7 < bVar22) {
          puVar20 = (uint *)(lVar23 + 0x48);
        }
        if ((*puVar20 & 8) != 0) {
          pbVar21 = (byte *)(lVar23 + 0x471);
        }
      }
      bVar22 = *pbVar21;
      if (7 < bVar22) goto LAB_01203170;
    }
    else {
      if (*(int *)(lVar23 + 0x15c) != 0) {
        pbVar21 = (byte *)(lVar23 + 0x158);
      }
      if (7 < *pbVar21) {
        if ((*(int *)(lVar23 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar21 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0120310c;
        }
        goto LAB_01203118;
      }
LAB_01203178:
      bVar22 = *pbVar21;
      if (7 < bVar22) {
        bVar22 = 0xff;
      }
    }
    if (0 < iVar13) {
      iVar13 = 0;
      if (7 < bVar22) {
        bVar22 = 0xff;
      }
      do {
        uVar15 = FUN_01696a90(&local_80e8,iVar13 + 1,&local_20a8);
        if ((uVar15 & 1) == 0) break;
        FUN_01a5033c(&local_2090,&local_2080,0,&local_20a8,0);
        FUN_0124c030(&local_1068,&local_2090);
        local_1070 = CONCAT71(local_1070._1_7_,bVar22);
        uVar10 = FUN_02582fe0(&local_1070);
        if (uVar10 != 0xffffffff) {
          uVar10 = 1 << (ulong)(uVar10 & 0x1f);
          uVar28 = ~uVar10;
          local_1060 = (undefined *)
                       CONCAT44(local_1060._4_4_ &
                                (uVar28 << 0x12 | (uVar28 & 0xff) << 10 | 0xfc0003ff) |
                                uVar10 & 0xff,(uint)local_1060);
        }
        FUN_011f3390(&local_2080,0,&local_1060,&local_20a8);
        iVar13 = iVar13 + 1;
      } while (iVar11 + (uVar12 & 0x3f) != iVar13);
    }
  }
  lVar23 = 0;
  iVar13 = 0;
  local_2080 = (undefined *)CONCAT44(local_2080._4_4_,7);
  do {
    puVar20 = (uint *)((long)local_80e0 + lVar23);
    lVar23 = lVar23 + 4;
    uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
    uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
    uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
    uVar12 = uVar12 + (uVar12 >> 8);
    iVar13 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar13;
  } while (lVar23 != 0x1000);
  local_2078 = (undefined *)((ulong)local_2078._4_4_ << 0x20);
  lVar23 = *(long *)PTR_DAT_04bb2720;
  if (lVar23 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar23 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
      iVar11 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar11 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
  uVar7 = FUN_017baf44();
  local_2080 = PTR_DAT_04bb6268 + 0x10;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  local_20a8 = puVar4;
  local_20a0 = 0;
  local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
  if (0 < iVar13) {
    iVar11 = 1;
    do {
      uVar15 = FUN_01696a90(&local_80e8,iVar11,&local_20a8);
      if ((uVar15 & 1) != 0) {
        FUN_01a5033c(&local_2090,&local_2080,0,&local_20a8,0);
        lVar23 = *(long *)PTR_DAT_04bbbc68;
        if ((((lVar23 != 0) && (*(long *)(lVar23 + 0xb0) != 0)) &&
            (*(long *)(*(long *)(lVar23 + 0xb0) + 8) != 0)) &&
           (((*(long *)(lVar23 + 0x488) != 0 && (*(long *)(*(long *)(lVar23 + 0x488) + 8) != 0)) &&
            ((*(long *)(lVar23 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar23 + 0x2b0) + 8) != 0))))))
        {
          uVar12 = FUN_0277d6c4(&local_2090);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar23 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            FUN_0124c030(&local_1068,&local_2090);
            iVar9 = FUN_0123db50(&local_1060,local_1058);
            if (iVar9 == 0x2e) {
              uVar12 = (uint)local_20a0 - 2;
              iVar9 = local_20a0._4_4_ - 2;
              if (((int)uVar12 < DAT_05233970) || (DAT_05233980 < (int)uVar12)) {
                uVar10 = 0;
                uVar28 = 0;
              }
              else {
                uVar10 = 0;
                iVar27 = (int)uVar12 >> 1;
                if ((DAT_05233974 <= iVar9) && (iVar9 <= DAT_05233984)) {
                  uVar10 = (iVar9 * 0x80 & 0xffffff00U) + iVar27;
                  if (uVar10 >> 0xf == 0) {
                    uVar10 = *(uint *)((long)apcStack_b0f8 + (ulong)(uVar10 >> 5) * 4) >>
                             (ulong)(uVar12 >> 1 & 0x1f) & 1;
                  }
                  else {
                    uVar10 = 0;
                  }
                }
                if (((DAT_05233974 <= (int)local_20a0._4_4_) &&
                    ((int)local_20a0._4_4_ <= DAT_05233984)) &&
                   (uVar28 = (local_20a0._4_4_ & 0x1fffffe) * 0x80 + iVar27, uVar28 >> 0xf == 0)) {
                  uVar10 = uVar10 | (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar28 >> 5) * 4
                                                     ) & 1 << (ulong)(uVar12 >> 1 & 0x1f)) != 0) <<
                                    1;
                }
                iVar1 = local_20a0._4_4_ + 2;
                uVar28 = 0;
                if ((DAT_05233974 <= iVar1) && (iVar1 <= DAT_05233984)) {
                  uVar28 = (iVar1 * 0x80 & 0xffffff00U) + iVar27;
                  if (uVar28 >> 0xf == 0) {
                    uVar28 = (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar28 >> 5) * 4) &
                                    1 << (ulong)(uVar12 >> 1 & 0x1f)) != 0) << 2;
                  }
                  else {
                    uVar28 = 0;
                  }
                }
              }
              iVar27 = local_20a0._4_4_ + 2;
              uVar12 = 0;
              if (((DAT_05233970 <= (int)(uint)local_20a0 && (int)(uint)local_20a0 <= DAT_05233980)
                  && (DAT_05233974 <= iVar27)) && (iVar27 <= DAT_05233984)) {
                uVar12 = (iVar27 * 0x80 & 0xffffff00U) + ((int)(uint)local_20a0 >> 1);
                if (uVar12 >> 0xf == 0) {
                  uVar12 = (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar12 >> 5) * 4) &
                                  1 << (ulong)((uint)local_20a0 >> 1 & 0x1f)) != 0) << 3;
                }
                else {
                  uVar12 = 0;
                }
              }
              uVar25 = (uint)local_20a0 + 2;
              uVar26 = 0;
              uVar12 = uVar28 | uVar10 | uVar12;
              if (((int)uVar25 < DAT_05233970) || (DAT_05233980 < (int)uVar25)) {
                uVar10 = 0;
              }
              else {
                iVar1 = (int)uVar25 >> 1;
                if (((DAT_05233974 <= iVar27) && (iVar27 <= DAT_05233984)) &&
                   (uVar10 = (iVar27 * 0x80 & 0xffffff00U) + iVar1, uVar10 >> 0xf == 0)) {
                  uVar12 = uVar12 | (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar10 >> 5) * 4
                                                     ) & 1 << (ulong)(uVar25 >> 1 & 0x1f)) != 0) <<
                                    4;
                }
                uVar26 = 0;
                if ((DAT_05233974 <= (int)local_20a0._4_4_) &&
                   ((int)local_20a0._4_4_ <= DAT_05233984)) {
                  uVar10 = (local_20a0._4_4_ & 0x1fffffe) * 0x80 + iVar1;
                  if (uVar10 >> 0xf == 0) {
                    uVar26 = (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar10 >> 5) * 4) &
                                    1 << (ulong)(uVar25 >> 1 & 0x1f)) != 0) << 5;
                  }
                  else {
                    uVar26 = 0;
                  }
                }
                uVar10 = 0;
                if ((DAT_05233974 <= iVar9) && (iVar9 <= DAT_05233984)) {
                  uVar10 = (iVar9 * 0x80 & 0xffffff00U) + iVar1;
                  if (uVar10 >> 0xf == 0) {
                    uVar10 = (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar10 >> 5) * 4) &
                                    1 << (ulong)(uVar25 >> 1 & 0x1f)) != 0) << 6;
                  }
                  else {
                    uVar10 = 0;
                  }
                }
              }
              if ((int)(uint)local_20a0 < DAT_05233970 || DAT_05233980 < (int)(uint)local_20a0) {
LAB_01203728:
                uVar28 = 0;
              }
              else {
                uVar28 = 0;
                if ((DAT_05233974 <= iVar9) && (iVar9 <= DAT_05233984)) {
                  uVar28 = (iVar9 * 0x80 & 0xffffff00U) + ((int)(uint)local_20a0 >> 1);
                  if (uVar28 >> 0xf != 0) goto LAB_01203728;
                  uVar28 = (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar28 >> 5) * 4) &
                                  1 << (ulong)((uint)local_20a0 >> 1 & 0x1f)) != 0) << 7;
                }
              }
              uVar10 = uVar26 | uVar12 | uVar10 | uVar28;
              uVar12 = uVar10 - (uVar10 >> 1 & 0x55555555);
              uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
              uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
              uVar12 = uVar12 + (uVar12 >> 8);
              uVar12 = uVar12 + (uVar12 >> 0x10) & 0x3f;
              if (uVar12 != 0) {
                uVar28 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
                DAT_0514cb58 = DAT_0514cb5c;
                DAT_0514cb5c = DAT_0514cb60;
                uVar28 = uVar28 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar28 ^ DAT_0514cb64;
                DAT_0514cb60 = DAT_0514cb64;
                if (uVar10 == 0) {
                  uVar15 = 0xffffffff;
                }
                else {
                  iVar9 = (int)((ulong)uVar28 * (ulong)uVar12 >> 0x20) + 2;
                  do {
                    iVar9 = iVar9 + -1;
                    if (iVar9 < 2) {
                      uVar12 = uVar10 - 1 & (uVar10 ^ 0xffffffff);
                      uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
                      uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
                      uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
                      uVar12 = uVar12 + (uVar12 >> 8);
                      uVar15 = (ulong)(uVar12 + (uVar12 >> 0x10) & 0x3f);
                      goto LAB_01203874;
                    }
                    uVar10 = uVar10 - 1 & uVar10;
                  } while (uVar10 != 0);
                  uVar15 = 0xffffffff;
                }
LAB_01203874:
                uVar15 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
                uVar12 = *(int *)(&DAT_04057be0 + uVar15) + (uint)local_20a0;
                iVar9 = *(int *)((long)&DAT_04057d20 + uVar15) + local_20a0._4_4_;
                local_1060 = (undefined *)CONCAT44(iVar9,uVar12);
                if (((DAT_05233970 <= (int)uVar12 && (int)uVar12 <= DAT_05233980) &&
                    (DAT_05233974 <= iVar9)) && (iVar9 <= DAT_05233984)) {
                  uVar10 = (iVar9 * 0x80 & 0xffffff00U) + ((int)uVar12 >> 1);
                  if (uVar10 >> 0xf == 0) {
                    *(uint *)((long)apcStack_b0f8 + (ulong)(uVar10 >> 5) * 4) =
                         *(uint *)((long)apcStack_b0f8 + (ulong)(uVar10 >> 5) * 4) &
                         (1 << (ulong)(uVar12 >> 1 & 0x1f) ^ 0xffffffffU);
                    local_40c0[uVar10 >> 5] =
                         local_40c0[uVar10 >> 5] & (1 << (ulong)(uVar12 >> 1 & 0x1f) ^ 0xffffffffU);
                  }
                }
                local_2090 = (undefined *)0x9c6;
                DAT_0514cb64 = uVar28;
                local_1068 = puVar4;
                FUN_0277d4ac(&local_2090);
                FUN_01a50970(&local_2080,0,&local_2090,&local_1068);
              }
            }
          }
        }
      }
      bVar6 = iVar11 != iVar13;
      iVar11 = iVar11 + 1;
    } while (bVar6);
  }
  local_2080 = (undefined *)CONCAT44(local_2080._4_4_,1);
  lVar23 = 0;
  uVar12 = 0;
  do {
    puVar20 = (uint *)((long)local_a0f0 + lVar23);
    lVar23 = lVar23 + 4;
    uVar10 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    uVar12 = (uVar10 + (uVar10 >> 0x10) & 0x3f) + uVar12;
  } while (lVar23 != 0x1000);
  if (3 < uVar12) {
    if (uVar32 == 4) {
      local_2080 = (undefined *)CONCAT44(local_2080._4_4_,1);
      lVar23 = 0;
      iVar13 = 0;
      do {
        iVar11 = iVar13;
        puVar20 = (uint *)((long)local_a0f0 + lVar23);
        lVar23 = lVar23 + 4;
        uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
        uVar12 = uVar12 + (uVar12 >> 8);
        uVar12 = uVar12 + (uVar12 >> 0x10);
        iVar13 = (uVar12 & 0x3f) + iVar11;
      } while (lVar23 != 0x1000);
      local_2078 = (undefined *)((ulong)local_2078 & 0xffffffff00000000);
      local_2080 = PTR_DAT_04bbfe68 + 0x10;
      lVar23 = *(long *)PTR_DAT_04bb2720;
      if (lVar23 == 0) {
        puVar31 = &DAT_055c04a0;
      }
      else {
        puVar31 = &DAT_055c04a0;
        if (*(long *)(lVar23 + 0x330) != 0) {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
          iVar9 = FUN_006bd550(*puVar31,0);
          puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar9 != 0x758f7eaf) {
            puVar31 = &DAT_055c04a0;
          }
        }
      }
      local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
      uVar7 = FUN_017baf44();
      local_2080 = PTR_DAT_04bb6268 + 0x10;
      local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
      local_1068 = PTR_DAT_04bb2010 + 0x10;
      local_1060 = (undefined *)0x0;
      if (0 < iVar13) {
        iVar13 = 0;
        do {
          iVar13 = iVar13 + 1;
          uVar15 = FUN_01696a90(&local_a0f8,iVar13,&local_1068);
          if ((uVar15 & 1) != 0) {
            local_20a8 = (undefined *)0xea76;
            FUN_0277d4ac(&local_20a8);
            FUN_011f3390(&local_2080,0,&local_20a8,&local_1068);
          }
        } while (iVar11 + (uVar12 & 0x3f) != iVar13);
      }
LAB_012040d8:
      if (uVar32 != 4) goto LAB_012040f4;
    }
    else {
      uVar15 = FUN_01229624(1);
      if ((uVar15 & 1) == 0) {
        uVar12 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
        DAT_0514cb58 = DAT_0514cb5c;
        DAT_0514cb5c = DAT_0514cb60;
        uVar12 = uVar12 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar12 ^ DAT_0514cb64;
        DAT_0514cb60 = DAT_0514cb64;
        DAT_0514cb64 = uVar12;
        if ((uint)((ulong)uVar12 * 100 >> 0x20) < 0x32) {
          local_2080 = (undefined *)CONCAT44(local_2080._4_4_,1);
          lVar23 = 0;
          iVar13 = 0;
          do {
            iVar11 = iVar13;
            puVar20 = (uint *)((long)local_a0f0 + lVar23);
            lVar23 = lVar23 + 4;
            uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
            uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
            uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
            uVar12 = uVar12 + (uVar12 >> 8);
            uVar12 = uVar12 + (uVar12 >> 0x10);
            iVar13 = (uVar12 & 0x3f) + iVar11;
          } while (lVar23 != 0x1000);
          local_2078 = (undefined *)((ulong)local_2078._4_4_ << 0x20);
          local_2080 = PTR_DAT_04bbfe68 + 0x10;
          lVar23 = *(long *)PTR_DAT_04bb2720;
          if (lVar23 == 0) {
            puVar31 = &DAT_055c04a0;
          }
          else {
            puVar31 = &DAT_055c04a0;
            if (*(long *)(lVar23 + 0x330) != 0) {
              puVar31 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
              iVar9 = FUN_006bd550(*puVar31,0);
              puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar9 != 0x758f7eaf) {
                puVar31 = &DAT_055c04a0;
              }
            }
          }
          local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
          uVar7 = FUN_017baf44();
          local_2080 = PTR_DAT_04bb6268 + 0x10;
          local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
          local_1068 = PTR_DAT_04bb2010 + 0x10;
          local_1060 = (undefined *)0x0;
          if (0 < iVar13) {
            iVar13 = 0;
            do {
              iVar13 = iVar13 + 1;
              uVar15 = FUN_01696a90(&local_a0f8,iVar13,&local_1068);
              if ((uVar15 & 1) != 0) {
                local_20a8 = (undefined *)0xea69;
                FUN_0277d4ac(&local_20a8);
                FUN_011f3390(&local_2080,0,&local_20a8,&local_1068);
              }
            } while (iVar11 + (uVar12 & 0x3f) != iVar13);
          }
          goto LAB_012040d8;
        }
      }
      else {
        local_2080 = (undefined *)CONCAT44(local_2080._4_4_,1);
        lVar23 = 0;
        iVar13 = 0;
        do {
          puVar20 = (uint *)((long)local_a0f0 + lVar23);
          lVar23 = lVar23 + 4;
          uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
          uVar12 = uVar12 + (uVar12 >> 8);
          iVar13 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar13;
        } while (lVar23 != 0x1000);
        if (iVar13 != 0) {
          local_2078 = (undefined *)((ulong)local_2078._4_4_ << 0x20);
          local_2080 = PTR_DAT_04bbfe68 + 0x10;
          lVar23 = *(long *)PTR_DAT_04bb2720;
          if (lVar23 == 0) {
            puVar31 = &DAT_055c04a0;
          }
          else {
            puVar31 = &DAT_055c04a0;
            if (*(long *)(lVar23 + 0x330) != 0) {
              puVar31 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
              iVar13 = FUN_006bd550(*puVar31,0);
              puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar13 != 0x758f7eaf) {
                puVar31 = &DAT_055c04a0;
              }
            }
          }
          local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
          uVar7 = FUN_017baf44();
          local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
          local_2080 = PTR_DAT_04bb6268 + 0x10;
          FUN_01696be0(&local_1068,&local_a0f8);
          local_20a8 = (undefined *)0xed16;
          FUN_0277d4ac(&local_20a8);
          FUN_011f3390(&local_2080,0,&local_20a8,&local_1068);
          if (((DAT_05233970 <= (int)(uint)local_1060) && ((int)(uint)local_1060 <= DAT_05233980))
             && ((DAT_05233974 <= (int)local_1060._4_4_ &&
                 (((int)local_1060._4_4_ <= DAT_05233984 &&
                  (uVar12 = (local_1060._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_1060 >> 1),
                  uVar12 >> 0xf == 0)))))) {
            uVar12 = uVar12 >> 5;
            local_a0f0[uVar12] =
                 local_a0f0[uVar12] & (1 << (ulong)((uint)local_1060 >> 1 & 0x1f) ^ 0xffffffffU);
          }
        }
        if (uVar32 == 4) goto LAB_01204c98;
      }
LAB_012040f4:
      if (uVar32 == 5) {
        local_2080 = (undefined *)CONCAT44(local_2080._4_4_,1);
        lVar23 = 0;
        iVar13 = 0;
        do {
          iVar11 = iVar13;
          puVar20 = (uint *)((long)local_a0f0 + lVar23);
          lVar23 = lVar23 + 4;
          uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
          uVar12 = uVar12 + (uVar12 >> 8);
          uVar12 = uVar12 + (uVar12 >> 0x10);
          iVar13 = (uVar12 & 0x3f) + iVar11;
        } while (lVar23 != 0x1000);
        local_2078 = (undefined *)((ulong)local_2078 & 0xffffffff00000000);
        local_2080 = PTR_DAT_04bbfe68 + 0x10;
        lVar23 = *(long *)PTR_DAT_04bb2720;
        if (lVar23 == 0) {
          puVar31 = &DAT_055c04a0;
        }
        else {
          puVar31 = &DAT_055c04a0;
          if (*(long *)(lVar23 + 0x330) != 0) {
            puVar31 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
            iVar9 = FUN_006bd550(*puVar31,0);
            puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar9 != 0x758f7eaf) {
              puVar31 = &DAT_055c04a0;
            }
          }
        }
        local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
        uVar7 = FUN_017baf44();
        local_2080 = PTR_DAT_04bb6268 + 0x10;
        local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
        local_20a8 = PTR_DAT_04bb2010 + 0x10;
        local_20a0 = 0;
        if (0 < iVar13) {
          iVar13 = 0;
          do {
            iVar13 = iVar13 + 1;
            uVar15 = FUN_01696a90(&local_a0f8,iVar13,&local_20a8);
            if ((uVar15 & 1) != 0) {
              FUN_01a5033c(&local_2090,&local_2080,0,&local_20a8,0);
              FUN_0124c030(&local_1068,&local_2090);
              FUN_01250ef0(&local_1068,1);
              FUN_011f3390(&local_2080,0,&local_1060,&local_20a8);
            }
          } while (iVar11 + (uVar12 & 0x3f) != iVar13);
        }
      }
      else {
        local_2080 = PTR_DAT_04bbdd38 + 0x10;
        local_1068 = (undefined *)CONCAT44(local_1068._4_4_,1);
        memset(&local_2078,0,0x1000);
        lVar23 = 0;
        do {
          uVar12 = *(uint *)((long)&local_2078 + lVar23 + 4);
          lVar16 = lVar23 + 8;
          uVar10 = *(uint *)((long)local_a0f0 + lVar23 + 4);
          *(uint *)((long)&local_1068 + lVar23) =
               *(uint *)((long)local_a0f0 + lVar23) | *(uint *)((long)&local_2078 + lVar23);
          *(uint *)((long)&local_1068 + lVar23 + 4) = uVar10 | uVar12;
          lVar23 = lVar16;
        } while (lVar16 != 0x1000);
        memcpy(&local_2078,&local_1068,0x1000);
        local_1060 = (undefined *)((ulong)local_1060 & 0xffffffff00000000);
        local_1068 = PTR_DAT_04bbfe68 + 0x10;
        lVar23 = *(long *)PTR_DAT_04bb2720;
        if (lVar23 == 0) {
          puVar31 = &DAT_055c04a0;
        }
        else {
          puVar31 = &DAT_055c04a0;
          if (*(long *)(lVar23 + 0x330) != 0) {
            puVar31 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
            iVar13 = FUN_006bd550(*puVar31,0);
            puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar13 != 0x758f7eaf) {
              puVar31 = &DAT_055c04a0;
            }
          }
        }
        local_1060 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(uint)local_1060);
        uVar7 = FUN_017baf44();
        local_1058 = CONCAT71(local_1058._1_7_,uVar7) & 0xffffffffffffff01;
        local_1068 = PTR_DAT_04bb6268 + 0x10;
        FUN_01696be0(&local_2090,&local_2080);
        FUN_01a5033c(&local_1070,&local_1068,0,&local_2090,0);
        FUN_0124c030(&local_20a8,&local_1070);
        FUN_01250ef0(&local_20a8,3);
        FUN_011f3390(&local_1068,0,&local_20a0,&local_2090);
        if ((((DAT_05233970 <= (int)local_2088) && ((int)local_2088 <= DAT_05233980)) &&
            (DAT_05233974 <= (int)local_2084)) &&
           (((int)local_2084 <= DAT_05233984 &&
            (uVar12 = (local_2084 & 0x1fffffe) * 0x80 + ((int)local_2088 >> 1), uVar12 >> 0xf == 0))
           )) {
          lVar23 = (ulong)(uVar12 >> 5) * 4;
          *(uint *)((long)&local_2078 + lVar23) =
               *(uint *)((long)&local_2078 + lVar23) &
               (1 << (ulong)(local_2088 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        FUN_01696be0(&local_2090,&local_2080);
        FUN_01a5033c(&local_1070,&local_1068,0,&local_2090,0);
        FUN_0124c030(&local_20a8,&local_1070);
        FUN_01250ef0(&local_20a8,2);
        FUN_011f3390(&local_1068,0,&local_20a0,&local_2090);
      }
      local_2080 = PTR_DAT_04bbdd38 + 0x10;
      local_1068 = (undefined *)CONCAT44(local_1068._4_4_,1);
      memset(&local_2078,0,0x1000);
      lVar23 = 0;
      do {
        uVar12 = *(uint *)((long)&local_2078 + lVar23 + 4);
        lVar16 = lVar23 + 8;
        uVar10 = *(uint *)((long)local_a0f0 + lVar23 + 4);
        *(uint *)((long)&local_1068 + lVar23) =
             *(uint *)((long)local_a0f0 + lVar23) | *(uint *)((long)&local_2078 + lVar23);
        *(uint *)((long)&local_1068 + lVar23 + 4) = uVar10 | uVar12;
        lVar23 = lVar16;
      } while (lVar16 != 0x1000);
      memcpy(&local_2078,&local_1068,0x1000);
      local_1060 = (undefined *)((ulong)local_1060 & 0xffffffff00000000);
      lVar23 = *(long *)PTR_DAT_04bb2720;
      if (lVar23 == 0) {
        puVar31 = &DAT_055c04a0;
      }
      else {
        puVar31 = &DAT_055c04a0;
        if (*(long *)(lVar23 + 0x330) != 0) {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
          iVar13 = FUN_006bd550(*puVar31,0);
          puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar13 != 0x758f7eaf) {
            puVar31 = &DAT_055c04a0;
          }
        }
      }
      local_1060 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(uint)local_1060);
      uVar7 = FUN_017baf44();
      local_1058 = CONCAT71(local_1058._1_7_,uVar7) & 0xffffffffffffff01;
      iVar13 = 0;
      local_1068 = PTR_DAT_04bb6268 + 0x10;
      lVar23 = 2;
      do {
        uVar12 = *(uint *)((long)&local_2080 + lVar23 * 4);
        lVar23 = lVar23 + 1;
        uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
        uVar12 = uVar12 + (uVar12 >> 8);
        iVar13 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar13;
      } while (lVar23 != 0x402);
      if (iVar13 != 0) {
        if (4 < iVar13) {
          iVar13 = 5;
        }
        puVar4 = PTR_DAT_04bb2010 + 0x10;
        iVar11 = 0;
        do {
          FUN_01696be0(&local_20a8,&local_2080);
          uVar12 = 0;
          uVar10 = (uint)local_20a0 - 2;
          iVar9 = local_20a0._4_4_ - 2;
          if ((int)uVar10 < DAT_05233970 || DAT_05233980 < (int)uVar10) {
            uVar28 = 0;
          }
          else {
            iVar27 = (int)uVar10 >> 1;
            if ((DAT_05233974 <= iVar9) && (iVar9 <= DAT_05233984)) {
              uVar12 = (iVar9 * 0x80 & 0xffffff00U) + iVar27;
              if (uVar12 >> 0xf == 0) {
                uVar12 = *(uint *)((long)apcStack_b0f8 + (ulong)(uVar12 >> 5) * 4) >>
                         (ulong)(uVar10 >> 1 & 0x1f) & 1;
              }
              else {
                uVar12 = 0;
              }
            }
            if (((DAT_05233974 <= (int)local_20a0._4_4_) && ((int)local_20a0._4_4_ <= DAT_05233984))
               && (uVar28 = (local_20a0._4_4_ & 0x1fffffe) * 0x80 + iVar27, uVar28 >> 0xf == 0)) {
              uVar12 = uVar12 | (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar28 >> 5) * 4) &
                                       1 << (ulong)(uVar10 >> 1 & 0x1f)) != 0) << 1;
            }
            iVar1 = local_20a0._4_4_ + 2;
            uVar28 = 0;
            if ((DAT_05233974 <= iVar1) && (iVar1 <= DAT_05233984)) {
              uVar28 = (iVar1 * 0x80 & 0xffffff00U) + iVar27;
              if (uVar28 >> 0xf == 0) {
                uVar28 = (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar28 >> 5) * 4) &
                                1 << (ulong)(uVar10 >> 1 & 0x1f)) != 0) << 2;
              }
              else {
                uVar28 = 0;
              }
            }
          }
          iVar27 = local_20a0._4_4_ + 2;
          uVar10 = 0;
          if (((DAT_05233970 <= (int)(uint)local_20a0) && ((int)(uint)local_20a0 <= DAT_05233980))
             && ((uVar10 = 0, DAT_05233974 <= iVar27 && (iVar27 <= DAT_05233984)))) {
            uVar10 = (iVar27 * 0x80 & 0xffffff00U) + ((int)(uint)local_20a0 >> 1);
            if (uVar10 >> 0xf == 0) {
              uVar10 = (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar10 >> 5) * 4) &
                              1 << (ulong)((uint)local_20a0 >> 1 & 0x1f)) != 0) << 3;
            }
            else {
              uVar10 = 0;
            }
          }
          uVar25 = 0;
          uVar10 = uVar28 | uVar12 | uVar10;
          uVar12 = (uint)local_20a0 + 2;
          if (((int)uVar12 < DAT_05233970) || (DAT_05233980 < (int)uVar12)) {
            uVar28 = 0;
          }
          else {
            iVar1 = (int)uVar12 >> 1;
            if (((DAT_05233974 <= iVar27) && (iVar27 <= DAT_05233984)) &&
               (uVar28 = (iVar27 * 0x80 & 0xffffff00U) + iVar1, uVar28 >> 0xf == 0)) {
              uVar10 = uVar10 | (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar28 >> 5) * 4) &
                                       1 << (ulong)(uVar12 >> 1 & 0x1f)) != 0) << 4;
            }
            uVar25 = 0;
            if ((DAT_05233974 <= (int)local_20a0._4_4_) && ((int)local_20a0._4_4_ <= DAT_05233984))
            {
              uVar28 = (local_20a0._4_4_ & 0x1fffffe) * 0x80 + iVar1;
              if (uVar28 >> 0xf == 0) {
                uVar25 = (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar28 >> 5) * 4) &
                                1 << (ulong)(uVar12 >> 1 & 0x1f)) != 0) << 5;
              }
              else {
                uVar25 = 0;
              }
            }
            uVar28 = 0;
            if ((DAT_05233974 <= iVar9) && (iVar9 <= DAT_05233984)) {
              uVar28 = (iVar9 * 0x80 & 0xffffff00U) + iVar1;
              if (uVar28 >> 0xf == 0) {
                uVar28 = (uint)((*(uint *)((long)apcStack_b0f8 + (ulong)(uVar28 >> 5) * 4) &
                                1 << (ulong)(uVar12 >> 1 & 0x1f)) != 0) << 6;
              }
              else {
                uVar28 = 0;
              }
            }
          }
          uVar28 = uVar25 | uVar10 | uVar28;
          uVar12 = uVar28 - ((uVar25 | uVar10 & 0xaaaaaaaa) >> 1);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
          uVar12 = uVar12 + (uVar12 >> 8);
          uVar12 = uVar12 + (uVar12 >> 0x10) & 0x3f;
          if (uVar12 != 0) {
            uVar10 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
            DAT_0514cb58 = DAT_0514cb5c;
            DAT_0514cb5c = DAT_0514cb60;
            uVar10 = uVar10 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar10 ^ DAT_0514cb64;
            DAT_0514cb60 = DAT_0514cb64;
            local_2090 = puVar4;
            if (uVar28 != 0) {
              iVar9 = (int)((ulong)uVar10 * (ulong)uVar12 >> 0x20) + 2;
              do {
                iVar9 = iVar9 + -1;
                if (iVar9 < 2) {
                  uVar12 = uVar28 - 1 & (uVar28 ^ 0xffffffff);
                  uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
                  uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
                  uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
                  uVar12 = uVar12 + (uVar12 >> 8);
                  uVar15 = (ulong)(uVar12 + (uVar12 >> 0x10) & 0x3f);
                  goto LAB_01204b80;
                }
                uVar28 = uVar28 - 1 & uVar28;
              } while (uVar28 != 0);
            }
            uVar15 = 0xffffffff;
LAB_01204b80:
            uVar15 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
            local_2088 = *(int *)(&DAT_041747c8 + uVar15) + (uint)local_20a0;
            local_2084 = *(int *)(&DAT_041747e4 + uVar15) + local_20a0._4_4_;
            if ((((DAT_05233970 <= (int)local_2088 && (int)local_2088 <= DAT_05233980) &&
                 (DAT_05233974 <= (int)local_2084)) && ((int)local_2084 <= DAT_05233984)) &&
               (uVar12 = (local_2084 * 0x80 & 0xffffff00) + ((int)local_2088 >> 1),
               uVar12 >> 0xf == 0)) {
              *(uint *)((long)apcStack_b0f8 + (ulong)(uVar12 >> 5) * 4) =
                   *(uint *)((long)apcStack_b0f8 + (ulong)(uVar12 >> 5) * 4) &
                   (1 << (ulong)(local_2088 >> 1 & 0x1f) ^ 0xffffffffU);
              local_40c0[uVar12 >> 5] =
                   local_40c0[uVar12 >> 5] & (1 << (ulong)(local_2088 >> 1 & 0x1f) ^ 0xffffffffU);
            }
            local_1070 = 0x9c4;
            DAT_0514cb64 = uVar10;
            FUN_0277d4ac(&local_1070);
            FUN_01a50970(&local_1068,0,&local_1070,&local_2090);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != iVar13);
      }
      if (uVar32 != 4) goto LAB_01205370;
    }
LAB_01204c98:
    local_2080 = PTR_DAT_04bbdd38 + 0x10;
    local_1068 = (undefined *)CONCAT44(local_1068._4_4_,1);
    memset(&local_2078,0,0x1000);
    lVar23 = 0;
    do {
      uVar12 = *(uint *)((long)&local_2078 + lVar23 + 4);
      lVar16 = lVar23 + 8;
      uVar10 = *(uint *)((long)local_a0f0 + lVar23 + 4);
      *(uint *)((long)&local_1068 + lVar23) =
           *(uint *)((long)local_a0f0 + lVar23) | *(uint *)((long)&local_2078 + lVar23);
      *(uint *)((long)&local_1068 + lVar23 + 4) = uVar10 | uVar12;
      lVar23 = lVar16;
    } while (lVar16 != 0x1000);
    memcpy(&local_2078,&local_1068,0x1000);
    local_1060 = (undefined *)((ulong)local_1060 & 0xffffffff00000000);
    lVar23 = *(long *)PTR_DAT_04bb2720;
    if (lVar23 == 0) {
      puVar31 = &DAT_055c04a0;
    }
    else {
      puVar31 = &DAT_055c04a0;
      if (*(long *)(lVar23 + 0x330) != 0) {
        puVar31 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
        iVar13 = FUN_006bd550(*puVar31,0);
        puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar13 != 0x758f7eaf) {
          puVar31 = &DAT_055c04a0;
        }
      }
    }
    local_1060 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(uint)local_1060);
    uVar7 = FUN_017baf44();
    local_1058 = CONCAT71(local_1058._1_7_,uVar7) & 0xffffffffffffff01;
    iVar13 = 0;
    local_1068 = PTR_DAT_04bb6268 + 0x10;
    lVar23 = 2;
    do {
      uVar12 = *(uint *)((long)&local_2080 + lVar23 * 4);
      lVar23 = lVar23 + 1;
      uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
      uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
      uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
      uVar12 = uVar12 + (uVar12 >> 8);
      iVar13 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar13;
    } while (lVar23 != 0x402);
    if (iVar13 != 0) {
      if (4 < iVar13) {
        iVar13 = 5;
      }
      iVar11 = 0;
      puVar4 = PTR_DAT_04bb2010 + 0x10;
      do {
        FUN_01696be0(&local_20a8,&local_2080);
        uVar12 = 0;
        uVar10 = (uint)local_20a0 - 2;
        iVar9 = local_20a0._4_4_ - 2;
        if ((int)uVar10 < DAT_05233970 || DAT_05233980 < (int)uVar10) {
          uVar28 = 0;
        }
        else {
          iVar27 = (int)uVar10 >> 1;
          if ((DAT_05233974 <= iVar9) && (iVar9 <= DAT_05233984)) {
            uVar12 = (iVar9 * 0x80 & 0xffffff00U) + iVar27;
            if (uVar12 >> 0xf == 0) {
              uVar12 = local_40c0[uVar12 >> 5] >> (ulong)(uVar10 >> 1 & 0x1f) & 1;
            }
            else {
              uVar12 = 0;
            }
          }
          if (((DAT_05233974 <= (int)local_20a0._4_4_) && ((int)local_20a0._4_4_ <= DAT_05233984))
             && (uVar28 = (local_20a0._4_4_ & 0x1fffffe) * 0x80 + iVar27, uVar28 >> 0xf == 0)) {
            uVar12 = uVar12 | (uint)((local_40c0[uVar28 >> 5] & 1 << (ulong)(uVar10 >> 1 & 0x1f)) !=
                                    0) << 1;
          }
          iVar1 = local_20a0._4_4_ + 2;
          uVar28 = 0;
          if ((DAT_05233974 <= iVar1) && (iVar1 <= DAT_05233984)) {
            uVar28 = (iVar1 * 0x80 & 0xffffff00U) + iVar27;
            if (uVar28 >> 0xf == 0) {
              uVar28 = (uint)((local_40c0[uVar28 >> 5] & 1 << (ulong)(uVar10 >> 1 & 0x1f)) != 0) <<
                       2;
            }
            else {
              uVar28 = 0;
            }
          }
        }
        iVar27 = local_20a0._4_4_ + 2;
        uVar10 = 0;
        if ((((DAT_05233970 <= (int)(uint)local_20a0) && ((int)(uint)local_20a0 <= DAT_05233980)) &&
            (uVar10 = 0, DAT_05233974 <= iVar27)) && (iVar27 <= DAT_05233984)) {
          uVar10 = (iVar27 * 0x80 & 0xffffff00U) + ((int)(uint)local_20a0 >> 1);
          if (uVar10 >> 0xf == 0) {
            uVar10 = (uint)((local_40c0[uVar10 >> 5] & 1 << (ulong)((uint)local_20a0 >> 1 & 0x1f))
                           != 0) << 3;
          }
          else {
            uVar10 = 0;
          }
        }
        uVar25 = 0;
        uVar10 = uVar28 | uVar12 | uVar10;
        uVar12 = (uint)local_20a0 + 2;
        if (((int)uVar12 < DAT_05233970) || (DAT_05233980 < (int)uVar12)) {
          uVar28 = 0;
        }
        else {
          iVar1 = (int)uVar12 >> 1;
          if (((DAT_05233974 <= iVar27) && (iVar27 <= DAT_05233984)) &&
             (uVar28 = (iVar27 * 0x80 & 0xffffff00U) + iVar1, uVar28 >> 0xf == 0)) {
            uVar10 = uVar10 | (uint)((local_40c0[uVar28 >> 5] & 1 << (ulong)(uVar12 >> 1 & 0x1f)) !=
                                    0) << 4;
          }
          uVar25 = 0;
          if ((DAT_05233974 <= (int)local_20a0._4_4_) && ((int)local_20a0._4_4_ <= DAT_05233984)) {
            uVar28 = (local_20a0._4_4_ & 0x1fffffe) * 0x80 + iVar1;
            if (uVar28 >> 0xf == 0) {
              uVar25 = (uint)((local_40c0[uVar28 >> 5] & 1 << (ulong)(uVar12 >> 1 & 0x1f)) != 0) <<
                       5;
            }
            else {
              uVar25 = 0;
            }
          }
          uVar28 = 0;
          if ((DAT_05233974 <= iVar9) && (iVar9 <= DAT_05233984)) {
            uVar28 = (iVar9 * 0x80 & 0xffffff00U) + iVar1;
            if (uVar28 >> 0xf == 0) {
              uVar28 = (uint)((local_40c0[uVar28 >> 5] & 1 << (ulong)(uVar12 >> 1 & 0x1f)) != 0) <<
                       6;
            }
            else {
              uVar28 = 0;
            }
          }
        }
        uVar28 = uVar25 | uVar10 | uVar28;
        uVar12 = uVar28 - ((uVar25 | uVar10 & 0xaaaaaaaa) >> 1);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
        uVar12 = uVar12 + (uVar12 >> 8);
        uVar12 = uVar12 + (uVar12 >> 0x10) & 0x3f;
        if (uVar12 != 0) {
          uVar10 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
          DAT_0514cb58 = DAT_0514cb5c;
          DAT_0514cb5c = DAT_0514cb60;
          uVar10 = uVar10 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar10 ^ DAT_0514cb64;
          DAT_0514cb60 = DAT_0514cb64;
          local_2090 = puVar4;
          if (uVar28 != 0) {
            iVar9 = (int)((ulong)uVar10 * (ulong)uVar12 >> 0x20) + 2;
            do {
              iVar9 = iVar9 + -1;
              if (iVar9 < 2) {
                uVar12 = uVar28 - 1 & (uVar28 ^ 0xffffffff);
                uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
                uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
                uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
                uVar12 = uVar12 + (uVar12 >> 8);
                uVar15 = (ulong)(uVar12 + (uVar12 >> 0x10) & 0x3f);
                goto LAB_01205230;
              }
              uVar28 = uVar28 - 1 & uVar28;
            } while (uVar28 != 0);
          }
          uVar15 = 0xffffffff;
LAB_01205230:
          uVar15 = -(uVar15 >> 0x1f) & 0xfffffffc00000000 | uVar15 << 2;
          local_2088 = *(int *)(&DAT_041747c8 + uVar15) + (uint)local_20a0;
          local_2084 = *(int *)(&DAT_041747e4 + uVar15) + local_20a0._4_4_;
          if (((DAT_05233970 <= (int)local_2088 && (int)local_2088 <= DAT_05233980) &&
              (DAT_05233974 <= (int)local_2084)) && ((int)local_2084 <= DAT_05233984)) {
            uVar12 = (local_2084 * 0x80 & 0xffffff00) + ((int)local_2088 >> 1);
            if (uVar12 >> 0xf == 0) {
              *(uint *)((long)apcStack_b0f8 + (ulong)(uVar12 >> 5) * 4) =
                   *(uint *)((long)apcStack_b0f8 + (ulong)(uVar12 >> 5) * 4) &
                   (1 << (ulong)(local_2088 >> 1 & 0x1f) ^ 0xffffffffU);
              local_40c0[uVar12 >> 5] =
                   local_40c0[uVar12 >> 5] & (1 << (ulong)(local_2088 >> 1 & 0x1f) ^ 0xffffffffU);
            }
            uVar12 = (local_2084 * 0x80 & 0xffffff00) + ((int)local_2088 >> 1);
            if (uVar12 >> 0xf == 0) {
              lVar23 = (ulong)(uVar12 >> 5) * 4;
              *(uint *)((long)&local_2078 + lVar23) =
                   *(uint *)((long)&local_2078 + lVar23) &
                   (1 << (ulong)(local_2088 >> 1 & 0x1f) ^ 0xffffffffU);
            }
          }
          local_1070 = 0x8f7;
          DAT_0514cb64 = uVar10;
          FUN_0277d4ac(&local_1070);
          FUN_01a50ae4(&local_1068,&local_1070,&local_2090);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != iVar13);
    }
  }
LAB_01205370:
  uVar15 = FUN_01229624(1);
  if ((uVar15 & 1) != 0) {
    local_2080 = (undefined *)CONCAT44(local_2080._4_4_,7);
    lVar23 = 0;
    iVar13 = 0;
    do {
      puVar20 = (uint *)((long)local_40c0 + lVar23);
      lVar23 = lVar23 + 4;
      uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
      uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
      uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
      uVar12 = uVar12 + (uVar12 >> 8);
      iVar13 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar13;
    } while (lVar23 != 0x1000);
    local_2078 = (undefined *)((ulong)local_2078 & 0xffffffff00000000);
    lVar23 = *(long *)PTR_DAT_04bb2720;
    if (lVar23 == 0) {
      puVar31 = &DAT_055c04a0;
    }
    else {
      puVar31 = &DAT_055c04a0;
      if (*(long *)(lVar23 + 0x330) != 0) {
        puVar31 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
        iVar11 = FUN_006bd550(*puVar31,0);
        puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar11 != 0x758f7eaf) {
          puVar31 = &DAT_055c04a0;
        }
      }
    }
    local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
    uVar7 = FUN_017baf44();
    local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
    local_2080 = PTR_DAT_04bb6268 + 0x10;
    local_2090 = (undefined *)0x30dd;
    FUN_0277d4ac(&local_2090);
    puVar4 = PTR_DAT_04bb43c0;
    local_1058 = 0;
    local_1068 = PTR_DAT_04bc0510 + 0x10;
    local_1060 = local_2090;
    lVar23 = *(long *)PTR_DAT_04bb43c0;
    uVar12 = FUN_0277d6c4(&local_1060);
    if (*(long *)puVar4 != 0) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar23 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        lVar23 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(&local_2090);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if (uVar12 < *(uint *)(lVar23 + 0x1d8)) {
          uVar15 = *(ulong *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8);
          if (uVar15 != 0) {
            local_1058 = uVar15;
          }
        }
      }
    }
    FUN_01b152b8(&local_1068);
    local_2090 = local_1060;
    if (iVar13 != 0) {
      iVar11 = 1;
      if (iVar13 != 1) {
        iVar11 = 2;
      }
      do {
        FUN_01696be0(&local_20a8,&local_40c8);
        if (DAT_05233970 <= (int)(uint)local_20a0 && (int)(uint)local_20a0 <= DAT_05233980) {
          uVar12 = (local_20a0._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_20a0 >> 1);
          if ((DAT_05233974 <= (int)local_20a0._4_4_ && (int)local_20a0._4_4_ <= DAT_05233984) &&
              uVar12 >> 0xf == 0) {
            uVar12 = uVar12 >> 5;
            local_40c0[uVar12] =
                 local_40c0[uVar12] & (1 << (ulong)((uint)local_20a0 >> 1 & 0x1f) ^ 0xffffffffU);
          }
        }
        FUN_01a50ae4(&local_2080,&local_2090,&local_20a8);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  local_2080 = (undefined *)CONCAT44(local_2080._4_4_,4);
  local_20a8 = (undefined *)0x8a5;
  FUN_0277d4ac(&local_20a8);
  lVar23 = *(long *)PTR_DAT_04bb46b0;
  if (lVar23 == 0) {
LAB_012056ec:
    lVar23 = 0;
  }
  else {
    puVar31 = *(undefined8 **)(lVar23 + 0x10);
    if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
      lVar16 = (**(code **)(*(long *)*puVar31 + 0x38))();
      lVar23 = 0;
      if (lVar16 != 0) {
        lVar23 = lVar16 + 0x70;
      }
    }
    else {
      if (puVar31 == (undefined8 *)0x0) goto LAB_012056ec;
      lVar23 = 0;
      if ((long *)puVar31[0x26] != (long *)0x0) {
        lVar23 = (**(code **)(*(long *)puVar31[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar23 + 0x1c24e8) == (long *)0x0) ||
     (puVar31 = (undefined8 *)**(long **)(lVar23 + 0x1c24e8), puVar31 == (undefined8 *)0x0)) {
    uVar15 = 0;
    if (uVar32 == 6) goto LAB_0120574c;
LAB_01205730:
    uVar5 = *(ushort *)(*(long *)(lVar23 + 0x1c24d0) + *(long *)(lVar23 + 0x1c24c8) + 0x900);
  }
  else {
    uVar15 = (**(code **)*puVar31)();
    uVar15 = uVar15 & 0xffffffff;
    if (uVar32 != 6) goto LAB_01205730;
LAB_0120574c:
    uVar5 = *(ushort *)(*(long *)(lVar23 + 0x1c24d0) + *(long *)(lVar23 + 0x1c24c8) + 0x902);
  }
  local_2080 = (undefined *)(ulong)uVar5;
  FUN_0277d4ac(&local_2080);
  local_20a8 = local_2080;
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar23 + 0x1c24e8) != 0)) &&
     (puVar31 = *(undefined8 **)(*(long *)(lVar23 + 0x1c24e8) + 8), puVar31 != (undefined8 *)0x0)) {
    (**(code **)*puVar31)();
  }
  local_2090 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_2090);
  FUN_0123b7d0(&local_20a8,&local_2090);
  lVar23 = 0;
  iVar13 = 0;
  do {
    iVar11 = iVar13;
    puVar20 = (uint *)((long)local_70d8 + lVar23);
    lVar23 = lVar23 + 4;
    uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
    uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
    uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
    uVar12 = uVar12 + (uVar12 >> 8);
    uVar12 = uVar12 + (uVar12 >> 0x10);
    iVar13 = (uVar12 & 0x3f) + iVar11;
  } while (lVar23 != 0x1000);
  local_2078 = (undefined *)((ulong)local_2078 & 0xffffffff00000000);
  local_2080 = PTR_DAT_04bbfe68 + 0x10;
  lVar23 = *(long *)PTR_DAT_04bb2720;
  if (lVar23 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar23 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
      iVar9 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
  uVar7 = FUN_017baf44();
  local_2080 = PTR_DAT_04bb6268 + 0x10;
  local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
  local_1068 = PTR_DAT_04bb2010 + 0x10;
  local_1060 = (undefined *)0x0;
  if (0 < iVar13) {
    iVar13 = 0;
    do {
      iVar13 = iVar13 + 1;
      uVar15 = FUN_01696a90(&local_70e0,iVar13,&local_1068);
      if ((uVar15 & 1) != 0) {
        FUN_011f3390(&local_2080,0,&local_2090,&local_1068);
      }
    } while (iVar11 + (uVar12 & 0x3f) != iVar13);
  }
  lVar23 = *(long *)PTR_DAT_04bb46b0;
  if (lVar23 != 0) {
    puVar31 = *(undefined8 **)(lVar23 + 0x10);
    if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
      lVar16 = (**(code **)(*(long *)*puVar31 + 0x38))();
      lVar23 = 0;
      if (lVar16 != 0) {
        lVar23 = lVar16 + 0x70;
      }
      goto LAB_012059e4;
    }
    if (puVar31 != (undefined8 *)0x0) {
      lVar23 = 0;
      if ((long *)puVar31[0x26] != (long *)0x0) {
        lVar23 = (**(code **)(*(long *)puVar31[0x26] + 0x38))();
      }
      goto LAB_012059e4;
    }
  }
  lVar23 = 0;
LAB_012059e4:
  lVar16 = *(long *)(lVar23 + 0x1c24e8);
  if ((lVar16 == 0) || (*(undefined8 **)(lVar16 + 0x10) == (undefined8 *)0x0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)**(undefined8 **)(lVar16 + 0x10))();
    lVar16 = *(long *)(lVar23 + 0x1c24e8);
    uVar15 = uVar15 & 0xffffffff;
  }
  uVar12 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
  DAT_0514cb58 = DAT_0514cb5c;
  DAT_0514cb5c = DAT_0514cb60;
  uVar12 = uVar12 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar12 ^ DAT_0514cb64;
  DAT_0514cb60 = DAT_0514cb64;
  DAT_0514cb64 = uVar12;
  if ((lVar16 != 0) && (plVar17 = *(long **)(lVar16 + 0x20), plVar17 != (long *)0x0)) {
    local_2080 = *(undefined **)(lVar23 + 0x1c24c8);
    local_2078 = *(undefined **)(lVar23 + 0x1c24d0);
    local_2070 = 0x928;
    (**(code **)(*plVar17 + 0x20))(plVar17,&local_2080);
  }
  lVar16 = *(long *)(lVar23 + 0x1c24d0) + *(long *)(lVar23 + 0x1c24c8);
  if ((uint)((ulong)uVar12 * 100 >> 0x20) < 0x32) {
    if (((DAT_0557ee20 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0557ee20), iVar13 != 0)) {
      DAT_0557ede0 = 0x9a;
      DAT_0557ede4 = 0x81f;
      DAT_0557ede8 = 0x98;
      DAT_0557edec = 0xe;
      DAT_0557edf0 = 0x9b;
      DAT_0557edf4 = 0x3c;
      DAT_0557edf8 = 0x99;
      DAT_0557edfc = 0xe70;
      DAT_0557ee00 = 0x97;
      DAT_0557ee04 = 0x7c0;
      DAT_0557ee08 = 0x96;
      DAT_0557ee0c = 0x1e0;
      DAT_0557ee10 = 0x94;
      DAT_0557ee14 = 0xf81;
      DAT_0557ee18 = 0x9c;
      DAT_0557ee1c = 0xc0f;
      __cxa_guard_release(&DAT_0557ee20);
    }
    pbVar21 = (byte *)(lVar16 + 0x925);
  }
  else {
    if (((DAT_0557ee20 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0557ee20), iVar13 != 0)) {
      DAT_0557ede0 = 0x9a;
      DAT_0557ede4 = 0x81f;
      DAT_0557ede8 = 0x98;
      DAT_0557edec = 0xe;
      DAT_0557edf0 = 0x9b;
      DAT_0557edf4 = 0x3c;
      DAT_0557edf8 = 0x99;
      DAT_0557edfc = 0xe70;
      DAT_0557ee00 = 0x97;
      DAT_0557ee04 = 0x7c0;
      DAT_0557ee08 = 0x96;
      DAT_0557ee0c = 0x1e0;
      DAT_0557ee10 = 0x94;
      DAT_0557ee14 = 0xf81;
      DAT_0557ee18 = 0x9c;
      DAT_0557ee1c = 0xc0f;
      __cxa_guard_release(&DAT_0557ee20);
    }
    pbVar21 = (byte *)(lVar16 + 0x924);
  }
  uVar14 = (&DAT_0557ede0)[(ulong)*pbVar21 * 2];
  if ((((uVar15 & 1) != 0) && (*(long *)(lVar23 + 0x1c24e8) != 0)) &&
     (puVar31 = *(undefined8 **)(*(long *)(lVar23 + 0x1c24e8) + 0x18), puVar31 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar31)();
  }
  if (uVar32 == 7) {
    uVar15 = FUN_0123c610();
    uVar15 = uVar15 & 0xffffffff;
  }
  else {
    FUN_0123bbf0(uVar14,&local_2090);
    uVar15 = 3;
  }
  local_2080 = (undefined *)CONCAT44(local_2080._4_4_,5);
  lVar23 = 0;
  iVar13 = 0;
  do {
    iVar11 = iVar13;
    puVar20 = (uint *)((long)local_60d0 + lVar23);
    lVar23 = lVar23 + 4;
    uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
    uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
    uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
    uVar12 = uVar12 + (uVar12 >> 8);
    uVar12 = uVar12 + (uVar12 >> 0x10);
    iVar13 = (uVar12 & 0x3f) + iVar11;
  } while (lVar23 != 0x1000);
  local_2078 = (undefined *)((ulong)local_2078 & 0xffffffff00000000);
  local_2080 = PTR_DAT_04bbfe68 + 0x10;
  lVar23 = *(long *)PTR_DAT_04bb2720;
  if (lVar23 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar23 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
      iVar9 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
  uVar7 = FUN_017baf44();
  local_2080 = PTR_DAT_04bb6268 + 0x10;
  local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
  local_1068 = PTR_DAT_04bb2010 + 0x10;
  local_1060 = (undefined *)0x0;
  if (0 < iVar13) {
    iVar13 = 0;
    do {
      iVar13 = iVar13 + 1;
      uVar18 = FUN_01696a90(&local_60d8,iVar13,&local_1068);
      if ((uVar18 & 1) != 0) {
        local_20a8._0_4_ = (uint)local_20a8 & 0xffff;
        local_20a8 = (undefined *)(ulong)(uint)local_20a8;
        uVar10 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
        DAT_0514cb58 = DAT_0514cb5c;
        DAT_0514cb5c = DAT_0514cb60;
        uVar10 = uVar10 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar10 ^ DAT_0514cb64;
        DAT_0514cb60 = DAT_0514cb64;
        local_20a8 = (undefined *)
                     (ulong)*(ushort *)((long)&local_2090 + (uVar15 * uVar10 >> 0x1f & 0x1fffffffe))
        ;
        DAT_0514cb64 = uVar10;
        FUN_0277d4ac(&local_20a8);
        FUN_011f3390(&local_2080,0,&local_20a8,&local_1068);
      }
    } while (iVar11 + (uVar12 & 0x3f) != iVar13);
  }
  local_2080 = (undefined *)CONCAT44(local_2080._4_4_,6);
  lVar23 = 0;
  iVar13 = 0;
  do {
    puVar20 = (uint *)((long)local_50c8 + lVar23);
    lVar23 = lVar23 + 4;
    uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
    uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
    uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
    uVar12 = uVar12 + (uVar12 >> 8);
    iVar13 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar13;
  } while (lVar23 != 0x1000);
  local_2078 = (undefined *)((ulong)local_2078 & 0xffffffff00000000);
  if (2 < iVar13) {
    iVar13 = 3;
  }
  lVar23 = *(long *)PTR_DAT_04bb2720;
  if (lVar23 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar23 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
      iVar11 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar11 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
  uVar7 = FUN_017baf44();
  local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
  local_2080 = PTR_DAT_04bb6268 + 0x10;
  if (iVar13 != 0) {
    iVar13 = -iVar13;
    do {
      FUN_01696be0(&local_1068,&local_50d0);
      FUN_01689418(&local_20a8,0);
      FUN_01a50970(&local_2080,0,&local_20a8,&local_1068);
      if (((DAT_05233970 <= (int)(uint)local_1060 && (int)(uint)local_1060 <= DAT_05233980) &&
          (DAT_05233974 <= (int)local_1060._4_4_)) &&
         (((int)local_1060._4_4_ <= DAT_05233984 &&
          (uVar12 = (local_1060._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_1060 >> 1),
          uVar12 >> 0xf == 0)))) {
        uVar12 = uVar12 >> 5;
        local_50c8[uVar12] =
             local_50c8[uVar12] & (1 << (ulong)((uint)local_1060 >> 1 & 0x1f) ^ 0xffffffffU);
      }
      bVar6 = iVar13 != -1;
      iVar13 = iVar13 + 1;
    } while (bVar6);
  }
  uVar28 = DAT_0514cb60;
  uVar10 = DAT_0514cb5c;
  uVar12 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
  DAT_0514cb58 = DAT_0514cb5c;
  DAT_0514cb5c = DAT_0514cb60;
  uVar12 = uVar12 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar12 ^ DAT_0514cb64;
  DAT_0514cb60 = DAT_0514cb64;
  uVar28 = DAT_0514cb64;
  if ((uint)((ulong)uVar12 * 100 >> 0x20) < 0x1e) {
    local_2080 = (undefined *)CONCAT44(local_2080._4_4_,6);
    lVar23 = 0;
    iVar13 = 0;
    do {
      puVar20 = (uint *)((long)local_50c8 + lVar23);
      lVar23 = lVar23 + 4;
      uVar25 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
      uVar25 = (uVar25 >> 2 & 0x33333333) + (uVar25 & 0x33333333);
      uVar25 = uVar25 + (uVar25 >> 4) & 0xf0f0f0f;
      uVar25 = uVar25 + (uVar25 >> 8);
      iVar13 = (uVar25 + (uVar25 >> 0x10) & 0x3f) + iVar13;
    } while (lVar23 != 0x1000);
    if (iVar13 != 0) {
      local_2090 = (undefined *)0x16a1;
      DAT_0514cb64 = uVar12;
      FUN_0277d4ac(&local_2090);
      puVar4 = PTR_DAT_04bb43c0;
      local_1058 = 0;
      local_1068 = PTR_DAT_04bc0510 + 0x10;
      local_1060 = local_2090;
      lVar23 = *(long *)PTR_DAT_04bb43c0;
      uVar12 = FUN_0277d6c4(&local_1060);
      if (*(long *)puVar4 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar23 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          lVar23 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(&local_2090);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if (uVar12 < *(uint *)(lVar23 + 0x1d8)) {
            uVar15 = *(ulong *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8);
            if (uVar15 != 0) {
              local_1058 = uVar15;
            }
          }
        }
      }
      uVar15 = FUN_021f6520();
      puVar4 = PTR_DAT_04bb46f0;
      local_1078 = CONCAT22(CONCAT11(local_1078._3_1_,(char)(uVar15 >> 0x10)),(short)uVar15);
      local_1f90 = 0;
      uStack_1f88 = 0;
      uVar12 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      local_1fa0 = 0;
      uStack_1f98 = 0;
      local_1fb0 = 0;
      uStack_1fa8 = 0;
      uVar12 = uVar12 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar12 ^ DAT_05582b7c;
      local_1fc0 = 0;
      uStack_1fb8 = 0;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      local_1fd0 = 0;
      uStack_1fc8 = 0;
      local_1fe0 = 0;
      uStack_1fd8 = 0;
      local_1ff0 = 0;
      uStack_1fe8 = 0;
      local_2000 = 0;
      uStack_1ff8 = 0;
      local_2010 = 0;
      uStack_2008 = 0;
      local_2020 = 0;
      uStack_2018 = 0;
      local_2030 = 0;
      uStack_2028 = 0;
      local_2040 = 0;
      uStack_2038 = 0;
      local_2050 = 0;
      uStack_2048 = 0;
      local_2060 = 0;
      uStack_2058 = 0;
      local_2070 = 0;
      uStack_2068 = 0;
      local_2080 = (undefined *)0x0;
      local_2078 = (undefined *)0x0;
      lVar23 = *(long *)PTR_DAT_04bb46f0;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar12;
      if ((uint)((ulong)uVar12 * 100 >> 0x20) < 0x5f) {
        uVar14 = FUN_020fd7d8(&local_1078);
        local_1070 = CONCAT44(local_1070._4_4_,uVar14) & 0xffffffff000000ff;
        iVar13 = (int)local_1070;
        if (6 < (int)local_1070 - 1U) {
          iVar13 = 0;
        }
      }
      else {
        iVar13 = 8;
      }
      local_20a8 = (undefined *)CONCAT44(local_20a8._4_4_,iVar13);
      FUN_0262a9b0(lVar23,&local_2080,&local_20a8,lVar23 + 0xe98e0);
      FUN_0262b4c0(*(long *)puVar4,&local_2080,*(long *)puVar4 + 0xe98e0);
      uVar12 = 0;
      uVar18 = 0;
      do {
        uVar28 = (uint)uVar18 & 6;
        uVar10 = (uint)uVar18 + 2;
        bVar22 = *(byte *)((long)&local_2080 + (uVar18 >> 3));
        uVar12 = (bVar22 >> (ulong)(uVar28 | 1) & 1) + (bVar22 >> (ulong)uVar28 & 1) + uVar12;
        uVar18 = (ulong)uVar10;
      } while (uVar10 != 0x800);
      if (uVar12 == 0) {
        uVar18 = 0xffff;
        uVar12 = DAT_05582b70;
        DAT_05582b70 = DAT_05582b74;
        uVar28 = DAT_05582b78;
        uVar10 = DAT_05582b7c;
      }
      else {
        uVar10 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
        uVar10 = uVar10 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar10 ^ DAT_05582b7c;
        uVar25 = (uint)((ulong)uVar10 * (ulong)uVar12 >> 0x20);
        uVar12 = DAT_05582b74;
        DAT_05582b70 = DAT_05582b78;
        uVar28 = DAT_05582b7c;
        if (uVar25 < 0x7fffffff) {
          uVar18 = 0;
          uVar26 = 0;
          do {
            if ((*(byte *)((long)&local_2080 + (uVar18 >> 3)) >> (ulong)((uint)uVar18 & 7) & 1) != 0
               ) {
              if (uVar26 == uVar25) goto LAB_012062b8;
              uVar26 = uVar26 + 1;
            }
            uVar2 = (uint)uVar18 + 1;
            uVar18 = (ulong)uVar2;
          } while (uVar2 != 0x800);
          uVar18 = 0xffffffff;
        }
        else {
          uVar18 = 0xffffffff;
        }
      }
LAB_012062b8:
      uVar12 = uVar12 ^ uVar12 << 0xb;
      DAT_05582b7c = uVar12 >> 8 ^ uVar10 >> 0x13 ^ uVar12 ^ uVar10;
      DAT_05582b74 = uVar28;
      DAT_05582b78 = uVar10;
      FUN_01afc400(&local_2080,&local_1068,uVar15 & 0xffffff,uVar18,
                   (int)((ulong)DAT_05582b7c * 0xff >> 0x20) + 1);
      local_2078 = (undefined *)((ulong)local_2078 & 0xffffffff00000000);
      local_2090 = local_2080;
      lVar23 = *(long *)PTR_DAT_04bb2720;
      if (lVar23 == 0) {
        puVar31 = &DAT_055c04a0;
      }
      else {
        puVar31 = &DAT_055c04a0;
        if (*(long *)(lVar23 + 0x330) != 0) {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
          iVar13 = FUN_006bd550(*puVar31,0);
          puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar13 != 0x758f7eaf) {
            puVar31 = &DAT_055c04a0;
          }
        }
      }
      local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
      uVar7 = FUN_017baf44();
      local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
      local_2080 = PTR_DAT_04bb6268 + 0x10;
      FUN_01696be0(&local_20a8,&local_50d0);
      FUN_01a50970(&local_2080,0,&local_2090,&local_20a8);
      if ((((DAT_05233970 <= (int)(uint)local_20a0) && ((int)(uint)local_20a0 <= DAT_05233980)) &&
          (DAT_05233974 <= (int)local_20a0._4_4_)) &&
         (((int)local_20a0._4_4_ <= DAT_05233984 &&
          (uVar12 = (local_20a0._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_20a0 >> 1),
          uVar12 >> 0xf == 0)))) {
        uVar12 = uVar12 >> 5;
        local_50c8[uVar12] =
             local_50c8[uVar12] & (1 << (ulong)((uint)local_20a0 >> 1 & 0x1f) ^ 0xffffffffU);
      }
      uVar28 = DAT_0514cb60;
      uVar12 = DAT_0514cb64;
    }
  }
  uVar10 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
  DAT_0514cb64 = uVar10 >> 8 ^ uVar12 >> 0x13 ^ uVar10 ^ uVar12;
  DAT_0514cb58 = DAT_0514cb5c;
  DAT_0514cb60 = uVar12;
  if ((uint)((ulong)DAT_0514cb64 * 100 >> 0x20) < 0x1e) {
    local_2080 = (undefined *)CONCAT44(local_2080._4_4_,7);
    lVar23 = 0;
    iVar13 = 0;
    do {
      puVar20 = (uint *)((long)local_40c0 + lVar23);
      lVar23 = lVar23 + 4;
      uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
      uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
      uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
      uVar12 = uVar12 + (uVar12 >> 8);
      iVar13 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + iVar13;
    } while (lVar23 != 0x1000);
    if (iVar13 != 0) {
      local_1068 = (undefined *)0xa13;
      DAT_0514cb5c = uVar28;
      FUN_0277d4ac(&local_1068);
      puVar4 = PTR_DAT_04bb43c0;
      local_2070 = 0;
      local_2080 = PTR_DAT_04bc0510 + 0x10;
      local_2078 = local_1068;
      lVar23 = *(long *)PTR_DAT_04bb43c0;
      uVar12 = FUN_0277d6c4(&local_2078);
      if (*(long *)puVar4 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar23 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          lVar23 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(&local_1068);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if (uVar12 < *(uint *)(lVar23 + 0x1d8)) {
            lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar12 * 8);
            if (lVar23 != 0) {
              local_2070 = lVar23;
            }
          }
        }
      }
      local_1078 = 0x70;
      local_1070 = *(ulong *)PTR_DAT_04bb37e0;
      local_2090 = *(undefined **)PTR_DAT_04bb37e0;
      FUN_01211140(&local_20a8,&local_1078,&local_2090,&local_1070);
      FUN_01b0b2ec(&local_2080,&local_20a8);
      local_1078 = (undefined4)local_2078;
      uStack_1074 = local_2078._4_4_;
      local_2078 = (undefined *)((ulong)local_2078._4_4_ << 0x20);
      lVar23 = *(long *)PTR_DAT_04bb2720;
      if (lVar23 == 0) {
        puVar31 = &DAT_055c04a0;
      }
      else {
        puVar31 = &DAT_055c04a0;
        if (*(long *)(lVar23 + 0x330) != 0) {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
          iVar13 = FUN_006bd550(*puVar31,0);
          puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar13 != 0x758f7eaf) {
            puVar31 = &DAT_055c04a0;
          }
        }
      }
      local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
      uVar7 = FUN_017baf44();
      local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
      local_2080 = PTR_DAT_04bb6268 + 0x10;
      FUN_01696be0(&local_1068,&local_40c8);
      FUN_01a50ae4(&local_2080,&local_1078,&local_1068);
      uVar28 = DAT_0514cb5c;
      if (((((int)(uint)local_1060 < DAT_05233970) || (DAT_05233980 < (int)(uint)local_1060)) ||
          ((int)local_1060._4_4_ < DAT_05233974)) || (DAT_05233984 < (int)local_1060._4_4_)) {
        local_20a8 = (undefined *)((ulong)local_20a8 & 0xffffffff00000000);
      }
      else {
        uVar12 = (local_1060._4_4_ & 0x1fffffe) * 0x80 + ((int)(uint)local_1060 >> 1);
        if (uVar12 >> 0xf == 0) {
          local_40c0[uVar12 >> 5] =
               local_40c0[uVar12 >> 5] & (1 << (ulong)((uint)local_1060 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        local_20a8 = (undefined *)((ulong)local_20a8 & 0xffffffff00000000);
        if (uVar12 >> 0xf == 0) {
          *(uint *)((long)apcStack_b0f8 + (ulong)(uVar12 >> 5) * 4) =
               *(uint *)((long)apcStack_b0f8 + (ulong)(uVar12 >> 5) * 4) &
               (1 << (ulong)((uint)local_1060 >> 1 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
  }
  DAT_0514cb5c = uVar28;
  uVar29 = *(undefined8 *)PTR_DAT_04bb30a0;
  local_1068 = (undefined *)FUN_00a8c31c(uVar29);
  if ((char)((ulong)local_1068 >> 0x20) < '\x05') {
    lVar23 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_1068);
    local_2080 = (undefined *)(lVar23 + -0x15180);
    local_1068 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_2080);
  }
  uVar18 = (ulong)local_1068 >> 0x10;
  uVar15 = (ulong)local_1068 >> 0x30;
  uVar19 = (ulong)local_1068 >> 0x18;
  local_1068._0_6_ = CONCAT24(5,(undefined4)local_1068);
  local_1068 = (undefined *)(CONCAT26((short)uVar15,(undefined6)local_1068) & 0xff00ffffffffffff);
  cVar8 = FUN_00a8ae20(uVar29,uVar18,uVar19,6);
  if ((int)cVar8 - 1U < 6) {
    puVar30 = (undefined4 *)(&PTR_DAT_04987220)[(int)((int)cVar8 - 1U)];
  }
  else {
    puVar30 = &DAT_04c47ee0;
  }
  local_2080 = (undefined *)CONCAT44(local_2080._4_4_,8);
  lVar23 = 0;
  iVar13 = 0;
  do {
    iVar11 = iVar13;
    puVar20 = (uint *)((long)local_30b8 + lVar23);
    lVar23 = lVar23 + 4;
    uVar12 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
    uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
    uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
    uVar12 = uVar12 + (uVar12 >> 8);
    uVar12 = uVar12 + (uVar12 >> 0x10);
    iVar13 = (uVar12 & 0x3f) + iVar11;
  } while (lVar23 != 0x1000);
  local_2078 = (undefined *)((ulong)local_2078 & 0xffffffff00000000);
  lVar23 = *(long *)PTR_DAT_04bb2720;
  if (lVar23 == 0) {
    puVar31 = &DAT_055c04a0;
  }
  else {
    puVar31 = &DAT_055c04a0;
    if (*(long *)(lVar23 + 0x330) != 0) {
      puVar31 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
      iVar9 = FUN_006bd550(*puVar31,0);
      puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar31 = &DAT_055c04a0;
      }
    }
  }
  local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
  uVar7 = FUN_017baf44();
  puVar4 = PTR_DAT_04bb27a8;
  local_2080 = PTR_DAT_04bb6268 + 0x10;
  local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
  local_1068 = PTR_DAT_04bb2010 + 0x10;
  local_1060 = (undefined *)0x0;
  if (0 < iVar13) {
    iVar13 = 0;
    do {
      uVar15 = FUN_01696a90(&local_30c0,iVar13 + 1,&local_1068);
      if ((uVar15 & 1) == 0) break;
      uVar10 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      uVar10 = uVar10 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar10 ^ DAT_0514cb64;
      DAT_0514cb60 = DAT_0514cb64;
      local_20a8 = (undefined *)
                   (ulong)(ushort)*(undefined4 *)
                                   ((long)puVar30 + ((ulong)uVar10 * 7 >> 0x1e & 0x1c));
      DAT_0514cb64 = uVar10;
      FUN_0277d4ac(&local_20a8);
      uVar15 = FUN_01a4f798(&local_2080,0,&local_1068);
      if ((uVar15 & 1) != 0) {
        local_2090 = (undefined *)((ulong)local_2090 & 0xffffffff00000000);
        lVar23 = *(long *)(*(long *)(*(long *)puVar4 + 0x1f8) + 0xd0);
        if (lVar23 != 0) {
          FUN_012e5af4(lVar23,&local_1068);
        }
      }
      FUN_01a50970(&local_2080,0,&local_20a8,&local_1068);
      iVar13 = iVar13 + 1;
    } while (iVar11 + (uVar12 & 0x3f) != iVar13);
  }
  if (((int)local_20b0 != -1) && (local_20b0._4_4_ != -1)) {
    FUN_021b2580(&DAT_053fe348);
    uVar15 = (ulong)DAT_05454055;
    if ((uVar15 < 0x23) &&
       ((DAT_05454056 <= (byte)PTR_DAT_04bc27f0[uVar15] &&
        ((*(uint *)(PTR_DAT_04bc2a20 + uVar15 * 4) >> (ulong)(DAT_05454056 & 0x1f) & 1) != 0)))) {
      local_2078 = (undefined *)((ulong)local_2078._4_4_ << 0x20);
      lVar23 = *(long *)PTR_DAT_04bb2720;
      if (lVar23 == 0) {
        puVar31 = &DAT_055c04a0;
      }
      else {
        puVar31 = &DAT_055c04a0;
        if (*(long *)(lVar23 + 0x330) != 0) {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
          iVar13 = FUN_006bd550(*puVar31,0);
          puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar13 != 0x758f7eaf) {
            puVar31 = &DAT_055c04a0;
          }
        }
      }
      local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
      uVar7 = FUN_017baf44();
      local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
      local_2080 = PTR_DAT_04bb5438 + 0x10;
      local_1060 = (undefined *)local_20b0;
      local_1068 = PTR_DAT_04bb2010 + 0x10;
      FUN_014fd424(&local_2080,1,&local_1068,0);
    }
    else {
      local_2078 = (undefined *)((ulong)local_2078._4_4_ << 0x20);
      local_2080 = PTR_DAT_04bbfe68 + 0x10;
      lVar23 = *(long *)PTR_DAT_04bb2720;
      if (lVar23 == 0) {
        puVar31 = &DAT_055c04a0;
      }
      else {
        puVar31 = &DAT_055c04a0;
        if (*(long *)(lVar23 + 0x330) != 0) {
          puVar31 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
          iVar13 = FUN_006bd550(*puVar31,0);
          puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar13 != 0x758f7eaf) {
            puVar31 = &DAT_055c04a0;
          }
        }
      }
      local_2078 = (undefined *)CONCAT44(*(undefined4 *)(puVar31 + 7),(undefined4)local_2078);
      uVar7 = FUN_017baf44();
      local_2070 = CONCAT71(local_2070._1_7_,uVar7) & 0xffffffffffffff01;
      local_1060 = (undefined *)local_20b0;
      local_1068 = PTR_DAT_04bb2010 + 0x10;
      uVar15 = FUN_01a4f798(&local_2080,0,&local_1068);
      if ((uVar15 & 1) != 0) {
        local_20a8 = (undefined *)((ulong)local_20a8 & 0xffffffff00000000);
        lVar23 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xd0);
        if (lVar23 != 0) {
          FUN_012e5af4(lVar23,&local_1068);
        }
      }
    }
  }
  return;
}

