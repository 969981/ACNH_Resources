
void FUN_01940950(undefined8 *param_1,float *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  uint *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_5c;
  float fStack_58;
  float local_54;
  
  if (param_1 != (undefined8 *)0x0) {
    fVar6 = *param_2;
    fVar7 = **(float **)(param_2 + 6) - **(float **)(param_2 + 8);
    fVar8 = (*(float **)(param_2 + 6))[2] - (*(float **)(param_2 + 8))[2];
    fVar8 = SQRT(fVar8 * fVar8 + fVar7 * fVar7);
    fVar12 = param_2[2];
    fVar7 = param_2[3];
    if (fVar12 + fVar7 <= fVar8) {
      fVar8 = fVar12;
      if (fVar12 <= fVar7) {
        fVar8 = fVar7;
      }
      puVar5 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar3 = puVar5[3];
      uVar2 = *puVar5 ^ *puVar5 << 0xb;
      *puVar5 = puVar5[1];
      puVar5[1] = puVar5[2];
      uVar2 = uVar2 >> 8 ^ uVar3 >> 0x13 ^ uVar2 ^ uVar3;
      puVar5[2] = uVar3;
      puVar5[3] = uVar2;
      fVar8 = fVar12 + (fVar8 - fVar12) * ((float)(uVar2 >> 9 | 0x3f800000) + -1.0);
      fVar12 = param_2[2];
      fVar7 = param_2[3];
    }
    else if (fVar7 < fVar8) {
      fVar8 = fVar8 * 0.5;
    }
    fVar9 = param_2[5];
    if (fVar7 - fVar12 != 0.0) {
      fVar9 = param_2[4] + (fVar9 - param_2[4]) * ((fVar8 - fVar12) / (fVar7 - fVar12));
    }
    fVar7 = (float)(int)(fVar6 * 30.0);
    fVar6 = *(float *)(*(long *)(param_2 + 8) + 4) - *(float *)(*(long *)(param_2 + 6) + 4);
    if (fVar6 == 0.0) {
      *(float *)param_1[2] = fVar8 / fVar7 + param_2[1] * fVar7 * 0.5;
      *(float *)*param_1 = -param_2[1];
      *(float *)param_1[3] = (fVar9 / fVar7) * 4.0;
      puVar1 = param_1 + 3;
      param_1 = param_1 + 1;
      fVar6 = -*(float *)*puVar1 / fVar7 + -*(float *)*puVar1 / fVar7;
    }
    else {
      fVar10 = 0.0;
      *(float *)param_1[3] = (fVar9 / fVar7) * 4.0;
      *(float *)param_1[1] = -*(float *)param_1[3] / fVar7 + -*(float *)param_1[3] / fVar7;
      pfVar4 = *(float **)(param_2 + 6);
      fVar11 = pfVar4[1];
      fVar7 = **(float **)(param_2 + 8) - *pfVar4;
      fVar12 = (*(float **)(param_2 + 8))[2] - pfVar4[2];
      fVar9 = SQRT(fVar7 * fVar7 + 0.0 + fVar12 * fVar12);
      if (0.0 < fVar9) {
        fVar9 = 1.0 / fVar9;
        fVar7 = fVar7 * fVar9;
        fVar10 = fVar9 * 0.0;
        fVar12 = fVar12 * fVar9;
      }
      fVar9 = *(float *)param_1[3];
      fVar13 = 1.0;
      local_5c = *pfVar4 + fVar8 * fVar7;
      fStack_58 = fVar11 + fVar8 * fVar10;
      local_54 = pfVar4[2] + fVar8 * fVar12;
      if (0.0 < fVar6) {
        do {
          fVar9 = fVar9 + *(float *)param_1[1];
          fVar11 = fVar11 + fVar9;
          if ((fVar9 <= 0.0) && (fVar6 = (float)FUN_015cb8d4(&local_5c,1), fVar11 <= fVar6)) break;
          fVar13 = fVar13 + 1.0;
        } while (fVar13 < 100.0);
      }
      else {
        do {
          fVar9 = fVar9 + *(float *)param_1[1];
          fVar11 = fVar11 + fVar9;
          fVar6 = (float)FUN_015cb8d4(&local_5c,1);
          if (fVar11 <= fVar6) break;
          fVar13 = fVar13 + 1.0;
        } while (fVar13 < 100.0);
      }
      *(float *)param_1[2] = fVar8 / fVar13 + fVar13 * param_2[1] * 0.5;
      fVar6 = -param_2[1];
    }
    *(float *)*param_1 = fVar6;
  }
  return;
}

