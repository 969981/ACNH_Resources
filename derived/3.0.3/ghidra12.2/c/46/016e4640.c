
float FUN_016e4640(float *param_1,uint *param_2,float *param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = (ulong)(*param_2 >> 0x14) & 0xff0;
  fVar2 = (float)(*param_2 & 0xffffff) * 5.9604645e-08;
  fVar3 = *(float *)((long)&DAT_04199798 + uVar1) + fVar2 * *(float *)((long)&DAT_0419979c + uVar1);
  return *param_1 +
         fVar3 * 0.0 * param_3[1] +
         *param_3 *
         (*(float *)((long)&DAT_041997a0 + uVar1) + fVar2 * *(float *)((long)&DAT_041997a4 + uVar1))
         + param_3[2] * (fVar3 + 0.0);
}

