
void FUN_03a6d3a0(float param_1,float param_2,float param_3,float param_4,long param_5,uint param_6,
                 undefined8 *param_7,undefined8 *param_8)

{
  void *pvVar1;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined4 *puVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  size_t __n;
  float fVar20;
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
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float local_198;
  float fStack_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined4 local_140 [16];
  undefined4 local_100 [16];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  uStack_b8 = param_7[1];
  local_c0 = *param_7;
  uStack_a8 = param_7[3];
  uStack_b0 = param_7[2];
  if (*(uint *)(param_5 + 0x1d0) <= param_6) {
    param_6 = 0;
  }
  uStack_98 = param_7[5];
  local_a0 = param_7[4];
  plVar16 = (long *)(*(long *)(param_5 + 0x1d8) + (long)(int)param_6 * 0x78);
  uStack_88 = DAT_04102218;
  uStack_90 = DAT_04102210;
  FUN_038e6ab4(local_100,&local_c0);
  FUN_038e6ab4(local_140,param_8);
  local_184 = 0;
  local_188 = (undefined4)uStack_98;
  local_190 = local_a0;
  fVar20 = (float)*param_8;
  fVar32 = (float)*param_7;
  fVar33 = (float)((ulong)*param_7 >> 0x20);
  fVar34 = (float)param_7[1];
  fVar35 = (float)((ulong)param_7[1] >> 0x20);
  fVar21 = (float)((ulong)*param_8 >> 0x20);
  fVar36 = (float)param_7[2];
  fVar37 = (float)((ulong)param_7[2] >> 0x20);
  fVar38 = (float)param_7[3];
  fVar39 = (float)((ulong)param_7[3] >> 0x20);
  fVar23 = (float)param_8[2];
  fVar24 = (float)((ulong)param_8[2] >> 0x20);
  fVar26 = (float)param_8[4];
  fVar27 = (float)((ulong)param_8[4] >> 0x20);
  fVar29 = (float)param_8[6];
  fVar30 = (float)((ulong)param_8[6] >> 0x20);
  lVar17 = plVar16[2];
  fVar22 = (float)param_8[1];
  fVar40 = (float)param_7[4];
  fVar41 = (float)((ulong)param_7[4] >> 0x20);
  fVar42 = (float)param_7[5];
  fVar43 = (float)((ulong)param_7[5] >> 0x20);
  fVar25 = (float)param_8[3];
  fVar28 = (float)param_8[5];
  fVar31 = (float)param_8[7];
  local_180 = CONCAT44(fVar33 * fVar20 + fVar37 * fVar21 + fVar41 * fVar22 + 0.0,
                       fVar32 * fVar20 + fVar36 * fVar21 + fVar40 * fVar22 + 0.0);
  uStack_178 = CONCAT44((float)((ulong)param_8[1] >> 0x20) +
                        fVar35 * fVar20 + fVar39 * fVar21 + fVar43 * fVar22,
                        fVar34 * fVar20 + fVar38 * fVar21 + fVar42 * fVar22 + 0.0);
  uStack_170 = CONCAT44(fVar33 * fVar23 + fVar37 * fVar24 + fVar41 * fVar25 + 0.0,
                        fVar32 * fVar23 + fVar36 * fVar24 + fVar40 * fVar25 + 0.0);
  uStack_168 = CONCAT44((float)((ulong)param_8[3] >> 0x20) +
                        fVar35 * fVar23 + fVar39 * fVar24 + fVar43 * fVar25,
                        fVar34 * fVar23 + fVar38 * fVar24 + fVar42 * fVar25 + 0.0);
  local_160 = CONCAT44(fVar33 * fVar26 + fVar37 * fVar27 + fVar41 * fVar28 + 0.0,
                       fVar32 * fVar26 + fVar36 * fVar27 + fVar40 * fVar28 + 0.0);
  uStack_158 = CONCAT44((float)((ulong)param_8[5] >> 0x20) +
                        fVar35 * fVar26 + fVar39 * fVar27 + fVar43 * fVar28,
                        fVar34 * fVar26 + fVar38 * fVar27 + fVar42 * fVar28 + 0.0);
  uStack_150 = CONCAT44(fVar33 * fVar29 + fVar37 * fVar30 + fVar41 * fVar31 + 0.0,
                        fVar32 * fVar29 + fVar36 * fVar30 + fVar40 * fVar31 + 0.0);
  uStack_148 = CONCAT44((float)((ulong)param_8[7] >> 0x20) +
                        fVar35 * fVar29 + fVar39 * fVar30 + fVar43 * fVar31,
                        fVar34 * fVar29 + fVar38 * fVar30 + fVar42 * fVar31 + 0.0);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar18 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 8) * 4];
  local_198 = param_1;
  (**(code **)(*plVar16 + 0x18))(plVar16);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar18 + 4)),&local_198,(ulong)bVar2 << 2);
  }
  lVar17 = plVar16[2];
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar18 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x14) * 4];
  local_198 = 1.0 - param_1 / param_2;
  (**(code **)(*plVar16 + 0x18))(plVar16);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar18 + 0x10)),&local_198,(ulong)bVar2 << 2);
  }
  lVar17 = plVar16[2];
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar18 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x20) * 4];
  local_198 = param_2 - param_1;
  (**(code **)(*plVar16 + 0x18))(plVar16);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar18 + 0x1c)),&local_198,(ulong)bVar2 << 2);
  }
  local_198 = param_3 * param_4;
  lVar17 = plVar16[2];
  fStack_194 = param_3;
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar18 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x2c) * 4];
  (**(code **)(*plVar16 + 0x18))(plVar16);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar18 + 0x28)),&local_198,(ulong)bVar2 << 2);
  }
  lVar17 = plVar16[2];
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar18 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x38) * 4];
  uVar19 = (ulong)bVar2;
  uVar9 = (**(code **)(*plVar16 + 0x18))(plVar16);
  if (bVar2 != 0) {
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x34);
    uVar10 = uVar19 & 3;
    if (bVar2 < 4) {
      lVar18 = 0;
      puVar12 = local_100;
    }
    else {
      lVar18 = 0;
      puVar11 = (undefined4 *)(uVar13 + lVar17 + 8);
      puVar12 = local_100;
      do {
        lVar18 = lVar18 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar18 != (uVar19 & 0xfc));
      lVar18 = -lVar18;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = puVar12;
      puVar14 = (undefined4 *)(lVar17 + uVar13 + lVar18 * 4);
      uVar15 = uVar10;
      do {
        puVar12 = puVar11 + 1;
        uVar15 = uVar15 - 1;
        *puVar14 = *puVar11;
        puVar11 = puVar12;
        puVar14 = puVar14 + 1;
      } while (uVar15 != 0);
    }
    uVar9 = uVar9 & 0xff;
    if (bVar2 < 4) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      puVar11 = (undefined4 *)(uVar13 + uVar9 * 4 + lVar17 + 8);
      do {
        lVar18 = lVar18 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar18 != (uVar19 & 0xfc));
      lVar18 = -lVar18;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = puVar12;
      puVar14 = (undefined4 *)(lVar17 + uVar13 + lVar18 * 4 + uVar9 * 4);
      uVar15 = uVar10;
      do {
        puVar12 = puVar11 + 1;
        uVar15 = uVar15 - 1;
        *puVar14 = *puVar11;
        puVar11 = puVar12;
        puVar14 = puVar14 + 1;
      } while (uVar15 != 0);
    }
    if (bVar2 < 4) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      puVar11 = (undefined4 *)(uVar13 + uVar9 * 8 + lVar17 + 8);
      do {
        lVar18 = lVar18 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar18 != (uVar19 & 0xfc));
      lVar18 = -lVar18;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = puVar12;
      puVar14 = (undefined4 *)(lVar17 + uVar13 + uVar9 * 8 + lVar18 * 4);
      uVar15 = uVar10;
      do {
        puVar12 = puVar11 + 1;
        uVar15 = uVar15 - 1;
        *puVar14 = *puVar11;
        puVar11 = puVar12;
        puVar14 = puVar14 + 1;
      } while (uVar15 != 0);
    }
    if (bVar2 < 4) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      puVar11 = (undefined4 *)(uVar13 + uVar9 * 0xc + lVar17 + 8);
      do {
        lVar18 = lVar18 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar18 != (uVar19 & 0xfc));
      lVar18 = -lVar18;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = (undefined4 *)(lVar17 + uVar13 + lVar18 * 4 + uVar9 * 0xc);
      do {
        uVar10 = uVar10 - 1;
        *puVar11 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar10 != 0);
    }
  }
  lVar17 = plVar16[2];
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar18 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x44) * 4];
  uVar19 = (ulong)bVar2;
  uVar9 = (**(code **)(*plVar16 + 0x18))(plVar16);
  if (bVar2 != 0) {
    uVar13 = (ulong)*(ushort *)(lVar18 + 0x40);
    uVar10 = uVar19 & 3;
    if (bVar2 < 4) {
      lVar18 = 0;
      puVar12 = local_140;
    }
    else {
      lVar18 = 0;
      puVar11 = (undefined4 *)(uVar13 + lVar17 + 8);
      puVar12 = local_140;
      do {
        lVar18 = lVar18 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar18 != (uVar19 & 0xfc));
      lVar18 = -lVar18;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = puVar12;
      puVar14 = (undefined4 *)(lVar17 + uVar13 + lVar18 * 4);
      uVar15 = uVar10;
      do {
        puVar12 = puVar11 + 1;
        uVar15 = uVar15 - 1;
        *puVar14 = *puVar11;
        puVar11 = puVar12;
        puVar14 = puVar14 + 1;
      } while (uVar15 != 0);
    }
    uVar9 = uVar9 & 0xff;
    if (bVar2 < 4) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      puVar11 = (undefined4 *)(uVar13 + uVar9 * 4 + lVar17 + 8);
      do {
        lVar18 = lVar18 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar18 != (uVar19 & 0xfc));
      lVar18 = -lVar18;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = puVar12;
      puVar14 = (undefined4 *)(lVar17 + uVar13 + lVar18 * 4 + uVar9 * 4);
      uVar15 = uVar10;
      do {
        puVar12 = puVar11 + 1;
        uVar15 = uVar15 - 1;
        *puVar14 = *puVar11;
        puVar11 = puVar12;
        puVar14 = puVar14 + 1;
      } while (uVar15 != 0);
    }
    if (bVar2 < 4) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      puVar11 = (undefined4 *)(uVar13 + uVar9 * 8 + lVar17 + 8);
      do {
        lVar18 = lVar18 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar18 != (uVar19 & 0xfc));
      lVar18 = -lVar18;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = puVar12;
      puVar14 = (undefined4 *)(lVar17 + uVar13 + uVar9 * 8 + lVar18 * 4);
      uVar15 = uVar10;
      do {
        puVar12 = puVar11 + 1;
        uVar15 = uVar15 - 1;
        *puVar14 = *puVar11;
        puVar11 = puVar12;
        puVar14 = puVar14 + 1;
      } while (uVar15 != 0);
    }
    if (bVar2 < 4) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      puVar11 = (undefined4 *)(uVar13 + uVar9 * 0xc + lVar17 + 8);
      do {
        lVar18 = lVar18 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar18 != (uVar19 & 0xfc));
      lVar18 = -lVar18;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = (undefined4 *)(lVar17 + uVar13 + lVar18 * 4 + uVar9 * 0xc);
      do {
        uVar10 = uVar10 - 1;
        *puVar11 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
      } while (uVar10 != 0);
    }
  }
  lVar17 = plVar16[2];
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar18 = *(long *)plVar16[1];
  uVar19 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x50) * 4];
  uVar9 = (**(code **)(*plVar16 + 0x18))(plVar16);
  if (uVar19 != 0) {
    __n = uVar19 * 4;
    pvVar1 = (void *)(lVar17 + (ulong)*(ushort *)(lVar18 + 0x4c));
    memcpy(pvVar1,&local_180,__n);
    lVar17 = (uVar9 & 0xff) * 4;
    puVar11 = local_140 + (uVar19 - 0x10);
    pvVar1 = (void *)((long)pvVar1 + lVar17);
    memcpy(pvVar1,puVar11,__n);
    pvVar1 = (void *)((long)pvVar1 + lVar17);
    memcpy(pvVar1,puVar11 + uVar19,__n);
    memcpy((void *)((long)pvVar1 + lVar17),puVar11 + uVar19 + uVar19,__n);
  }
  lVar17 = plVar16[2];
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar18 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x5c) * 4];
  (**(code **)(*plVar16 + 0x18))(plVar16);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar18 + 0x58)),&local_190,(ulong)bVar2 << 2);
  }
  lVar17 = plVar16[2];
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar18 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x68) * 4];
  (**(code **)(*plVar16 + 0x18))(plVar16);
  if (bVar2 != 0) {
    uVar19 = (ulong)*(ushort *)(lVar18 + 100);
    puVar11 = (undefined4 *)(param_5 + 0x230);
    uVar9 = (ulong)bVar2 & 3;
    if (bVar2 < 4) {
      lVar18 = 0;
    }
    else {
      lVar18 = 0;
      puVar12 = (undefined4 *)(uVar19 + lVar17 + 8);
      do {
        lVar18 = lVar18 + -4;
        puVar12[-2] = *puVar11;
        puVar12[-1] = puVar11[1];
        *puVar12 = puVar11[2];
        puVar14 = puVar11 + 3;
        puVar11 = puVar11 + 4;
        puVar12[1] = *puVar14;
        puVar12 = puVar12 + 4;
      } while (-lVar18 != ((ulong)bVar2 & 0xfc));
      lVar18 = -lVar18;
    }
    if ((bVar2 & 3) != 0) {
      puVar12 = (undefined4 *)(lVar17 + uVar19 + lVar18 * 4);
      do {
        uVar9 = uVar9 - 1;
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      } while (uVar9 != 0);
    }
  }
  bVar2 = *(byte *)((long)plVar16 + 0x39);
  uVar3 = *(ushort *)((long)plVar16 + 0x3a);
  lVar17 = plVar16[6];
  iVar6 = (**(code **)(*plVar16 + 0x20))(plVar16);
  iVar7 = (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar18 = plVar16[4];
  if (lVar18 != 0) {
    lVar4 = plVar16[6];
    lVar5 = plVar16[3];
    uVar8 = (**(code **)PTR_DAT_04bcf030)(lVar18);
    if ((uVar8 >> 2 & 1) != 0) {
      (*DAT_04c61fd8)(lVar18,(int)lVar5 +
                             (uint)uVar3 * (uint)bVar2 * (((int)lVar17 + iVar6) - 1U & -iVar7),
                      (int)lVar4);
    }
  }
  return;
}

