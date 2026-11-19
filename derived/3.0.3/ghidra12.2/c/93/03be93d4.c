
float FUN_03be93d4(long param_1,uint *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  ushort *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  long *plVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  uVar3 = *param_2;
  uVar9 = (ulong)uVar3;
  switch(uVar3 >> 0x18) {
  case 0:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar4;
    if (1 < uVar4) {
      puVar2 = puVar1;
    }
    return *(float *)(*(long *)(*(long *)*puVar2 + 0x48) + (ulong)(uVar3 & 0xffffff) * 4);
  default:
    FUN_03be8cd4(param_1,"getFloat_: invalid referenceType(%d)",uVar3 >> 0x18);
    break;
  case 2:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar3;
    if (1 < uVar3) {
      puVar2 = puVar1;
    }
    lVar12 = *(long *)(*(long *)*puVar2 + 0x58);
    if (lVar12 == 0) {
      return 0.0;
    }
    uVar9 = uVar9 & 0xffffff;
    puVar11 = (ushort *)(lVar12 + uVar9 * 0x14);
    if (*(int *)(puVar11 + 6) < 0) {
      return INFINITY;
    }
    if (*(short *)(lVar12 + uVar9 * 0x14 + 6) == 1) {
      uVar6 = *(ushort *)(lVar12 + uVar9 * 0x14 + 0x10);
      if ((short)uVar6 < 0) goto LAB_03be9ce4;
      uVar13 = (ulong)uVar6;
      plVar15 = (long *)(*(long *)(param_1 + 0x18) + 0x48);
      plVar17 = (long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x40) + uVar13 * 8);
    }
    else {
      lVar14 = *(long *)(*(long *)(param_3 + 0x30) + 0x18);
      plVar15 = (long *)(lVar14 + 0x18);
      uVar3 = *(uint *)(lVar14 + 0x10);
      plVar17 = plVar15 + uVar3;
      if (1 < uVar3) {
        plVar17 = plVar15;
      }
      sVar7 = *(short *)(lVar12 + uVar9 * 0x14 + 0x10);
      iVar16 = (int)sVar7;
      if (*(uint *)(*plVar17 + 0x68) <= (uint)(int)sVar7) {
        iVar16 = 0;
      }
      bVar5 = *(byte *)(*(long *)(*plVar17 + 0x70) + (long)iVar16);
      if ((char)bVar5 < '\0') goto LAB_03be9ce4;
      uVar13 = (ulong)bVar5;
      plVar17 = (long *)(*(long *)(*(long *)(param_3 + 0x30) + 0x48) + uVar13 * 8);
      plVar15 = (long *)(param_3 + 0x78);
    }
    if (*plVar17 != 0) {
      if (*(int *)(*plVar17 + 0x60) == 2) {
        fVar20 = *(float *)(*plVar15 + uVar13 * 4);
      }
      else {
        fVar20 = (float)*(int *)(*plVar15 + uVar13 * 4);
      }
      lVar14 = *(long *)(*(long *)*puVar2 + 0x60);
      if (lVar14 == 0) {
        return INFINITY;
      }
      lVar14 = lVar14 + (ulong)*puVar11 * 8;
      uVar6 = *(ushort *)(lVar12 + uVar9 * 0x14 + 2);
      if (uVar6 != 0 && *(short *)(lVar12 + uVar9 * 0x14 + 4) == 0) {
        lVar12 = 0;
        lVar10 = -0x100000000;
        do {
          fVar19 = *(float *)(lVar14 + lVar12);
          if (fVar20 == fVar19) {
            fVar21 = *(float *)(lVar14 + lVar12 + 4);
LAB_03be9da8:
            if (fVar21 != INFINITY) {
              return fVar21;
            }
            break;
          }
          if (fVar20 < fVar19) {
            fVar21 = *(float *)(lVar14 + lVar12 + 4);
            if (lVar12 != 0) {
              pfVar8 = (float *)(lVar14 + (lVar10 >> 0x1d));
              fVar22 = *pfVar8;
              fVar18 = pfVar8[1];
              fVar21 = fVar18 + (fVar20 - fVar22) * ((fVar21 - fVar18) / (fVar19 - fVar22));
            }
            goto LAB_03be9da8;
          }
          lVar12 = lVar12 + 8;
          lVar10 = lVar10 + 0x100000000;
        } while ((ulong)uVar6 * 8 != lVar12);
      }
      return *(float *)(lVar14 + (ulong)uVar6 * 8 + -4);
    }
LAB_03be9ce4:
    (**(code **)(**(long **)(*(long *)(param_3 + 0x30) + 0x18) + 0x20))();
    return INFINITY;
  case 3:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar3;
    if (1 < uVar3) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) != 0) {
      pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (uVar9 & 0xffffff) * 8);
      lVar12 = *(long *)(param_1 + 0x18);
      fVar20 = *pfVar8;
      fVar19 = pfVar8[1];
      uVar4 = *(uint *)(lVar12 + 0xac);
      uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
      *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
      *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
      uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
      *(uint *)(lVar12 + 0xa8) = uVar4;
      *(uint *)(lVar12 + 0xac) = uVar3;
      return fVar20 + (fVar19 - fVar20) * ((float)(uVar3 >> 9 | 0x3f800000) + -1.0);
    }
    break;
  case 6:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar3;
    if (1 < uVar3) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) != 0) {
      pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (uVar9 & 0xffffff) * 8);
      lVar12 = *(long *)(param_1 + 0x18);
      fVar19 = pfVar8[1] - *pfVar8;
      uVar4 = *(uint *)(lVar12 + 0xac);
      uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
      *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
      *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
      uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
      *(uint *)(lVar12 + 0xa8) = uVar4;
      *(uint *)(lVar12 + 0xac) = uVar3;
      fVar20 = -fVar19;
      if (0.0 <= fVar19) {
        fVar20 = fVar19;
      }
      fVar20 = fVar20 * 0.5;
      fVar19 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
      fVar21 = fVar19 + fVar19 + -1.0;
      fVar19 = -fVar21;
      if (0.0 <= fVar21) {
        fVar19 = fVar21;
      }
      fVar18 = -(fVar20 * fVar19 * fVar19);
      if (0.0 <= fVar21) {
        fVar18 = fVar20 * fVar19 * fVar19;
      }
      return fVar20 + *pfVar8 + fVar18;
    }
    break;
  case 7:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar3;
    if (1 < uVar3) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) != 0) {
      pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (uVar9 & 0xffffff) * 8);
      lVar12 = *(long *)(param_1 + 0x18);
      fVar19 = pfVar8[1] - *pfVar8;
      uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
      uVar4 = *(uint *)(lVar12 + 0xac);
      *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
      *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
      uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
      *(uint *)(lVar12 + 0xa8) = uVar4;
      *(uint *)(lVar12 + 0xac) = uVar3;
      fVar20 = -fVar19;
      if (0.0 <= fVar19) {
        fVar20 = fVar19;
      }
      fVar19 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
      fVar21 = fVar19 + fVar19 + -1.0;
      fVar19 = 3.0;
LAB_03be97b4:
      fVar18 = -fVar21;
      if (0.0 <= fVar21) {
        fVar18 = fVar21;
      }
      fVar18 = powf(fVar18,fVar19);
      fVar20 = fVar20 * 0.5;
      fVar19 = -(fVar20 * fVar18);
      if (0.0 <= fVar21) {
        fVar19 = fVar20 * fVar18;
      }
      return fVar20 + *pfVar8 + fVar19;
    }
    break;
  case 8:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar3;
    if (1 < uVar3) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) != 0) {
      pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (uVar9 & 0xffffff) * 8);
      lVar12 = *(long *)(param_1 + 0x18);
      fVar19 = pfVar8[1] - *pfVar8;
      uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
      uVar4 = *(uint *)(lVar12 + 0xac);
      *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
      *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
      uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
      *(uint *)(lVar12 + 0xa8) = uVar4;
      *(uint *)(lVar12 + 0xac) = uVar3;
      fVar20 = -fVar19;
      if (0.0 <= fVar19) {
        fVar20 = fVar19;
      }
      fVar19 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
      fVar21 = fVar19 + fVar19 + -1.0;
      fVar19 = 4.0;
      goto LAB_03be97b4;
    }
    break;
  case 9:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar3;
    if (1 < uVar3) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) != 0) {
      pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (uVar9 & 0xffffff) * 8);
      lVar12 = *(long *)(param_1 + 0x18);
      fVar19 = pfVar8[1] - *pfVar8;
      uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
      uVar4 = *(uint *)(lVar12 + 0xac);
      *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
      *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
      uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
      *(uint *)(lVar12 + 0xa8) = uVar4;
      *(uint *)(lVar12 + 0xac) = uVar3;
      fVar20 = -fVar19;
      if (0.0 <= fVar19) {
        fVar20 = fVar19;
      }
      fVar19 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
      fVar21 = fVar19 + fVar19 + -1.0;
      fVar19 = 1.5;
      goto LAB_03be97b4;
    }
    break;
  case 10:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar3;
    if (1 < uVar3) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) != 0) {
      pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (uVar9 & 0xffffff) * 8);
      lVar12 = *(long *)(param_1 + 0x18);
      fVar19 = pfVar8[1] - *pfVar8;
      uVar4 = *(uint *)(lVar12 + 0xac);
      uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
      *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
      *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
      uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
      *(uint *)(lVar12 + 0xa8) = uVar4;
      *(uint *)(lVar12 + 0xac) = uVar3;
      fVar20 = -fVar19;
      if (0.0 <= fVar19) {
        fVar20 = fVar19;
      }
      fVar19 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
      fVar19 = fVar19 * fVar19;
LAB_03be9a9c:
      return *pfVar8 + fVar20 * fVar19;
    }
    break;
  case 0xb:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar4;
    if (1 < uVar4) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) == 0) {
      return 0.0;
    }
    lVar12 = *(long *)(param_1 + 0x18);
    pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (ulong)(uVar3 & 0xffffff) * 8);
    fVar19 = pfVar8[1] - *pfVar8;
    uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar12 + 0xac);
    *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
    *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    *(uint *)(lVar12 + 0xa8) = uVar4;
    *(uint *)(lVar12 + 0xac) = uVar3;
    fVar20 = -fVar19;
    if (0.0 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar19 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
    fVar21 = 3.0;
    goto LAB_03be9a08;
  case 0xc:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar4;
    if (1 < uVar4) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) == 0) {
      return 0.0;
    }
    lVar12 = *(long *)(param_1 + 0x18);
    pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (ulong)(uVar3 & 0xffffff) * 8);
    fVar19 = pfVar8[1] - *pfVar8;
    uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar12 + 0xac);
    *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
    *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    *(uint *)(lVar12 + 0xa8) = uVar4;
    *(uint *)(lVar12 + 0xac) = uVar3;
    fVar20 = -fVar19;
    if (0.0 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar19 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
    fVar21 = 4.0;
    goto LAB_03be9a08;
  case 0xd:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar3;
    if (1 < uVar3) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) == 0) {
      return 0.0;
    }
    lVar12 = *(long *)(param_1 + 0x18);
    pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (uVar9 & 0xffffff) * 8);
    fVar19 = pfVar8[1] - *pfVar8;
    uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar12 + 0xac);
    *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
    *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    *(uint *)(lVar12 + 0xa8) = uVar4;
    *(uint *)(lVar12 + 0xac) = uVar3;
    fVar20 = -fVar19;
    if (0.0 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar19 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
    fVar21 = 1.5;
LAB_03be9a08:
    fVar19 = powf(fVar19,fVar21);
LAB_03be9c4c:
    return *pfVar8 + fVar20 * fVar19;
  case 0xe:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar4;
    if (1 < uVar4) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) != 0) {
      pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (ulong)(uVar3 & 0xffffff) * 8);
      lVar12 = *(long *)(param_1 + 0x18);
      fVar19 = pfVar8[1] - *pfVar8;
      uVar4 = *(uint *)(lVar12 + 0xac);
      uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
      *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
      *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
      uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
      *(uint *)(lVar12 + 0xa8) = uVar4;
      *(uint *)(lVar12 + 0xac) = uVar3;
      fVar20 = -fVar19;
      if (0.0 <= fVar19) {
        fVar20 = fVar19;
      }
      fVar19 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
      fVar19 = 1.0 - fVar19 * fVar19;
      goto LAB_03be9a9c;
    }
    break;
  case 0xf:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar4;
    if (1 < uVar4) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) == 0) {
      return 0.0;
    }
    lVar12 = *(long *)(param_1 + 0x18);
    pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (ulong)(uVar3 & 0xffffff) * 8);
    fVar19 = pfVar8[1] - *pfVar8;
    uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar12 + 0xac);
    *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
    *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    *(uint *)(lVar12 + 0xa8) = uVar4;
    *(uint *)(lVar12 + 0xac) = uVar3;
    fVar20 = -fVar19;
    if (0.0 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar19 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
    fVar21 = 3.0;
    goto LAB_03be9c40;
  case 0x10:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar4;
    if (1 < uVar4) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) == 0) {
      return 0.0;
    }
    lVar12 = *(long *)(param_1 + 0x18);
    pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (ulong)(uVar3 & 0xffffff) * 8);
    fVar19 = pfVar8[1] - *pfVar8;
    uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar12 + 0xac);
    *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
    *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    *(uint *)(lVar12 + 0xa8) = uVar4;
    *(uint *)(lVar12 + 0xac) = uVar3;
    fVar20 = -fVar19;
    if (0.0 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar19 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
    fVar21 = 4.0;
    goto LAB_03be9c40;
  case 0x11:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar1 + uVar4;
    if (1 < uVar4) {
      puVar2 = puVar1;
    }
    if (*(long *)(*(long *)*puVar2 + 0x50) == 0) {
      return 0.0;
    }
    lVar12 = *(long *)(param_1 + 0x18);
    pfVar8 = (float *)(*(long *)(*(long *)*puVar2 + 0x50) + (ulong)(uVar3 & 0xffffff) * 8);
    fVar19 = pfVar8[1] - *pfVar8;
    uVar3 = *(uint *)(lVar12 + 0xa0) ^ *(uint *)(lVar12 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar12 + 0xac);
    *(undefined4 *)(lVar12 + 0xa0) = *(undefined4 *)(lVar12 + 0xa4);
    *(undefined4 *)(lVar12 + 0xa4) = *(undefined4 *)(lVar12 + 0xa8);
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    *(uint *)(lVar12 + 0xa8) = uVar4;
    *(uint *)(lVar12 + 0xac) = uVar3;
    fVar20 = -fVar19;
    if (0.0 <= fVar19) {
      fVar20 = fVar19;
    }
    fVar19 = (float)(uVar3 >> 9 | 0x3f800000) + -1.0;
    fVar21 = 1.5;
LAB_03be9c40:
    fVar19 = powf(fVar19,fVar21);
    fVar19 = 1.0 - fVar19;
    goto LAB_03be9c4c;
  }
  return 0.0;
}

