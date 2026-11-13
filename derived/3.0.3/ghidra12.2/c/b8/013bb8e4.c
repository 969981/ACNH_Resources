
void FUN_013bb8e4(long param_1,float *param_2,float *param_3,uint *param_4)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar1 = (ulong)(param_4[1] >> 0x14) & 0xff0;
  fVar3 = (float)(param_4[1] & 0xffffff) * 5.9604645e-08;
  fVar4 = (float)(param_4[2] & 0xffffff) * 5.9604645e-08;
  fVar5 = (float)(*param_4 & 0xffffff) * 5.9604645e-08;
  uVar2 = (ulong)(param_4[2] >> 0x14) & 0xff0;
  fVar6 = *(float *)((long)&DAT_04199798 + uVar1) + fVar3 * *(float *)((long)&DAT_0419979c + uVar1);
  fVar3 = *(float *)((long)&DAT_041997a0 + uVar1) + fVar3 * *(float *)((long)&DAT_041997a4 + uVar1);
  uVar1 = (ulong)(*param_4 >> 0x14) & 0xff0;
  fVar7 = *(float *)((long)&DAT_04199798 + uVar2) + fVar4 * *(float *)((long)&DAT_0419979c + uVar2);
  fVar4 = *(float *)((long)&DAT_041997a0 + uVar2) + fVar4 * *(float *)((long)&DAT_041997a4 + uVar2);
  fVar10 = *(float *)((long)&DAT_04199798 + uVar1) + fVar5 * *(float *)((long)&DAT_0419979c + uVar1)
  ;
  fVar5 = *(float *)((long)&DAT_041997a0 + uVar1) + fVar5 * *(float *)((long)&DAT_041997a4 + uVar1);
  fVar13 = *(float *)(param_1 + 0x31c);
  fVar11 = *(float *)(param_1 + 0x314);
  fVar12 = *(float *)(param_1 + 0x318);
  fVar9 = param_3[2];
  fVar8 = param_3[1];
  *param_2 = *param_3 -
             (fVar12 * (fVar10 * fVar6 * fVar4 - fVar3 * fVar7) +
              fVar11 * (fVar3 * fVar4 + fVar6 * fVar7 * fVar10) + fVar13 * fVar5 * fVar6 + 0.0);
  param_2[1] = fVar8 - (((fVar12 * fVar5 * fVar4 + fVar11 * fVar5 * fVar7) - fVar13 * fVar10) + 0.0)
  ;
  param_2[2] = fVar9 - (fVar12 * (fVar6 * fVar7 + fVar3 * fVar4 * fVar10) +
                        fVar11 * (fVar10 * fVar3 * fVar7 - fVar6 * fVar4) + fVar13 * fVar5 * fVar3 +
                       0.0);
  return;
}

