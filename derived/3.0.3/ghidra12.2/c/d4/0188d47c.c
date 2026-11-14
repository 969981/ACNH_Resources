
void FUN_0188d47c(float param_1,long param_2,float *param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (param_3 != (float *)0x0) {
    uVar1 = (ulong)(*(uint *)(param_2 + 800) >> 0x15) & 0x7f0;
    uVar3 = (ulong)(*(uint *)(param_2 + 0x324) >> 0x15) & 0x7f0;
    fVar4 = (float)(*(uint *)(param_2 + 800) >> 1 & 0xffffff) * 5.9604645e-08;
    fVar5 = (float)(*(uint *)(param_2 + 0x324) >> 1 & 0xffffff) * 5.9604645e-08;
    fVar6 = (float)(*(uint *)(param_2 + 0x31c) >> 1 & 0xffffff) * 5.9604645e-08;
    uVar2 = (ulong)(*(uint *)(param_2 + 0x31c) >> 0x15) & 0x7f0;
    fVar8 = *(float *)((long)&DAT_04199798 + uVar1) +
            fVar4 * *(float *)((long)&DAT_0419979c + uVar1);
    fVar4 = *(float *)((long)&DAT_041997a0 + uVar1) +
            fVar4 * *(float *)((long)&DAT_041997a4 + uVar1);
    fVar7 = *(float *)((long)&DAT_04199798 + uVar3) +
            fVar5 * *(float *)((long)&DAT_0419979c + uVar3);
    fVar5 = *(float *)((long)&DAT_041997a0 + uVar3) +
            fVar5 * *(float *)((long)&DAT_041997a4 + uVar3);
    fVar10 = *(float *)((long)&DAT_04199798 + uVar2) +
             fVar6 * *(float *)((long)&DAT_0419979c + uVar2);
    fVar6 = *(float *)((long)&DAT_041997a0 + uVar2) +
            fVar6 * *(float *)((long)&DAT_041997a4 + uVar2);
    fVar11 = fVar4 * fVar5;
    fVar12 = fVar8 * fVar7;
    fVar8 = fVar8 * fVar5;
    fVar4 = fVar4 * fVar7;
    fVar7 = -(fVar12 * fVar6) + fVar10 * fVar11;
    fVar9 = fVar10 * fVar4 + fVar6 * fVar8;
    fVar5 = -(fVar8 * fVar10) + fVar6 * fVar4;
    fVar8 = fVar10 * fVar12 + fVar6 * fVar11;
    fVar10 = fVar5 * -0.0 + param_1 * fVar9 + fVar8 * 0.0;
    fVar11 = (fVar5 * 0.0 - param_1 * fVar7) + fVar8 * 0.0;
    fVar6 = fVar9 * -0.0 + fVar7 * 0.0 + param_1 * fVar8;
    fVar4 = (fVar9 * -0.0 + fVar7 * -0.0) - param_1 * fVar5;
    *param_3 = (-(fVar5 * fVar11) + fVar8 * fVar10 + fVar9 * fVar6) - fVar7 * fVar4;
    param_3[1] = ((fVar8 * fVar11 + fVar5 * fVar10) - fVar7 * fVar6) - fVar9 * fVar4;
    param_3[2] = ((fVar7 * fVar11 - fVar9 * fVar10) + fVar8 * fVar6) - fVar5 * fVar4;
  }
  return;
}

