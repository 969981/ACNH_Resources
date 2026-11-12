
void FUN_00906738(long param_1,undefined4 *param_2,float *param_3,uint *param_4)

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
  
  if (*(int *)(param_1 + 0x15c) == 0x45) {
    uVar1 = (ulong)(*param_4 >> 0x14) & 0xff0;
    fVar5 = *(float *)((long)&DAT_04199798 + uVar1);
    fVar6 = *(float *)((long)&DAT_0419979c + uVar1);
    fVar2 = (float)(*param_4 & 0xffffff) * 5.9604645e-08;
    fVar3 = *(float *)((long)&DAT_041997a0 + uVar1);
    fVar8 = *(float *)((long)&DAT_041997a4 + uVar1);
    *(undefined4 *)(param_1 + 0x280) = *param_2;
    fVar4 = fVar5 + fVar2 * fVar6;
    fVar3 = fVar3 + fVar2 * fVar8;
    *(undefined4 *)(param_1 + 0x284) = param_2[1];
    *(undefined4 *)(param_1 + 0x288) = param_2[2];
    fVar10 = param_3[2];
    fVar8 = *param_3;
    fVar7 = param_3[1];
    fVar9 = fVar4 * 0.0;
    *(float *)(param_1 + 0x294) = -(fVar6 * fVar2) - fVar5;
    *(float *)(param_1 + 0x28c) = fVar3;
    *(float *)(param_1 + 0x2ac) = fVar3;
    *(float *)(param_1 + 0x298) = fVar9;
    *(float *)(param_1 + 0x2a8) = fVar9;
    *(float *)(param_1 + 0x2b4) = fVar7 * 0.5;
    *(float *)(param_1 + 0x2b0) = fVar8 * 0.5;
    *(float *)(param_1 + 0x2b8) = fVar10 * 0.5;
    *(float *)(param_1 + 0x290) = fVar3 * 0.0;
    *(float *)(param_1 + 0x2a0) = fVar3 * 0.0;
    *(float *)(param_1 + 0x29c) = fVar9 * 0.0 + 1.0;
    *(float *)(param_1 + 0x2a4) = fVar4 + 0.0;
    FUN_00906410();
                    /* WARNING: Could not recover jumptable at 0x0090682c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x68) + 0x100))(*(long **)(param_1 + 0x68),param_2);
    return;
  }
  return;
}

