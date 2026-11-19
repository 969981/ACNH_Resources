
void FUN_03aa45f0(long param_1,uint param_2,uint *param_3)

{
  void *pvVar1;
  void *__src;
  byte bVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  size_t __n;
  ulong uVar15;
  long lVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
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
  uint uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  float local_bc;
  float fStack_b8;
  float local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  fVar19 = (float)param_3[0xd];
  fVar22 = (float)param_3[0xe];
  fVar20 = (float)param_3[0xf];
  uVar43 = param_2;
  if (*(uint *)(param_1 + 0x1a8) <= param_2) {
    uVar43 = 0;
  }
  pfVar17 = (float *)(*(long *)(param_1 + 0x1b0) + (long)(int)uVar43 * 0x1330);
  fVar28 = SQRT(fVar22 * fVar22 + fVar19 * fVar19 + fVar20 * fVar20);
  if (0.0 < fVar28) {
    fVar28 = 1.0 / fVar28;
    fVar19 = fVar19 * fVar28;
    fVar22 = fVar22 * fVar28;
    fVar20 = fVar20 * fVar28;
  }
  fVar19 = powf(((fVar22 * pfVar17[5] + fVar19 * pfVar17[4] + fVar20 * pfVar17[6]) * 0.0 +
                 (fVar22 * pfVar17[1] + fVar19 * *pfVar17 + fVar20 * pfVar17[2]) * 0.0 +
                fVar22 * pfVar17[9] + fVar19 * pfVar17[8] + fVar20 * pfVar17[10]) * 0.5 + 0.5,
                (float)param_3[0x11]);
  fVar20 = fVar19 * (float)param_3[0x10];
  if (param_3[0xc] == 1) {
    fVar22 = (float)param_3[5];
    fVar30 = (float)param_3[6];
    fVar25 = (float)param_3[7];
    fVar28 = (float)*(undefined8 *)pfVar17;
    fVar21 = (float)((ulong)*(undefined8 *)pfVar17 >> 0x20);
    fVar32 = (float)*(undefined8 *)(pfVar17 + 4);
    fVar36 = (float)((ulong)*(undefined8 *)(pfVar17 + 4) >> 0x20);
    fVar38 = (float)*(undefined8 *)(pfVar17 + 8);
    fVar39 = (float)((ulong)*(undefined8 *)(pfVar17 + 8) >> 0x20);
    fVar23 = (float)*(undefined8 *)(pfVar17 + 2);
    fVar27 = (float)*(undefined8 *)(pfVar17 + 6);
    fVar40 = (float)*(undefined8 *)(pfVar17 + 10);
    fVar24 = fVar20 * fVar28 + fVar21 * 0.0 + fVar23 * 0.0 + 0.0;
    fVar29 = fVar28 * 0.0 + fVar20 * fVar21 + fVar23 * 0.0 + 0.0;
    fVar34 = fVar28 * 0.0 + fVar21 * 0.0 + fVar20 * fVar23 + 0.0;
    fVar26 = (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20) +
             fVar22 * fVar28 + fVar30 * fVar21 + fVar25 * fVar23;
    fVar31 = fVar20 * fVar32 + fVar36 * 0.0 + fVar27 * 0.0 + 0.0;
    fVar33 = fVar32 * 0.0 + fVar20 * fVar36 + fVar27 * 0.0 + 0.0;
    fVar35 = fVar32 * 0.0 + fVar36 * 0.0 + fVar20 * fVar27 + 0.0;
    fVar37 = (float)((ulong)*(undefined8 *)(pfVar17 + 6) >> 0x20) +
             fVar22 * fVar32 + fVar30 * fVar36 + fVar25 * fVar27;
    fVar28 = fVar20 * fVar38 + fVar39 * 0.0 + fVar40 * 0.0 + 0.0;
    fVar21 = fVar38 * 0.0 + fVar20 * fVar39 + fVar40 * 0.0 + 0.0;
    fVar23 = fVar38 * 0.0 + fVar39 * 0.0 + fVar20 * fVar40 + 0.0;
    fVar30 = (float)((ulong)*(undefined8 *)(pfVar17 + 10) >> 0x20) +
             fVar22 * fVar38 + fVar30 * fVar39 + fVar25 * fVar40;
    fVar38 = (float)*(undefined8 *)(pfVar17 + 0x18);
    fVar39 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x18) >> 0x20);
    fVar20 = (float)*(undefined8 *)(pfVar17 + 0x1c);
    fVar25 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x1c) >> 0x20);
    fVar36 = (float)*(undefined8 *)(pfVar17 + 0x20);
    fVar27 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x20) >> 0x20);
    fVar41 = (float)*(undefined8 *)(pfVar17 + 0x24);
    fVar42 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x24) >> 0x20);
    fVar22 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x1e) >> 0x20);
    fVar40 = (float)*(undefined8 *)(pfVar17 + 0x1a);
    fVar32 = (float)*(undefined8 *)(pfVar17 + 0x1e);
    fVar46 = fVar24 * fVar20 + fVar31 * fVar25 + fVar28 * fVar32;
    fVar47 = fVar29 * fVar20 + fVar33 * fVar25 + fVar21 * fVar32;
    fVar48 = fVar34 * fVar20 + fVar35 * fVar25 + fVar23 * fVar32;
    fVar44 = fVar26 * fVar20 + fVar37 * fVar25 + fVar30 * fVar32;
    fVar20 = (float)*(undefined8 *)(pfVar17 + 0x22);
    fVar45 = fVar24 * fVar36 + fVar31 * fVar27 + fVar28 * fVar20;
    fVar49 = fVar29 * fVar36 + fVar33 * fVar27 + fVar21 * fVar20;
    fVar50 = fVar34 * fVar36 + fVar35 * fVar27 + fVar23 * fVar20;
    fVar51 = fVar26 * fVar36 + fVar37 * fVar27 + fVar30 * fVar20;
    fVar20 = (float)*(undefined8 *)(pfVar17 + 0x26);
    fVar25 = fVar24 * fVar41 + fVar31 * fVar42 + fVar28 * fVar20;
    fVar32 = fVar29 * fVar41 + fVar33 * fVar42 + fVar21 * fVar20;
    fVar36 = fVar34 * fVar41 + fVar35 * fVar42 + fVar23 * fVar20;
    fVar27 = fVar26 * fVar41 + fVar37 * fVar42 + fVar30 * fVar20;
    fVar41 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x22) >> 0x20);
    fVar20 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x26) >> 0x20);
    local_a0 = CONCAT44(fVar29 * fVar38 + fVar33 * fVar39 + fVar21 * fVar40 + 0.0,
                        fVar24 * fVar38 + fVar31 * fVar39 + fVar28 * fVar40 + 0.0);
    uStack_98 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar17 + 0x1a) >> 0x20) +
                         fVar26 * fVar38 + fVar37 * fVar39 + fVar30 * fVar40,
                         fVar34 * fVar38 + fVar35 * fVar39 + fVar23 * fVar40 + 0.0);
  }
  else {
    if (param_3[0xc] != 0) goto LAB_03aa4a1c;
    local_b0 = 0x3f80000000000000;
    local_e8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
    local_e0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
    local_d8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
    local_d0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
    local_bc = (pfVar17[0xd] * -0.0 + pfVar17[0xc] * -0.0) - pfVar17[0xe];
    fStack_b8 = ((float)((ulong)*(undefined8 *)(pfVar17 + 0x10) >> 0x20) * -0.0 +
                (float)*(undefined8 *)(pfVar17 + 0x10) * -0.0) -
                (float)*(undefined8 *)(pfVar17 + 0x12);
    local_f8 = *(undefined8 *)PTR_DAT_04bb2f80;
    local_f0 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
    local_c0 = 0;
    local_a8 = 0;
    uStack_c8 = 0;
    local_b4 = ((float)((ulong)*(undefined8 *)(pfVar17 + 0x14) >> 0x20) * -0.0 +
               (float)*(undefined8 *)(pfVar17 + 0x14) * -0.0) -
               (float)*(undefined8 *)(pfVar17 + 0x16);
    local_100 = &PTR_FUN_04b65548;
    FUN_038e4634(&local_100,&local_f8);
    local_120 = local_e8;
    uStack_118 = local_e0;
    local_110 = local_d8;
    uStack_108 = local_d0;
    local_130 = local_f8;
    uStack_128 = local_f0;
    FUN_007535b4(&local_130,&local_130);
    fVar29 = (float)local_130 * 0.0;
    fVar22 = (float)((ulong)local_130 >> 0x20);
    fVar32 = fVar22 * 0.0;
    fVar34 = (float)uStack_128 * 0.0;
    fVar28 = (float)((ulong)uStack_128 >> 0x20);
    fVar36 = fVar28 * 0.0;
    fVar21 = (float)local_120;
    fVar30 = (float)((ulong)local_120 >> 0x20);
    fVar24 = (float)uStack_118;
    fVar25 = (float)((ulong)uStack_118 >> 0x20);
    fVar26 = (float)local_110;
    fVar27 = (float)((ulong)local_110 >> 0x20);
    fVar31 = (float)uStack_108;
    fVar33 = (float)((ulong)uStack_108 >> 0x20);
    fVar39 = fVar20 * (fVar22 + fVar30 * 0.0 + fVar27 * 0.0 + 0.0);
    fVar22 = fVar20 * ((float)local_130 + fVar21 * 0.0 + fVar26 * 0.0 + 0.0);
    fVar23 = fVar20 * (fVar21 + fVar29 + fVar26 * 0.0 + 0.0);
    fVar42 = fVar20 * (fVar30 + fVar32 + fVar27 * 0.0 + 0.0);
    fVar44 = fVar20 * (fVar27 + fVar32 + fVar30 * 0.0 + 0.0);
    fVar40 = fVar20 * (fVar26 + fVar29 + fVar21 * 0.0 + 0.0);
    fVar45 = fVar20 * (fVar24 + fVar34 + fVar31 * 0.0 + 0.0);
    fVar32 = fVar20 * (fVar31 + fVar34 + fVar24 * 0.0 + 0.0);
    fVar20 = fVar20 * ((float)uStack_128 + fVar24 * 0.0 + fVar31 * 0.0 + 0.0);
    fVar30 = (float)param_3[6] + fVar25 + fVar36 + fVar33 * 0.0 + 0.0;
    fVar41 = (float)param_3[5] + fVar28 + fVar25 * 0.0 + fVar33 * 0.0 + 0.0;
    fVar36 = fVar33 + fVar36 + fVar25 * 0.0 + 0.0 + (float)param_3[7];
    fVar27 = (float)*(undefined8 *)(pfVar17 + 4);
    fVar28 = (float)*(undefined8 *)pfVar17;
    fVar46 = (float)*(undefined8 *)(pfVar17 + 8);
    fVar21 = (float)((ulong)*(undefined8 *)pfVar17 >> 0x20);
    fVar37 = (float)((ulong)*(undefined8 *)(pfVar17 + 4) >> 0x20);
    fVar47 = (float)((ulong)*(undefined8 *)(pfVar17 + 8) >> 0x20);
    fVar25 = (float)*(undefined8 *)(pfVar17 + 2);
    fVar38 = (float)*(undefined8 *)(pfVar17 + 6);
    fVar48 = (float)*(undefined8 *)(pfVar17 + 10);
    fVar24 = fVar22 * fVar28 + fVar23 * fVar21 + fVar40 * fVar25 + 0.0;
    fVar29 = fVar39 * fVar28 + fVar42 * fVar21 + fVar44 * fVar25 + 0.0;
    fVar34 = fVar20 * fVar28 + fVar45 * fVar21 + fVar32 * fVar25 + 0.0;
    fVar26 = (float)((ulong)*(undefined8 *)(pfVar17 + 2) >> 0x20) +
             fVar41 * fVar28 + fVar30 * fVar21 + fVar36 * fVar25;
    fVar31 = fVar22 * fVar27 + fVar23 * fVar37 + fVar40 * fVar38 + 0.0;
    fVar33 = fVar39 * fVar27 + fVar42 * fVar37 + fVar44 * fVar38 + 0.0;
    fVar35 = fVar20 * fVar27 + fVar45 * fVar37 + fVar32 * fVar38 + 0.0;
    fVar37 = (float)((ulong)*(undefined8 *)(pfVar17 + 6) >> 0x20) +
             fVar41 * fVar27 + fVar30 * fVar37 + fVar36 * fVar38;
    fVar28 = fVar22 * fVar46 + fVar23 * fVar47 + fVar40 * fVar48 + 0.0;
    fVar21 = fVar39 * fVar46 + fVar42 * fVar47 + fVar44 * fVar48 + 0.0;
    fVar23 = fVar20 * fVar46 + fVar45 * fVar47 + fVar32 * fVar48 + 0.0;
    fVar30 = (float)((ulong)*(undefined8 *)(pfVar17 + 10) >> 0x20) +
             fVar41 * fVar46 + fVar30 * fVar47 + fVar36 * fVar48;
    fVar38 = (float)*(undefined8 *)(pfVar17 + 0x18);
    fVar39 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x18) >> 0x20);
    fVar32 = (float)*(undefined8 *)(pfVar17 + 0x1c);
    fVar36 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x1c) >> 0x20);
    fVar20 = (float)*(undefined8 *)(pfVar17 + 0x20);
    fVar25 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x20) >> 0x20);
    fVar41 = (float)*(undefined8 *)(pfVar17 + 0x24);
    fVar42 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x24) >> 0x20);
    fVar22 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x1e) >> 0x20);
    fVar40 = (float)*(undefined8 *)(pfVar17 + 0x1a);
    fVar27 = (float)*(undefined8 *)(pfVar17 + 0x1e);
    fVar46 = fVar24 * fVar32 + fVar31 * fVar36 + fVar28 * fVar27;
    fVar47 = fVar29 * fVar32 + fVar33 * fVar36 + fVar21 * fVar27;
    fVar48 = fVar34 * fVar32 + fVar35 * fVar36 + fVar23 * fVar27;
    fVar44 = fVar26 * fVar32 + fVar37 * fVar36 + fVar30 * fVar27;
    fVar32 = (float)*(undefined8 *)(pfVar17 + 0x22);
    fVar45 = fVar24 * fVar20 + fVar31 * fVar25 + fVar28 * fVar32;
    fVar49 = fVar29 * fVar20 + fVar33 * fVar25 + fVar21 * fVar32;
    fVar50 = fVar34 * fVar20 + fVar35 * fVar25 + fVar23 * fVar32;
    fVar51 = fVar26 * fVar20 + fVar37 * fVar25 + fVar30 * fVar32;
    fVar20 = (float)*(undefined8 *)(pfVar17 + 0x26);
    fVar25 = fVar24 * fVar41 + fVar31 * fVar42 + fVar28 * fVar20;
    fVar32 = fVar29 * fVar41 + fVar33 * fVar42 + fVar21 * fVar20;
    fVar36 = fVar34 * fVar41 + fVar35 * fVar42 + fVar23 * fVar20;
    fVar27 = fVar26 * fVar41 + fVar37 * fVar42 + fVar30 * fVar20;
    fVar41 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x22) >> 0x20);
    fVar20 = (float)((ulong)*(undefined8 *)(pfVar17 + 0x26) >> 0x20);
    local_a0 = CONCAT44(fVar29 * fVar38 + fVar33 * fVar39 + fVar21 * fVar40 + 0.0,
                        fVar24 * fVar38 + fVar31 * fVar39 + fVar28 * fVar40 + 0.0);
    uStack_98 = CONCAT44((float)((ulong)*(undefined8 *)(pfVar17 + 0x1a) >> 0x20) +
                         fVar26 * fVar38 + fVar37 * fVar39 + fVar30 * fVar40,
                         fVar34 * fVar38 + fVar35 * fVar39 + fVar23 * fVar40 + 0.0);
  }
  local_90 = CONCAT44(fVar47 + 0.0,fVar46 + 0.0);
  uStack_88 = CONCAT44(fVar22 + fVar44,fVar48 + 0.0);
  local_80 = CONCAT44(fVar49 + 0.0,fVar45 + 0.0);
  uStack_78 = CONCAT44(fVar41 + fVar51,fVar50 + 0.0);
  local_70 = CONCAT44(fVar32 + 0.0,fVar25 + 0.0);
  uStack_68 = CONCAT44(fVar20 + fVar27,fVar36 + 0.0);
LAB_03aa4a1c:
  if (*param_3 <= param_2) {
    param_2 = 0;
  }
  plVar13 = (long *)(*(long *)(param_3 + 2) + (long)(int)param_2 * 0x78);
  lVar14 = plVar13[2];
  (**(code **)(*plVar13 + 0x20))(plVar13);
  (**(code **)(*plVar13 + 0x20))(plVar13);
  lVar16 = *(long *)plVar13[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar16 + 8) * 4];
  uVar8 = (**(code **)(*plVar13 + 0x18))(plVar13);
  if ((ulong)bVar2 != 0) {
    __n = (ulong)bVar2 * 4;
    pvVar1 = (void *)(lVar14 + (ulong)*(ushort *)(lVar16 + 4));
    memcpy(pvVar1,&local_a0,__n);
    lVar14 = (uVar8 & 0xff) * 4;
    pvVar1 = (void *)((long)pvVar1 + lVar14);
    memcpy(pvVar1,(void *)((long)&local_a0 + __n),__n);
    __src = (void *)((long)((long)&local_a0 + __n) + __n);
    pvVar1 = (void *)((long)pvVar1 + lVar14);
    memcpy(pvVar1,__src,__n);
    memcpy((void *)((long)pvVar1 + lVar14),(void *)((long)__src + __n),__n);
  }
  lVar14 = plVar13[2];
  (**(code **)(*plVar13 + 0x20))(plVar13);
  (**(code **)(*plVar13 + 0x20))(plVar13);
  lVar16 = *(long *)plVar13[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar16 + 0x14) * 4];
  uVar15 = (ulong)bVar2;
  uVar8 = (**(code **)(*plVar13 + 0x18))(plVar13);
  if (bVar2 != 0) {
    uVar10 = (ulong)*(ushort *)(lVar16 + 0x10);
    uVar9 = uVar15 & 3;
    if (bVar2 < 4) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      pfVar11 = (float *)(uVar10 + lVar14 + 8);
      do {
        lVar16 = lVar16 + -4;
        pfVar11[-2] = *pfVar17;
        pfVar11[-1] = pfVar17[1];
        *pfVar11 = pfVar17[2];
        pfVar18 = pfVar17 + 3;
        pfVar17 = pfVar17 + 4;
        pfVar11[1] = *pfVar18;
        pfVar11 = pfVar11 + 4;
      } while (-lVar16 != (uVar15 & 0xfc));
      lVar16 = -lVar16;
    }
    if ((bVar2 & 3) != 0) {
      pfVar11 = (float *)(lVar14 + uVar10 + lVar16 * 4);
      uVar12 = uVar9;
      pfVar18 = pfVar17;
      do {
        pfVar17 = pfVar18 + 1;
        uVar12 = uVar12 - 1;
        *pfVar11 = *pfVar18;
        pfVar11 = pfVar11 + 1;
        pfVar18 = pfVar17;
      } while (uVar12 != 0);
    }
    uVar8 = uVar8 & 0xff;
    if (bVar2 < 4) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      pfVar11 = (float *)(uVar10 + uVar8 * 4 + lVar14 + 8);
      do {
        lVar16 = lVar16 + -4;
        pfVar11[-2] = *pfVar17;
        pfVar11[-1] = pfVar17[1];
        *pfVar11 = pfVar17[2];
        pfVar18 = pfVar17 + 3;
        pfVar17 = pfVar17 + 4;
        pfVar11[1] = *pfVar18;
        pfVar11 = pfVar11 + 4;
      } while (-lVar16 != (uVar15 & 0xfc));
      lVar16 = -lVar16;
    }
    if ((bVar2 & 3) != 0) {
      pfVar11 = (float *)(lVar14 + uVar10 + lVar16 * 4 + uVar8 * 4);
      uVar12 = uVar9;
      pfVar18 = pfVar17;
      do {
        pfVar17 = pfVar18 + 1;
        uVar12 = uVar12 - 1;
        *pfVar11 = *pfVar18;
        pfVar11 = pfVar11 + 1;
        pfVar18 = pfVar17;
      } while (uVar12 != 0);
    }
    if (bVar2 < 4) {
      lVar16 = 0;
    }
    else {
      lVar16 = 0;
      pfVar11 = (float *)(uVar10 + uVar8 * 8 + lVar14 + 8);
      do {
        lVar16 = lVar16 + -4;
        pfVar11[-2] = *pfVar17;
        pfVar11[-1] = pfVar17[1];
        *pfVar11 = pfVar17[2];
        pfVar18 = pfVar17 + 3;
        pfVar17 = pfVar17 + 4;
        pfVar11[1] = *pfVar18;
        pfVar11 = pfVar11 + 4;
      } while (-lVar16 != (uVar15 & 0xfc));
      lVar16 = -lVar16;
    }
    if ((bVar2 & 3) != 0) {
      pfVar11 = (float *)(lVar14 + uVar10 + uVar8 * 8 + lVar16 * 4);
      do {
        uVar9 = uVar9 - 1;
        *pfVar11 = *pfVar17;
        pfVar11 = pfVar11 + 1;
        pfVar17 = pfVar17 + 1;
      } while (uVar9 != 0);
    }
  }
  lVar14 = plVar13[2];
  local_100 = (undefined **)CONCAT44(fVar19 * (float)param_3[9],fVar19 * (float)param_3[8]);
  local_f8 = CONCAT44(fVar19 * (float)param_3[0xb],fVar19 * (float)param_3[10]);
  (**(code **)(*plVar13 + 0x20))(plVar13);
  (**(code **)(*plVar13 + 0x20))(plVar13);
  lVar16 = *(long *)plVar13[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar16 + 0x20) * 4];
  (**(code **)(*plVar13 + 0x18))(plVar13);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar14 + (ulong)*(ushort *)(lVar16 + 0x1c)),&local_100,(ulong)bVar2 << 2);
  }
  uVar43 = param_3[0x12];
  lVar14 = plVar13[2];
  (**(code **)(*plVar13 + 0x20))(plVar13);
  (**(code **)(*plVar13 + 0x20))(plVar13);
  local_100 = (undefined **)CONCAT44(local_100._4_4_,uVar43);
  lVar16 = *(long *)plVar13[1];
  bVar2 = (&DAT_041b370c)[(ulong)*(byte *)(lVar16 + 0x2c) * 4];
  (**(code **)(*plVar13 + 0x18))(plVar13);
  if ((ulong)bVar2 != 0) {
    memcpy((void *)(lVar14 + (ulong)*(ushort *)(lVar16 + 0x28)),&local_100,(ulong)bVar2 << 2);
  }
  bVar2 = *(byte *)((long)plVar13 + 0x39);
  uVar3 = *(ushort *)((long)plVar13 + 0x3a);
  lVar14 = plVar13[6];
  iVar6 = (**(code **)(*plVar13 + 0x20))(plVar13);
  iVar7 = (**(code **)(*plVar13 + 0x20))(plVar13);
  lVar16 = plVar13[4];
  if (lVar16 != 0) {
    lVar4 = plVar13[6];
    lVar5 = plVar13[3];
    uVar43 = (**(code **)PTR_DAT_04bcf030)(lVar16);
    if ((uVar43 >> 2 & 1) != 0) {
      (*DAT_04c61fd8)(lVar16,(int)lVar5 +
                             (uint)uVar3 * (uint)bVar2 * (((int)lVar14 + iVar6) - 1U & -iVar7),
                      (int)lVar4);
    }
  }
  return;
}

