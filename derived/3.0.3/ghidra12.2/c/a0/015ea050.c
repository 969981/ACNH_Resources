
void FUN_015ea050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  float fVar2;
  undefined *puVar3;
  long lVar4;
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
  
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  puVar3 = PTR_DAT_04bb2200;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  lVar4 = *(long *)(*(long *)puVar3 + 0x78);
  if (lVar4 != 0) {
    fVar17 = *(float *)(param_1 + 2);
    fVar24 = *(float *)((long)param_1 + 0x1c);
    fVar5 = *(float *)(param_1 + 4);
    fVar19 = *(float *)((long)param_1 + 0x14);
    fVar6 = *(float *)((long)param_1 + 0x24);
    fVar18 = *(float *)(param_1 + 3);
    fVar7 = *(float *)(param_1 + 5);
    fVar22 = *(float *)((long)param_1 + 0x2c);
    fVar23 = *(float *)(lVar4 + 0x40) * 0.017453292 * ((fVar22 + *(float *)(lVar4 + 0x38)) / 160.0);
    fVar2 = 57600.0 / (*(float *)(lVar4 + 0x40) * 6.2831855) + fVar24;
    fVar8 = cosf(fVar23);
    if (fVar8 == 0.0) {
      fVar8 = 0.001;
    }
    else {
      fVar8 = cosf(fVar23);
    }
    fVar9 = sinf(fVar23);
    fVar25 = *(float *)(*(long *)(*(long *)puVar3 + 0x78) + 0x3c);
    fVar10 = *(float *)(*(long *)(*(long *)puVar3 + 0x78) + 0x40);
    fVar11 = sinf(fVar23);
    fVar12 = cosf(fVar23);
    if (fVar12 == 0.0) {
      fVar12 = 0.001;
    }
    else {
      fVar12 = cosf(fVar23);
    }
    fVar20 = *(float *)(*(long *)(*(long *)puVar3 + 0x78) + 0x3c);
    fVar13 = sinf(fVar23);
    fVar14 = cosf(fVar23);
    if (fVar14 == 0.0) {
      fVar14 = 0.001;
    }
    else {
      fVar14 = cosf(fVar23);
    }
    fVar21 = *(float *)(*(long *)(*(long *)puVar3 + 0x78) + 0x3c);
    fVar15 = sinf(fVar23);
    fVar16 = cosf(fVar23);
    if (fVar16 == 0.0) {
      fVar23 = 0.001;
    }
    else {
      fVar23 = cosf(fVar23);
    }
    lVar4 = *(long *)puVar3;
    *(float *)(param_1 + 2) =
         (-(fVar5 * fVar11) + fVar12 * fVar17) * fVar20 + (1.0 - fVar20) * fVar17;
    *(float *)((long)param_1 + 0x14) =
         (-(fVar6 * fVar13) + fVar14 * fVar19) * fVar21 + (1.0 - fVar21) * fVar19;
    *(float *)(param_1 + 4) = (fVar5 * fVar12 + fVar11 * fVar17) * fVar20 + (1.0 - fVar20) * fVar5;
    *(float *)((long)param_1 + 0x24) =
         (fVar6 * fVar14 + fVar13 * fVar19) * fVar21 + (1.0 - fVar21) * fVar6;
    fVar5 = *(float *)(*(long *)(lVar4 + 0x78) + 0x3c);
    *(float *)(param_1 + 3) = (-(fVar7 * fVar15) + fVar23 * fVar18) * fVar5 + (1.0 - fVar5) * fVar18
    ;
    *(float *)((long)param_1 + 0x1c) =
         fVar24 * (1.0 - fVar25) + fVar25 * (fVar8 * fVar2 + -57600.0 / (fVar10 * 6.2831855));
    *(float *)(param_1 + 5) = (fVar7 * fVar23 + fVar15 * fVar18) * fVar5 + (1.0 - fVar5) * fVar7;
    *(float *)((long)param_1 + 0x2c) = fVar9 * fVar2 * fVar25 + (1.0 - fVar25) * fVar22;
  }
  return;
}

