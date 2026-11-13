
void FUN_013bb7b8(long param_1)

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
  
  uVar1 = (ulong)(*(uint *)(param_1 + 0x38c) >> 0x14) & 0xff0;
  uVar3 = (ulong)(*(uint *)(param_1 + 0x390) >> 0x14) & 0xff0;
  fVar4 = (float)(*(uint *)(param_1 + 0x38c) & 0xffffff) * 5.9604645e-08;
  fVar5 = (float)(*(uint *)(param_1 + 0x390) & 0xffffff) * 5.9604645e-08;
  fVar6 = (float)(*(uint *)(param_1 + 0x388) & 0xffffff) * 5.9604645e-08;
  uVar2 = (ulong)(*(uint *)(param_1 + 0x388) >> 0x14) & 0xff0;
  fVar7 = *(float *)((long)&DAT_04199798 + uVar1) + fVar4 * *(float *)((long)&DAT_0419979c + uVar1);
  fVar4 = *(float *)((long)&DAT_041997a0 + uVar1) + fVar4 * *(float *)((long)&DAT_041997a4 + uVar1);
  fVar8 = *(float *)((long)&DAT_04199798 + uVar3) + fVar5 * *(float *)((long)&DAT_0419979c + uVar3);
  fVar5 = *(float *)((long)&DAT_041997a0 + uVar3) + fVar5 * *(float *)((long)&DAT_041997a4 + uVar3);
  fVar9 = *(float *)((long)&DAT_04199798 + uVar2) + fVar6 * *(float *)((long)&DAT_0419979c + uVar2);
  fVar12 = *(float *)(param_1 + 0x31c);
  fVar6 = *(float *)((long)&DAT_041997a0 + uVar2) + fVar6 * *(float *)((long)&DAT_041997a4 + uVar2);
  fVar10 = *(float *)(param_1 + 0x314);
  fVar11 = *(float *)(param_1 + 0x318);
  *(float *)(param_1 + 0x30c) =
       *(float *)(param_1 + 0x324) +
       ((fVar11 * fVar6 * fVar5 + fVar10 * fVar6 * fVar8) - fVar12 * fVar9) + 0.0;
  *(float *)(param_1 + 0x308) =
       *(float *)(param_1 + 800) +
       fVar11 * (fVar9 * fVar7 * fVar5 - fVar4 * fVar8) +
       fVar10 * (fVar4 * fVar5 + fVar7 * fVar8 * fVar9) + fVar12 * fVar6 * fVar7 + 0.0;
  *(float *)(param_1 + 0x310) =
       *(float *)(param_1 + 0x328) +
       fVar11 * (fVar7 * fVar8 + fVar4 * fVar5 * fVar9) +
       fVar10 * (fVar9 * fVar4 * fVar8 - fVar7 * fVar5) + fVar12 * fVar6 * fVar4 + 0.0;
  return;
}

