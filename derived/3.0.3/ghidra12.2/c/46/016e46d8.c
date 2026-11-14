
float FUN_016e46d8(float param_1,float param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(long *)(param_3 + 0x68);
  if (lVar3 == 0) {
    return 0.0;
  }
  uVar2 = *(int *)(lVar3 + 0x2b4) + (int)(long)(param_2 * 11930465.0);
  uVar1 = (ulong)(uVar2 >> 0x18);
  fVar4 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
  fVar5 = (float)(&DAT_04199798)[uVar1 * 4] + fVar4 * (float)(&DAT_0419979c)[uVar1 * 4];
  return *(float *)(lVar3 + 0x278) +
         fVar5 * 0.0 * 0.0 +
         ((float)(&DAT_041997a0)[uVar1 * 4] + fVar4 * (float)(&DAT_041997a4)[uVar1 * 4]) * 0.0 +
         param_1 * (fVar5 + 0.0);
}

