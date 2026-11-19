
void FUN_03a33cc0(long param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  short *psVar16;
  ulong uVar17;
  ulong uVar18;
  char *pcVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
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
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  *(long *)(param_1 + 0x250) = param_2;
  if (param_2 == 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x548) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x270) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x280) = 0xffffffff;
  *(undefined1 **)(param_1 + 0x2a4) = &DAT_3f8000003f800000;
  *(undefined1 **)(param_1 + 0x2ac) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0x288) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x290) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x298) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a0) = 7;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  uVar3 = *(ushort *)(param_2 + 0x6c);
  if ((ulong)uVar3 != 0) {
    iVar4 = 0;
    lVar14 = 0;
    do {
      puVar15 = (undefined8 *)(*(long *)(param_1 + 0x2f0) + lVar14);
      lVar14 = lVar14 + 0x30;
      *(undefined4 *)(puVar15 + 2) = 0xffffffff;
      *(int *)((long)puVar15 + 0x14) = iVar4;
      iVar4 = iVar4 + 1;
      puVar15[4] = &DAT_3f8000003f800000;
      puVar15[5] = 0x3f800000;
      puVar15[3] = 0x3f80000000000007;
      *puVar15 = 0xffffffffffffffff;
      puVar15[1] = 0xffffffffffffffff;
    } while ((ulong)uVar3 * 0x30 != lVar14);
    param_2 = *(long *)(param_1 + 0x250);
  }
  *(undefined1 **)(param_1 + 0x2d8) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 0x2b8) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2e0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x2c0) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2c8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x2d0) = 0x3f80000000000007;
  uVar3 = *(ushort *)(param_2 + 0x6c);
  if (uVar3 != 0) {
    lVar14 = 0;
    do {
      puVar15 = (undefined8 *)
                (*(long *)(param_1 + 0x2f0) + (lVar14 + *(int *)(param_1 + 0x2e8)) * 0x30);
      *(undefined4 *)(puVar15 + 2) = 0xffffffff;
      *(int *)((long)puVar15 + 0x14) = (int)lVar14;
      lVar14 = lVar14 + 1;
      puVar15[4] = &DAT_3f8000003f800000;
      puVar15[5] = 0x3f800000;
      puVar15[3] = 0x3f80000000000007;
      *puVar15 = 0xffffffffffffffff;
      puVar15[1] = 0xffffffffffffffff;
    } while ((uint)uVar3 != (uint)lVar14);
    param_2 = *(long *)(param_1 + 0x250);
  }
  if (*(short *)(param_2 + 0x6a) != 0) {
    lVar14 = 0;
    uVar18 = 0;
    do {
      lVar11 = *(long *)(param_2 + 0x28) + lVar14;
      lVar20 = *(long *)(*(long *)(param_2 + 0x18) + 0x10) +
               (ulong)*(ushort *)(lVar11 + 0x54) * 0x60;
      fVar39 = *(float *)(lVar20 + 0x40);
      fVar31 = *(float *)(lVar20 + 0x38);
      fVar38 = *(float *)(lVar20 + 0x3c);
      pfVar12 = (float *)(*(long *)(lVar11 + 0x38) +
                         (ulong)*(ushort *)(*(long *)(lVar11 + 0x18) + 0x34) * 0x18);
      fVar34 = pfVar12[4];
      fVar35 = pfVar12[5];
      fVar37 = *pfVar12;
      fVar30 = pfVar12[1];
      fVar32 = pfVar12[2];
      fVar36 = pfVar12[3];
      uVar9 = *(uint *)(lVar20 + 0x34) & 0x7000;
      if (uVar9 == 0x1000) {
        fVar21 = sinf(*(float *)(lVar20 + 0x44));
        fVar22 = sinf(*(float *)(lVar20 + 0x48));
        fVar23 = sinf(*(float *)(lVar20 + 0x4c));
        fVar26 = cosf(*(float *)(lVar20 + 0x44));
        fVar24 = cosf(*(float *)(lVar20 + 0x48));
        fVar25 = cosf(*(float *)(lVar20 + 0x4c));
        fVar33 = fVar21 * fVar23 + fVar22 * fVar26 * fVar25;
        fVar28 = -(fVar21 * fVar25) + fVar22 * fVar23 * fVar26;
        local_f0 = CONCAT44(fVar21 * fVar22 * fVar25 - fVar23 * fVar26,fVar24 * fVar25);
        local_100 = CONCAT44(fVar26 * fVar25 + fVar23 * fVar21 * fVar22,fVar23 * fVar24);
        local_110 = CONCAT44(fVar21 * fVar24,-fVar22);
        fVar26 = fVar26 * fVar24;
LAB_03a33f00:
        uStack_e8 = CONCAT44(*(undefined4 *)(lVar20 + 0x54),fVar33);
        uStack_f8 = CONCAT44(*(undefined4 *)(lVar20 + 0x58),fVar28);
        uStack_108 = CONCAT44(*(undefined4 *)(lVar20 + 0x5c),fVar26);
      }
      else if (uVar9 == 0) {
        fVar22 = *(float *)(lVar20 + 0x44);
        fVar21 = *(float *)(lVar20 + 0x48);
        fVar25 = *(float *)(lVar20 + 0x4c);
        fVar27 = *(float *)(lVar20 + 0x50) + *(float *)(lVar20 + 0x50);
        fVar29 = fVar22 + fVar22;
        fVar24 = fVar21 * (fVar21 + fVar21);
        fVar23 = (fVar21 + fVar21) * fVar25;
        fVar28 = fVar25 * (fVar25 + fVar25);
        fVar26 = 1.0 - fVar22 * fVar29;
        local_f0 = CONCAT44(fVar21 * fVar29 - fVar25 * fVar27,(1.0 - fVar24) - fVar28);
        fVar33 = fVar25 * fVar29 + fVar21 * fVar27;
        local_100 = CONCAT44(fVar26 - fVar28,fVar21 * fVar29 + fVar25 * fVar27);
        fVar28 = fVar23 - fVar22 * fVar27;
        local_110 = CONCAT44(fVar23 + fVar22 * fVar27,fVar25 * fVar29 - fVar21 * fVar27);
        fVar26 = fVar26 - fVar24;
        goto LAB_03a33f00;
      }
      fVar37 = fVar37 * fVar31;
      fVar30 = fVar30 * fVar38;
      fVar32 = fVar32 * fVar39;
      uVar13 = uVar18;
      if (*(uint *)(param_1 + 0x2f8) <= uVar18) {
        uVar13 = 0;
      }
      lVar11 = *(long *)(param_1 + 0x300) + uVar13 * 0x3c;
      fVar26 = (float)local_f0;
      fVar33 = (float)((ulong)local_f0 >> 0x20);
      fVar27 = (float)uStack_e8;
      lStack_d8 = CONCAT44((float)((ulong)uStack_e8 >> 0x20) +
                           fVar37 * fVar26 + fVar30 * fVar33 + fVar32 * fVar27,
                           fVar26 * 0.0 + fVar33 * 0.0 + fVar27 * 1.0 + 0.0);
      fVar24 = (float)local_100;
      fVar25 = (float)((ulong)local_100 >> 0x20);
      fVar21 = (float)local_110;
      fVar22 = (float)((ulong)local_110 >> 0x20);
      fVar23 = (float)uStack_108;
      fVar28 = (float)uStack_f8;
      local_c0 = CONCAT44(fVar21 * 0.0 + fVar22 * 1.0 + fVar23 * 0.0 + 0.0,
                          fVar21 * 1.0 + fVar22 * 0.0 + fVar23 * 0.0 + 0.0);
      uStack_b8 = CONCAT44((float)((ulong)uStack_108 >> 0x20) +
                           fVar37 * fVar21 + fVar30 * fVar22 + fVar32 * fVar23,
                           fVar21 * 0.0 + fVar22 * 0.0 + fVar23 * 1.0 + 0.0);
      uStack_c8 = CONCAT44((float)((ulong)uStack_f8 >> 0x20) +
                           fVar37 * fVar24 + fVar30 * fVar25 + fVar32 * fVar28,
                           fVar24 * 0.0 + fVar25 * 0.0 + fVar28 * 1.0 + 0.0);
      local_e0 = (undefined *)
                 CONCAT44(fVar26 * 0.0 + fVar33 * 1.0 + fVar27 * 0.0 + 0.0,
                          fVar26 * 1.0 + fVar33 * 0.0 + fVar27 * 0.0 + 0.0);
      uStack_d0 = CONCAT44(fVar24 * 0.0 + fVar25 * 1.0 + fVar28 * 0.0 + 0.0,
                           fVar24 * 1.0 + fVar25 * 0.0 + fVar28 * 0.0 + 0.0);
      *(float *)(lVar11 + 0x38) = fVar35 * fVar39;
      *(float *)(lVar11 + 0x30) = fVar36 * fVar31;
      *(float *)(lVar11 + 0x34) = fVar34 * fVar38;
      uVar13 = uVar18;
      if (*(uint *)(param_1 + 0x2f8) <= uVar18) {
        uVar13 = 0;
      }
      FUN_007535b4(*(long *)(param_1 + 0x300) + uVar13 * 0x3c,&local_e0);
      param_2 = *(long *)(param_1 + 0x250);
      uVar18 = uVar18 + 1;
      lVar14 = lVar14 + 0x60;
    } while (uVar18 < *(ushort *)(param_2 + 0x6a));
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    uVar18 = 0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar11 = *(long *)(param_1 + 0x250);
      lVar14 = *(long *)(lVar11 + 0x58);
      if (lVar14 != 0) {
        pcVar19 = (&PTR_s_gsys_areaenv_principal_bloom_04b6d830)[uVar18];
        sVar6 = strlen(pcVar19);
        uVar13 = (ulong)*(ushort *)(lVar14 + 0xc);
        puVar10 = (uint *)((int *)(lVar14 + 8) + uVar13 * 4);
        uVar9 = *puVar10;
        if (*(int *)(lVar14 + 8) < (int)*puVar10) {
          do {
            uVar7 = (long)((ulong)uVar9 << 0x20) >> 0x23;
            if (uVar7 < sVar6) {
              uVar7 = (ulong)((byte)pcVar19[sVar6 + ~uVar7] >> ((ulong)uVar9 & 7)) & 1;
            }
            else {
              uVar7 = 0;
            }
            uVar13 = (ulong)*(ushort *)(lVar14 + 8 + uVar13 * 0x10 + uVar7 * 2 + 4);
            puVar10 = (uint *)(lVar14 + 8 + uVar13 * 0x10);
            bVar1 = (int)uVar9 < (int)*puVar10;
            uVar9 = *puVar10;
          } while (bVar1);
        }
        if ((((sVar6 == **(ushort **)(puVar10 + 2)) &&
             (iVar4 = memcmp(*(ushort **)(puVar10 + 2) + 1,pcVar19,sVar6), iVar4 == 0)) &&
            (uVar13 = (long)puVar10 + (-0x18 - lVar14),
            ((uVar13 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) &&
           (lVar14 = *(long *)(lVar11 + 0x50), lVar14 != 0)) {
          lStack_d8 = **(long **)(lVar14 + ((long)(uVar13 * 0x10000000) >> 0x20) * 0x40 + 8) + 2;
          local_e0 = puVar2;
          uVar5 = (**(code **)(**(long **)(param_1 + 0x268) + 0x58))
                            (*(long **)(param_1 + 0x268),uVar18 & 0xffffffff,&local_e0);
          *(undefined4 *)(param_1 + uVar18 * 4 + 0x270) = uVar5;
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 5);
    if (*(long *)(*(long *)(param_1 + 0x250) + 0x58) != 0) {
      uVar18 = 0;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        lVar11 = *(long *)(param_1 + 0x250);
        lVar14 = *(long *)(lVar11 + 0x58);
        if (lVar14 != 0) {
          pcVar19 = (&PTR_s_gsys_areaenv_bloom_04b6d858)[uVar18];
          sVar6 = strlen(pcVar19);
          uVar13 = (ulong)*(ushort *)(lVar14 + 0xc);
          puVar10 = (uint *)((int *)(lVar14 + 8) + uVar13 * 4);
          uVar9 = *puVar10;
          if (*(int *)(lVar14 + 8) < (int)*puVar10) {
            do {
              uVar7 = (long)((ulong)uVar9 << 0x20) >> 0x23;
              if (uVar7 < sVar6) {
                uVar7 = (ulong)((byte)pcVar19[sVar6 + ~uVar7] >> ((ulong)uVar9 & 7)) & 1;
              }
              else {
                uVar7 = 0;
              }
              uVar13 = (ulong)*(ushort *)(lVar14 + 8 + uVar13 * 0x10 + uVar7 * 2 + 4);
              puVar10 = (uint *)(lVar14 + 8 + uVar13 * 0x10);
              bVar1 = (int)uVar9 < (int)*puVar10;
              uVar9 = *puVar10;
            } while (bVar1);
          }
          if (((sVar6 == **(ushort **)(puVar10 + 2)) &&
              (iVar4 = memcmp(*(ushort **)(puVar10 + 2) + 1,pcVar19,sVar6), iVar4 == 0)) &&
             ((uVar13 = (long)puVar10 + (-0x18 - lVar14),
              ((uVar13 ^ 0xffffffffffffffff) & 0xffffffff0) != 0 &&
              ((lVar14 = *(long *)(lVar11 + 0x50), lVar14 != 0 &&
               (lVar14 = lVar14 + ((long)(uVar13 * 0x10000000) >> 0x20) * 0x40,
               0 < *(int *)(lVar14 + 0x10))))))) {
            uVar13 = (**(code **)(**(long **)(param_1 + 0x268) + 8))
                               (*(long **)(param_1 + 0x268),uVar18 & 0xffffffff);
            if ((uVar13 & 1) == 0) {
              lStack_d8 = **(long **)(lVar14 + 8) + 2;
              local_e0 = PTR_DAT_04bb2020 + 0x10;
              uVar5 = (**(code **)(**(long **)(param_1 + 0x268) + 0x38))
                                (*(long **)(param_1 + 0x268),uVar18 & 0xffffffff,&local_e0);
            }
            else {
              iVar4 = *(int *)(param_1 + uVar18 * 4 + 0x270);
              if (iVar4 == -1) goto LAB_03a342b4;
              lStack_d8 = **(long **)(lVar14 + 8) + 2;
              local_e0 = puVar2;
              uVar5 = (**(code **)(**(long **)(param_1 + 0x268) + 0x78))
                                (*(long **)(param_1 + 0x268),uVar18 & 0xffffffff,iVar4,&local_e0);
            }
            *(undefined4 *)(param_1 + 0x288 + uVar18 * 4) = uVar5;
          }
        }
LAB_03a342b4:
        uVar18 = uVar18 + 1;
      } while (uVar18 != 5);
      if (*(long *)(*(long *)(param_1 + 0x250) + 0x58) != 0) {
        uVar18 = 0;
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        do {
          lVar11 = *(long *)(param_1 + 0x250);
          lVar14 = *(long *)(lVar11 + 0x58);
          if (lVar14 != 0) {
            pcVar19 = (&PTR_s_gsys_areaenv_bloom_04b6d858)[uVar18];
            sVar6 = strlen(pcVar19);
            uVar13 = (ulong)*(ushort *)(lVar14 + 0xc);
            puVar10 = (uint *)((int *)(lVar14 + 8) + uVar13 * 4);
            uVar9 = *puVar10;
            if (*(int *)(lVar14 + 8) < (int)*puVar10) {
              do {
                uVar7 = (long)((ulong)uVar9 << 0x20) >> 0x23;
                if (uVar7 < sVar6) {
                  uVar7 = (ulong)((byte)pcVar19[sVar6 + ~uVar7] >> ((ulong)uVar9 & 7)) & 1;
                }
                else {
                  uVar7 = 0;
                }
                uVar13 = (ulong)*(ushort *)(lVar14 + 8 + uVar13 * 0x10 + uVar7 * 2 + 4);
                puVar10 = (uint *)(lVar14 + 8 + uVar13 * 0x10);
                bVar1 = (int)uVar9 < (int)*puVar10;
                uVar9 = *puVar10;
              } while (bVar1);
            }
            if ((((sVar6 == **(ushort **)(puVar10 + 2)) &&
                 (iVar4 = memcmp(*(ushort **)(puVar10 + 2) + 1,pcVar19,sVar6), iVar4 == 0)) &&
                (uVar13 = (long)puVar10 + (-0x18 - lVar14),
                ((uVar13 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) &&
               (lVar14 = *(long *)(lVar11 + 0x50), lVar14 != 0)) {
              uVar7 = (**(code **)(**(long **)(param_1 + 0x268) + 0x10))
                                (*(long **)(param_1 + 0x268),uVar18 & 0xffffffff);
              if ((uVar7 & 1) == 0) {
                *(undefined4 *)(param_1 + 0x2b8 + uVar18 * 4) =
                     *(undefined4 *)(param_1 + 0x288 + uVar18 * 4);
              }
              else {
                lVar14 = lVar14 + ((long)(uVar13 * 0x10000000) >> 0x20) * 0x40;
                if (1 < *(int *)(lVar14 + 0x10)) {
                  uVar13 = (**(code **)(**(long **)(param_1 + 0x268) + 8))
                                     (*(long **)(param_1 + 0x268),uVar18 & 0xffffffff);
                  if ((uVar13 & 1) == 0) {
                    lStack_d8 = *(long *)(*(long *)(lVar14 + 8) + 8) + 2;
                    local_e0 = PTR_DAT_04bb2020 + 0x10;
                    uVar5 = (**(code **)(**(long **)(param_1 + 0x268) + 0x38))
                                      (*(long **)(param_1 + 0x268),uVar18 & 0xffffffff,&local_e0);
                  }
                  else {
                    iVar4 = *(int *)(param_1 + uVar18 * 4 + 0x270);
                    if (iVar4 == -1) goto LAB_03a34430;
                    lStack_d8 = *(long *)(*(long *)(lVar14 + 8) + 8) + 2;
                    local_e0 = puVar2;
                    uVar5 = (**(code **)(**(long **)(param_1 + 0x268) + 0x78))
                                      (*(long **)(param_1 + 0x268),uVar18 & 0xffffffff,iVar4,
                                       &local_e0);
                  }
                  *(undefined4 *)(param_1 + 0x2b8 + uVar18 * 4) = uVar5;
                }
              }
            }
          }
LAB_03a34430:
          uVar18 = uVar18 + 1;
        } while (uVar18 != 5);
      }
    }
  }
  FUN_03a33460(param_1,0,0xffffffff);
  lVar14 = *(long *)(param_1 + 0x250);
  uVar3 = *(ushort *)(lVar14 + 0x6c);
  if ((ulong)uVar3 != 0) {
    uVar18 = 0;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar14 = *(long *)(*(long *)(param_1 + 0x250) + 0x38) + uVar18 * 0xa8;
      lVar11 = *(long *)(lVar14 + 0x70);
      if (lVar11 != 0) {
        lVar20 = *(long *)(param_1 + 0x2f0);
        uVar13 = 0;
        do {
          if (lVar11 != 0) {
            pcVar19 = (&PTR_s_gsys_areaenv_bloom_04b6d858)[uVar13];
            sVar6 = strlen(pcVar19);
            uVar7 = (ulong)*(ushort *)(lVar11 + 0xc);
            puVar10 = (uint *)((int *)(lVar11 + 8) + uVar7 * 4);
            uVar9 = *puVar10;
            if (*(int *)(lVar11 + 8) < (int)*puVar10) {
              do {
                uVar8 = (long)((ulong)uVar9 << 0x20) >> 0x23;
                if (uVar8 < sVar6) {
                  uVar8 = (ulong)((byte)pcVar19[sVar6 + ~uVar8] >> ((ulong)uVar9 & 7)) & 1;
                }
                else {
                  uVar8 = 0;
                }
                uVar7 = (ulong)*(ushort *)(lVar11 + 8 + uVar7 * 0x10 + uVar8 * 2 + 4);
                puVar10 = (uint *)(lVar11 + 8 + uVar7 * 0x10);
                bVar1 = (int)uVar9 < (int)*puVar10;
                uVar9 = *puVar10;
              } while (bVar1);
            }
            if (((sVar6 == **(ushort **)(puVar10 + 2)) &&
                (iVar4 = memcmp(*(ushort **)(puVar10 + 2) + 1,pcVar19,sVar6), iVar4 == 0)) &&
               ((uVar7 = (long)puVar10 + (-0x18 - lVar11),
                ((uVar7 ^ 0xffffffffffffffff) & 0xffffffff0) != 0 &&
                ((*(long *)(lVar14 + 0x68) != 0 &&
                 (lVar11 = *(long *)(lVar14 + 0x68) + ((long)(uVar7 * 0x10000000) >> 0x20) * 0x40,
                 0 < *(int *)(lVar11 + 0x10))))))) {
              uVar7 = (**(code **)(**(long **)(param_1 + 0x268) + 8))
                                (*(long **)(param_1 + 0x268),uVar13 & 0xffffffff);
              if ((uVar7 & 1) == 0) {
                lStack_d8 = **(long **)(lVar11 + 8) + 2;
                local_e0 = PTR_DAT_04bb2020 + 0x10;
                uVar5 = (**(code **)(**(long **)(param_1 + 0x268) + 0x38))
                                  (*(long **)(param_1 + 0x268),uVar13 & 0xffffffff,&local_e0);
              }
              else {
                iVar4 = *(int *)(param_1 + uVar13 * 4 + 0x270);
                if (iVar4 == -1) goto LAB_03a34684;
                lStack_d8 = **(long **)(lVar11 + 8) + 2;
                local_e0 = PTR_DAT_04bb2020 + 0x10;
                uVar5 = (**(code **)(**(long **)(param_1 + 0x268) + 0x78))
                                  (*(long **)(param_1 + 0x268),uVar13 & 0xffffffff,iVar4,&local_e0);
              }
              *(undefined4 *)(lVar20 + uVar18 * 0x30 + uVar13 * 4) = uVar5;
            }
          }
LAB_03a34684:
          lVar11 = *(long *)(lVar14 + 0x70);
          uVar13 = uVar13 + 1;
        } while (uVar13 != 5);
        if (lVar11 != 0) {
          uVar13 = 0;
          lVar11 = *(long *)(param_1 + 0x2f0) + (uVar18 + (long)*(int *)(param_1 + 0x2e8)) * 0x30;
          do {
            lVar20 = *(long *)(lVar14 + 0x70);
            if (lVar20 != 0) {
              pcVar19 = (&PTR_s_gsys_areaenv_bloom_04b6d858)[uVar13];
              sVar6 = strlen(pcVar19);
              uVar7 = (ulong)*(ushort *)(lVar20 + 0xc);
              puVar10 = (uint *)((int *)(lVar20 + 8) + uVar7 * 4);
              uVar9 = *puVar10;
              if (*(int *)(lVar20 + 8) < (int)*puVar10) {
                do {
                  uVar8 = (long)((ulong)uVar9 << 0x20) >> 0x23;
                  if (uVar8 < sVar6) {
                    uVar8 = (ulong)((byte)pcVar19[sVar6 + ~uVar8] >> ((ulong)uVar9 & 7)) & 1;
                  }
                  else {
                    uVar8 = 0;
                  }
                  uVar7 = (ulong)*(ushort *)(lVar20 + 8 + uVar7 * 0x10 + uVar8 * 2 + 4);
                  puVar10 = (uint *)(lVar20 + 8 + uVar7 * 0x10);
                  bVar1 = (int)uVar9 < (int)*puVar10;
                  uVar9 = *puVar10;
                } while (bVar1);
              }
              if ((((sVar6 == **(ushort **)(puVar10 + 2)) &&
                   (iVar4 = memcmp(*(ushort **)(puVar10 + 2) + 1,pcVar19,sVar6), iVar4 == 0)) &&
                  (uVar7 = (long)puVar10 + (-0x18 - lVar20),
                  ((uVar7 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) &&
                 (lVar20 = *(long *)(lVar14 + 0x68), lVar20 != 0)) {
                uVar8 = (**(code **)(**(long **)(param_1 + 0x268) + 0x10))
                                  (*(long **)(param_1 + 0x268),uVar13 & 0xffffffff);
                if ((uVar8 & 1) == 0) {
                  *(undefined4 *)(lVar11 + uVar13 * 4) =
                       *(undefined4 *)(*(long *)(param_1 + 0x2f0) + uVar18 * 0x30 + uVar13 * 4);
                }
                else {
                  lVar20 = lVar20 + ((long)(uVar7 * 0x10000000) >> 0x20) * 0x40;
                  if (1 < *(int *)(lVar20 + 0x10)) {
                    uVar7 = (**(code **)(**(long **)(param_1 + 0x268) + 8))
                                      (*(long **)(param_1 + 0x268),uVar13 & 0xffffffff);
                    if ((uVar7 & 1) == 0) {
                      lStack_d8 = *(long *)(*(long *)(lVar20 + 8) + 8) + 2;
                      local_e0 = PTR_DAT_04bb2020 + 0x10;
                      uVar5 = (**(code **)(**(long **)(param_1 + 0x268) + 0x38))
                                        (*(long **)(param_1 + 0x268),uVar13 & 0xffffffff,&local_e0);
                    }
                    else {
                      iVar4 = *(int *)(param_1 + uVar13 * 4 + 0x270);
                      if (iVar4 == -1) goto LAB_03a34800;
                      lStack_d8 = *(long *)(*(long *)(lVar20 + 8) + 8) + 2;
                      local_e0 = puVar2;
                      uVar5 = (**(code **)(**(long **)(param_1 + 0x268) + 0x78))
                                        (*(long **)(param_1 + 0x268),uVar13 & 0xffffffff,iVar4,
                                         &local_e0);
                    }
                    *(undefined4 *)(lVar11 + uVar13 * 4) = uVar5;
                  }
                }
              }
            }
LAB_03a34800:
            uVar13 = uVar13 + 1;
          } while (uVar13 != 5);
        }
      }
      FUN_03a33460(param_1,lVar14,uVar18 & 0xffffffff);
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar3);
    lVar14 = *(long *)(param_1 + 0x250);
  }
  lVar11 = *(long *)(lVar14 + 0x58);
  if (lVar11 != 0) {
    iVar4 = *(int *)(lVar11 + 8);
    uVar18 = (ulong)*(ushort *)(lVar11 + 0xc);
    puVar10 = (uint *)((int *)(lVar11 + 8) + uVar18 * 4);
    uVar13 = (ulong)*puVar10;
    if (iVar4 < (int)*puVar10) {
      uVar7 = uVar13;
      uVar8 = uVar18;
      do {
        uVar9 = (uint)uVar7;
        if (uVar9 < 0xd0) {
          uVar7 = (ulong)((byte)"gsys_areaenv_ConfigRootFlg"[0x19 - (uVar7 >> 3)] >> (uVar7 & 7)) &
                  1;
        }
        else {
          uVar7 = 0;
        }
        uVar8 = (ulong)*(ushort *)(lVar11 + 8 + uVar8 * 0x10 + uVar7 * 2 + 4);
        puVar10 = (uint *)(lVar11 + 8 + uVar8 * 0x10);
        uVar7 = (ulong)*puVar10;
      } while ((int)uVar9 < (int)*puVar10);
    }
    psVar16 = *(short **)(puVar10 + 2);
    if (((*psVar16 == 0x1a) &&
        (((*(long *)(psVar16 + 1) == 0x6572615f73797367 &&
          *(long *)(psVar16 + 5) == 0x6e6f435f766e6561) &&
         *(long *)(psVar16 + 9) == 0x46746f6f52676966) && psVar16[0xd] == 0x676c)) &&
       ((uVar7 = (long)puVar10 + (-0x18 - lVar11), ((uVar7 ^ 0xffffffffffffffff) & 0xffffffff0) != 0
        && (*(long *)(lVar14 + 0x50) != 0)))) {
      *(uint *)(param_1 + 0x264) =
           **(uint **)(*(long *)(lVar14 + 0x50) + ((long)(uVar7 * 0x10000000) >> 0x20) * 0x40 + 8) &
           0x10000;
      lVar11 = *(long *)(lVar14 + 0x58);
      if (lVar11 == 0) goto LAB_03a34cc4;
      iVar4 = *(int *)(lVar11 + 8);
      uVar18 = (ulong)*(ushort *)(lVar11 + 0xc);
      uVar13 = (ulong)(uint)((int *)(lVar11 + 8))[uVar18 * 4];
    }
    if (iVar4 < (int)uVar13) {
      uVar7 = uVar13;
      uVar8 = uVar18;
      do {
        uVar9 = (uint)uVar7;
        if (uVar9 < 0xb8) {
          uVar7 = (ulong)((byte)"gsys_areaenv_ConfigLine"[0x16 - (uVar7 >> 3)] >> (uVar7 & 7)) & 1;
        }
        else {
          uVar7 = 0;
        }
        uVar8 = (ulong)*(ushort *)(lVar11 + 8 + uVar8 * 0x10 + uVar7 * 2 + 4);
        puVar10 = (uint *)(lVar11 + 8 + uVar8 * 0x10);
        uVar7 = (ulong)*puVar10;
      } while ((int)uVar9 < (int)*puVar10);
    }
    else {
      puVar10 = (uint *)(lVar11 + uVar18 * 0x10 + 8);
    }
    psVar16 = *(short **)(puVar10 + 2);
    if (((*psVar16 == 0x17) &&
        ((*(long *)(psVar16 + 1) == 0x6572615f73797367 &&
         *(long *)(psVar16 + 5) == 0x6e6f435f766e6561) &&
         *(long *)((long)psVar16 + 0x11) == 0x656e694c6769666e)) &&
       ((uVar7 = (long)puVar10 + (-0x18 - lVar11), ((uVar7 ^ 0xffffffffffffffff) & 0xffffffff0) != 0
        && (*(long *)(lVar14 + 0x50) != 0)))) {
      *(undefined4 *)(param_1 + 0x260) =
           **(undefined4 **)
             (*(long *)(lVar14 + 0x50) + ((long)(uVar7 * 0x10000000) >> 0x20) * 0x40 + 8);
      lVar11 = *(long *)(lVar14 + 0x58);
      if (lVar11 == 0) goto LAB_03a34cc4;
      iVar4 = *(int *)(lVar11 + 8);
      uVar18 = (ulong)*(ushort *)(lVar11 + 0xc);
      uVar13 = (ulong)(uint)((int *)(lVar11 + 8))[uVar18 * 4];
    }
    if (iVar4 < (int)uVar13) {
      do {
        uVar9 = (uint)uVar13;
        if (uVar9 < 0x110) {
          uVar13 = (ulong)((byte)"gsys_areaenv_ConfigVirtualDistance"[0x21 - (uVar13 >> 3)] >>
                          (uVar13 & 7)) & 1;
        }
        else {
          uVar13 = 0;
        }
        uVar18 = (ulong)*(ushort *)(lVar11 + 8 + uVar18 * 0x10 + uVar13 * 2 + 4);
        puVar10 = (uint *)(lVar11 + 8 + uVar18 * 0x10);
        uVar13 = (ulong)*puVar10;
      } while ((int)uVar9 < (int)*puVar10);
    }
    else {
      puVar10 = (uint *)(lVar11 + uVar18 * 0x10 + 8);
    }
    psVar16 = *(short **)(puVar10 + 2);
    if ((((*psVar16 == 0x22) &&
         ((((*(long *)(psVar16 + 1) == 0x6572615f73797367 &&
            *(long *)(psVar16 + 5) == 0x6e6f435f766e6561) &&
           *(long *)(psVar16 + 9) == 0x7574726956676966) &&
          *(long *)(psVar16 + 0xd) == 0x6e61747369446c61) && psVar16[0x11] == 0x6563)) &&
        (uVar18 = (long)puVar10 + (-0x18 - lVar11),
        ((uVar18 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) && (*(long *)(lVar14 + 0x50) != 0)) {
      *(undefined4 *)(param_1 + 0x284) =
           **(undefined4 **)
             (*(long *)(lVar14 + 0x50) + ((long)(uVar18 * 0x10000000) >> 0x20) * 0x40 + 8);
    }
  }
LAB_03a34cc4:
  *(undefined4 *)(param_1 + 0x264) = 0x30000;
  lVar11 = *(long *)(lVar14 + 0x58);
  if (lVar11 != 0) {
    iVar4 = *(int *)(lVar11 + 8);
    uVar18 = (ulong)*(ushort *)(lVar11 + 0xc);
    puVar10 = (uint *)((int *)(lVar11 + 8) + uVar18 * 4);
    uVar13 = (ulong)*puVar10;
    if (iVar4 < (int)*puVar10) {
      uVar7 = uVar13;
      uVar8 = uVar18;
      do {
        uVar9 = (uint)uVar7;
        if (uVar9 < 0x110) {
          uVar7 = (ulong)((byte)"gsys_areaenv_ExtConfExposureEnable"[0x21 - (uVar7 >> 3)] >>
                         (uVar7 & 7)) & 1;
        }
        else {
          uVar7 = 0;
        }
        uVar8 = (ulong)*(ushort *)(lVar11 + 8 + uVar8 * 0x10 + uVar7 * 2 + 4);
        puVar10 = (uint *)(lVar11 + 8 + uVar8 * 0x10);
        uVar7 = (ulong)*puVar10;
      } while ((int)uVar9 < (int)*puVar10);
    }
    psVar16 = *(short **)(puVar10 + 2);
    if (((*psVar16 == 0x22) &&
        ((((*(long *)(psVar16 + 1) == 0x6572615f73797367 &&
           *(long *)(psVar16 + 5) == 0x7478455f766e6561) &&
          *(long *)(psVar16 + 9) == 0x6f707845666e6f43) &&
         *(long *)(psVar16 + 0xd) == 0x62616e4565727573) && psVar16[0x11] == 0x656c)) &&
       ((uVar7 = (long)puVar10 + (-0x18 - lVar11), ((uVar7 ^ 0xffffffffffffffff) & 0xffffffff0) != 0
        && (*(long *)(lVar14 + 0x50) != 0)))) {
      *(bool *)(param_1 + 0x548) =
           **(int **)(*(long *)(lVar14 + 0x50) + ((long)(uVar7 * 0x10000000) >> 0x20) * 0x40 + 8) !=
           0;
      lVar11 = *(long *)(lVar14 + 0x58);
      if (lVar11 == 0) goto LAB_03a34ef0;
      iVar4 = *(int *)(lVar11 + 8);
      uVar18 = (ulong)*(ushort *)(lVar11 + 0xc);
      uVar13 = (ulong)(uint)((int *)(lVar11 + 8))[uVar18 * 4];
    }
    if (iVar4 < (int)uVar13) {
      do {
        uVar9 = (uint)uVar13;
        if (uVar9 < 0xb0) {
          uVar13 = (ulong)((byte)"gsys_areaenv_ConfigFlg"[0x15 - (uVar13 >> 3)] >> (uVar13 & 7)) & 1
          ;
        }
        else {
          uVar13 = 0;
        }
        uVar18 = (ulong)*(ushort *)(lVar11 + 8 + uVar18 * 0x10 + uVar13 * 2 + 4);
        puVar10 = (uint *)(lVar11 + 8 + uVar18 * 0x10);
        uVar13 = (ulong)*puVar10;
      } while ((int)uVar9 < (int)*puVar10);
    }
    else {
      puVar10 = (uint *)(lVar11 + uVar18 * 0x10 + 8);
    }
    psVar16 = *(short **)(puVar10 + 2);
    if (((*psVar16 == 0x16) &&
        ((*(long *)(psVar16 + 1) == 0x6572615f73797367 &&
         *(long *)(psVar16 + 5) == 0x6e6f435f766e6561) &&
         *(long *)(psVar16 + 8) == 0x676c466769666e6f)) &&
       ((uVar18 = (long)puVar10 + (-0x18 - lVar11),
        ((uVar18 ^ 0xffffffffffffffff) & 0xffffffff0) != 0 && (*(long *)(lVar14 + 0x50) != 0)))) {
      *(undefined4 *)(param_1 + 0x2a0) =
           **(undefined4 **)
             (*(long *)(lVar14 + 0x50) + ((long)(uVar18 * 0x10000000) >> 0x20) * 0x40 + 8);
    }
  }
LAB_03a34ef0:
  uVar9 = *(uint *)(param_1 + 0x2a0);
  *(uint *)(param_1 + 0x2a0) = uVar9 & 0xfffffff8 | uVar9 & 3 | (uVar9 >> 1 & 1) << 2;
  uVar3 = *(ushort *)(lVar14 + 0x6c);
  if ((ulong)uVar3 != 0) {
    uVar18 = 0;
    do {
      lVar11 = *(long *)(*(long *)(param_1 + 0x250) + 0x38) + uVar18 * 0xa8;
      lVar14 = *(long *)(param_1 + 0x2f0);
      lVar20 = *(long *)(lVar11 + 0x70);
      if (lVar20 != 0) {
        iVar4 = *(int *)(lVar20 + 8);
        uVar13 = (ulong)*(ushort *)(lVar20 + 0xc);
        puVar10 = (uint *)((int *)(lVar20 + 8) + uVar13 * 4);
        uVar7 = (ulong)*puVar10;
        if (iVar4 < (int)*puVar10) {
          uVar8 = uVar7;
          uVar17 = uVar13;
          do {
            uVar9 = (uint)uVar8;
            if (uVar9 < 0xb0) {
              uVar8 = (ulong)((byte)"gsys_areaenv_ConfigFlg"[0x15 - (uVar8 >> 3)] >> (uVar8 & 7)) &
                      1;
            }
            else {
              uVar8 = 0;
            }
            uVar17 = (ulong)*(ushort *)(lVar20 + 8 + uVar17 * 0x10 + uVar8 * 2 + 4);
            puVar10 = (uint *)(lVar20 + 8 + uVar17 * 0x10);
            uVar8 = (ulong)*puVar10;
          } while ((int)uVar9 < (int)*puVar10);
        }
        psVar16 = *(short **)(puVar10 + 2);
        if ((((*psVar16 == 0x16) &&
             ((*(long *)(psVar16 + 1) == 0x6572615f73797367 &&
              *(long *)(psVar16 + 5) == 0x6e6f435f766e6561) &&
              *(long *)(psVar16 + 8) == 0x676c466769666e6f)) &&
            (uVar8 = (long)puVar10 + (-0x18 - lVar20),
            ((uVar8 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) && (*(long *)(lVar11 + 0x68) != 0))
        {
          *(undefined4 *)(lVar14 + uVar18 * 0x30 + 0x18) =
               **(undefined4 **)
                 (*(long *)(lVar11 + 0x68) + ((long)(uVar8 * 0x10000000) >> 0x20) * 0x40 + 8);
          lVar20 = *(long *)(lVar11 + 0x70);
          if (lVar20 == 0) goto LAB_03a34f50;
          iVar4 = *(int *)(lVar20 + 8);
          uVar13 = (ulong)*(ushort *)(lVar20 + 0xc);
          uVar7 = (ulong)(uint)((int *)(lVar20 + 8))[uVar13 * 4];
        }
        if (iVar4 < (int)uVar7) {
          do {
            uVar9 = (uint)uVar7;
            if (uVar9 < 0xc0) {
              uVar7 = (ulong)((byte)"gsys_areaenv_ConfigColor"[0x17 - (uVar7 >> 3)] >> (uVar7 & 7))
                      & 1;
            }
            else {
              uVar7 = 0;
            }
            uVar13 = (ulong)*(ushort *)(lVar20 + 8 + uVar13 * 0x10 + uVar7 * 2 + 4);
            puVar10 = (uint *)(lVar20 + 8 + uVar13 * 0x10);
            uVar7 = (ulong)*puVar10;
          } while ((int)uVar9 < (int)*puVar10);
        }
        else {
          puVar10 = (uint *)(lVar20 + uVar13 * 0x10 + 8);
        }
        psVar16 = *(short **)(puVar10 + 2);
        if (((*psVar16 == 0x18) &&
            ((*(long *)(psVar16 + 1) == 0x6572615f73797367 &&
             *(long *)(psVar16 + 5) == 0x6e6f435f766e6561) &&
             *(long *)(psVar16 + 9) == 0x726f6c6f43676966)) &&
           ((uVar13 = (long)puVar10 + (-0x18 - lVar20),
            ((uVar13 ^ 0xffffffffffffffff) & 0xffffffff0) != 0 && (*(long *)(lVar11 + 0x68) != 0))))
        {
          lVar11 = *(long *)(lVar11 + 0x68) + ((long)(uVar13 * 0x10000000) >> 0x20) * 0x40;
          lVar20 = lVar14 + uVar18 * 0x30;
          *(undefined4 *)(lVar20 + 0x1c) = **(undefined4 **)(lVar11 + 8);
          *(undefined4 *)(lVar20 + 0x20) = *(undefined4 *)(*(long *)(lVar11 + 8) + 4);
          *(undefined4 *)(lVar20 + 0x24) = *(undefined4 *)(*(long *)(lVar11 + 8) + 8);
          *(undefined4 *)(lVar20 + 0x28) = *(undefined4 *)(*(long *)(lVar11 + 8) + 0xc);
        }
      }
LAB_03a34f50:
      lVar14 = lVar14 + uVar18 * 0x30;
      uVar18 = uVar18 + 1;
      uVar9 = *(uint *)(lVar14 + 0x18);
      *(uint *)(lVar14 + 0x18) = uVar9 & 0xfffffff8 | uVar9 & 3 | (uVar9 >> 1 & 1) << 2;
    } while (uVar18 != uVar3);
  }
  return;
}

