
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03a6aadc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 float param_5,long param_6,float *param_7,float *param_8,float *param_9,
                 int param_10,uint param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
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
  float fVar55;
  float fVar56;
  float fVar57;
  
  iVar10 = 100;
  if (*(int *)(param_6 + 0xc48) < 100) {
    iVar10 = *(int *)(param_6 + 0xc48) + 1;
  }
  *(int *)(param_6 + 0xc48) = iVar10;
  iVar10 = 0;
  if (*(int *)(param_6 + 0xc4c) < 100) {
    iVar10 = *(int *)(param_6 + 0xc4c);
  }
  *(int *)(param_6 + 0xc4c) = iVar10 + 1;
  lVar12 = param_6 + (long)*(int *)(param_6 + 0xc54) * 0x38;
  lVar8 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(lVar12 + 0x470));
  lVar9 = 0;
  if (*(long *)(lVar12 + 0x478) != 0) {
    lVar9 = *(long *)(lVar12 + 0x460) - *(long *)(*(long *)(lVar12 + 0x478) + 0x10);
  }
  puVar11 = (undefined8 *)(lVar8 + lVar9 + (long)iVar10 * 0x60);
  *(undefined4 *)(puVar11 + 8) = param_1;
  *(undefined4 *)((long)puVar11 + 0x44) = param_2;
  *(undefined4 *)(puVar11 + 9) = param_3;
  *(undefined4 *)((long)puVar11 + 0x4c) = param_4;
  puVar11[0xb] = 0;
  *(float *)(puVar11 + 10) = (float)param_10;
  *(float *)((long)puVar11 + 0x54) = param_5 * 0.5;
  uVar6 = _DAT_04102880;
  fVar13 = *param_9;
  fVar14 = param_9[1];
  fVar37 = fVar14 * param_5 * 0.5;
  fVar23 = param_9[2];
  fVar15 = -(fVar14 * param_5 * 0.5);
  fVar46 = (float)_UNK_04102888;
  fVar16 = sinf(*param_8);
  fVar17 = sinf(param_8[1]);
  fVar18 = sinf(param_8[2]);
  fVar19 = cosf(*param_8);
  fVar20 = cosf(param_8[1]);
  fVar21 = cosf(param_8[2]);
  uVar5 = _UNK_041023d8;
  uVar4 = _DAT_041023d0;
  fVar49 = -fVar17;
  fVar33 = fVar18 * fVar20;
  fVar38 = fVar20 * fVar21;
  fVar55 = fVar16 * fVar20;
  fVar20 = fVar19 * fVar20;
  fVar22 = fVar16 * fVar17 * fVar21 - fVar18 * fVar19;
  fVar25 = fVar19 * fVar21 + fVar18 * fVar16 * fVar17;
  fVar54 = *param_7;
  fVar56 = (float)uVar6;
  fVar57 = (float)((ulong)uVar6 >> 0x20);
  fVar39 = fVar16 * fVar18 + fVar17 * fVar19 * fVar21;
  uVar3 = (ulong)_UNK_04102208 >> 0x20;
  fVar26 = -(fVar16 * fVar21) + fVar17 * fVar18 * fVar19;
  fVar24 = param_7[1];
  fVar16 = fVar56 + 0.0 + 0.0;
  fVar18 = fVar57 + 0.0 + 0.0;
  fVar21 = fVar46 + 0.0 + 0.0;
  fVar27 = (float)_DAT_04102200 + fVar56 * 0.0 + 0.0 + 0.0;
  fVar29 = (float)((ulong)_DAT_04102200 >> 0x20) + fVar57 * 0.0 + 0.0 + 0.0;
  fVar31 = (float)_UNK_04102208 + fVar46 * 0.0 + 0.0 + 0.0;
  fVar47 = param_7[2];
  *(undefined4 *)((long)puVar11 + 0xc) = 0;
  *(undefined4 *)((long)puVar11 + 0x1c) = 0;
  *(undefined4 *)((long)puVar11 + 0x2c) = 0;
  fVar40 = fVar56 * 0.0 + 0.0 + (float)uVar4 + 0.0;
  fVar41 = fVar57 * 0.0 + 0.0 + (float)((ulong)uVar4 >> 0x20) + 0.0;
  fVar42 = fVar46 * 0.0 + 0.0 + (float)uVar5 + 0.0;
  fVar28 = fVar38 * fVar27 + fVar33 * fVar29 + fVar49 * fVar31 + 0.0;
  fVar30 = fVar22 * fVar27 + fVar25 * fVar29 + fVar55 * fVar31 + 0.0;
  fVar32 = fVar39 * fVar27 + fVar26 * fVar29 + fVar20 * fVar31 + 0.0;
  fVar34 = fVar38 * fVar16 + fVar33 * fVar18 + fVar49 * fVar21 + 0.0;
  fVar35 = fVar22 * fVar16 + fVar25 * fVar18 + fVar55 * fVar21 + 0.0;
  fVar36 = fVar39 * fVar16 + fVar26 * fVar18 + fVar20 * fVar21 + 0.0;
  fVar43 = (float)_DAT_041023c0;
  fVar44 = (float)((ulong)_DAT_041023c0 >> 0x20);
  fVar45 = (float)_UNK_041023c8;
  fVar48 = (float)((ulong)_UNK_041023c8 >> 0x20);
  fVar50 = (float)_DAT_041025a0;
  fVar51 = (float)((ulong)_DAT_041025a0 >> 0x20);
  fVar52 = (float)_UNK_041025a8;
  fVar53 = (float)((ulong)_UNK_041025a8 >> 0x20);
  fVar17 = fVar38 * fVar40 + fVar33 * fVar41 + fVar49 * fVar42 + 0.0;
  fVar19 = fVar22 * fVar40 + fVar25 * fVar41 + fVar55 * fVar42 + 0.0;
  fVar20 = fVar39 * fVar40 + fVar26 * fVar41 + fVar20 * fVar42 + 0.0;
  fVar33 = fVar43 * fVar34 + fVar56 * fVar35 + fVar50 * fVar36 + 0.0;
  fVar38 = fVar44 * fVar34 + fVar57 * fVar35 + fVar51 * fVar36 + 0.0;
  fVar39 = fVar45 * fVar34 + fVar46 * fVar35 + fVar52 * fVar36 + 0.0;
  fVar22 = fVar43 * fVar28 + fVar56 * fVar30 + fVar50 * fVar32 + 0.0;
  fVar25 = fVar44 * fVar28 + fVar57 * fVar30 + fVar51 * fVar32 + 0.0;
  fVar26 = fVar45 * fVar28 + fVar46 * fVar30 + fVar52 * fVar32 + 0.0;
  fVar43 = fVar43 * fVar17 + fVar56 * fVar19 + fVar50 * fVar20 + 0.0;
  fVar44 = fVar44 * fVar17 + fVar57 * fVar19 + fVar51 * fVar20 + 0.0;
  fVar46 = fVar45 * fVar17 + fVar46 * fVar19 + fVar52 * fVar20 + 0.0;
  *(float *)(puVar11 + 3) = fVar43 * 0.0 + fVar14 * fVar44 + fVar46 * 0.0 + 0.0;
  *(float *)(puVar11 + 1) = fVar13 * fVar43 + fVar44 * 0.0 + fVar46 * 0.0 + 0.0;
  *(float *)(puVar11 + 5) = fVar43 * 0.0 + fVar44 * 0.0 + fVar23 * fVar46 + 0.0;
  *(float *)(puVar11 + 7) =
       fVar37 * 0.0 + 0.0 + (float)((ulong)uVar5 >> 0x20) + fVar47 +
       fVar40 * 0.0 + fVar41 * 0.0 + fVar42 * 0.0 +
       fVar48 * fVar17 + fVar15 * fVar19 + fVar53 * fVar20 +
       fVar43 * 0.0 + fVar44 * 0.0 + fVar46 * 0.0;
  *puVar11 = CONCAT44(fVar13 * fVar33 + fVar38 * 0.0 + fVar39 * 0.0 + 0.0,
                      fVar13 * fVar22 + fVar25 * 0.0 + fVar26 * 0.0 + 0.0);
  puVar11[2] = CONCAT44(fVar33 * 0.0 + fVar14 * fVar38 + fVar39 * 0.0 + 0.0,
                        fVar22 * 0.0 + fVar14 * fVar25 + fVar26 * 0.0 + 0.0);
  *(undefined4 *)((long)puVar11 + 0x3c) = 0x3f800000;
  puVar11[4] = CONCAT44(fVar33 * 0.0 + fVar38 * 0.0 + fVar23 * fVar39 + 0.0,
                        fVar22 * 0.0 + fVar25 * 0.0 + fVar23 * fVar26 + 0.0);
  puVar11[6] = CONCAT44(fVar37 + 0.0 + fVar24 + fVar16 * 0.0 + fVar18 * 0.0 + fVar21 * 0.0 +
                        fVar48 * fVar34 + fVar15 * fVar35 + fVar53 * fVar36 +
                        fVar33 * 0.0 + fVar38 * 0.0 + fVar39 * 0.0,
                        (float)uVar3 + fVar37 * 0.0 + 0.0 + fVar54 +
                        fVar27 * 0.0 + fVar29 * 0.0 + fVar31 * 0.0 +
                        fVar48 * fVar28 + fVar15 * fVar30 + fVar53 * fVar32 +
                        fVar22 * 0.0 + fVar25 * 0.0 + fVar26 * 0.0);
  if ((param_11 & 1) != 0) {
    param_6 = param_6 + (long)*(int *)(param_6 + 0xc54) * 0x120;
    lVar9 = *(long *)(param_6 + 0x5c8);
    if (lVar9 != 0) {
      uVar1 = *(undefined4 *)(param_6 + 0x5e0);
      uVar2 = *(undefined4 *)(param_6 + 0x5c0);
      uVar7 = (*DAT_04c62000)(lVar9);
      if ((uVar7 >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x03a6af2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)PTR_DAT_04bcf350)(lVar9,uVar2,uVar1);
        return;
      }
    }
  }
  return;
}

