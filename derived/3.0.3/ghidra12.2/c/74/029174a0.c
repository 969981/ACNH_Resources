
undefined8 FUN_029174a0(long param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (*(uint *)(param_1 + 0x260) <= param_3) {
    return 0;
  }
  param_3 = param_3 & ((int)param_3 >> 0x1f ^ 0xffffffffU);
  param_1 = param_1 + 0x250;
  uVar3 = param_3 + 1;
  uVar1 = uVar3 & 3;
  if (2 < param_3) {
    uVar3 = uVar3 & 0xfffffffc;
    do {
      uVar3 = uVar3 - 4;
      param_1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 8) + 8);
    } while (uVar3 != 0);
  }
  for (; uVar1 != 0; uVar1 = uVar1 - 1) {
    param_1 = *(long *)(param_1 + 8);
  }
  uVar2 = 0;
  if ((param_1 != 0) && (param_1 != 0x40)) {
    uVar2 = 1;
    *param_2 = *(undefined4 *)(param_1 + -0xc);
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + -0x20));
    uVar4 = (ulong)(long)(fVar5 * 11930465.0) >> 0x18 & 0xff;
    fVar5 = (float)((uint)(long)(fVar5 * 11930465.0) & 0xffffff) * 5.9604645e-08;
    fVar6 = *(float *)(param_1 + -0x1c) + *(float *)(param_1 + -0x24) * 0.5 + 0.0;
    fVar7 = *(float *)(param_1 + -0x30) + 0.0;
    fVar9 = *(float *)(param_1 + -0x34) +
            fVar6 * ((float)(&DAT_04199798)[uVar4 * 4] + fVar5 * (float)(&DAT_0419979c)[uVar4 * 4]);
    fVar5 = fVar6 * ((float)(&DAT_041997a0)[uVar4 * 4] + fVar5 * (float)(&DAT_041997a4)[uVar4 * 4])
            + *(float *)(param_1 + -0x2c);
    param_2[1] = fVar9;
    param_2[2] = fVar7;
    param_2[3] = fVar5;
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + -0x20));
    uVar4 = (ulong)((fVar6 + 180.0) * 11930465.0);
    uVar3 = (uint)uVar4;
    param_2[4] = uVar3;
    uVar4 = uVar4 >> 0x19 & 0x7f;
    fVar6 = (float)(uVar3 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar8 = (float)(&DAT_04199798)[uVar4 * 4] + fVar6 * (float)(&DAT_0419979c)[uVar4 * 4];
    fVar11 = fVar8 * 0.0;
    fVar6 = (float)(&DAT_041997a0)[uVar4 * 4] + fVar6 * (float)(&DAT_041997a4)[uVar4 * 4];
    fVar6 = fVar6 + fVar6;
    fVar13 = fVar8 * (fVar8 + fVar8);
    fVar10 = (fVar8 + fVar8) * fVar11;
    fVar14 = fVar11 * (fVar11 + fVar11);
    fVar12 = fVar6 * fVar11;
    fVar6 = fVar8 * fVar6;
    fVar8 = fVar8 * (fVar11 + fVar11);
    param_2[3] = fVar5 + (fVar12 + fVar10) * 0.0 + (fVar14 - fVar6) * 0.0 +
                         ((1.0 - fVar14) - fVar13) * 10.0;
    param_2[1] = fVar9 + (fVar8 - fVar12) * 0.0 + ((1.0 - fVar13) - fVar14) * 0.0 +
                         (fVar6 + fVar14) * 10.0;
    param_2[2] = fVar7 + ((1.0 - fVar14) - fVar14) * 0.0 + (fVar12 + fVar8) * 0.0 +
                         (fVar10 - fVar12) * 10.0;
  }
  return uVar2;
}

