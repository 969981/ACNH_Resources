
float FUN_006f0960(int param_1)

{
  ulong uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = (ulong)((float)param_1 * 90.0 * 11930465.0);
  uVar2 = uVar1 >> 0x19 & 0x7f;
  fVar3 = (float)((uint)uVar1 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar4 = (float)(&DAT_04199798)[uVar2 * 4] + fVar3 * (float)(&DAT_0419979c)[uVar2 * 4];
  fVar3 = (float)(&DAT_041997a0)[uVar2 * 4] + fVar3 * (float)(&DAT_041997a4)[uVar2 * 4];
  fVar5 = fVar4 * 0.0;
  fVar3 = fVar3 + fVar3;
  fVar6 = fVar5 * (fVar5 + fVar5);
  return fVar6 + fVar4 * fVar3 +
         (fVar4 * (fVar5 + fVar5) - fVar5 * fVar3) * 0.0 +
         ((1.0 - fVar4 * (fVar4 + fVar4)) - fVar6) * 0.0;
}

