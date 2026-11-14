
void FUN_01738814(long param_1,undefined8 param_2,float *param_3)

{
  ulong uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_c0 [32];
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  undefined4 local_64;
  
  fVar7 = *(float *)(param_1 + 0x58);
  fVar8 = *(float *)(param_1 + 0x60);
  fVar9 = *(float *)(param_1 + 100);
  if (((fVar7 == 0.0) && (*(float *)(param_1 + 0x5c) == 0.0)) && (fVar8 == 0.0)) {
    fVar10 = *(float *)(param_1 + 0x6c);
    if (((fVar9 == 0.0) && (*(float *)(param_1 + 0x68) == 0.0)) && (fVar10 == 0.0))
    goto LAB_01738a68;
  }
  else {
    fVar10 = *(float *)(param_1 + 0x6c);
  }
  fVar3 = fVar9 - fVar7;
  fVar6 = 0.0;
  fVar4 = fVar10 - fVar8;
  fVar5 = SQRT(fVar3 * fVar3 + 0.0 + fVar4 * fVar4);
  if (0.0 < fVar5) {
    fVar5 = 1.0 / fVar5;
    fVar3 = fVar3 * fVar5;
    fVar4 = fVar4 * fVar5;
  }
  uVar2 = FUN_006f0400(fVar3,fVar4);
  local_80 = 0;
  uVar1 = (ulong)(uVar2 >> 0x18);
  fVar3 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
  local_7c = 0x800000003f800000;
  local_88 = (float)(&DAT_04199798)[uVar1 * 4] + fVar3 * (float)(&DAT_0419979c)[uVar1 * 4];
  fStack_68 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar3 * (float)(&DAT_041997a4)[uVar1 * 4];
  uStack_84 = *(undefined4 *)(param_1 + 0x58);
  local_74 = *(undefined4 *)(param_1 + 0x5c);
  fStack_8c = local_88 * 0.0 - fStack_68 * 0.0;
  fStack_70 = fStack_68 * 0.0 * 0.0 - local_88;
  local_6c = local_88 * 0.0 + fStack_68 * 0.0;
  local_90 = fStack_68 + local_88 * 0.0 * 0.0;
  local_64 = *(undefined4 *)(param_1 + 0x60);
  FUN_007535b4(auStack_c0,&local_90);
  fStack_94 = fStack_94 + param_3[1] * fStack_9c + *param_3 * local_a0 + param_3[2] * local_98;
  if (0.0 < fStack_94) {
    fVar6 = 1.0;
    fVar7 = SQRT((fVar8 - fVar10) * (fVar8 - fVar10) + (fVar7 - fVar9) * (fVar7 - fVar9));
    if (fStack_94 <= fVar7) {
      fVar6 = fStack_94 / fVar7;
    }
  }
  fVar8 = *(float *)(param_1 + 0x54);
  fVar7 = 1.0;
  if (fVar8 <= 1.0) {
    fVar7 = fVar8;
  }
  fVar9 = 0.0;
  if (0.0 <= fVar8) {
    fVar9 = fVar7;
  }
  if (*(float *)(param_1 + 0x70) <= 0.5) {
    fVar6 = 1.0 - fVar6;
    if (fVar9 != fVar6) goto LAB_017389d8;
LAB_017389c4:
    fVar6 = fVar9;
  }
  else {
    if (fVar9 == fVar6) goto LAB_017389c4;
LAB_017389d8:
    fVar8 = fVar6 - fVar9;
    fVar7 = -fVar8;
    if (0.0 <= fVar8) {
      fVar7 = fVar8;
    }
    if (0.01 < fVar7) {
      fVar7 = fVar8 * 0.5;
      fVar6 = 0.01;
      if (fVar8 <= 0.0) {
        fVar6 = -0.3;
      }
      fVar10 = 0.3;
      if (fVar8 <= 0.0) {
        fVar10 = -0.01;
      }
      if (fVar7 <= fVar10) {
        fVar10 = fVar7;
      }
      if (fVar6 <= fVar7) {
        fVar6 = fVar10;
      }
      fVar6 = fVar9 + fVar6;
    }
  }
  fVar7 = 1.0;
  if (fVar6 <= 1.0) {
    fVar7 = fVar6;
  }
  fVar8 = 0.0;
  if (0.0 <= fVar6) {
    fVar8 = fVar7;
  }
  *(float *)(param_1 + 0x54) = fVar8;
LAB_01738a68:
  FUN_01738aa0(param_1,param_2);
  return;
}

