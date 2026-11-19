
void FUN_03ab0790(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  float *pfVar16;
  long lVar17;
  uint uVar18;
  uint *puVar19;
  long *plVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 local_1e0;
  undefined4 local_1d8;
  float local_1d4;
  undefined4 uStack_1d0;
  undefined8 uStack_1cc;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined8 local_1b4;
  undefined8 uStack_1ac;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined1 auStack_194 [64];
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  uVar6 = *(uint *)(param_1 + 0x15e0);
  if (0 < (int)uVar6) {
    lVar15 = *(long *)(param_1 + 8);
    uVar25 = 0;
    uVar14 = (uint)*(byte *)(param_2 + 8);
    uVar7 = 1 << (ulong)(uVar14 & 0x1f);
    puVar1 = PTR_DAT_04bbd858 + 0x10;
    do {
      lVar17 = *(long *)(param_1 + 0x15e8);
      uVar4 = uVar25;
      if (*(uint *)(param_1 + 0x15e0) <= uVar25) {
        uVar4 = 0;
      }
      uVar21 = (ulong)uVar4;
      puVar19 = (uint *)(lVar17 + uVar21 * 0x68);
      plVar20 = *(long **)(puVar19 + 0xc);
      if ((plVar20 != (long *)0x0) && (0 < (int)(*(uint *)(plVar20 + 0x34) & uVar7))) {
        FUN_03a150c8(plVar20,&local_e0);
        if (*(char *)(lVar17 + uVar21 * 0x68 + 0x38) != '\0') {
          lVar22 = lVar17 + uVar21 * 0x68;
          fVar26 = sinf(*(float *)(lVar22 + 0x48));
          fVar27 = sinf(*(float *)(lVar22 + 0x4c));
          fVar28 = sinf(*(float *)(lVar22 + 0x50));
          fVar29 = cosf(*(float *)(lVar22 + 0x48));
          fVar30 = cosf(*(float *)(lVar22 + 0x4c));
          fVar31 = cosf(*(float *)(lVar22 + 0x50));
          fVar36 = fVar28 * fVar30;
          fVar37 = fVar26 * fVar30;
          fVar35 = fVar26 * fVar27 * fVar31 - fVar28 * fVar29;
          fVar33 = fVar29 * fVar31 + fVar28 * fVar26 * fVar27;
          fVar32 = fVar30 * fVar31;
          fVar34 = -(fVar26 * fVar31) + fVar27 * fVar28 * fVar29;
          fVar26 = fVar26 * fVar28 + fVar27 * fVar29 * fVar31;
          fVar27 = -fVar27;
          fVar29 = fVar29 * fVar30;
          fVar28 = (float)local_e0;
          fVar30 = (float)((ulong)local_e0 >> 0x20);
          fVar31 = (float)uStack_d8;
          fVar38 = (float)((ulong)uStack_d8 >> 0x20);
          fVar39 = (float)local_d0;
          fVar40 = (float)((ulong)local_d0 >> 0x20);
          fVar41 = (float)uStack_c8;
          fVar42 = (float)((ulong)uStack_c8 >> 0x20);
          fVar43 = (float)local_c0;
          fVar44 = (float)((ulong)local_c0 >> 0x20);
          fVar45 = (float)uStack_b8;
          fVar46 = (float)((ulong)uStack_b8 >> 0x20);
          local_e0 = CONCAT44(fVar30 * fVar32 + fVar40 * fVar35 + fVar44 * fVar26 + 0.0,
                              fVar28 * fVar32 + fVar39 * fVar35 + fVar43 * fVar26 + 0.0);
          uStack_d8 = CONCAT44(*(float *)(lVar22 + 0x3c) +
                               fVar38 * fVar32 + fVar42 * fVar35 + fVar46 * fVar26,
                               fVar31 * fVar32 + fVar41 * fVar35 + fVar45 * fVar26 + 0.0);
          local_d0 = CONCAT44(fVar30 * fVar36 + fVar40 * fVar33 + fVar44 * fVar34 + 0.0,
                              fVar28 * fVar36 + fVar39 * fVar33 + fVar43 * fVar34 + 0.0);
          uStack_c8 = CONCAT44(*(float *)(lVar22 + 0x40) +
                               fVar38 * fVar36 + fVar42 * fVar33 + fVar46 * fVar34,
                               fVar31 * fVar36 + fVar41 * fVar33 + fVar45 * fVar34 + 0.0);
          local_c0 = CONCAT44(fVar30 * fVar27 + fVar40 * fVar37 + fVar44 * fVar29 + 0.0,
                              fVar28 * fVar27 + fVar39 * fVar37 + fVar43 * fVar29 + 0.0);
          uStack_b8 = CONCAT44(*(float *)(lVar22 + 0x44) +
                               fVar38 * fVar27 + fVar42 * fVar37 + fVar46 * fVar29,
                               fVar31 * fVar27 + fVar41 * fVar37 + fVar45 * fVar29 + 0.0);
        }
        if (*(char *)(lVar17 + uVar21 * 0x68 + 0x54) == '\0') {
          FUN_03a152dc(plVar20,&local_120);
        }
        else {
          lVar22 = lVar17 + uVar21 * 0x68;
          local_148 = *(undefined4 *)(lVar22 + 0x58);
          uStack_144 = *(undefined4 *)(lVar22 + 0x5c);
          local_130 = *(undefined4 *)(lVar22 + 0x60);
          local_140 = *(float *)(lVar22 + 100);
          local_1d8._0_2_ = CONCAT11(1,(undefined1)local_1d8);
          fVar26 = local_140 * 0.5;
          local_154 = DAT_05ae77d0;
          local_150 = DAT_04c4b9ac;
          uStack_14c = DAT_05ae77d4;
          local_12c = 0;
          local_1e0 = puVar1;
          local_13c = sinf(fVar26);
          local_138 = cosf(fVar26);
          local_134 = tanf(fVar26);
          local_1d8 = (float)CONCAT31(local_1d8._1_3_,1);
          (**(code **)(local_1e0 + 0x58))(&local_1e0,&local_1d4);
          local_1d8 = (float)CONCAT22(local_1d8._2_2_,0x100);
          (**(code **)(local_1e0 + 0x60))(&local_1e0,auStack_194,&local_1d4,local_154);
          local_120 = CONCAT44(uStack_1d0,local_1d4);
          uStack_118 = uStack_1cc;
          uStack_108 = uStack_1bc;
          local_110 = local_1c4;
          uStack_f8 = uStack_1ac;
          local_100 = local_1b4;
          uStack_e8 = uStack_19c;
          local_f0 = local_1a4;
        }
        lVar22 = *(long *)(puVar19 + 2);
        uVar4 = uVar14;
        if (*puVar19 <= uVar14) {
          uVar4 = 0;
        }
        lVar23 = lVar22 + (ulong)uVar4 * 0xfc8;
        *(undefined1 *)(lVar23 + 0xf20) = 0;
        *(undefined8 *)(lVar23 + 0xf2c) = uStack_d8;
        *(undefined8 *)(lVar23 + 0xf24) = local_e0;
        *(undefined8 *)(lVar23 + 0xf3c) = uStack_c8;
        *(undefined8 *)(lVar23 + 0xf34) = local_d0;
        *(undefined8 *)(lVar23 + 0xf4c) = uStack_b8;
        *(undefined8 *)(lVar23 + 0xf44) = local_c0;
        *(undefined8 *)(lVar23 + 0xf5c) = uStack_118;
        *(undefined8 *)(lVar23 + 0xf54) = local_120;
        *(undefined8 *)(lVar23 + 0xf6c) = uStack_108;
        *(undefined8 *)(lVar23 + 0xf64) = local_110;
        *(undefined8 *)(lVar23 + 0xf7c) = uStack_f8;
        *(undefined8 *)(lVar23 + 0xf74) = local_100;
        *(undefined1 *)(lVar23 + 0xf94) = 0;
        *(undefined8 *)(lVar23 + 0xf8c) = uStack_e8;
        *(undefined8 *)(lVar23 + 0xf84) = local_f0;
        *(char *)(lVar23 + 0x278) = (char)plVar20[0x30];
        *(uint *)(*(long *)(lVar23 + 0x378) + 0x68) = (uint)*(byte *)(lVar15 + 0x1980) << 1;
        **(undefined4 **)(lVar23 + 0x318) = *(undefined4 *)(lVar15 + 0x19c0);
        *(undefined4 *)(*(long *)(lVar23 + 0x318) + (long)*(int *)(lVar23 + 0x238) * 4) =
             *(undefined4 *)(lVar15 + 0x1a40);
        lVar11 = *(long *)(param_2 + 0x3d0);
        if (((((*(ushort *)(param_1 + 0x43c) >> 3 & 1) == 0) &&
             ((*(ushort *)(lVar11 + 0x8a) & 0x21) != 0)) &&
            ((*(ushort *)(lVar11 + 0x8a) >> 1 & 1) != 0)) && (*(long *)(lVar11 + 0x1f8) != 0)) {
          puVar12 = (undefined *)(*(long *)(lVar11 + 0x1f8) + 8);
        }
        else {
          puVar12 = PTR_DAT_04bd13c0;
          if (*(undefined **)(lVar11 + 0x78) != (undefined *)0x0) {
            puVar12 = *(undefined **)(lVar11 + 0x78);
          }
        }
        FUN_03aca7b0(lVar23,puVar12 + 8,*(long *)(param_2 + 0x18) + 0xc0);
        lVar11 = *(long *)(param_1 + 8);
        uVar13 = *(uint *)(lVar11 + 0x16c0);
        if ((uVar13 & 1) != 0) {
          fVar28 = *(float *)(lVar11 + 0x1700);
          fVar27 = *(float *)(lVar11 + 0x1704);
          fVar26 = *(float *)(lVar11 + 0x1708);
          fVar29 = SQRT(fVar27 * fVar27 + fVar28 * fVar28 + fVar26 * fVar26);
          if (0.0 < fVar29) {
            fVar29 = 1.0 / fVar29;
            fVar28 = fVar28 * fVar29;
            fVar27 = fVar27 * fVar29;
            fVar26 = fVar26 * fVar29;
          }
          if (0 < *(int *)(lVar23 + 0x238)) {
            fVar29 = *(float *)(lVar11 + 0x170c);
            uVar13 = 0;
            do {
              local_1e0 = (undefined *)CONCAT44(-fVar27,-fVar28);
              uVar18 = uVar13;
              if (*(uint *)(lVar23 + 0x370) <= uVar13) {
                uVar18 = 0;
              }
              local_1d8 = -fVar26;
              local_1d4 = -fVar29;
              FUN_03acf660(*(long *)(lVar23 + 0x378) + (ulong)uVar18 * 0x5d0 + 0x78,&local_1e0);
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < *(int *)(lVar23 + 0x238));
            lVar11 = *(long *)(param_1 + 8);
            uVar13 = *(uint *)(lVar11 + 0x16c0);
          }
        }
        if ((uVar13 >> 1 & 1) != 0) {
          fVar28 = *(float *)(lVar11 + 0x1728);
          fVar27 = *(float *)(lVar11 + 0x172c);
          fVar26 = *(float *)(lVar11 + 0x1730);
          fVar29 = SQRT(fVar27 * fVar27 + fVar28 * fVar28 + fVar26 * fVar26);
          if (0.0 < fVar29) {
            fVar29 = 1.0 / fVar29;
            fVar28 = fVar28 * fVar29;
            fVar27 = fVar27 * fVar29;
            fVar26 = fVar26 * fVar29;
          }
          if (0 < *(int *)(lVar23 + 0x238)) {
            fVar29 = *(float *)(lVar11 + 0x1734);
            uVar13 = 0;
            do {
              local_1e0 = (undefined *)CONCAT44(-fVar27,-fVar28);
              uVar18 = uVar13;
              if (*(uint *)(lVar23 + 0x370) <= uVar13) {
                uVar18 = 0;
              }
              local_1d8 = -fVar26;
              local_1d4 = -fVar29;
              FUN_03acf660(*(long *)(lVar23 + 0x378) + (ulong)uVar18 * 0x5d0 + 0x78,&local_1e0);
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < *(int *)(lVar23 + 0x238));
            lVar11 = *(long *)(param_1 + 8);
          }
          uVar13 = *(uint *)(lVar11 + 0x16c0);
        }
        if ((uVar13 >> 2 & 1) != 0) {
          fVar28 = *(float *)(lVar11 + 0x1750);
          fVar27 = *(float *)(lVar11 + 0x1754);
          fVar26 = *(float *)(lVar11 + 0x1758);
          fVar29 = SQRT(fVar27 * fVar27 + fVar28 * fVar28 + fVar26 * fVar26);
          if (0.0 < fVar29) {
            fVar29 = 1.0 / fVar29;
            fVar28 = fVar28 * fVar29;
            fVar27 = fVar27 * fVar29;
            fVar26 = fVar26 * fVar29;
          }
          if (0 < *(int *)(lVar23 + 0x238)) {
            fVar29 = *(float *)(lVar11 + 0x175c);
            uVar13 = 0;
            do {
              local_1e0 = (undefined *)CONCAT44(-fVar27,-fVar28);
              uVar18 = uVar13;
              if (*(uint *)(lVar23 + 0x370) <= uVar13) {
                uVar18 = 0;
              }
              local_1d8 = -fVar26;
              local_1d4 = -fVar29;
              FUN_03acf660(*(long *)(lVar23 + 0x378) + (ulong)uVar18 * 0x5d0 + 0x78,&local_1e0);
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < *(int *)(lVar23 + 0x238));
            lVar11 = *(long *)(param_1 + 8);
          }
          uVar13 = *(uint *)(lVar11 + 0x16c0);
        }
        if ((uVar13 >> 3 & 1) != 0) {
          fVar28 = *(float *)(lVar11 + 0x1778);
          fVar27 = *(float *)(lVar11 + 0x177c);
          fVar26 = *(float *)(lVar11 + 0x1780);
          fVar29 = SQRT(fVar27 * fVar27 + fVar28 * fVar28 + fVar26 * fVar26);
          if (0.0 < fVar29) {
            fVar29 = 1.0 / fVar29;
            fVar28 = fVar28 * fVar29;
            fVar27 = fVar27 * fVar29;
            fVar26 = fVar26 * fVar29;
          }
          if (0 < *(int *)(lVar23 + 0x238)) {
            fVar29 = *(float *)(lVar11 + 0x1784);
            uVar13 = 0;
            do {
              local_1e0 = (undefined *)CONCAT44(-fVar27,-fVar28);
              uVar18 = uVar13;
              if (*(uint *)(lVar23 + 0x370) <= uVar13) {
                uVar18 = 0;
              }
              local_1d8 = -fVar26;
              local_1d4 = -fVar29;
              FUN_03acf660(*(long *)(lVar23 + 0x378) + (ulong)uVar18 * 0x5d0 + 0x78,&local_1e0);
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < *(int *)(lVar23 + 0x238));
          }
        }
        uVar13 = *(uint *)(param_1 + 0x15f0);
        if (0 < (int)uVar13) {
          uVar18 = 0;
          do {
            uVar24 = uVar18;
            if (*(uint *)(param_1 + 0x15f0) <= uVar18) {
              uVar24 = 0;
            }
            if ((*(char *)(*(long *)(param_1 + 0x15f8) + (ulong)uVar24 * 0x14 + 0x10) != '\0') &&
               (0 < *(int *)(lVar23 + 0x238))) {
              pfVar16 = (float *)(*(long *)(param_1 + 0x15f8) + (ulong)uVar24 * 0x14);
              uVar24 = 0;
              do {
                uVar5 = uVar24;
                if (*(uint *)(lVar23 + 0x370) <= uVar24) {
                  uVar5 = 0;
                }
                local_1d8 = -pfVar16[2];
                local_1e0 = (undefined *)CONCAT44(-pfVar16[1],-*pfVar16);
                local_1d4 = -pfVar16[3];
                FUN_03acf660(*(long *)(lVar23 + 0x378) + (ulong)uVar5 * 0x5d0 + 0x78,&local_1e0);
                uVar24 = uVar24 + 1;
              } while ((int)uVar24 < *(int *)(lVar23 + 0x238));
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar13);
        }
        plVar2 = (long *)(lVar23 + 0x378);
        FUN_03aca690(lVar23);
        lVar22 = lVar22 + (ulong)uVar4 * 0xfc8;
        uVar10 = 1;
        if (*(char *)(*(long *)(param_1 + 8) + 0x1820) != '\0') {
          uVar10 = 2;
        }
        *(undefined4 *)(lVar22 + 0x298) = uVar10;
        FUN_03acb490(lVar23);
        lVar17 = lVar17 + uVar21 * 0x68;
        uVar4 = uVar14;
        if (*(uint *)(lVar17 + 0x10) <= uVar14) {
          uVar4 = 0;
        }
        plVar8 = (long *)(*(long *)(lVar17 + 0x18) + (ulong)uVar4 * 0x68);
        lVar11 = *plVar2;
        plVar3 = plVar8 + 1;
        lVar23 = *(long *)(lVar11 + 0x270);
        plVar8[8] = *(long *)(lVar11 + 0x278);
        plVar8[7] = lVar23;
        lVar23 = *(long *)(lVar11 + 0x280);
        plVar8[10] = *(long *)(lVar11 + 0x288);
        plVar8[9] = lVar23;
        lVar23 = *(long *)(lVar11 + 0x290);
        plVar8[0xc] = *(long *)(lVar11 + 0x298);
        plVar8[0xb] = lVar23;
        (**(code **)(*plVar8 + 0x20))(plVar8,plVar3);
        uVar4 = uVar14;
        if (*(uint *)(lVar17 + 0x20) <= uVar14) {
          uVar4 = 0;
        }
        lVar17 = *(long *)(lVar17 + 0x28) + (ulong)uVar4 * 0xf8;
        FUN_038e6014(lVar17,*plVar2 + 0x2a0,0);
        FUN_039eea20(param_2,uVar25 + 10,plVar3,lVar17,plVar3);
        if (plVar20[0x22] != 0) {
          if ((char)plVar20[0x28] == '\0') {
            uVar9 = 0;
          }
          else {
            uVar9 = *(undefined8 *)(lVar22 + 0x550);
            if ((int)(*(uint *)(plVar20 + 0x34) & uVar7) < 1) {
              uVar9 = 0;
            }
          }
          (**(code **)(*plVar20 + 0xe0))(plVar20,uVar14,plVar20[0x22],uVar9,*plVar2 + 0x2e0);
        }
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar6);
  }
  return;
}

