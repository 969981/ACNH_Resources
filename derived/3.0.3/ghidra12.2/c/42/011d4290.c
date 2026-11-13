
undefined8 FUN_011d4290(void)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  short sVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  short *psVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  byte bVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  short local_10d0;
  undefined1 local_10ce;
  undefined1 local_10cd;
  undefined4 local_10cc;
  undefined *local_10c8;
  uint local_10c0;
  uint uStack_10bc;
  short local_10b8;
  undefined1 local_10b6;
  undefined1 local_10b5;
  undefined4 local_10b4;
  short local_10b0;
  undefined1 local_10ae;
  undefined1 local_10ad;
  undefined4 local_10ac;
  undefined *local_10a8;
  uint local_10a0;
  uint local_109c;
  undefined *local_1098;
  undefined8 local_1090;
  byte local_1088;
  undefined *local_1080;
  undefined4 local_1078;
  undefined4 local_1074;
  byte local_1070;
  undefined8 local_1068;
  uint local_1060;
  uint local_105c;
  byte local_1058;
  
  puVar6 = PTR_DAT_04bb6298;
  puVar1 = PTR_DAT_04bb6268;
  puVar2 = PTR_DAT_04bb2720;
  if (DAT_05146e18 != '\0') {
    return 1;
  }
  if (0xff < DAT_050dfcbc) {
    local_1074 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
    local_1078 = 1;
    local_1070 = FUN_017baf44();
    local_1070 = local_1070 & 1;
    puVar1 = puVar1 + 0x10;
    local_1090 = (char *)((ulong)local_1090 & 0xffffffff00000000);
    lVar14 = *(long *)puVar2;
    local_1080 = puVar1;
    if (lVar14 == 0) {
      puVar19 = &DAT_055c04a0;
    }
    else {
      puVar19 = &DAT_055c04a0;
      if (*(long *)(lVar14 + 0x330) != 0) {
        puVar19 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
        iVar8 = FUN_006bd550(*puVar19,0);
        puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar19 = &DAT_055c04a0;
        }
      }
    }
    local_1090 = (char *)CONCAT44(*(undefined4 *)(puVar19 + 7),(uint)local_1090);
    local_1088 = FUN_017baf44();
    local_1088 = local_1088 & 1;
    sVar5 = *(short *)puVar6;
    if (sVar5 == -1) {
      ppuVar18 = &local_1098;
    }
    else {
      local_1068 = (undefined *)CONCAT44(local_1068._4_4_,3);
      puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar4 = (uint *)PTR_DAT_04bc39f8;
      }
      ppuVar18 = &local_1098;
      if ((*puVar4 & 8) != 0) {
        ppuVar18 = &local_1080;
      }
    }
    iVar8 = 0;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    lVar14 = 0;
    local_1098 = puVar1;
    do {
      do {
        lVar17 = lVar14 + 1;
        uVar9 = (&DAT_0513edf8)[lVar14] - ((uint)(&DAT_0513edf8)[lVar14] >> 1 & 0x55555555);
        uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
        uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
        uVar9 = uVar9 + (uVar9 >> 8);
        iVar8 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + iVar8;
        lVar14 = lVar17;
      } while (lVar17 != 0x400);
      if (iVar8 == 0) {
        memset(&DAT_0513fe00,0,0x1000);
        lVar14 = 0;
        do {
          lVar17 = lVar14 + 8;
          uVar11 = *(uint *)((long)&DAT_050e0cd4 + lVar14);
          uVar9 = *(uint *)((long)&DAT_0513fe04 + lVar14);
          *(uint *)((long)&local_1068 + lVar14) =
               *(uint *)((long)&DAT_050e0cd0 + lVar14) | *(uint *)((long)&DAT_0513fe00 + lVar14);
          *(uint *)((long)&local_1068 + lVar14 + 4) = uVar11 | uVar9;
          lVar14 = lVar17;
        } while (lVar17 != 0x1000);
        memcpy(&DAT_0513fe00,&local_1068,0x1000);
        lVar14 = 0;
        do {
          lVar17 = lVar14 + 8;
          uVar11 = *(uint *)((long)&DAT_050e1cdc + lVar14);
          uVar9 = *(uint *)((long)&DAT_0513fe04 + lVar14);
          *(uint *)((long)&local_1068 + lVar14) =
               *(uint *)((long)&DAT_050e1cd8 + lVar14) | *(uint *)((long)&DAT_0513fe00 + lVar14);
          *(uint *)((long)&local_1068 + lVar14 + 4) = uVar11 | uVar9;
          lVar14 = lVar17;
        } while (lVar17 != 0x1000);
        memcpy(&DAT_0513fe00,&local_1068,0x1000);
        lVar14 = 0;
        do {
          lVar17 = lVar14 + 8;
          uVar11 = *(uint *)((long)&DAT_050e2ce4 + lVar14);
          uVar9 = *(uint *)((long)&DAT_0513fe04 + lVar14);
          *(uint *)((long)&local_1068 + lVar14) =
               *(uint *)((long)&DAT_050e2ce0 + lVar14) | *(uint *)((long)&DAT_0513fe00 + lVar14);
          *(uint *)((long)&local_1068 + lVar14 + 4) = uVar11 | uVar9;
          lVar14 = lVar17;
        } while (lVar17 != 0x1000);
        memcpy(&DAT_0513fe00,&local_1068,0x1000);
        lVar14 = 0;
        do {
          lVar17 = lVar14 + 8;
          uVar9 = *(uint *)((long)&DAT_0513fe04 + lVar14);
          uVar11 = *(uint *)((long)&DAT_050e3cec + lVar14);
          *(uint *)((long)&local_1068 + lVar14) =
               *(uint *)((long)&DAT_050e3ce8 + lVar14) | *(uint *)((long)&DAT_0513fe00 + lVar14);
          *(uint *)((long)&local_1068 + lVar14 + 4) = uVar11 | uVar9;
          lVar14 = lVar17;
        } while (lVar17 != 0x1000);
        memcpy(&DAT_0513fe00,&local_1068,0x1000);
        DAT_05146e18 = 1;
        return 1;
      }
      FUN_01696be0(&local_1068,&DAT_0513edf0);
      psVar12 = (short *)FUN_01a5010c(ppuVar18,0,&local_1068);
      if (*psVar12 == -2) {
        local_10a0 = local_1060;
        local_109c = local_105c;
        local_10a8 = puVar2;
        uVar13 = FUN_011dec54(&local_10a8);
        puVar19 = &DAT_05140e00;
        if ((uVar13 & 1) != 0) goto LAB_011d4590;
      }
      else {
        local_10ad = *(undefined1 *)((long)psVar12 + 3);
        local_10ae = (undefined1)psVar12[1];
        local_10ac = *(undefined4 *)(psVar12 + 2);
        local_10b0 = *psVar12;
        uVar9 = FUN_01241ca0(&local_10b0);
        if (uVar9 < 0x13) {
          puVar19 = &DAT_050dfcc0 + (ulong)uVar9 * 0x201;
LAB_011d4590:
          if ((((DAT_05233970 <= (int)local_1060) && ((int)local_1060 <= DAT_05233980)) &&
              (DAT_05233974 <= (int)local_105c)) &&
             (((int)local_105c <= DAT_05233984 &&
              (uVar9 = (local_105c & 0x1fffffe) * 0x80 + ((int)local_1060 >> 1), uVar9 >> 0xf == 0))
             )) {
            uVar9 = uVar9 >> 5;
            *(uint *)((long)puVar19 + (ulong)uVar9 * 4 + 8) =
                 *(uint *)((long)puVar19 + (ulong)uVar9 * 4 + 8) |
                 1 << (ulong)(local_1060 >> 1 & 0x1f);
          }
        }
      }
      if (((DAT_05233970 <= (int)local_1060) && ((int)local_1060 <= DAT_05233980)) &&
         ((DAT_05233974 <= (int)local_105c &&
          (((int)local_105c <= DAT_05233984 &&
           (uVar9 = (local_105c & 0x1fffffe) * 0x80 + ((int)local_1060 >> 1), uVar9 >> 0xf == 0)))))
         ) {
        uVar9 = uVar9 >> 5;
        (&DAT_0513edf8)[uVar9] =
             (&DAT_0513edf8)[uVar9] & (1 << (ulong)(local_1060 >> 1 & 0x1f) ^ 0xffffffffU);
      }
      lVar14 = 0;
      iVar8 = 0;
    } while( true );
  }
  local_105c = *(uint *)(PTR_DAT_04bbbf90 + 0xc);
  local_1060 = 1;
  local_1058 = FUN_017baf44();
  local_1058 = local_1058 & 1;
  puVar1 = puVar1 + 0x10;
  local_1078 = 0;
  lVar14 = *(long *)puVar2;
  local_1068 = puVar1;
  if (lVar14 == 0) {
    puVar19 = &DAT_055c04a0;
  }
  else {
    puVar19 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar19 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar8 = FUN_006bd550(*puVar19,0);
      puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar19 = &DAT_055c04a0;
      }
    }
  }
  local_1074 = *(undefined4 *)(puVar19 + 7);
  local_1070 = FUN_017baf44();
  local_1070 = local_1070 & 1;
  sVar5 = *(short *)puVar6;
  local_1080 = puVar1;
  if (sVar5 != -1) {
    local_1098 = (undefined *)CONCAT44(local_1098._4_4_,3);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 3 & 1) != 0) {
      lVar14 = **(long **)PTR_DAT_04bb27d0;
      if (*(byte *)(lVar14 + 0x476) < 2) {
        lVar17 = *(long *)PTR_DAT_04bb39b0;
        if (lVar17 == 0) {
          bVar16 = *PTR_DAT_04bb32e0;
LAB_011d4cfc:
          if (bVar16 < 8) goto LAB_011d4d60;
LAB_011d4d04:
          bVar16 = *(byte *)(lVar14 + 0x473);
          pbVar15 = PTR_DAT_04bb5038;
          if ((long)(char)bVar16 != 0xffffffffffffffff) {
            puVar4 = (uint *)(lVar14 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
            if (7 < bVar16) {
              puVar4 = (uint *)(lVar14 + 0x48);
            }
            if ((*puVar4 & 8) != 0) {
              pbVar15 = (byte *)(lVar14 + 0x471);
            }
          }
          bVar16 = *pbVar15;
          bVar7 = 7 < bVar16;
          if (bVar7) {
            bVar16 = 0xff;
          }
          local_10a8 = (undefined *)CONCAT71(local_10a8._1_7_,bVar16);
          if (bVar7) {
            bVar16 = *PTR_DAT_04bb5038;
            goto LAB_011d4d60;
          }
        }
        else {
          pbVar15 = PTR_DAT_04bb32e0;
          if (*(int *)(lVar17 + 0x15c) != 0) {
            pbVar15 = (byte *)(lVar17 + 0x158);
          }
          bVar16 = *pbVar15;
          if (7 < bVar16) {
            if ((*(int *)(lVar17 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
              bVar16 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
              goto LAB_011d4cfc;
            }
            goto LAB_011d4d04;
          }
LAB_011d4d60:
          if (7 < bVar16) {
            bVar16 = 0xff;
          }
          local_10a8 = (undefined *)CONCAT71(local_10a8._1_7_,bVar16);
        }
        local_1098 = PTR_DAT_04bb2020 + 0x10;
        local_1090 = "TodayFortune";
        iVar8 = FUN_0274bce0(&local_10a8,&local_1098);
        bVar7 = iVar8 == 2;
      }
      else {
        bVar7 = false;
      }
      ppuVar18 = (undefined **)&local_1068;
      goto LAB_011d4888;
    }
  }
  bVar7 = false;
  ppuVar18 = &local_1080;
LAB_011d4888:
  lVar14 = FUN_01a4fa00(ppuVar18);
  puVar1 = PTR_DAT_04bb2010;
  uVar9 = *(uint *)(lVar14 + 0x10);
  iVar8 = *(int *)(lVar14 + 0x20);
  if ((int)uVar9 < iVar8) {
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    do {
      local_109c = DAT_050dfcbc;
      local_10a8 = puVar2;
      local_10a0 = uVar9;
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
        uVar11 = DAT_050dfcbc + 2;
        uVar21 = DAT_050dfcbc;
        uVar20 = uVar9;
        do {
          local_1098 = puVar1 + 0x10;
          local_1090 = (char *)CONCAT44(uVar21,uVar20);
          psVar12 = (short *)FUN_01a5010c(ppuVar18,0,&local_1098);
          if (1 < (ushort)(*psVar12 + 3U)) {
            local_10b5 = *(undefined1 *)((long)psVar12 + 3);
            local_10b6 = (undefined1)psVar12[1];
            local_10b4 = *(undefined4 *)(psVar12 + 2);
            local_10b8 = *psVar12;
            uVar10 = FUN_01241ca0(&local_10b8);
            if ((((uVar10 < 0x13) && (DAT_05233970 <= (int)(uint)local_1090)) &&
                ((int)(uint)local_1090 <= DAT_05233980)) &&
               (((DAT_05233974 <= local_1090._4_4_ && (local_1090._4_4_ <= DAT_05233984)) &&
                (uVar3 = (uint)local_1090 + local_1090._4_4_ * 0x200, uVar3 >> 0x11 == 0)))) {
              lVar14 = (ulong)(uVar3 >> 5) * 4 + (ulong)uVar10 * 0x4008;
              *(uint *)((long)&DAT_050f2d58 + lVar14 + 8) =
                   *(uint *)((long)&DAT_050f2d58 + lVar14 + 8) |
                   1 << (ulong)((uint)local_1090 & 0x1f);
            }
          }
          if ((int)uVar9 < (int)uVar20) {
            uVar21 = uVar21 + 1;
            uVar20 = uVar9;
          }
          else {
            uVar20 = uVar20 + 1;
          }
        } while ((uVar9 != uVar20) || (uVar11 != uVar21));
      }
      psVar12 = (short *)FUN_01a5010c(ppuVar18,0,&local_10a8);
      local_10b0 = *psVar12;
      local_10ae = (undefined1)psVar12[1];
      local_10ad = *(undefined1 *)((long)psVar12 + 3);
      local_10ac = *(undefined4 *)(psVar12 + 2);
      if (local_10b0 != -3) {
        if (local_10b0 == -2) {
          local_10c0 = local_10a0;
          uStack_10bc = local_109c;
          local_10c8 = puVar1 + 0x10;
          uVar13 = FUN_011dec54(&local_10c8);
          if (((((uVar13 & 1) != 0) && (DAT_05233970 <= (int)local_10a0)) &&
              ((int)local_10a0 <= DAT_05233980)) &&
             (((DAT_05233974 <= (int)local_109c && ((int)local_109c <= DAT_05233984)) &&
              (uVar11 = (local_109c & 0x1fffffe) * 0x80 + ((int)local_10a0 >> 1), uVar11 >> 0xf == 0
              )))) {
            lVar14 = (ulong)(uVar11 >> 5) * 4;
            *(uint *)(&DAT_05140e08 + lVar14) =
                 *(uint *)(&DAT_05140e08 + lVar14) | 1 << (ulong)(local_10a0 >> 1 & 0x1f);
          }
        }
        else {
          local_10d0 = local_10b0;
          local_10ce = local_10ae;
          local_10cd = local_10ad;
          local_10cc = local_10ac;
          uVar11 = FUN_01241ca0(&local_10d0);
          if (uVar11 < 0x13) {
            if (((DAT_05233970 <= (int)local_10a0) && ((int)local_10a0 <= DAT_05233980)) &&
               ((DAT_05233974 <= (int)local_109c &&
                (((int)local_109c <= DAT_05233984 &&
                 (uVar21 = (local_109c & 0x1fffffe) * 0x80 + ((int)local_10a0 >> 1),
                 uVar21 >> 0xf == 0)))))) {
              lVar14 = (ulong)(uVar21 >> 5) * 4 + (ulong)uVar11 * 0x1008;
              *(uint *)((long)&DAT_050dfcc0 + lVar14 + 8) =
                   *(uint *)((long)&DAT_050dfcc0 + lVar14 + 8) |
                   1 << (ulong)(local_10a0 >> 1 & 0x1f);
            }
            if (uVar11 - 6 < 4) {
              FUN_0124c030(&local_1098,&local_10b0);
              uVar13 = FUN_012509c0(&local_1098,0);
              if ((((((uVar13 & 1) != 0) &&
                    (uVar13 = FUN_01250da8(&local_1098,2), (uVar13 & 1) != 0)) &&
                   (DAT_05233970 <= (int)local_10a0)) &&
                  (((int)local_10a0 <= DAT_05233980 && (DAT_05233974 <= (int)local_109c)))) &&
                 (((int)local_109c <= DAT_05233984 &&
                  (uVar11 = (local_109c & 0x1fffffe) * 0x80 + ((int)local_10a0 >> 1),
                  uVar11 >> 0xf == 0)))) {
                uVar11 = uVar11 >> 5;
                (&DAT_050f0d50)[uVar11] =
                     (&DAT_050f0d50)[uVar11] | 1 << (ulong)(local_10a0 >> 1 & 0x1f);
              }
              if (((bVar7) && (uVar13 = FUN_012509c0(&local_1098,0), (uVar13 & 1) != 0)) &&
                 (uVar13 = FUN_01250da8(&local_1098,0), (uVar13 & 1) != 0)) {
                FUN_01250bf0(&local_1098);
                FUN_011f3390(ppuVar18,0,&local_1090,&local_10a8);
              }
            }
          }
        }
      }
      uVar9 = uVar9 + 2;
    } while ((int)uVar9 < iVar8);
  }
  DAT_050dfcbc = DAT_050dfcbc + 2;
  return 0;
}

