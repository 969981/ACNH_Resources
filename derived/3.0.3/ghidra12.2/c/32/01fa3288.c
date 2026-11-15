
void FUN_01fa3288(float *param_1,float *param_2,uint *param_3,int param_4)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = (ulong)(*param_3 >> 0x14) & 0xff0;
  fVar2 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
  fVar5 = *(float *)((long)&DAT_041997a0 + uVar1);
  fVar6 = *(float *)((long)&DAT_041997a4 + uVar1);
  fVar3 = (float)param_4;
  fVar7 = param_2[1];
  fVar4 = param_2[2];
  *param_1 = *param_2 +
             (*(float *)((long)&DAT_04199798 + uVar1) +
             fVar2 * *(float *)((long)&DAT_0419979c + uVar1)) * 5.0 * fVar3;
  param_1[1] = fVar3 * 0.0 + fVar7;
  param_1[2] = (fVar5 + fVar2 * fVar6) * 5.0 * fVar3 + fVar4;
  return;
}

