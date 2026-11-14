
float FUN_016e45b0(float param_1,float *param_2,uint *param_3)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  uVar1 = (ulong)(*param_3 >> 0x14) & 0xff0;
  fVar2 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
  fVar3 = *(float *)((long)&DAT_04199798 + uVar1) + fVar2 * *(float *)((long)&DAT_0419979c + uVar1);
  return *param_2 +
         fVar3 * 0.0 * 0.0 +
         (*(float *)((long)&DAT_041997a0 + uVar1) + fVar2 * *(float *)((long)&DAT_041997a4 + uVar1))
         * 0.0 + param_1 * (fVar3 + 0.0);
}

