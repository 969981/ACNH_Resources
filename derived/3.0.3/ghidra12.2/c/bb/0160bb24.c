
void FUN_0160bb24(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar2 = *(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  iVar3 = FUN_00a90a00();
  iVar1 = 0;
  if (iVar3 != 0) {
    iVar1 = 0x1e - iVar3;
  }
  if (iVar2 != 1) {
    iVar1 = iVar3;
  }
  fVar7 = (float)(iVar1 + -0xf) / -15.0 + 1.0;
  if (iVar1 < 0x10) {
    fVar7 = (float)iVar1 / 15.0;
  }
  fVar6 = 1.0;
  if (fVar7 <= 1.0) {
    fVar6 = fVar7;
  }
  fVar5 = 0.0;
  if (0.0 <= fVar7) {
    fVar5 = fVar6;
  }
  fVar6 = powf(fVar5 * 1.75 + -0.875,5.0);
  fVar6 = fVar6 + 0.5;
  fVar7 = 1.0;
  if (fVar6 <= 1.0) {
    fVar7 = fVar6;
  }
  fVar10 = *(float *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) + 0x104);
  fVar5 = 0.0;
  if (0.0 <= fVar6) {
    fVar5 = fVar7;
  }
  pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x1b38) + 0xf0))(param_1 + 0x1b38);
  fVar11 = *pfVar4;
  pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x1980) + 0xf0))(param_1 + 0x1980);
  fVar6 = *pfVar4;
  fVar8 = 1.0 - fVar5 * 2.0;
  fVar7 = 1.0;
  if (fVar8 <= 1.0) {
    fVar7 = fVar8;
  }
  fVar9 = fVar5 * 2.0 + -1.0;
  fVar12 = 0.0;
  if (0.0 <= fVar8) {
    fVar12 = fVar7;
  }
  fVar7 = 1.0;
  if (fVar9 <= 1.0) {
    fVar7 = fVar9;
  }
  fVar5 = -(fVar5 * 2.0) - -1.0;
  if (0.0 <= fVar9) {
    fVar5 = fVar9;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar9) {
    fVar8 = fVar7;
  }
  pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x1b68) + 0xf0))(param_1 + 0x1b68);
  fVar9 = *pfVar4;
  pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x19b0) + 0xf0))(param_1 + 0x19b0);
  fVar7 = *pfVar4;
  pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x2c0) + 0xf0))(param_1 + 0x2c0);
  *pfVar4 = (fVar10 * ((1.0 - fVar5) + fVar12 * fVar11 + fVar8 * fVar6 + -1.0) + 1.0) * *pfVar4;
  pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x15e0) + 0xf0))(param_1 + 0x15e0);
  *pfVar4 = (fVar10 * ((1.0 - fVar5) + fVar12 * fVar9 + fVar8 * fVar7 + -1.0) + 1.0) * *pfVar4;
                    /* WARNING: Could not recover jumptable at 0x0160bd20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_2)(param_2);
  return;
}

