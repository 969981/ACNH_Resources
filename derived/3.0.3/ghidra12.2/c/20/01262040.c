
uint FUN_01262040(float param_1,long param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = -param_1;
  if (0.0 <= param_1) {
    fVar6 = param_1;
  }
  if (1.1920929e-07 <= fVar6) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    fVar6 = *param_3 - param_1;
    fVar8 = param_3[2] - param_1;
    fVar7 = param_1 + *param_3;
    param_1 = param_1 + param_3[2];
    uVar2 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
    uVar3 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    uVar4 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    uVar5 = (int)((float)(int)param_1 / 5.0) - (uint)(param_1 < 0.0);
    uVar1 = uVar2;
    if ((int)uVar4 <= (int)uVar2) {
      uVar1 = uVar4;
    }
    if ((int)uVar2 <= (int)uVar4) {
      uVar2 = uVar4;
    }
    uVar4 = uVar3;
    if ((int)uVar5 <= (int)uVar3) {
      uVar4 = uVar5;
    }
    if ((int)uVar3 <= (int)uVar5) {
      uVar3 = uVar5;
    }
    if (uVar3 + 1 != uVar4) {
      uVar5 = uVar1;
      do {
        if (((uVar4 < 0x100) && (uVar5 < 0x120)) &&
           ((*(uint *)(param_2 + 8 + (ulong)(uVar5 + uVar4 * 0x120 >> 5) * 4) >>
             (ulong)(uVar5 & 0x1f) & 1) != 0)) {
          return 1;
        }
        if ((int)uVar5 < (int)uVar2) {
          uVar5 = uVar5 + 1;
        }
        else {
          uVar4 = uVar4 + 1;
          uVar5 = uVar1;
        }
      } while ((uVar1 != uVar5) || (uVar3 + 1 != uVar4));
    }
  }
  else {
    uVar1 = (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0);
    if ((uVar1 < 0x120) &&
       (uVar2 = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0), uVar2 < 0x100)) {
      return *(uint *)(param_2 + (ulong)(uVar1 + uVar2 * 0x120 >> 5) * 4 + 8) >>
             (ulong)(uVar1 & 0x1f) & 1;
    }
  }
  return 0;
}

