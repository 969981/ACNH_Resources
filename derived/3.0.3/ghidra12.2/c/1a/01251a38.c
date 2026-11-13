
void FUN_01251a38(undefined4 *param_1,long param_2,byte *param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  short sVar4;
  bool bVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  ushort uVar11;
  undefined2 uVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  uint uVar16;
  uint *puVar17;
  byte local_80 [4];
  byte local_7c [4];
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  ulong local_5c;
  byte local_54 [4];
  
  puVar2 = PTR_DAT_04bb6298;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
    puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar14 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((((*puVar14 >> 0x11 & 1) != 0) &&
         (uVar9 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428,
         uVar9 < DAT_0534f408)) &&
        (puVar14 = *(uint **)(DAT_0534f410 + (long)(int)uVar9 * 8), puVar14 != (uint *)0x0)) &&
       (uVar9 = *puVar14, uVar9 != 0 && puVar14 != (uint *)(ulong)uVar9)) {
      puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar9);
      if (((*puVar17 != 0) && (uVar9 = puVar17[1], uVar9 != 0)) && ((ulong)(ushort)puVar17[2] != 0))
      {
        lVar15 = 0xc;
        if (*(char *)((long)puVar17 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
        if (lVar15 != 0) {
          uVar13 = 0;
          if ((ulong)uVar9 != 0) {
            uVar13 = (uint)((ulong)((long)puVar14 - lVar15) / (ulong)uVar9);
          }
          if (*puVar17 <= uVar13) {
            uVar13 = 0xffffffff;
          }
          if ((uVar13 < *(uint *)PTR_DAT_04bc0e98) &&
             (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar13 * 2) == 1))
          goto LAB_01251c28;
        }
      }
    }
  }
  iVar8 = FUN_0123db50(param_2 + 8,*(undefined8 *)(param_2 + 0x10));
  if (iVar8 != 0x2e) goto LAB_01251c28;
  bVar7 = *param_3;
  iVar8 = FUN_0123db50(param_2 + 8,*(undefined8 *)(param_2 + 0x10));
  if (iVar8 == 0x2e) {
    local_54[0] = bVar7;
    if (7 < bVar7) {
      local_54[0] = 0xff;
    }
    uVar9 = FUN_02582fe0(local_54);
    puVar6 = PTR_DAT_04bb2020;
    local_5c = CONCAT44(local_5c._4_4_,uVar9);
    if (uVar9 == 0xffffffff) goto LAB_01251c3c;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_70 = "TodayFortune";
    iVar8 = FUN_0274ce10(&local_5c,&local_78);
    if ((iVar8 == 2) || ((1 << (ulong)(uVar9 & 0x1f) & (uint)*(byte *)(param_2 + 0xc)) == 0))
    goto LAB_01251c3c;
    uVar10 = FUN_011e32f0(param_4);
    if (((uVar10 & 1) != 0) || (bVar7 = FUN_011e34d0(param_4), 7 < bVar7)) goto LAB_01251c28;
    local_78 = puVar6 + 0x10;
    local_70 = "TodayFortune";
    iVar8 = FUN_0274bce0(param_3,&local_78);
    if (iVar8 == 1) {
      uVar12 = (undefined2)*(undefined4 *)(&DAT_04174a70 + (ulong)bVar7 * 4);
    }
    else {
      uVar12 = (undefined2)*(undefined4 *)(&DAT_04174a6c + (ulong)bVar7 * 4);
    }
LAB_012525b4:
    *(undefined2 *)param_1 = uVar12;
    goto LAB_01252550;
  }
LAB_01251c3c:
  sVar4 = *(short *)puVar2;
  if (sVar4 != -1) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
    puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar14 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((((*puVar14 >> 0x11 & 1) == 0) ||
         (uVar9 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8) - (uint)DAT_0534f428,
         DAT_0534f408 <= uVar9)) ||
        (puVar14 = *(uint **)(DAT_0534f410 + (long)(int)uVar9 * 8), puVar14 == (uint *)0x0)) ||
       ((uVar9 = *puVar14, uVar9 == 0 || (puVar14 == (uint *)(ulong)uVar9)))) goto LAB_01251d40;
    puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar9);
    if ((*puVar17 == 0) || ((uVar9 = puVar17[1], uVar9 == 0 || ((ulong)(ushort)puVar17[2] == 0))))
    goto LAB_01251d40;
    lVar15 = 0xc;
    if (*(char *)((long)puVar17 + 10) != '\0') {
      lVar15 = 0x1c;
    }
    lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
    if (lVar15 == 0) goto LAB_01251d40;
    uVar13 = 0;
    if ((ulong)uVar9 != 0) {
      uVar13 = (uint)((ulong)((long)puVar14 - lVar15) / (ulong)uVar9);
    }
    if (*puVar17 <= uVar13) {
      uVar13 = 0xffffffff;
    }
    if ((*(uint *)PTR_DAT_04bc0ea0 <= uVar13) ||
       (*(short *)(*(long *)(PTR_DAT_04bc0ea0 + 8) + (long)(int)uVar13 * 2) != 3))
    goto LAB_01251d40;
LAB_01252480:
    local_5c = 0x9c9;
    FUN_0277d4ac(&local_5c);
    puVar2 = PTR_DAT_04bb43c0;
    local_68 = 0;
    local_78 = PTR_DAT_04bc0510 + 0x10;
    local_70 = (char *)local_5c;
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar9 = FUN_0277d6c4(&local_70);
    if (*(long *)puVar2 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar9 = FUN_0277d6c4(&local_5c);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if (uVar9 < *(uint *)(lVar15 + 0x1d8)) {
          lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8);
          if (lVar15 != 0) {
            local_68 = lVar15;
          }
        }
      }
    }
    FUN_01b152b8(&local_78);
LAB_01252540:
    *param_1 = (undefined4)local_70;
    param_1[1] = local_70._4_4_;
    return;
  }
LAB_01251d40:
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0xbb9f562) &&
     (((uVar9 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 10) - (uint)DAT_0534e320,
       uVar9 < DAT_0534e300 &&
       (puVar14 = *(uint **)(DAT_0534e308 + (long)(int)uVar9 * 8), puVar14 != (uint *)0x0)) &&
      (uVar9 = *puVar14, uVar9 != 0 && puVar14 != (uint *)(ulong)uVar9)))) {
    puVar17 = (uint *)((long)puVar14 - (long)(ulong)uVar9);
    if (((*puVar17 != 0) && (uVar9 = puVar17[1], uVar9 != 0)) && ((ulong)(ushort)puVar17[2] != 0)) {
      lVar15 = 0xc;
      if (*(char *)((long)puVar17 + 10) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar17 + lVar15 + (ulong)(ushort)puVar17[2] * 8;
      if (lVar15 != 0) {
        uVar13 = 0;
        if ((ulong)uVar9 != 0) {
          uVar13 = (uint)((ulong)((long)puVar14 - lVar15) / (ulong)uVar9);
        }
        if (*puVar17 <= uVar13) {
          uVar13 = 0xffffffff;
        }
        if ((uVar13 < *(uint *)PTR_DAT_04bc0e58) &&
           (*(short *)(*(long *)(PTR_DAT_04bc0e58 + 8) + (long)(int)uVar13 * 2) == 3)) {
          uVar9 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
          DAT_0514cb58 = DAT_0514cb5c;
          DAT_0514cb5c = DAT_0514cb60;
          uVar9 = uVar9 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar9 ^ DAT_0514cb64;
          DAT_0514cb60 = DAT_0514cb64;
          uVar13 = (uint)((ulong)uVar9 * 100 >> 0x20);
          if (uVar13 < 0xe) {
            lVar15 = 0;
          }
          else if (uVar13 < 0x10) {
            lVar15 = 1;
          }
          else if (uVar13 < 0x17) {
            lVar15 = 2;
          }
          else if (uVar13 < 0x1e) {
            lVar15 = 3;
          }
          else if (uVar13 < 0x25) {
            lVar15 = 4;
          }
          else if (uVar13 < 0x2c) {
            lVar15 = 5;
          }
          else if (uVar13 < 0x33) {
            lVar15 = 6;
          }
          else if (uVar13 < 0x3a) {
            lVar15 = 7;
          }
          else if (uVar13 < 0x41) {
            lVar15 = 8;
          }
          else if (uVar13 < 0x48) {
            lVar15 = 9;
          }
          else if (uVar13 < 0x4f) {
            lVar15 = 10;
          }
          else if (uVar13 < 0x56) {
            lVar15 = 0xb;
          }
          else {
            lVar15 = 0xc;
            if (0x5c < uVar13) {
              lVar15 = 0xd;
            }
          }
          uVar12 = (undefined2)(&DAT_04174a90)[lVar15];
          DAT_0514cb64 = uVar9;
          goto LAB_012525b4;
        }
      }
    }
  }
  uVar10 = FUN_01229624(1);
  puVar6 = PTR_DAT_04bb4f78;
  if ((uVar10 & 1) == 0) {
    local_7c[0] = *param_3;
    if (7 < local_7c[0]) {
      local_7c[0] = 0xff;
    }
    lVar15 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_7c,1);
    if ((lVar15 == 0) || (sVar4 = *(short *)puVar2, sVar4 == -1)) {
LAB_01252004:
      local_80[0] = *param_3;
      if (7 < local_80[0]) {
        local_80[0] = 0xff;
      }
      lVar15 = FUN_025830c0(*(undefined8 *)puVar6,local_80,1);
      uVar11 = *(ushort *)puVar2;
      if (lVar15 == 0) {
LAB_01252310:
        if (uVar11 == 0xffff) goto LAB_01252360;
LAB_0125231c:
        local_78 = (undefined *)CONCAT44(local_78._4_4_,0x11);
        puVar14 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar11 & 0xffffffffU) * 8);
        if (0xff < uVar11) {
          puVar14 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar9 = *puVar14 >> 0x11 & 1;
      }
      else {
        if (uVar11 != 0xffff) {
          local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
          puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar11 * 8);
          if (0xff < uVar11) {
            puVar14 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar14 >> 3 & 1) != 0) {
            local_78 = PTR_DAT_04bb2020 + 0x10;
            local_70 = "TodayFortune";
            iVar8 = FUN_0274bce0(param_3,&local_78);
            if (iVar8 == 2) {
              uVar9 = FUN_0122b8ec();
              if (0x31 < (int)uVar9) {
                if (0x54 < uVar9) {
                  if (99 < uVar9) {
LAB_01251c28:
                    uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
                    *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
                    param_1[1] = uVar3;
                    return;
                  }
                  goto LAB_012520c0;
                }
                goto LAB_012523b0;
              }
              goto LAB_012523c4;
            }
            uVar11 = *(ushort *)puVar2;
            goto LAB_01252310;
          }
          goto LAB_0125231c;
        }
LAB_01252360:
        uVar9 = 0;
      }
      uVar13 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      uVar13 = uVar13 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar13 ^ DAT_0514cb64;
      DAT_0514cb60 = DAT_0514cb64;
      uVar16 = (uint)((ulong)uVar13 * 100 >> 0x20);
      DAT_0514cb64 = uVar13;
      if (uVar9 == 0) {
        if (uVar16 < 0x32) goto LAB_012523c4;
        if (0x53 < uVar16) goto LAB_012523d8;
LAB_012523b0:
        bVar1 = false;
        lVar15 = 1;
      }
      else if (uVar16 < 9) {
LAB_012523c4:
        bVar1 = false;
        lVar15 = 0;
      }
      else {
        if (uVar16 < 0x3b) goto LAB_012523b0;
LAB_012523d8:
        bVar1 = 0x62 < uVar16;
        lVar15 = 2;
        if (0x62 < uVar16) {
          lVar15 = 3;
        }
      }
    }
    else {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar14 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar14 >> 3 & 1) == 0) goto LAB_01252004;
      local_78 = PTR_DAT_04bb2020 + 0x10;
      local_70 = "TodayFortune";
      iVar8 = FUN_0274bce0(param_3,&local_78);
      if (iVar8 != 1) goto LAB_01252004;
      uVar9 = FUN_0122b8ec();
      if ((int)uVar9 < 0x28) goto LAB_012523c4;
      if (uVar9 < 0x4a) goto LAB_012523b0;
      if (uVar9 < 0x59) {
LAB_012520c0:
        bVar1 = false;
        lVar15 = 2;
      }
      else {
        if (99 < uVar9) goto LAB_01251c28;
        bVar1 = true;
        lVar15 = 3;
      }
    }
    uVar12 = (undefined2)(&DAT_041022c0)[lVar15];
    sVar4 = *(short *)puVar2;
    if (sVar4 == -1) goto LAB_0125247c;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
    puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar14 = (uint *)PTR_DAT_04bc39f8;
    }
    bVar5 = (bool)(bVar1 ^ 1);
    if ((*puVar14 >> 3 & 1) == 0) {
      bVar5 = true;
    }
    if (bVar5) goto LAB_0125247c;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_70 = "PopDiyGoldFromStoneToday";
    iVar8 = FUN_0274bce0(param_3,&local_78);
    if (iVar8 != 1) goto LAB_01252480;
LAB_01252474:
    uVar12 = 0x9cf;
  }
  else {
    sVar4 = *(short *)puVar2;
    if (sVar4 == -1) {
LAB_012520cc:
      local_78 = PTR_DAT_04bb2020 + 0x10;
      local_70 = "MarketBuilt";
      iVar8 = FUN_0273ea30(&local_78);
      uVar9 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      uVar9 = uVar9 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar9 ^ DAT_0514cb64;
      DAT_0514cb60 = DAT_0514cb64;
      uVar13 = (uint)((ulong)uVar9 * 100 >> 0x20);
      DAT_0514cb64 = uVar9;
      if (iVar8 == 1) {
        if (uVar13 < 0x1e) goto LAB_01252160;
        if (0x3b < uVar13) {
          if (uVar13 < 0x59) goto LAB_01252260;
          goto LAB_01252144;
        }
      }
      else {
        if (uVar13 < 0x14) {
LAB_01252160:
          local_5c = 0x30de;
          FUN_0277d4ac(&local_5c);
          puVar2 = PTR_DAT_04bb43c0;
          local_68 = 0;
          local_78 = PTR_DAT_04bc0510 + 0x10;
          local_70 = (char *)local_5c;
          lVar15 = *(long *)PTR_DAT_04bb43c0;
          uVar9 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar2 != 0) {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((uVar9 < *(uint *)(lVar15 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
              lVar15 = *(long *)PTR_DAT_04bc0428;
              uVar9 = FUN_0277d6c4(&local_5c);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if (uVar9 < *(uint *)(lVar15 + 0x1d8)) {
                lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8);
                if (lVar15 != 0) {
                  local_68 = lVar15;
                }
              }
            }
          }
          uVar10 = FUN_01b15170(&local_78);
          if ((uVar10 & 1) != 0) {
            local_70 = (char *)((ulong)local_70 | 0x1000000000000);
          }
          goto LAB_01252540;
        }
        if (0x31 < uVar13) goto LAB_01252258;
      }
LAB_0125223c:
      bVar1 = false;
      lVar15 = 1;
    }
    else {
      puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar14 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar14 >> 0x11 & 1) == 0) goto LAB_012520cc;
      local_78 = PTR_DAT_04bb2020 + 0x10;
      local_70 = "MarketBuilt";
      iVar8 = FUN_0273ea30(&local_78);
      uVar9 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      uVar9 = uVar9 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar9 ^ DAT_0514cb64;
      DAT_0514cb60 = DAT_0514cb64;
      uVar13 = (uint)((ulong)uVar9 * 100 >> 0x20);
      DAT_0514cb64 = uVar9;
      if (iVar8 == 1) {
        if (uVar13 < 0x28) goto LAB_01252160;
        if (uVar13 < 0x2d) goto LAB_0125223c;
        if (0x4f < uVar13) goto LAB_01252144;
      }
      else {
        if (uVar13 < 0x1e) goto LAB_01252160;
        if (uVar13 < 0x22) goto LAB_0125223c;
LAB_01252258:
        if (0x53 < uVar13) {
LAB_01252144:
          bVar1 = 0x62 < uVar13;
          lVar15 = 3;
          if (0x62 < uVar13) {
            lVar15 = 4;
          }
          goto LAB_01252268;
        }
      }
LAB_01252260:
      bVar1 = false;
      lVar15 = 2;
    }
LAB_01252268:
    uVar12 = (undefined2)*(undefined4 *)(&UNK_04174ac8 + lVar15 * 4);
    sVar4 = *(short *)puVar2;
    if (sVar4 != -1) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar14 = (uint *)PTR_DAT_04bc39f8;
      }
      bVar5 = (bool)(bVar1 ^ 1);
      if ((*puVar14 >> 3 & 1) == 0) {
        bVar5 = true;
      }
      if (!bVar5) {
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        local_70 = "PopDiyGoldFromStoneToday";
        local_78 = puVar2;
        iVar8 = FUN_0274bce0(param_3,&local_78);
        if (iVar8 == 1) goto LAB_01252474;
        local_70 = "PopDiyGoldFromStoneToday";
        local_78 = puVar2;
        FUN_0274bfe8(param_3,&local_78,1);
        goto LAB_01252480;
      }
    }
LAB_0125247c:
    if (bVar1) goto LAB_01252480;
  }
  *(undefined2 *)param_1 = uVar12;
LAB_01252550:
  *(undefined2 *)((long)param_1 + 2) = 0;
  param_1[1] = 0;
  FUN_0277d4ac(param_1);
  return;
}

