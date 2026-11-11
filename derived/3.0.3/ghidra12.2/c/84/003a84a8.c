
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003a84a8(float param_1,long *param_2,long *param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  long *plVar21;
  long *plStack_80;
  undefined8 uStack_78;
  
  plVar21 = (long *)(ulong)(uint)param_1;
  if (ABS(param_1) < 0.001) {
    return;
  }
  *(uint *)((long)param_2 + 0xc) = *(uint *)((long)param_2 + 0xc) & 0xfffffffb;
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar4 = _UNK_041029f8;
  uVar3 = _DAT_041029f0;
  uVar2 = *(uint *)((long)param_2 + 0xc) & 2 | *(uint *)(param_3[0xd] + 4) >> 0xc & 7;
  if (param_2[3] != 0) {
    uVar2 = uVar2 | 4;
  }
  switch(uVar2) {
  case 0:
    uVar1 = *(ushort *)((long)param_3 + 100);
    if ((ulong)uVar1 != 0) {
      lVar6 = *param_2;
      lVar8 = 0;
      pfVar9 = (float *)(param_3[9] + 0x18);
      uStack_78 = 0;
      plStack_80 = plVar21;
      do {
        if ((-1 < (int)*(uint *)(param_3[0xb] + lVar8)) &&
           (uVar11 = (ulong)*(uint *)(param_3[0xb] + lVar8) & 0x7fff, (int)uVar11 != 0x7fff)) {
          fVar13 = pfVar9[2];
          fVar12 = pfVar9[3];
          fVar15 = pfVar9[4];
          puVar10 = (undefined8 *)(lVar6 + uVar11 * 0x50);
          fVar17 = pfVar9[5] + pfVar9[5];
          fVar19 = fVar13 + fVar13;
          fVar18 = fVar15 * (fVar15 + fVar15);
          fVar20 = SUB84(plVar21,0);
          puVar10[5] = CONCAT44((float)((ulong)puVar10[5] >> 0x20) + fVar20 * 0.0,
                                (float)puVar10[5] + (fVar15 * fVar19 + fVar12 * fVar17) * fVar20);
          puVar10[4] = CONCAT44((float)((ulong)puVar10[4] >> 0x20) +
                                (fVar12 * fVar19 - fVar15 * fVar17) * fVar20,
                                (float)puVar10[4] +
                                ((1.0 - fVar12 * (fVar12 + fVar12)) - fVar18) * fVar20);
          puVar10[7] = CONCAT44((float)((ulong)puVar10[7] >> 0x20) + fVar20 * 0.0,
                                (float)puVar10[7] +
                                ((fVar12 + fVar12) * fVar15 - fVar13 * fVar17) * fVar20);
          puVar10[6] = CONCAT44((float)((ulong)puVar10[6] >> 0x20) +
                                ((1.0 - fVar13 * fVar19) - fVar18) * fVar20,
                                (float)puVar10[6] + (fVar12 * fVar19 + fVar15 * fVar17) * fVar20);
          if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) {
            uVar14 = *(undefined8 *)(pfVar9 + -5);
            puVar10[1] = CONCAT44((float)((ulong)puVar10[1] >> 0x20) + fVar20 * 0.0,
                                  (float)puVar10[1] + pfVar9[-3] * fVar20);
            *puVar10 = CONCAT44((float)((ulong)*puVar10 >> 0x20) +
                                (float)((ulong)uVar14 >> 0x20) * fVar20,
                                (float)*puVar10 + (float)uVar14 * fVar20);
            uVar14 = *(undefined8 *)(pfVar9 + -2);
            lVar7 = lVar6 + uVar11 * 0x50;
            pfVar5 = (float *)(lVar7 + 0x44);
            fVar17 = *pfVar5;
            *(ulong *)(lVar7 + 0x18) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20) + fVar20 * 0.0,
                          (float)*(undefined8 *)(lVar7 + 0x18) + *pfVar9 * fVar20);
            *(ulong *)(lVar7 + 0x10) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20) +
                          (float)((ulong)uVar14 >> 0x20) * fVar20,
                          (float)*(undefined8 *)(lVar7 + 0x10) + (float)uVar14 * fVar20);
            *(uint *)(lVar7 + 0x40) = *(uint *)(lVar7 + 0x40) | (uint)pfVar9[-6] ^ 0xffffffff;
          }
          else {
            fVar12 = powf(pfVar9[-5],fVar20);
            fVar13 = powf(pfVar9[-4],SUB84(plStack_80,0));
            fVar15 = powf(pfVar9[-3],SUB84(plStack_80,0));
            pfVar5 = (float *)(lVar6 + uVar11 * 0x50 + 0x44);
            fVar17 = *pfVar5;
            uVar14 = uVar3;
            uVar16 = uVar4;
            if (0.001 <= ABS(fVar17)) {
              uVar16 = puVar10[1];
              uVar14 = *puVar10;
            }
            puVar10[1] = CONCAT44((float)((ulong)uVar16 >> 0x20) * 0.0,fVar15 * (float)uVar16);
            *puVar10 = CONCAT44(fVar13 * (float)((ulong)uVar14 >> 0x20),fVar12 * (float)uVar14);
            uVar14 = *(undefined8 *)(pfVar9 + -2);
            lVar7 = lVar6 + uVar11 * 0x50;
            fVar12 = SUB84(plStack_80,0);
            *(ulong *)(lVar7 + 0x18) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20) + fVar12 * 0.0,
                          (float)*(undefined8 *)(lVar7 + 0x18) + *pfVar9 * fVar12);
            *(ulong *)(lVar7 + 0x10) =
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20) +
                          (float)((ulong)uVar14 >> 0x20) * fVar12,
                          (float)*(undefined8 *)(lVar7 + 0x10) + (float)uVar14 * fVar12);
            *(uint *)(lVar7 + 0x40) = *(uint *)(lVar7 + 0x40) | (uint)pfVar9[-6] ^ 0xffffffff;
            plVar21 = plStack_80;
          }
          *pfVar5 = fVar17 + SUB84(plVar21,0);
        }
        lVar8 = lVar8 + 4;
        pfVar9 = pfVar9 + 0xc;
      } while ((ulong)uVar1 * 4 != lVar8);
    }
    return;
  case 1:
    uVar1 = *(ushort *)((long)param_3 + 100);
    if ((ulong)uVar1 != 0) {
      lVar6 = param_3[9];
      lVar7 = *param_2;
      lVar8 = 0;
      do {
        if ((-1 < (int)*(uint *)(param_3[0xb] + lVar8)) &&
           ((*(uint *)(param_3[0xb] + lVar8) & 0x7fff) != 0x7fff)) {
          FUN_003a60d0(param_1,param_2,lVar7,lVar6);
        }
        lVar8 = lVar8 + 4;
        lVar6 = lVar6 + 0x30;
      } while ((ulong)uVar1 * 4 != lVar8);
    }
    return;
  case 2:
    uVar1 = *(ushort *)((long)param_3 + 100);
    if ((ulong)uVar1 != 0) {
      lVar6 = param_3[9];
      lVar7 = *param_2;
      lVar8 = 0;
      do {
        if ((-1 < (int)*(uint *)(param_3[0xb] + lVar8)) &&
           ((*(uint *)(param_3[0xb] + lVar8) & 0x7fff) != 0x7fff)) {
          FUN_003a6364(plVar21,param_2,lVar7,lVar6);
        }
        lVar8 = lVar8 + 4;
        lVar6 = lVar6 + 0x30;
      } while ((ulong)uVar1 * 4 != lVar8);
    }
    return;
  case 3:
    uVar1 = *(ushort *)((long)param_3 + 100);
    if ((ulong)uVar1 != 0) {
      lVar6 = param_3[9];
      lVar7 = *param_2;
      lVar8 = 0;
      do {
        if ((-1 < (int)*(uint *)(param_3[0xb] + lVar8)) &&
           ((*(uint *)(param_3[0xb] + lVar8) & 0x7fff) != 0x7fff)) {
          FUN_003a6940(plVar21,param_2,lVar7,lVar6);
        }
        lVar8 = lVar8 + 4;
        lVar6 = lVar6 + 0x30;
      } while ((ulong)uVar1 * 4 != lVar8);
    }
    return;
  case 4:
    uVar1 = *(ushort *)((long)param_3 + 100);
    if ((ulong)uVar1 != 0) {
      lVar6 = *param_2;
      lVar8 = 0;
      pfVar9 = (float *)(param_3[9] + 0x18);
      do {
        if (-1 < (int)*(uint *)(param_3[0xb] + lVar8)) {
          uVar11 = (ulong)*(uint *)(param_3[0xb] + lVar8) & 0x7fff;
          uStack_78._0_4_ = (int)uVar11;
          if ((int)uStack_78 != 0x7fff) {
            plStack_80 = param_3;
            uStack_78._4_4_ = param_1;
            (**(code **)(*(long *)param_2[3] + 0x10))((long *)param_2[3],&plStack_80);
            fVar12 = uStack_78._4_4_;
            fVar15 = pfVar9[2];
            fVar13 = pfVar9[3];
            fVar17 = pfVar9[4];
            puVar10 = (undefined8 *)(lVar6 + uVar11 * 0x50);
            fVar18 = pfVar9[5] + pfVar9[5];
            fVar20 = fVar15 + fVar15;
            fVar19 = fVar17 * (fVar17 + fVar17);
            puVar10[5] = CONCAT44((float)((ulong)puVar10[5] >> 0x20) + uStack_78._4_4_ * 0.0,
                                  (float)puVar10[5] +
                                  (fVar17 * fVar20 + fVar13 * fVar18) * uStack_78._4_4_);
            puVar10[4] = CONCAT44((float)((ulong)puVar10[4] >> 0x20) +
                                  (fVar13 * fVar20 - fVar17 * fVar18) * uStack_78._4_4_,
                                  (float)puVar10[4] +
                                  ((1.0 - fVar13 * (fVar13 + fVar13)) - fVar19) * uStack_78._4_4_);
            puVar10[7] = CONCAT44((float)((ulong)puVar10[7] >> 0x20) + uStack_78._4_4_ * 0.0,
                                  (float)puVar10[7] +
                                  ((fVar13 + fVar13) * fVar17 - fVar15 * fVar18) * uStack_78._4_4_);
            puVar10[6] = CONCAT44((float)((ulong)puVar10[6] >> 0x20) +
                                  ((1.0 - fVar15 * fVar20) - fVar19) * uStack_78._4_4_,
                                  (float)puVar10[6] +
                                  (fVar13 * fVar20 + fVar17 * fVar18) * uStack_78._4_4_);
            if ((*(byte *)((long)param_2 + 0xc) & 1) == 0) {
              uVar14 = *(undefined8 *)(pfVar9 + -5);
              puVar10[1] = CONCAT44((float)((ulong)puVar10[1] >> 0x20) + uStack_78._4_4_ * 0.0,
                                    (float)puVar10[1] + pfVar9[-3] * uStack_78._4_4_);
              *puVar10 = CONCAT44((float)((ulong)*puVar10 >> 0x20) +
                                  (float)((ulong)uVar14 >> 0x20) * uStack_78._4_4_,
                                  (float)*puVar10 + (float)uVar14 * uStack_78._4_4_);
              uVar14 = *(undefined8 *)(pfVar9 + -2);
              lVar7 = lVar6 + uVar11 * 0x50;
              pfVar5 = (float *)(lVar7 + 0x44);
              fVar18 = *pfVar5;
              *(ulong *)(lVar7 + 0x18) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20) +
                            uStack_78._4_4_ * 0.0,
                            (float)*(undefined8 *)(lVar7 + 0x18) + *pfVar9 * uStack_78._4_4_);
              *(ulong *)(lVar7 + 0x10) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20) +
                            (float)((ulong)uVar14 >> 0x20) * uStack_78._4_4_,
                            (float)*(undefined8 *)(lVar7 + 0x10) + (float)uVar14 * uStack_78._4_4_);
              *(uint *)(lVar7 + 0x40) = *(uint *)(lVar7 + 0x40) | (uint)pfVar9[-6] ^ 0xffffffff;
            }
            else {
              fVar13 = powf(pfVar9[-5],uStack_78._4_4_);
              fVar15 = powf(pfVar9[-4],fVar12);
              fVar17 = powf(pfVar9[-3],fVar12);
              pfVar5 = (float *)(lVar6 + uVar11 * 0x50 + 0x44);
              fVar18 = *pfVar5;
              uVar14 = uVar3;
              uVar16 = uVar4;
              if (0.001 <= ABS(fVar18)) {
                uVar16 = puVar10[1];
                uVar14 = *puVar10;
              }
              puVar10[1] = CONCAT44((float)((ulong)uVar16 >> 0x20) * 0.0,fVar17 * (float)uVar16);
              *puVar10 = CONCAT44(fVar15 * (float)((ulong)uVar14 >> 0x20),fVar13 * (float)uVar14);
              uVar14 = *(undefined8 *)(pfVar9 + -2);
              lVar7 = lVar6 + uVar11 * 0x50;
              *(ulong *)(lVar7 + 0x18) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x18) >> 0x20) + fVar12 * 0.0,
                            (float)*(undefined8 *)(lVar7 + 0x18) + *pfVar9 * fVar12);
              *(ulong *)(lVar7 + 0x10) =
                   CONCAT44((float)((ulong)*(undefined8 *)(lVar7 + 0x10) >> 0x20) +
                            (float)((ulong)uVar14 >> 0x20) * fVar12,
                            (float)*(undefined8 *)(lVar7 + 0x10) + (float)uVar14 * fVar12);
              *(uint *)(lVar7 + 0x40) = *(uint *)(lVar7 + 0x40) | (uint)pfVar9[-6] ^ 0xffffffff;
            }
            *pfVar5 = fVar12 + fVar18;
          }
        }
        lVar8 = lVar8 + 4;
        pfVar9 = pfVar9 + 0xc;
      } while ((ulong)uVar1 * 4 != lVar8);
    }
    return;
  case 5:
    uVar1 = *(ushort *)((long)param_3 + 100);
    if ((ulong)uVar1 != 0) {
      lVar6 = param_3[9];
      lVar7 = *param_2;
      lVar8 = 0;
      do {
        if ((-1 < (int)*(uint *)(param_3[0xb] + lVar8)) &&
           (uVar2 = *(uint *)(param_3[0xb] + lVar8) & 0x7fff, uVar2 != 0x7fff)) {
          (**(code **)(*(long *)param_2[3] + 0x10))
                    ((long *)param_2[3],(long)register0x00000008 + -0x70);
          FUN_003a60d0(param_1,param_2,lVar7,lVar6,uVar2);
        }
        lVar8 = lVar8 + 4;
        lVar6 = lVar6 + 0x30;
      } while ((ulong)uVar1 * 4 != lVar8);
    }
    return;
  case 6:
    uVar1 = *(ushort *)((long)param_3 + 100);
    if ((ulong)uVar1 != 0) {
      lVar6 = param_3[9];
      lVar7 = *param_2;
      lVar8 = 0;
      do {
        if ((-1 < (int)*(uint *)(param_3[0xb] + lVar8)) &&
           (uVar2 = *(uint *)(param_3[0xb] + lVar8) & 0x7fff, uVar2 != 0x7fff)) {
          (**(code **)(*(long *)param_2[3] + 0x10))
                    ((long *)param_2[3],(long)register0x00000008 + -0x70);
          FUN_003a6364(param_1,param_2,lVar7,lVar6,uVar2);
        }
        lVar8 = lVar8 + 4;
        lVar6 = lVar6 + 0x30;
      } while ((ulong)uVar1 * 4 != lVar8);
    }
    return;
  case 7:
    uVar1 = *(ushort *)((long)param_3 + 100);
    if ((ulong)uVar1 != 0) {
      lVar6 = param_3[9];
      lVar7 = *param_2;
      lVar8 = 0;
      do {
        if ((-1 < (int)*(uint *)(param_3[0xb] + lVar8)) &&
           (uVar2 = *(uint *)(param_3[0xb] + lVar8) & 0x7fff, uVar2 != 0x7fff)) {
          (**(code **)(*(long *)param_2[3] + 0x10))
                    ((long *)param_2[3],(long)register0x00000008 + -0x70);
          FUN_003a6940(param_1,param_2,lVar7,lVar6,uVar2);
        }
        lVar8 = lVar8 + 4;
        lVar6 = lVar6 + 0x30;
      } while ((ulong)uVar1 * 4 != lVar8);
    }
    return;
  }
}

