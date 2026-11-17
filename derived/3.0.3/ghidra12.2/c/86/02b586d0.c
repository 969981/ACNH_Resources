
uint FUN_02b586d0(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_70;
  float local_68;
  uint local_64;
  
  FUN_02b62bd0(&local_64,param_2);
  local_68 = 0.0;
  local_70 = 0;
  *(uint *)(param_1 + 3) = local_64 ^ 0x80000000;
  uVar1 = FUN_02b630b0(&local_70,param_2);
  if ((uVar1 & 1) != 0) {
    fVar2 = (float)NEON_ucvtf(local_64);
    fVar3 = sinf(fVar2 * 1.4629181e-09);
    fVar2 = cosf(fVar2 * 1.4629181e-09);
    fVar4 = fVar3 * 0.0;
    fVar8 = (float)local_70 + fVar4 * 0.0 + fVar2 * 0.0 + (fVar3 + 0.0) * 2.5;
    fVar7 = local_70._4_4_ + (fVar4 * 0.0 + 1.0) * 0.0 + fVar2 * 0.0 * 0.0 + fVar4 * 2.5;
    fVar6 = local_68 + (fVar2 * 0.0 * 0.0 - fVar3 * 0.0) + fVar2 * 2.5;
    fVar2 = (float)NEON_ucvtf(local_64);
    fVar3 = sinf(fVar2 * 1.4629181e-09);
    fVar2 = cosf(fVar2 * 1.4629181e-09);
    fVar5 = fVar3 * 0.0;
    fVar4 = fVar5 * 0.0 + fVar2 * 0.0 + (fVar3 + 0.0) * 5.0;
    fVar5 = (fVar5 * 0.0 + 1.0) * 0.0 + fVar2 * 0.0 * 0.0 + fVar5 * 5.0;
    fVar2 = (fVar2 * 0.0 * 0.0 - fVar3 * 0.0) + fVar2 * 5.0;
    fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar2 * fVar2);
    if (0.0 < fVar3) {
      fVar3 = 1.0 / fVar3;
      fVar4 = fVar4 * fVar3;
      fVar5 = fVar5 * fVar3;
      fVar2 = fVar2 * fVar3;
    }
    *param_1 = local_70;
    *(float *)(param_1 + 1) = local_68;
    *(float *)((long)param_1 + 0xc) = fVar8 + fVar4 * 5.0;
    *(float *)(param_1 + 2) = fVar7 + fVar5 * 5.0;
    *(float *)((long)param_1 + 0x14) = fVar6 + fVar2 * 5.0;
  }
  return uVar1 & 1;
}

