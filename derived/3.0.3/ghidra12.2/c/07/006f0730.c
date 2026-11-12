
void FUN_006f0730(uint *param_1,float *param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (param_2 != (float *)0x0) {
    uVar1 = (ulong)(*param_1 >> 0x15) & 0x7f0;
    fVar9 = *param_2;
    fVar10 = param_2[1];
    fVar2 = (float)(*param_1 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar3 = *(float *)((long)&DAT_04199798 + uVar1) +
            fVar2 * *(float *)((long)&DAT_0419979c + uVar1);
    fVar2 = *(float *)((long)&DAT_041997a0 + uVar1) +
            fVar2 * *(float *)((long)&DAT_041997a4 + uVar1);
    fVar5 = fVar3 * 0.0;
    fVar2 = fVar2 + fVar2;
    fVar7 = fVar3 * (fVar3 + fVar3);
    fVar4 = (fVar3 + fVar3) * fVar5;
    fVar8 = fVar5 * (fVar5 + fVar5);
    fVar6 = fVar2 * fVar5;
    fVar2 = fVar3 * fVar2;
    fVar3 = fVar3 * (fVar5 + fVar5);
    fVar5 = param_2[2];
    *param_2 = fVar10 * (fVar3 - fVar6) + fVar9 * ((1.0 - fVar7) - fVar8) + fVar5 * (fVar2 + fVar8);
    param_2[2] = fVar10 * (fVar6 + fVar4) + fVar9 * (fVar8 - fVar2) +
                 fVar5 * ((1.0 - fVar8) - fVar7);
    param_2[1] = fVar10 * ((1.0 - fVar8) - fVar8) + fVar9 * (fVar6 + fVar3) +
                 fVar5 * (fVar4 - fVar6);
  }
  return;
}

