
void FUN_00cf7738(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,uint *param_7)

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
  
  DAT_05292334 = *param_7;
  uVar1 = (ulong)(((float)DAT_05292334 * -8.381903e-08 + 180.0) * 11930465.0);
  uVar2 = uVar1 >> 0x19 & 0x7f;
  if ((*DAT_055cdb40 != '\0') || (*DAT_055c10d8 != '\0')) {
    param_4 = param_4 - param_1;
    param_5 = param_5 - param_2;
    param_6 = param_6 - param_3;
    fVar3 = (float)((uint)uVar1 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar4 = (float)(&DAT_04199798)[uVar2 * 4] + fVar3 * (float)(&DAT_0419979c)[uVar2 * 4];
    fVar3 = (float)(&DAT_041997a0)[uVar2 * 4] + fVar3 * (float)(&DAT_041997a4)[uVar2 * 4];
    fVar5 = fVar4 * 0.0;
    fVar3 = fVar3 + fVar3;
    fVar7 = fVar4 * (fVar4 + fVar4);
    fVar6 = (fVar4 + fVar4) * fVar5;
    fVar9 = fVar5 * (fVar5 + fVar5);
    fVar8 = fVar4 * (fVar5 + fVar5);
    fVar5 = fVar3 * fVar5;
    fVar4 = fVar4 * fVar3;
    DAT_055c118c = param_5 * (fVar8 - fVar5) + param_4 * ((1.0 - fVar7) - fVar9) +
                   param_6 * (fVar4 + fVar9);
    DAT_055c1190._0_4_ =
         param_5 * ((1.0 - fVar9) - fVar9) + param_4 * (fVar5 + fVar8) + param_6 * (fVar6 - fVar5);
    DAT_055c1190._4_4_ =
         param_5 * (fVar5 + fVar6) + param_4 * (fVar9 - fVar4) + param_6 * ((1.0 - fVar9) - fVar7);
    DAT_05292334 = *param_7;
  }
  *PTR_DAT_04bbe4a0 = 1;
  return;
}

