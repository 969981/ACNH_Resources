
void FUN_02946220(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  
  if ((*(byte *)(param_1 + 0x274) >> 6 & 1) == 0) {
    fVar13 = 1.0;
  }
  else {
    lVar4 = FUN_02945728(param_1);
    pfVar5 = (float *)(**(code **)(**(long **)(*(long *)(lVar4 + 0x4d0) +
                                              (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
    fVar13 = *pfVar5;
  }
  fVar9 = *(float *)(param_1 + 0x2b4);
  fVar15 = fVar9 - *(float *)(param_1 + 0x2a8);
  fVar11 = *(float *)(param_1 + 700);
  uVar14 = *(undefined4 *)(param_1 + 0x2b8);
  fVar16 = fVar11 - *(float *)(param_1 + 0x2b0);
  puVar3 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  fVar6 = -fVar15;
  if (0.0 <= fVar15) {
    fVar6 = fVar15;
  }
  uVar1 = puVar3[3];
  uVar2 = *puVar3 ^ *puVar3 << 0xb;
  *puVar3 = puVar3[1];
  puVar3[1] = puVar3[2];
  fVar15 = -fVar16;
  if (0.0 <= fVar16) {
    fVar15 = fVar16;
  }
  puVar3[2] = uVar1;
  puVar3[3] = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
  if (fVar6 <= fVar15) {
    fVar9 = fVar9 + 0.0;
    if ((fVar9 <= *(float *)(param_1 + 0x310)) || (*(float *)(param_1 + 0x314) <= fVar9))
    goto LAB_02946330;
  }
  else {
    fVar11 = fVar11 + 0.0;
    if ((fVar11 <= *(float *)(param_1 + 0x31c)) || (*(float *)(param_1 + 0x318) <= fVar11))
    goto LAB_02946330;
  }
  *(float *)(param_1 + 0x2b4) = fVar9;
  *(undefined4 *)(param_1 + 0x2b8) = uVar14;
  *(float *)(param_1 + 700) = fVar11;
LAB_02946330:
  fVar10 = *(float *)(param_1 + 0x2b4) - *(float *)(param_1 + 0x2a8);
  fVar12 = *(float *)(param_1 + 700) - *(float *)(param_1 + 0x2b0);
  uVar2 = FUN_006f0400(fVar10,fVar12);
  lVar4 = FUN_02945728(param_1);
  pfVar5 = (float *)(**(code **)(**(long **)(*(long *)(lVar4 + 0xcf0) +
                                            (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
  fVar6 = *pfVar5;
  pfVar5 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar2 >> 0x18) * 0x10);
  fVar11 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
  fVar15 = *pfVar5;
  fVar16 = pfVar5[1];
  fVar7 = pfVar5[2];
  fVar8 = pfVar5[3];
  lVar4 = FUN_02945728(param_1);
  pfVar5 = (float *)(**(code **)(**(long **)(*(long *)(lVar4 + 0xcf0) +
                                            (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
  fVar9 = *pfVar5;
  *(float *)(param_1 + 0x3a0) = fVar13 * fVar13 * fVar6 * (fVar7 + fVar11 * fVar8) * fVar9;
  *(float *)(param_1 + 0x398) = fVar13 * fVar13 * fVar6 * (fVar15 + fVar11 * fVar16) * fVar9;
  *(float *)(param_1 + 0x39c) = fVar13 * fVar9 * 0.0;
  lVar4 = FUN_02945728(param_1);
  pfVar5 = (float *)(**(code **)(**(long **)(*(long *)(lVar4 + 0xcf0) +
                                            (long)*(int *)(param_1 + 0x2fc) * 8) + 0xf0))();
  fVar6 = SQRT(fVar12 * fVar12 + fVar10 * fVar10) / *pfVar5;
  *(float *)(param_1 + 0x394) = fVar13 * (fVar6 + fVar6);
  return;
}

