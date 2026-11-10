
void FUN_00345ff0(undefined1 param_1 [16],undefined8 *param_2,long param_3,int param_4)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  char cVar6;
  undefined1 auVar7 [16];
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  
  fVar12 = param_1._8_4_;
  uVar10 = param_1._0_8_;
  if (param_4 <= *(int *)(param_3 + 0x28) && *(long *)(param_3 + 0x1d0) != 0) {
    puVar2 = (undefined8 *)(*(long *)(param_3 + 0x1d0) + (long)param_4 * 0x10);
    uVar10 = *puVar2;
    fVar12 = *(float *)(puVar2 + 1);
  }
  lVar8 = (long)param_4 * 0x10;
  pfVar3 = (float *)(*(long *)(param_3 + 0x210) + lVar8);
  pfVar4 = (float *)(*(long *)(param_3 + 0x218) + lVar8);
  pfVar5 = (float *)(*(long *)(param_3 + 0x220) + lVar8);
  cVar6 = *(char *)(*(long *)(param_3 + 0xa0) + 0x793);
  fVar9 = (float)uVar10;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  if (cVar6 == '\x02') {
    pauVar1 = (undefined1 (*) [12])(param_3 + 0x400);
    uVar20 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x408) >> 0x20);
    fVar17 = (float)*(undefined8 *)*pauVar1;
    fVar18 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
    auVar27._12_4_ = uVar20;
    auVar27._0_12_ = *pauVar1;
    auVar7._12_4_ = uVar20;
    auVar7._0_12_ = *pauVar1;
    auVar27 = NEON_ext(auVar27,auVar7,8,1);
    fVar13 = *pfVar3;
    fVar15 = *pfVar4;
    fVar16 = *pfVar5;
    fVar24 = pfVar3[2];
    fVar19 = auVar27._0_4_;
    fVar26 = pfVar4[2];
    fVar21 = pfVar3[1];
    fVar23 = pfVar4[1];
  }
  else {
    if (cVar6 == '\0') {
      uVar14 = *(undefined8 *)(param_3 + 0x3d0);
      uVar22 = *(undefined8 *)(param_3 + 0x3e0);
      uVar25 = *(undefined8 *)(param_3 + 0x3f0);
      uVar10 = *(undefined8 *)(param_3 + 0x400);
      param_2[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x408) >> 0x20) +
                            (float)((ulong)*(undefined8 *)(param_3 + 0x3d8) >> 0x20) * fVar9 +
                            (float)((ulong)*(undefined8 *)(param_3 + 1000) >> 0x20) * fVar11 +
                            (float)((ulong)*(undefined8 *)(param_3 + 0x3f8) >> 0x20) * fVar12,
                            (float)*(undefined8 *)(param_3 + 0x408) +
                            (float)*(undefined8 *)(param_3 + 0x3d8) * fVar9 +
                            (float)*(undefined8 *)(param_3 + 1000) * fVar11 +
                            (float)*(undefined8 *)(param_3 + 0x3f8) * fVar12);
      *param_2 = CONCAT44((float)((ulong)uVar10 >> 0x20) +
                          (float)((ulong)uVar14 >> 0x20) * fVar9 +
                          (float)((ulong)uVar22 >> 0x20) * fVar11 +
                          (float)((ulong)uVar25 >> 0x20) * fVar12,
                          (float)uVar10 +
                          (float)uVar14 * fVar9 + (float)uVar22 * fVar11 + (float)uVar25 * fVar12);
      return;
    }
    fVar13 = *pfVar3;
    fVar15 = *pfVar4;
    fVar16 = *pfVar5;
    fVar24 = pfVar3[2];
    fVar17 = pfVar3[3];
    fVar21 = pfVar3[1];
    fVar26 = pfVar4[2];
    fVar18 = pfVar4[3];
    fVar23 = pfVar4[1];
    fVar19 = pfVar5[3];
  }
  param_2[1] = CONCAT44(fVar9 * 0.0 + fVar11 * 0.0 + fVar12 * 0.0 + 0.0,
                        fVar19 + fVar16 * fVar9 + pfVar5[1] * fVar11 + pfVar5[2] * fVar12);
  *param_2 = CONCAT44(fVar18 + fVar15 * fVar9 + fVar23 * fVar11 + fVar26 * fVar12,
                      fVar17 + fVar13 * fVar9 + fVar21 * fVar11 + fVar24 * fVar12);
  return;
}

