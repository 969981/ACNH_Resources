
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_003a60d0(float param_1,long param_2,long param_3,uint *param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  puVar3 = (undefined8 *)(param_3 + (long)param_5 * 0x50);
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04bcef90);
  fVar6 = fVar6 / *(float *)PTR_FloatPi_04bcedc8;
  pfVar2 = (float *)(PTR_SinCosSampleTable_04bcef98 +
                    ((ulong)(long)((float)param_4[8] * fVar6) >> 0x18 & 0xff) * 0x10);
  pfVar1 = (float *)(PTR_SinCosSampleTable_04bcef98 +
                    ((ulong)(long)(fVar6 * (float)param_4[9]) >> 0x18 & 0xff) * 0x10);
  fVar4 = (float)((uint)(long)((float)param_4[8] * fVar6) & 0xffffff) * 5.9604645e-08;
  fVar8 = pfVar2[1] + fVar4 * pfVar2[3];
  fVar4 = *pfVar2 + fVar4 * pfVar2[2];
  fVar10 = (float)((uint)(long)(fVar6 * (float)param_4[9]) & 0xffffff) * 5.9604645e-08;
  pfVar2 = (float *)(PTR_SinCosSampleTable_04bcef98 +
                    ((ulong)(long)(fVar6 * (float)param_4[10]) >> 0x18 & 0xff) * 0x10);
  fVar7 = pfVar1[1] + fVar10 * pfVar1[3];
  fVar10 = *pfVar1 + fVar10 * pfVar1[2];
  fVar6 = (float)((uint)(long)(fVar6 * (float)param_4[10]) & 0xffffff) * 5.9604645e-08;
  fVar12 = pfVar2[1] + fVar6 * pfVar2[3];
  fVar6 = *pfVar2 + fVar6 * pfVar2[2];
  fVar11 = fVar4 * fVar6;
  fVar4 = fVar4 * fVar12;
  puVar3[5] = CONCAT44((float)((ulong)puVar3[5] >> 0x20) + param_1 * 0.0,
                       (float)puVar3[5] + (fVar8 * fVar12 + fVar7 * fVar11) * param_1);
  puVar3[4] = CONCAT44((float)((ulong)puVar3[4] >> 0x20) + (fVar8 * fVar7 * fVar6 - fVar4) * param_1
                       ,(float)puVar3[4] + fVar10 * fVar6 * param_1);
  puVar3[7] = CONCAT44((float)((ulong)puVar3[7] >> 0x20) + param_1 * 0.0,
                       (float)puVar3[7] + (-(fVar8 * fVar6) + fVar7 * fVar4) * param_1);
  puVar3[6] = CONCAT44((float)((ulong)puVar3[6] >> 0x20) +
                       (fVar11 + fVar12 * fVar8 * fVar7) * param_1,
                       (float)puVar3[6] + fVar10 * fVar12 * param_1);
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    uVar5 = *(undefined8 *)(param_4 + 1);
    puVar3[1] = CONCAT44((float)((ulong)puVar3[1] >> 0x20) + param_1 * 0.0,
                         (float)puVar3[1] + (float)param_4[3] * param_1);
    *puVar3 = CONCAT44((float)((ulong)*puVar3 >> 0x20) + (float)((ulong)uVar5 >> 0x20) * param_1,
                       (float)*puVar3 + (float)uVar5 * param_1);
    uVar5 = *(undefined8 *)(param_4 + 4);
    param_3 = param_3 + (long)param_5 * 0x50;
    pfVar2 = (float *)(param_3 + 0x44);
    fVar8 = *pfVar2;
    *(ulong *)(param_3 + 0x18) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20) + param_1 * 0.0,
                  (float)*(undefined8 *)(param_3 + 0x18) + (float)param_4[6] * param_1);
    *(ulong *)(param_3 + 0x10) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) +
                  (float)((ulong)uVar5 >> 0x20) * param_1,
                  (float)*(undefined8 *)(param_3 + 0x10) + (float)uVar5 * param_1);
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) | *param_4 ^ 0xffffffff;
  }
  else {
    fVar4 = powf((float)param_4[1],param_1);
    fVar6 = powf((float)param_4[2],param_1);
    fVar7 = powf((float)param_4[3],param_1);
    pfVar2 = (float *)(param_3 + (long)param_5 * 0x50 + 0x44);
    fVar8 = *pfVar2;
    if (0.001 <= ABS(fVar8)) {
      uVar9 = puVar3[1];
      uVar5 = *puVar3;
    }
    else {
      uVar5 = _DAT_041029f0;
      uVar9 = _UNK_041029f8;
    }
    puVar3[1] = CONCAT44((float)((ulong)uVar9 >> 0x20) * 0.0,fVar7 * (float)uVar9);
    *puVar3 = CONCAT44(fVar6 * (float)((ulong)uVar5 >> 0x20),fVar4 * (float)uVar5);
    uVar5 = *(undefined8 *)(param_4 + 4);
    param_3 = param_3 + (long)param_5 * 0x50;
    *(ulong *)(param_3 + 0x18) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x18) >> 0x20) + param_1 * 0.0,
                  (float)*(undefined8 *)(param_3 + 0x18) + (float)param_4[6] * param_1);
    *(ulong *)(param_3 + 0x10) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 0x10) >> 0x20) +
                  (float)((ulong)uVar5 >> 0x20) * param_1,
                  (float)*(undefined8 *)(param_3 + 0x10) + (float)uVar5 * param_1);
    *(uint *)(param_3 + 0x40) = *(uint *)(param_3 + 0x40) | *param_4 ^ 0xffffffff;
  }
  *pfVar2 = fVar8 + param_1;
  return;
}

