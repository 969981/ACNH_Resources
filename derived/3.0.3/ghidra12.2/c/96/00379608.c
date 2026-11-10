
void FUN_00379608(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5,long param_6,undefined8 *param_7,
                 float *param_8,float *param_9,int param_10)

{
  float *pfVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  float *pfVar8;
  uint uVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar28;
  ulong uVar27;
  float fVar29;
  undefined8 uVar30;
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
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  ushort local_80;
  ushort local_7e;
  
  uVar30 = param_4._8_8_;
  uVar26 = param_4._0_8_;
  uVar23 = param_3._8_8_;
  uVar22 = param_3._0_8_;
  fVar31 = param_2._12_4_;
  fVar15 = param_2._8_4_;
  fVar19 = param_2._4_4_;
  bVar2 = *(byte *)(param_9 + 4);
  if ((bVar2 & 1) == 0) {
    if ((bVar2 >> 1 & 1) == 0) {
      plVar4 = *(long **)(*(long *)(param_5 + 0x18) + (long)param_10 * 0x10 + 8);
      if (plVar4 == (long *)0x0) {
        uVar11 = 0;
        fVar14 = 0.0;
        fVar19 = 0.0;
        fVar15 = 0.0;
        fVar31 = 0.0;
      }
      else {
        (**(code **)(*plVar4 + 0x20))(&local_80);
        fVar14 = (float)NEON_ucvtf((uint)local_80);
        uVar9 = NEON_ucvtf((uint)local_7e);
        uVar11 = (ulong)uVar9;
      }
    }
    else {
      fVar14 = *param_8;
      fVar19 = 0.0;
      fVar15 = 0.0;
      fVar31 = 0.0;
      uVar11 = (ulong)(uint)param_8[1];
    }
  }
  else {
    fVar14 = *(float *)(*(long *)(param_6 + 0xc0) + 0x28);
    fVar19 = 0.0;
    fVar15 = 0.0;
    fVar31 = 0.0;
    uVar11 = (ulong)*(uint *)(*(long *)(param_6 + 0xc0) + 0x2c);
  }
  lVar6 = ((ulong)*(uint *)(param_5 + 0x10) & 3) * 0x10;
  uVar9 = (uint)*(byte *)(*(long *)(param_5 + 0x18) +
                          lVar6 + ((ulong)(*(uint *)(param_5 + 0x10) >> 2) & 3) * 0x14 +
                          (long)param_10 * 0x10 + 1);
  uVar3 = 0;
  if (3 < uVar9 - 3) goto joined_r0x003797e4;
  lVar6 = *(long *)(param_5 + 0x18) + lVar6;
  pfVar8 = (float *)(lVar6 + (long)param_10 * 0x14);
  fVar31 = fVar14 * 0.5;
  fVar10 = (float)uVar11;
  fVar20 = fVar10 * 0.5;
  fVar24 = (float)(DAT_04102210 >> 0x20);
  fVar12 = (float)((ulong)DAT_04102218 >> 0x20);
  uVar11 = DAT_04102210;
  uVar3 = DAT_04102218;
  switch(uVar9) {
  case 3:
    fVar32 = 0.5 / param_9[2];
    fVar16 = 1.0 / (-fVar20 - fVar20);
    fVar13 = (*param_9 / param_9[2]) / fVar14;
    fVar45 = 1.0 / (fVar31 + fVar31);
    fVar38 = (fVar45 + fVar45) * fVar32;
    fVar54 = 0.5 / param_9[3];
    fVar52 = (float)*(undefined8 *)(param_6 + 0x98);
    fVar53 = (float)((ulong)*(undefined8 *)(param_6 + 0x98) >> 0x20);
    fVar46 = (float)*(undefined8 *)(param_6 + 0x90);
    fVar47 = (float)((ulong)*(undefined8 *)(param_6 + 0x90) >> 0x20);
    fVar33 = (fVar16 + fVar16) * fVar54;
    fVar19 = (float)*(undefined8 *)(param_6 + 0x80);
    fVar15 = (float)((ulong)*(undefined8 *)(param_6 + 0x80) >> 0x20);
    fVar25 = (float)*(undefined8 *)(param_6 + 0x88);
    fVar29 = (float)((ulong)*(undefined8 *)(param_6 + 0x88) >> 0x20);
    fVar17 = fVar19 * 0.0;
    fVar18 = fVar15 * 0.0;
    fVar28 = fVar25 * 0.0;
    fVar21 = fVar29 * 0.0;
    fVar34 = (float)*(undefined8 *)(param_6 + 0xa0);
    fVar35 = (float)((ulong)*(undefined8 *)(param_6 + 0xa0) >> 0x20);
    fVar36 = (float)*(undefined8 *)(param_6 + 0xa8);
    fVar37 = (float)((ulong)*(undefined8 *)(param_6 + 0xa8) >> 0x20);
    fVar14 = fVar19 * fVar38 + fVar46 * 0.0 + fVar34 * 0.0 + 0.0;
    fVar19 = fVar15 * fVar38 + fVar47 * 0.0 + fVar35 * 0.0 + 0.0;
    fVar15 = fVar25 * fVar38 + fVar52 * 0.0 + fVar36 * 0.0 + 0.0;
    fVar31 = (0.5 - fVar13) + fVar32 * -((fVar31 - fVar31) * fVar45) +
             fVar29 * fVar38 + fVar53 * 0.0 + fVar37 * 0.0;
    uVar22 = CONCAT44(fVar18 + fVar47 * fVar33 + fVar35 * 0.0 + 0.0,
                      fVar17 + fVar46 * fVar33 + fVar34 * 0.0 + 0.0);
    uVar23 = CONCAT44(fVar21 + fVar53 * fVar33 + fVar37 * 0.0 +
                      (param_9[1] / param_9[3]) / fVar10 + 0.5 +
                      fVar54 * -((fVar20 - fVar20) * fVar16),
                      fVar28 + fVar52 * fVar33 + fVar36 * 0.0 + 0.0);
    uVar26 = CONCAT44(fVar18 + fVar47 * 0.0 + fVar35 * 0.0 + fVar24,
                      fVar17 + fVar46 * 0.0 + fVar34 * 0.0 + (float)DAT_04102210);
    uVar30 = CONCAT44(fVar21 + fVar53 * 0.0 + fVar37 * 0.0 + fVar12,
                      fVar28 + fVar52 * 0.0 + fVar36 * 0.0 + (float)DAT_04102218);
    goto joined_r0x003797e4;
  case 4:
    if ((bVar2 >> 2 & 1) == 0) {
      fVar12 = 0.5 / param_9[2];
      fVar15 = 1.0 / (-fVar20 - fVar20);
      fVar24 = 0.5 / param_9[3];
      fVar25 = (fVar15 + fVar15) * fVar24;
      fVar19 = 1.0 / (fVar31 + fVar31);
      fVar13 = (fVar19 + fVar19) * fVar12;
      fVar16 = 0.0;
      fVar31 = (0.5 - ((*(float *)((long)param_7 + 0xc) + *param_9) / param_9[2]) / fVar14) +
               fVar12 * -((fVar31 - fVar31) * fVar19);
      fVar18 = 0.0;
      fVar17 = 0.0;
      fVar10 = ((*(float *)((long)param_7 + 0x1c) + param_9[1]) / param_9[3]) / fVar10 + 0.5 +
               fVar24 * -((fVar20 - fVar20) * fVar15);
      fVar28 = 0.0;
      uVar27 = DAT_04102210;
      uVar30 = DAT_04102218;
    }
    else {
      fVar34 = 0.5 / param_9[3];
      fVar54 = 0.5 / param_9[2];
      fVar21 = 1.0 / (fVar31 + fVar31);
      fVar28 = (float)param_7[1];
      fVar29 = (float)((ulong)param_7[1] >> 0x20);
      fVar18 = (float)*param_7;
      fVar25 = (float)((ulong)*param_7 >> 0x20);
      fVar45 = (float)param_7[2];
      fVar46 = (float)((ulong)param_7[2] >> 0x20);
      fVar47 = (float)param_7[3];
      fVar15 = (fVar21 + fVar21) * fVar54;
      fVar13 = (float)param_7[4];
      fVar17 = (float)param_7[5];
      fVar36 = -fVar13 * fVar46;
      fVar52 = 1.0 / (-fVar20 - fVar20);
      fVar19 = (fVar52 + fVar52) * fVar34;
      fVar35 = -fVar45 * fVar25;
      fVar16 = (float)((ulong)param_7[4] >> 0x20);
      fVar32 = -fVar18 * fVar16;
      fVar33 = 0.0;
      fVar53 = fVar25 * fVar47 * fVar13 + fVar18 * fVar46 * fVar17 + fVar45 * fVar28 * fVar16 +
               fVar36 * fVar28 + fVar35 * fVar17 + fVar32 * fVar47;
      if (fVar53 != 0.0) {
        fVar33 = 1.0 / fVar53;
      }
      fVar38 = (-(fVar16 * fVar47) + fVar17 * fVar46) * fVar33;
      fVar43 = -(fVar25 * fVar17) + fVar28 * fVar16;
      fVar53 = (-(fVar46 * fVar28) + fVar47 * fVar25) * fVar33;
      fVar39 = fVar28 * -fVar13 + fVar17 * fVar18;
      fVar32 = fVar32 + fVar25 * fVar13;
      fVar25 = fVar43 * fVar33;
      fVar37 = (fVar17 * -fVar45 + fVar47 * fVar13) * fVar33;
      fVar42 = fVar39 * fVar33;
      fVar41 = (fVar36 + fVar16 * fVar45) * fVar33;
      fVar36 = fVar32 * fVar33;
      fVar40 = (fVar47 * -fVar18 + fVar28 * fVar45) * fVar33;
      fVar16 = (float)((ulong)param_7[3] >> 0x20);
      fVar45 = (fVar35 + fVar46 * fVar18) * fVar33;
      fVar13 = (float)((ulong)param_7[5] >> 0x20);
      fVar18 = (-(fVar43 * fVar33) * fVar16 - fVar38 * fVar29) - fVar53 * fVar13;
      fVar35 = (-(fVar39 * fVar33) * fVar16 - fVar37 * fVar29) - fVar40 * fVar13;
      fVar47 = (-(fVar32 * fVar33) * fVar16 - fVar41 * fVar29) - fVar45 * fVar13;
      fVar29 = fVar25 * 0.0;
      fVar46 = fVar18 * 0.0;
      fVar13 = fVar38 * fVar15 + fVar37 * 0.0 + fVar41 * 0.0 + 0.0;
      fVar16 = fVar25 * fVar15 + fVar42 * 0.0 + fVar36 * 0.0 + 0.0;
      fVar17 = fVar53 * fVar15 + fVar40 * 0.0 + fVar45 * 0.0 + 0.0;
      fVar31 = (0.5 - (*param_9 / param_9[2]) / fVar14) + fVar54 * -((fVar31 - fVar31) * fVar21) +
               fVar18 * fVar15 + fVar35 * 0.0 + fVar47 * 0.0;
      fVar18 = fVar38 * 0.0 + fVar37 * fVar19 + fVar41 * 0.0 + 0.0;
      fVar25 = fVar29 + fVar42 * fVar19 + fVar36 * 0.0 + 0.0;
      fVar28 = fVar53 * 0.0 + fVar40 * fVar19 + fVar45 * 0.0 + 0.0;
      fVar10 = (param_9[1] / param_9[3]) / fVar10 + 0.5 + fVar34 * -((fVar20 - fVar20) * fVar52) +
               fVar46 + fVar35 * fVar19 + fVar47 * 0.0;
      uVar27 = CONCAT44(fVar29 + fVar42 * 0.0 + fVar36 * 0.0 + fVar24,
                        fVar38 * 0.0 + fVar37 * 0.0 + fVar41 * 0.0 + (float)DAT_04102210);
      uVar30 = CONCAT44(fVar46 + fVar35 * 0.0 + fVar47 * 0.0 + fVar12,
                        fVar53 * 0.0 + fVar40 * 0.0 + fVar45 * 0.0 + (float)DAT_04102218);
    }
    fVar52 = (float)*(undefined8 *)(param_6 + 0x98);
    fVar53 = (float)((ulong)*(undefined8 *)(param_6 + 0x98) >> 0x20);
    fVar46 = (float)*(undefined8 *)(param_6 + 0x90);
    fVar47 = (float)((ulong)*(undefined8 *)(param_6 + 0x90) >> 0x20);
    fVar20 = (float)*(undefined8 *)(param_6 + 0x80);
    fVar29 = (float)((ulong)*(undefined8 *)(param_6 + 0x80) >> 0x20);
    fVar21 = (float)*(undefined8 *)(param_6 + 0x88);
    fVar45 = (float)((ulong)*(undefined8 *)(param_6 + 0x88) >> 0x20);
    fVar54 = (float)*(undefined8 *)(param_6 + 0xa0);
    fVar32 = (float)((ulong)*(undefined8 *)(param_6 + 0xa0) >> 0x20);
    fVar33 = (float)*(undefined8 *)(param_6 + 0xa8);
    fVar34 = (float)((ulong)*(undefined8 *)(param_6 + 0xa8) >> 0x20);
    fVar14 = fVar20 * fVar13 + fVar46 * fVar16 + fVar54 * fVar17 + 0.0;
    fVar19 = fVar29 * fVar13 + fVar47 * fVar16 + fVar32 * fVar17 + 0.0;
    fVar15 = fVar21 * fVar13 + fVar52 * fVar16 + fVar33 * fVar17 + 0.0;
    fVar31 = fVar31 + fVar45 * fVar13 + fVar53 * fVar16 + fVar34 * fVar17;
    uVar22 = CONCAT44(fVar29 * fVar18 + fVar47 * fVar25 + fVar32 * fVar28 + 0.0,
                      fVar20 * fVar18 + fVar46 * fVar25 + fVar54 * fVar28 + 0.0);
    uVar23 = CONCAT44(fVar10 + fVar45 * fVar18 + fVar53 * fVar25 + fVar34 * fVar28,
                      fVar21 * fVar18 + fVar52 * fVar25 + fVar33 * fVar28 + 0.0);
    fVar10 = (float)uVar27;
    fVar24 = (float)(uVar27 >> 0x20);
    fVar12 = (float)uVar30;
    uVar26 = CONCAT44(fVar29 * fVar10 + fVar47 * fVar24 + fVar32 * fVar12 + 0.0,
                      fVar20 * fVar10 + fVar46 * fVar24 + fVar54 * fVar12 + 0.0);
    uVar30 = CONCAT44((float)((ulong)uVar30 >> 0x20) +
                      fVar45 * fVar10 + fVar53 * fVar24 + fVar34 * fVar12,
                      fVar21 * fVar10 + fVar52 * fVar24 + fVar33 * fVar12 + 0.0);
    goto joined_r0x003797e4;
  case 5:
    fVar19 = param_9[1] / param_9[3];
    fVar31 = *param_9 / param_9[2];
    fVar15 = ((*(float *)(param_6 + 0x108) / fVar14) * 0.5) / param_9[2];
    fVar24 = ((*(float *)(param_6 + 0x10c) / fVar10) * -0.5) / param_9[3];
    break;
  case 6:
    fVar31 = (*(float *)((long)param_7 + 0xc) + *param_9) / param_9[2];
    fVar19 = (*(float *)((long)param_7 + 0x1c) + param_9[1]) / param_9[3];
    fVar15 = ((*(float *)(param_6 + 0x108) / fVar14) * 0.5) / param_9[2];
    fVar24 = ((*(float *)(param_6 + 0x10c) / fVar10) * -0.5) / param_9[3];
  }
  fVar16 = 0.5 - fVar31 / fVar14;
  fVar19 = fVar19 / fVar10 + 0.5;
  FUN_00387858(&local_80);
  lVar6 = lVar6 + (long)param_10 * 0x14;
  fVar31 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
  uVar11 = (ulong)(*(float *)(lVar6 + 8) * (fVar31 / *(float *)PTR_FloatDegree180_04bcedf8));
  pfVar1 = (float *)(PTR_SinCosSampleTable_04bcef98 + (uVar11 >> 0x18 & 0xff) * 0x10);
  fVar31 = (float)((uint)uVar11 & 0xffffff) * 5.9604645e-08;
  fVar17 = pfVar1[1] + fVar31 * pfVar1[3];
  fVar31 = *pfVar1 + fVar31 * pfVar1[2];
  fVar41 = *(float *)(lVar6 + 0xc) * fVar31;
  fVar36 = -(fVar17 * *(float *)(lVar6 + 0x10));
  fVar17 = *(float *)(lVar6 + 0xc) * fVar17;
  fVar18 = *pfVar8;
  fVar21 = pfVar8[1];
  fVar31 = *(float *)(lVar6 + 0x10) * fVar31;
  FUN_003878b0(&local_80);
  fVar28 = (float)*(undefined8 *)(param_6 + 0x98);
  fVar29 = (float)((ulong)*(undefined8 *)(param_6 + 0x98) >> 0x20);
  fVar10 = (float)*(undefined8 *)(param_6 + 0x90);
  fVar25 = (float)((ulong)*(undefined8 *)(param_6 + 0x90) >> 0x20);
  fVar45 = (float)*(undefined8 *)(param_6 + 0x10);
  fVar14 = (float)*(undefined8 *)(param_6 + 0x80);
  fVar12 = (float)((ulong)*(undefined8 *)(param_6 + 0x80) >> 0x20);
  fVar20 = (float)*(undefined8 *)(param_6 + 0x88);
  fVar13 = (float)((ulong)*(undefined8 *)(param_6 + 0x88) >> 0x20);
  fVar46 = (float)((ulong)*(undefined8 *)(param_6 + 0x10) >> 0x20);
  fVar52 = (float)*(undefined8 *)(param_6 + 0x20);
  fVar53 = (float)((ulong)*(undefined8 *)(param_6 + 0x20) >> 0x20);
  fVar47 = (float)*(undefined8 *)(param_6 + 0x18);
  fVar48 = (float)*(undefined8 *)(param_6 + 0xa0);
  fVar49 = (float)((ulong)*(undefined8 *)(param_6 + 0xa0) >> 0x20);
  fVar50 = (float)*(undefined8 *)(param_6 + 0xa8);
  fVar51 = (float)((ulong)*(undefined8 *)(param_6 + 0xa8) >> 0x20);
  fVar54 = (float)*(undefined8 *)(param_6 + 0x28);
  fVar32 = fVar14 * fVar45 + fVar10 * fVar46 + fVar48 * fVar47 + 0.0;
  fVar33 = fVar12 * fVar45 + fVar25 * fVar46 + fVar49 * fVar47 + 0.0;
  fVar34 = fVar20 * fVar45 + fVar28 * fVar46 + fVar50 * fVar47 + 0.0;
  fVar35 = (float)((ulong)*(undefined8 *)(param_6 + 0x18) >> 0x20) +
           fVar13 * fVar45 + fVar29 * fVar46 + fVar51 * fVar47;
  fVar37 = fVar14 * fVar52 + fVar10 * fVar53 + fVar48 * fVar54 + 0.0;
  fVar38 = fVar12 * fVar52 + fVar25 * fVar53 + fVar49 * fVar54 + 0.0;
  fVar39 = fVar20 * fVar52 + fVar28 * fVar53 + fVar50 * fVar54 + 0.0;
  fVar40 = (float)((ulong)*(undefined8 *)(param_6 + 0x28) >> 0x20) +
           fVar13 * fVar52 + fVar29 * fVar53 + fVar51 * fVar54;
  fVar45 = (float)*(undefined8 *)(param_6 + 0x30);
  fVar46 = (float)((ulong)*(undefined8 *)(param_6 + 0x30) >> 0x20);
  fVar52 = (float)*(undefined8 *)(param_6 + 0x40);
  fVar53 = (float)((ulong)*(undefined8 *)(param_6 + 0x40) >> 0x20);
  fVar47 = (float)*(undefined8 *)(param_6 + 0x38);
  fVar54 = (float)*(undefined8 *)(param_6 + 0x48);
  fVar42 = fVar14 * fVar45 + fVar10 * fVar46 + fVar48 * fVar47 + 0.0;
  fVar43 = fVar12 * fVar45 + fVar25 * fVar46 + fVar49 * fVar47 + 0.0;
  fVar44 = fVar20 * fVar45 + fVar28 * fVar46 + fVar50 * fVar47 + 0.0;
  fVar45 = (float)((ulong)*(undefined8 *)(param_6 + 0x38) >> 0x20) +
           fVar13 * fVar45 + fVar29 * fVar46 + fVar51 * fVar47;
  fVar10 = fVar14 * fVar52 + fVar10 * fVar53 + fVar48 * fVar54 + 0.0;
  fVar12 = fVar12 * fVar52 + fVar25 * fVar53 + fVar49 * fVar54 + 0.0;
  fVar20 = fVar20 * fVar52 + fVar28 * fVar53 + fVar50 * fVar54 + 0.0;
  fVar13 = (float)((ulong)*(undefined8 *)(param_6 + 0x48) >> 0x20) +
           fVar13 * fVar52 + fVar29 * fVar53 + fVar51 * fVar54;
  fVar25 = fVar15 * fVar41 + fVar36 * 0.0 + 0.0 + 0.0;
  fVar28 = fVar41 * 0.0 + fVar24 * fVar36 + 0.0 + 0.0;
  fVar29 = fVar41 * 0.0 + fVar36 * 0.0 + 0.0 + 0.0;
  fVar18 = fVar18 + 0.5 + fVar41 * -0.5 + fVar36 * -0.5 + fVar16 * fVar41 + fVar19 * fVar36 + 0.0;
  fVar14 = fVar15 * fVar17 + fVar31 * 0.0 + 0.0 + 0.0;
  fVar46 = fVar17 * 0.0 + fVar24 * fVar31 + 0.0 + 0.0;
  fVar47 = fVar17 * 0.0 + fVar31 * 0.0 + 0.0 + 0.0;
  fVar31 = (1.0 - (1.0 - (fVar21 + 0.5 + fVar17 * -0.5 + fVar31 * -0.5))) +
           fVar16 * fVar17 + fVar19 * fVar31 + 0.0;
  fVar17 = fVar15 * 0.0 + 0.0 + 0.0;
  fVar24 = fVar24 * 0.0 + 0.0 + 0.0;
  fVar16 = fVar16 * 0.0 + fVar19 * 0.0 + 0.0;
  uVar22 = CONCAT44(fVar33 * fVar14 + fVar38 * fVar46 + fVar43 * fVar47 + fVar12 * fVar31,
                    fVar32 * fVar14 + fVar37 * fVar46 + fVar42 * fVar47 + fVar10 * fVar31);
  uVar23 = CONCAT44(fVar35 * fVar14 + fVar40 * fVar46 + fVar45 * fVar47 + fVar13 * fVar31,
                    fVar34 * fVar14 + fVar39 * fVar46 + fVar44 * fVar47 + fVar20 * fVar31);
  fVar14 = fVar32 * fVar25 + fVar37 * fVar28 + fVar42 * fVar29 + fVar10 * fVar18;
  fVar19 = fVar33 * fVar25 + fVar38 * fVar28 + fVar43 * fVar29 + fVar12 * fVar18;
  fVar15 = fVar34 * fVar25 + fVar39 * fVar28 + fVar44 * fVar29 + fVar20 * fVar18;
  fVar31 = fVar35 * fVar25 + fVar40 * fVar28 + fVar45 * fVar29 + fVar13 * fVar18;
  uVar26 = CONCAT44(fVar33 * fVar17 + fVar38 * fVar24 + fVar43 * 0.0 + fVar12 * fVar16,
                    fVar32 * fVar17 + fVar37 * fVar24 + fVar42 * 0.0 + fVar10 * fVar16);
  uVar30 = CONCAT44(fVar35 * fVar17 + fVar40 * fVar24 + fVar45 * 0.0 + fVar13 * fVar16,
                    fVar34 * fVar17 + fVar39 * fVar24 + fVar44 * 0.0 + fVar20 * fVar16);
  uVar11 = CONCAT44(fVar12,fVar10);
  uVar3 = CONCAT44(fVar13,fVar20);
joined_r0x003797e4:
  if (param_10 == 2) {
    lVar5 = *(long *)(*(long *)(param_6 + 200) + 0x38);
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5 + (ulong)*(uint *)(param_5 + 0x30);
    }
    puVar7 = (undefined8 *)(lVar6 + 0x160);
  }
  else if (param_10 == 1) {
    lVar5 = *(long *)(*(long *)(param_6 + 200) + 0x38);
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5 + (ulong)*(uint *)(param_5 + 0x30);
    }
    puVar7 = (undefined8 *)(lVar6 + 0x120);
  }
  else {
    if (param_10 != 0) {
      return;
    }
    lVar5 = *(long *)(*(long *)(param_6 + 200) + 0x38);
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = lVar5 + (ulong)*(uint *)(param_5 + 0x30);
    }
    puVar7 = (undefined8 *)(lVar6 + 0xe0);
  }
  puVar7[1] = CONCAT44(fVar31,fVar15);
  *puVar7 = CONCAT44(fVar19,fVar14);
  puVar7[3] = uVar23;
  puVar7[2] = uVar22;
  puVar7[5] = uVar30;
  puVar7[4] = uVar26;
  puVar7[7] = uVar3;
  puVar7[6] = uVar11;
  return;
}

