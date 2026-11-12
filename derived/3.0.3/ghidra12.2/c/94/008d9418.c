
void FUN_008d9418(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
                 float *param_5,uint param_6,float *param_7)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar2 = FUN_0180ae80();
  if ((uVar2 & 1) == 0) {
LAB_008d9540:
    fVar11 = 5.1;
  }
  else {
    fVar4 = (float)FUN_008f9070();
    fVar7 = 0.0;
    fVar4 = *param_5 - fVar4;
    param_3 = param_5[2] - param_3;
    fVar8 = SQRT(fVar4 * fVar4 + 0.0 + param_3 * param_3);
    if (fVar8 <= 0.0) {
      fVar9 = 0.0;
    }
    else {
      fVar8 = 1.0 / fVar8;
      fVar4 = fVar4 * fVar8;
      fVar9 = fVar8 * 0.0;
      param_3 = param_3 * fVar8;
    }
    fVar8 = *param_5 - *(float *)(*(long *)(param_4 + 0xb0) + 0x290);
    fVar10 = param_5[2] - *(float *)(*(long *)(param_4 + 0xb0) + 0x298);
    fVar11 = SQRT(fVar8 * fVar8 + 0.0 + fVar10 * fVar10);
    if (0.0 < fVar11) {
      fVar11 = 1.0 / fVar11;
      fVar8 = fVar8 * fVar11;
      fVar7 = fVar11 * 0.0;
      fVar10 = fVar10 * fVar11;
    }
    fVar11 = 0.0;
    fVar4 = 1.0 - (fVar9 * fVar7 + fVar8 * fVar4 + fVar10 * param_3);
    if (DAT_04ced020 < fVar4) {
      if (DAT_04ced024 <= fVar4) goto LAB_008d9540;
      fVar11 = ((fVar4 - DAT_04ced020) / (DAT_04ced024 - DAT_04ced020) + 0.0) * 5.1;
    }
  }
  if ((param_6 & 1) == 0) {
    fVar4 = 0.0;
    fVar7 = 0.0;
    if (*(float **)(param_4 + 0x30) != (float *)0x0) {
      fVar7 = **(float **)(param_4 + 0x30);
    }
    if (*(float **)(param_4 + 0x38) != (float *)0x0) {
      fVar4 = **(float **)(param_4 + 0x38);
    }
    fVar9 = 0.0;
    fVar8 = 0.0;
    if (*(float **)(param_4 + 0x40) != (float *)0x0) {
      fVar8 = **(float **)(param_4 + 0x40);
    }
    if (*(float **)(param_4 + 0x48) != (float *)0x0) {
      fVar9 = **(float **)(param_4 + 0x48);
    }
    uVar2 = FUN_0180ae80();
    if ((uVar2 & 1) != 0) {
      if (DAT_05abff60 != 0) {
        if (DAT_05aed670 == 0) {
          puVar3 = &DAT_055c04a0;
        }
        else {
          puVar3 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar3 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar1 = FUN_006bd550(*puVar3,0);
            puVar3 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar1 != 0x758f7eaf) {
              puVar3 = &DAT_055c04a0;
            }
          }
        }
        if (*(int *)(puVar3 + 7) == -0x17df00c3) goto LAB_008d9780;
      }
      fVar5 = *param_5 - *(float *)(param_4 + 0x14);
      fVar10 = param_5[2] - *(float *)(param_4 + 0x1c);
      if (7.0 <= fVar5) {
        fVar5 = *(float *)(param_4 + 0x20) - *param_5;
        if (fVar5 < 7.0) {
          if (-9.5 < fVar5) {
            if (fVar5 < 7.0) {
              fVar4 = ((fVar11 + fVar4) * (fVar5 + 9.5)) / 16.5 - fVar11;
            }
          }
          else {
            fVar4 = -fVar11;
          }
        }
      }
      else if (fVar5 <= -9.5) {
        fVar7 = -fVar11;
      }
      else if (fVar5 < 7.0) {
        fVar7 = ((fVar11 + fVar7) * (fVar5 + 9.5)) / 16.5 - fVar11;
      }
      if (7.0 <= fVar10) {
        fVar10 = *(float *)(param_4 + 0x28) - param_5[2];
        if (fVar10 < 7.0) {
          if (fVar10 <= -9.5) {
            fVar9 = -fVar11;
          }
          else if (fVar10 < 7.0) {
            fVar9 = ((fVar11 + fVar9) * (fVar10 + 9.5)) / 16.5 - fVar11;
          }
        }
      }
      else if (fVar10 <= -9.5) {
        fVar8 = -fVar11;
      }
      else if (fVar10 < 7.0) {
        fVar8 = ((fVar11 + fVar8) * (fVar10 + 9.5)) / 16.5 - fVar11;
      }
    }
  }
  else {
    fVar4 = 5.0;
    fVar9 = 0.0;
    fVar8 = 0.0;
    fVar7 = 5.0;
  }
LAB_008d9780:
  fVar7 = fVar7 + *(float *)(param_4 + 0x14);
  fVar4 = *(float *)(param_4 + 0x20) - fVar4;
  fVar8 = fVar8 + *(float *)(param_4 + 0x1c);
  fVar6 = *param_5;
  fVar5 = param_5[1];
  fVar9 = *(float *)(param_4 + 0x28) - fVar9;
  fVar11 = param_5[2];
  fVar10 = fVar4;
  if (fVar6 <= fVar4) {
    fVar10 = fVar6;
  }
  fVar12 = fVar7;
  if (fVar7 <= fVar6) {
    fVar12 = fVar10;
  }
  if (fVar4 < fVar7) {
    fVar12 = (fVar7 + fVar4) * 0.5;
  }
  fVar4 = fVar9;
  if (fVar11 <= fVar9) {
    fVar4 = fVar11;
  }
  *param_5 = fVar12;
  fVar7 = fVar8;
  if (fVar8 <= fVar11) {
    fVar7 = fVar4;
  }
  if (fVar9 < fVar8) {
    fVar7 = (fVar8 + fVar9) * 0.5;
  }
  param_5[2] = fVar7;
  if (param_7 != (float *)0x0) {
    *param_7 = fVar12 - fVar6;
    param_7[1] = param_5[1] - fVar5;
    param_7[2] = param_5[2] - fVar11;
  }
  return;
}

