
void FUN_03a6b810(float param_1,float param_2,float param_3,float param_4,long param_5,uint param_6,
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
  size_t __n;
  ulong uVar18;
  long lVar19;
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
  float local_188;
  float fStack_184;
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
  if (*(uint *)(param_5 + 0x1d8) <= param_6) {
    param_6 = 0;
  }
  plVar16 = (long *)(*(long *)(param_5 + 0x1e0) + (long)(int)param_6 * 0x78);
  uStack_98 = param_7[5];
  local_a0 = param_7[4];
  uStack_88 = DAT_04102218;
  uStack_90 = DAT_04102210;
  FUN_038e6ab4(local_100,&local_c0);
  FUN_038e6ab4(local_140,param_8);
  lVar17 = plVar16[2];
  fVar20 = (float)*param_8;
  fVar32 = (float)*param_7;
  fVar33 = (float)((ulong)*param_7 >> 0x20);
  fVar34 = (float)param_7[1];
  fVar35 = (float)((ulong)param_7[1] >> 0x20);
  fVar21 = (float)((ulong)*param_8 >> 0x20);
  fVar36 = (float)param_7[2];
  fVar38 = (float)((ulong)param_7[2] >> 0x20);
  fVar40 = (float)param_7[3];
  fVar42 = (float)((ulong)param_7[3] >> 0x20);
  fVar23 = (float)param_8[2];
  fVar24 = (float)((ulong)param_8[2] >> 0x20);
  fVar26 = (float)param_8[4];
  fVar27 = (float)((ulong)param_8[4] >> 0x20);
  fVar29 = (float)param_8[6];
  fVar30 = (float)((ulong)param_8[6] >> 0x20);
  fVar22 = (float)param_8[1];
  fVar37 = (float)param_7[4];
  fVar39 = (float)((ulong)param_7[4] >> 0x20);
  fVar41 = (float)param_7[5];
  fVar43 = (float)((ulong)param_7[5] >> 0x20);
  fVar25 = (float)param_8[3];
  fVar28 = (float)param_8[5];
  fVar31 = (float)param_8[7];
  local_180 = CONCAT44(fVar33 * fVar20 + fVar38 * fVar21 + fVar39 * fVar22 + 0.0,
                       fVar32 * fVar20 + fVar36 * fVar21 + fVar37 * fVar22 + 0.0);
  uStack_178 = CONCAT44((float)((ulong)param_8[1] >> 0x20) +
                        fVar35 * fVar20 + fVar42 * fVar21 + fVar43 * fVar22,
                        fVar34 * fVar20 + fVar40 * fVar21 + fVar41 * fVar22 + 0.0);
  uStack_170 = CONCAT44(fVar33 * fVar23 + fVar38 * fVar24 + fVar39 * fVar25 + 0.0,
                        fVar32 * fVar23 + fVar36 * fVar24 + fVar37 * fVar25 + 0.0);
  uStack_168 = CONCAT44((float)((ulong)param_8[3] >> 0x20) +
                        fVar35 * fVar23 + fVar42 * fVar24 + fVar43 * fVar25,
                        fVar34 * fVar23 + fVar40 * fVar24 + fVar41 * fVar25 + 0.0);
  local_160 = CONCAT44(fVar33 * fVar26 + fVar38 * fVar27 + fVar39 * fVar28 + 0.0,
                       fVar32 * fVar26 + fVar36 * fVar27 + fVar37 * fVar28 + 0.0);
  uStack_158 = CONCAT44((float)((ulong)param_8[5] >> 0x20) +
                        fVar35 * fVar26 + fVar42 * fVar27 + fVar43 * fVar28,
                        fVar34 * fVar26 + fVar40 * fVar27 + fVar41 * fVar28 + 0.0);
  uStack_150 = CONCAT44(fVar33 * fVar29 + fVar38 * fVar30 + fVar39 * fVar31 + 0.0,
                        fVar32 * fVar29 + fVar36 * fVar30 + fVar37 * fVar31 + 0.0);
  uStack_148 = CONCAT44((float)((ulong)param_8[7] >> 0x20) +
                        fVar35 * fVar29 + fVar42 * fVar30 + fVar43 * fVar31,
                        fVar34 * fVar29 + fVar40 * fVar30 + fVar41 * fVar31 + 0.0);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar19 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 8) * 4];
  local_188 = param_1;
  (**(code **)(*plVar16 + 0x18))(plVar16);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 4)),&local_188,(ulong)bVar2 << 2);
  }
  lVar17 = plVar16[2];
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar19 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x14) * 4];
  local_188 = 1.0 - param_1 / param_2;
  (**(code **)(*plVar16 + 0x18))(plVar16);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0x10)),&local_188,(ulong)bVar2 << 2);
  }
  lVar17 = plVar16[2];
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar19 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x20) * 4];
  local_188 = param_2 - param_1;
  (**(code **)(*plVar16 + 0x18))(plVar16);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0x1c)),&local_188,(ulong)bVar2 << 2);
  }
  local_188 = param_3 * param_4;
  lVar17 = plVar16[2];
  fStack_184 = param_3;
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar19 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x38) * 4];
  (**(code **)(*plVar16 + 0x18))(plVar16);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0x34)),&local_188,(ulong)bVar2 << 2);
  }
  lVar17 = plVar16[2];
  (**(code **)(*plVar16 + 0x20))(plVar16);
  (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar19 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x44) * 4];
  uVar18 = (ulong)bVar2;
  uVar9 = (**(code **)(*plVar16 + 0x18))(plVar16);
  if (bVar2 != 0) {
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x40);
    uVar10 = uVar18 & 3;
    if (bVar2 < 4) {
      lVar19 = 0;
      puVar12 = local_100;
    }
    else {
      lVar19 = 0;
      puVar11 = (undefined4 *)(uVar13 + lVar17 + 8);
      puVar12 = local_100;
      do {
        lVar19 = lVar19 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar19 != (uVar18 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = puVar12;
      puVar14 = (undefined4 *)(lVar17 + uVar13 + lVar19 * 4);
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
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar11 = (undefined4 *)(uVar13 + uVar9 * 4 + lVar17 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar19 != (uVar18 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = puVar12;
      puVar14 = (undefined4 *)(lVar17 + uVar13 + lVar19 * 4 + uVar9 * 4);
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
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar11 = (undefined4 *)(uVar13 + uVar9 * 8 + lVar17 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar19 != (uVar18 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = puVar12;
      puVar14 = (undefined4 *)(lVar17 + uVar13 + uVar9 * 8 + lVar19 * 4);
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
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar11 = (undefined4 *)(uVar13 + uVar9 * 0xc + lVar17 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar19 != (uVar18 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = (undefined4 *)(lVar17 + uVar13 + lVar19 * 4 + uVar9 * 0xc);
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
  lVar19 = *(long *)plVar16[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x50) * 4];
  uVar18 = (ulong)bVar2;
  uVar9 = (**(code **)(*plVar16 + 0x18))(plVar16);
  if (bVar2 != 0) {
    uVar13 = (ulong)*(ushort *)(lVar19 + 0x4c);
    uVar10 = uVar18 & 3;
    if (bVar2 < 4) {
      lVar19 = 0;
      puVar12 = local_140;
    }
    else {
      lVar19 = 0;
      puVar11 = (undefined4 *)(uVar13 + lVar17 + 8);
      puVar12 = local_140;
      do {
        lVar19 = lVar19 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar19 != (uVar18 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = puVar12;
      puVar14 = (undefined4 *)(lVar17 + uVar13 + lVar19 * 4);
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
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar11 = (undefined4 *)(uVar13 + uVar9 * 4 + lVar17 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar19 != (uVar18 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = puVar12;
      puVar14 = (undefined4 *)(lVar17 + uVar13 + lVar19 * 4 + uVar9 * 4);
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
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar11 = (undefined4 *)(uVar13 + uVar9 * 8 + lVar17 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar19 != (uVar18 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = puVar12;
      puVar14 = (undefined4 *)(lVar17 + uVar13 + uVar9 * 8 + lVar19 * 4);
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
      lVar19 = 0;
    }
    else {
      lVar19 = 0;
      puVar11 = (undefined4 *)(uVar13 + uVar9 * 0xc + lVar17 + 8);
      do {
        lVar19 = lVar19 + -4;
        puVar11[-2] = *puVar12;
        puVar11[-1] = puVar12[1];
        *puVar11 = puVar12[2];
        puVar14 = puVar12 + 3;
        puVar12 = puVar12 + 4;
        puVar11[1] = *puVar14;
        puVar11 = puVar11 + 4;
      } while (-lVar19 != (uVar18 & 0xfc));
      lVar19 = -lVar19;
    }
    if ((bVar2 & 3) != 0) {
      puVar11 = (undefined4 *)(lVar17 + uVar13 + lVar19 * 4 + uVar9 * 0xc);
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
  lVar19 = *(long *)plVar16[1];
  uVar18 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar19 + 0x5c) * 4];
  uVar9 = (**(code **)(*plVar16 + 0x18))(plVar16);
  if (uVar18 != 0) {
    pvVar1 = (void *)(lVar17 + (ulong)*(ushort *)(lVar19 + 0x58));
    __n = uVar18 * 4;
    memcpy(pvVar1,&local_180,__n);
    lVar17 = (uVar9 & 0xff) * 4;
    puVar11 = local_140 + (uVar18 - 0x10);
    pvVar1 = (void *)((long)pvVar1 + lVar17);
    memcpy(pvVar1,puVar11,__n);
    pvVar1 = (void *)((long)pvVar1 + lVar17);
    memcpy(pvVar1,puVar11 + uVar18,__n);
    memcpy((void *)((long)pvVar1 + lVar17),puVar11 + uVar18 + uVar18,__n);
  }
  bVar2 = *(byte *)((long)plVar16 + 0x39);
  uVar3 = *(ushort *)((long)plVar16 + 0x3a);
  lVar17 = plVar16[6];
  iVar6 = (**(code **)(*plVar16 + 0x20))(plVar16);
  iVar7 = (**(code **)(*plVar16 + 0x20))(plVar16);
  lVar19 = plVar16[4];
  if (lVar19 != 0) {
    lVar4 = plVar16[6];
    lVar5 = plVar16[3];
    uVar8 = (**(code **)PTR_DAT_04bcf030)(lVar19);
    if ((uVar8 >> 2 & 1) != 0) {
      (*DAT_04c61fd8)(lVar19,(int)lVar5 +
                             (uint)uVar3 * (uint)bVar2 * (((int)lVar17 + iVar6) - 1U & -iVar7),
                      (int)lVar4);
    }
  }
  return;
}

