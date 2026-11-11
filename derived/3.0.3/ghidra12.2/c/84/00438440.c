
void FUN_00438440(undefined8 *param_1,float *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float local_70 [4];
  
  fVar6 = *param_2 + param_2[5] + param_2[10];
  if (fVar6 <= 0.0) {
    uVar2 = (ulong)(*param_2 < param_2[5]);
    uVar1 = 2;
    if (param_2[10] <= param_2[uVar2 * 5]) {
      uVar1 = uVar2;
    }
    lVar3 = (long)(int)(&DAT_04130ba0)[uVar1];
    lVar4 = (long)(int)(&DAT_04130ba0)[lVar3];
    fVar6 = (float)FUN_004372f0((param_2[uVar1 * 5] - (param_2[lVar3 * 5] + param_2[lVar4 * 5])) +
                                1.0);
    fVar5 = 0.5 / fVar6;
    *(float *)((ulong)local_70 | uVar1 << 2) = fVar6 * 0.5;
    local_70[3] = fVar5 * (param_2[lVar3 * 4 + lVar4] - param_2[lVar4 * 4 + lVar3]);
    local_70[lVar3] = fVar5 * (param_2[uVar1 * 4 + lVar3] + param_2[lVar3 * 4 + uVar1]);
    fVar5 = fVar5 * (param_2[uVar1 * 4 + lVar4] + param_2[lVar4 * 4 + uVar1]);
  }
  else {
    fVar5 = (float)FUN_004372f0(fVar6 + 1.0);
    local_70[2] = 0.5 / fVar5;
    local_70[0] = local_70[2] * (param_2[6] - param_2[9]);
    local_70[1] = local_70[2] * (param_2[8] - param_2[2]);
    local_70[2] = local_70[2] * (param_2[1] - param_2[4]);
    fVar5 = fVar5 * 0.5;
    lVar4 = 3;
  }
  local_70[lVar4] = fVar5;
  param_1[1] = CONCAT44(local_70[3],local_70[2]);
  *param_1 = CONCAT44(local_70[1],local_70[0]);
  return;
}

