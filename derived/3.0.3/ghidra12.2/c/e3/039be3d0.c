
void FUN_039be3d0(long param_1,uint param_2,float *param_3,undefined8 *param_4,float *param_5,
                 undefined8 param_6)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  
  bVar1 = *(byte *)(param_1 + 0x122);
  uVar9 = (uint)bVar1;
  if ((bVar1 & 2) != 0 || (param_2 & 1) != 0) {
    fVar22 = *(float *)(param_1 + 0x110);
    uVar9 = bVar1 & 0xfffffffd | 0x10;
    fVar24 = *(float *)(param_1 + 0xb0) * fVar22;
    fVar26 = *(float *)(param_1 + 0x114);
    fVar29 = *(float *)(param_1 + 0x118);
    fVar25 = *(float *)(param_1 + 0xb4) * fVar26;
    fVar32 = *(float *)(param_1 + 0xb8) * fVar29;
    fVar39 = fVar22 * *(float *)(param_1 + 0xc0);
    fVar40 = fVar26 * *(float *)(param_1 + 0xc4);
    fVar45 = param_3[3];
    *(float *)(param_1 + 0xec) = *(float *)(param_1 + 0xbc);
    *(float *)(param_1 + 0xe0) = fVar24;
    *(float *)(param_1 + 0xe4) = fVar25;
    fVar41 = fVar29 * *(float *)(param_1 + 200);
    fVar42 = fVar22 * *(float *)(param_1 + 0xd0);
    fVar43 = fVar26 * *(float *)(param_1 + 0xd4);
    fVar44 = fVar29 * *(float *)(param_1 + 0xd8);
    *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xcc);
    *(float *)(param_1 + 0x10c) = *(float *)(param_1 + 0xdc);
    *(float *)(param_1 + 0xe8) = fVar32;
    *(float *)(param_1 + 0xf0) = fVar39;
    *(float *)(param_1 + 0xf4) = fVar40;
    *(float *)(param_1 + 0xf8) = fVar41;
    *(float *)(param_1 + 0x100) = fVar42;
    *(float *)(param_1 + 0x104) = fVar43;
    *(float *)(param_1 + 0x108) = fVar44;
    fVar46 = *param_3;
    fVar47 = param_3[1];
    fVar48 = param_3[2];
    fVar23 = fVar22;
    if (fVar22 <= fVar29) {
      fVar23 = fVar29;
    }
    fVar33 = fVar26;
    if (fVar26 <= fVar29) {
      fVar33 = fVar29;
    }
    if (fVar22 <= fVar26) {
      fVar23 = fVar33;
    }
    *(float *)(param_1 + 0xa4) = fVar45 * fVar23;
    *(float *)(param_1 + 0x98) =
         *(float *)(param_1 + 0xbc) + fVar25 * fVar47 + fVar46 * fVar24 + fVar48 * fVar32;
    *(float *)(param_1 + 0x9c) =
         *(float *)(param_1 + 0xcc) + fVar40 * fVar47 + fVar46 * fVar39 + fVar48 * fVar41;
    *(float *)(param_1 + 0xa0) =
         *(float *)(param_1 + 0xdc) + fVar43 * fVar47 + fVar46 * fVar42 + fVar48 * fVar44;
    uVar28 = param_4[1];
    uVar27 = *param_4;
    uVar31 = param_4[3];
    uVar30 = param_4[2];
    uVar37 = param_4[5];
    uVar34 = param_4[4];
    *(char *)(param_1 + 0x122) = (char)uVar9;
    fVar23 = (float)*(undefined8 *)(param_1 + 0xe0);
    fVar41 = (float)uVar27;
    fVar42 = (float)((ulong)uVar27 >> 0x20);
    fVar43 = (float)uVar28;
    fVar44 = (float)((ulong)uVar28 >> 0x20);
    fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 0xe0) >> 0x20);
    fVar45 = (float)uVar30;
    fVar46 = (float)((ulong)uVar30 >> 0x20);
    fVar47 = (float)uVar31;
    fVar48 = (float)((ulong)uVar31 >> 0x20);
    fVar25 = (float)*(undefined8 *)(param_1 + 0xf0);
    fVar26 = (float)((ulong)*(undefined8 *)(param_1 + 0xf0) >> 0x20);
    fVar32 = (float)*(undefined8 *)(param_1 + 0x100);
    fVar39 = (float)((ulong)*(undefined8 *)(param_1 + 0x100) >> 0x20);
    fVar24 = (float)*(undefined8 *)(param_1 + 0xe8);
    fVar33 = (float)uVar34;
    fVar35 = (float)((ulong)uVar34 >> 0x20);
    fVar36 = (float)uVar37;
    fVar38 = (float)((ulong)uVar37 >> 0x20);
    fVar29 = (float)*(undefined8 *)(param_1 + 0xf8);
    fVar40 = (float)*(undefined8 *)(param_1 + 0x108);
    *(ulong *)(param_1 + 0xe8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xe8) >> 0x20) +
                  fVar44 * fVar23 + fVar48 * fVar22 + fVar38 * fVar24,
                  fVar43 * fVar23 + fVar47 * fVar22 + fVar36 * fVar24 + 0.0);
    *(ulong *)(param_1 + 0xe0) =
         CONCAT44(fVar42 * fVar23 + fVar46 * fVar22 + fVar35 * fVar24 + 0.0,
                  fVar41 * fVar23 + fVar45 * fVar22 + fVar33 * fVar24 + 0.0);
    *(ulong *)(param_1 + 0xf8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xf8) >> 0x20) +
                  fVar44 * fVar25 + fVar48 * fVar26 + fVar38 * fVar29,
                  fVar43 * fVar25 + fVar47 * fVar26 + fVar36 * fVar29 + 0.0);
    *(ulong *)(param_1 + 0xf0) =
         CONCAT44(fVar42 * fVar25 + fVar46 * fVar26 + fVar35 * fVar29 + 0.0,
                  fVar41 * fVar25 + fVar45 * fVar26 + fVar33 * fVar29 + 0.0);
    *(ulong *)(param_1 + 0x108) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x108) >> 0x20) +
                  fVar44 * fVar32 + fVar48 * fVar39 + fVar38 * fVar40,
                  fVar43 * fVar32 + fVar47 * fVar39 + fVar36 * fVar40 + 0.0);
    *(ulong *)(param_1 + 0x100) =
         CONCAT44(fVar42 * fVar32 + fVar46 * fVar39 + fVar35 * fVar40 + 0.0,
                  fVar41 * fVar32 + fVar45 * fVar39 + fVar33 * fVar40 + 0.0);
  }
  if ((uVar9 >> 4 & 1) != 0) {
    bVar1 = *(byte *)(param_1 + 0x123);
    uVar13 = (ulong)(bVar1 >> 2) & 3;
    plVar16 = *(long **)(param_1 + 0x10);
    uVar4 = (uint)uVar13;
    iVar8 = uVar4 * *(ushort *)(param_1 + 0x120) + (bVar1 & 3);
    uVar9 = (bVar1 & 3) + 1;
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = uVar9 / uVar4;
    }
    uVar9 = uVar9 - uVar3 * uVar4;
    uVar18 = (ulong)uVar9 + uVar13 * *(ushort *)(param_1 + 0x120);
    *(byte *)(param_1 + 0x123) = bVar1 & 0xfc | (byte)uVar9;
    lVar21 = plVar16[2];
    lVar19 = plVar16[6];
    iVar6 = (**(code **)(*plVar16 + 0x20))(plVar16);
    iVar7 = (**(code **)(*plVar16 + 0x20))(plVar16);
    lVar17 = *(long *)plVar16[1];
    bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar17 + 8) * 4];
    uVar20 = (ulong)bVar1;
    uVar13 = (**(code **)(*plVar16 + 0x18))(plVar16);
    if (bVar1 != 0) {
      lVar19 = lVar21 + (((int)lVar19 + iVar6) - 1U & -iVar7) * uVar18 +
               (ulong)*(ushort *)(lVar17 + 4);
      puVar11 = (undefined4 *)(param_1 + 0xe0);
      uVar12 = uVar20 & 3;
      if (bVar1 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          uVar15 = uVar14 * 4;
          uVar14 = uVar14 + 4;
          *(undefined4 *)(lVar19 + uVar15) = *puVar11;
          *(undefined4 *)(lVar19 + (uVar15 | 4)) = puVar11[1];
          *(undefined4 *)(lVar19 + (uVar15 | 8)) = puVar11[2];
          puVar10 = puVar11 + 3;
          puVar11 = puVar11 + 4;
          *(undefined4 *)(lVar19 + (uVar15 | 0xc)) = *puVar10;
        } while ((uVar20 & 0xfc) != uVar14);
      }
      if ((bVar1 & 3) != 0) {
        puVar10 = puVar11;
        uVar15 = uVar12;
        do {
          puVar11 = puVar10 + 1;
          uVar15 = uVar15 - 1;
          *(undefined4 *)(lVar19 + uVar14 * 4) = *puVar10;
          uVar14 = uVar14 + 1;
          puVar10 = puVar11;
        } while (uVar15 != 0);
      }
      lVar19 = lVar19 + (uVar13 & 0xff) * 4;
      if (bVar1 < 4) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        do {
          uVar15 = uVar14 * 4;
          uVar14 = uVar14 + 4;
          *(undefined4 *)(lVar19 + uVar15) = *puVar11;
          *(undefined4 *)(lVar19 + (uVar15 | 4)) = puVar11[1];
          *(undefined4 *)(lVar19 + (uVar15 | 8)) = puVar11[2];
          puVar10 = puVar11 + 3;
          puVar11 = puVar11 + 4;
          *(undefined4 *)(lVar19 + (uVar15 | 0xc)) = *puVar10;
        } while ((uVar20 & 0xfc) != uVar14);
      }
      if ((bVar1 & 3) != 0) {
        puVar10 = puVar11;
        uVar15 = uVar12;
        do {
          puVar11 = puVar10 + 1;
          uVar15 = uVar15 - 1;
          *(undefined4 *)(lVar19 + uVar14 * 4) = *puVar10;
          uVar14 = uVar14 + 1;
          puVar10 = puVar11;
        } while (uVar15 != 0);
      }
      lVar19 = lVar19 + (uVar13 & 0xff) * 4;
      if (bVar1 < 4) {
        uVar13 = 0;
      }
      else {
        uVar13 = 0;
        do {
          uVar14 = uVar13 * 4;
          uVar13 = uVar13 + 4;
          *(undefined4 *)(lVar19 + uVar14) = *puVar11;
          *(undefined4 *)(lVar19 + (uVar14 | 4)) = puVar11[1];
          *(undefined4 *)(lVar19 + (uVar14 | 8)) = puVar11[2];
          puVar10 = puVar11 + 3;
          puVar11 = puVar11 + 4;
          *(undefined4 *)(lVar19 + (uVar14 | 0xc)) = *puVar10;
        } while ((uVar20 & 0xfc) != uVar13);
      }
      if ((bVar1 & 3) != 0) {
        do {
          uVar12 = uVar12 - 1;
          *(undefined4 *)(lVar19 + uVar13 * 4) = *puVar11;
          uVar13 = uVar13 + 1;
          puVar11 = puVar11 + 1;
        } while (uVar12 != 0);
      }
    }
    uVar13 = FUN_03ad41f8(param_1 + 0x128,*(undefined8 *)(param_1 + 0x10),uVar18 & 0xffffffff,iVar8,
                          *(byte *)(param_1 + 0x123) & 3);
    if ((uVar13 & 1) != 0) {
      plVar16 = *(long **)(param_1 + 0x10);
      bVar1 = *(byte *)((long)plVar16 + 0x39);
      uVar2 = *(ushort *)((long)plVar16 + 0x3a);
      lVar19 = plVar16[6];
      iVar6 = (**(code **)(*plVar16 + 0x20))(plVar16);
      iVar7 = (**(code **)(*plVar16 + 0x20))(plVar16);
      lVar17 = plVar16[4];
      if (lVar17 != 0) {
        lVar21 = plVar16[6];
        lVar5 = plVar16[3];
        uVar9 = (**(code **)PTR_DAT_04bcf030)(lVar17);
        if ((uVar9 >> 2 & 1) != 0) {
          (*DAT_04c61fd8)(lVar17,(int)lVar5 +
                                 (((int)lVar19 + iVar6) - 1U & -iVar7) *
                                 (iVar8 + (uint)uVar2 * (uint)bVar1),(int)lVar21);
        }
      }
    }
    plVar16 = *(long **)(param_1 + 0x10);
    bVar1 = *(byte *)((long)plVar16 + 0x39);
    uVar2 = *(ushort *)((long)plVar16 + 0x3a);
    lVar19 = plVar16[6];
    iVar8 = (**(code **)(*plVar16 + 0x20))(plVar16);
    iVar6 = (**(code **)(*plVar16 + 0x20))(plVar16);
    lVar17 = plVar16[4];
    if (lVar17 != 0) {
      lVar21 = plVar16[6];
      lVar5 = plVar16[3];
      uVar9 = (**(code **)PTR_DAT_04bcf030)(lVar17);
      if ((uVar9 >> 2 & 1) != 0) {
        (*DAT_04c61fd8)(lVar17,(int)lVar5 +
                               (((int)lVar19 + iVar8) - 1U & -iVar6) *
                               ((uint)uVar2 * (uint)bVar1 + (int)uVar18),(int)lVar21);
      }
    }
    uVar9 = *(byte *)(param_1 + 0x122) & 0xffffffef;
    *(char *)(param_1 + 0x122) = (char)uVar9;
  }
  lVar19 = *(long *)(param_1 + 0xa8);
  *(undefined2 *)(param_1 + 0x2a) = 0;
  if (((lVar19 != 0) && ((uVar9 & 1) != 0)) && (*(short *)(param_1 + 0x11e) != 0)) {
    bVar1 = *(byte *)(param_1 + 0x123);
    plVar16 = *(long **)(param_1 + 0x10);
    uVar2 = *(ushort *)(param_1 + 0x120);
    lVar21 = plVar16[2];
    lVar17 = plVar16[6];
    iVar8 = (**(code **)(*plVar16 + 0x20))(plVar16);
    iVar6 = (**(code **)(*plVar16 + 0x20))(plVar16);
    FUN_039bf600(lVar19,param_6,param_1 + 0x98,param_2 >> 1 & 1,param_2 >> 2 & 1,0,
                 lVar21 + (((ulong)bVar1 & 3) + ((ulong)(bVar1 >> 2) & 3) * (ulong)uVar2) *
                          (ulong)(((int)lVar17 + iVar8) - 1U & -iVar6));
  }
  fVar25 = *(float *)(param_1 + 0x98);
  fVar24 = *(float *)(param_1 + 0x9c);
  fVar22 = *(float *)(param_1 + 0xa0);
  fVar23 = *(float *)(param_1 + 0xa4);
  fVar29 = fVar24 - fVar23;
  fVar26 = fVar25 - fVar23;
  if (fVar26 < *param_5) {
    *param_5 = fVar26;
  }
  fVar26 = fVar22 - fVar23;
  if (fVar29 < param_5[1]) {
    param_5[1] = fVar29;
  }
  fVar25 = fVar25 + fVar23;
  if (fVar26 < param_5[2]) {
    param_5[2] = fVar26;
  }
  fVar24 = fVar23 + fVar24;
  if (param_5[3] < fVar25) {
    param_5[3] = fVar25;
  }
  fVar23 = fVar23 + fVar22;
  if (param_5[4] < fVar24) {
    param_5[4] = fVar24;
  }
  if (param_5[5] < fVar23) {
    param_5[5] = fVar23;
  }
  return;
}

