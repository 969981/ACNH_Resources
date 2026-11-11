
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00674e50(float *param_1,float *param_2,float *param_3,undefined8 *param_4,int param_5,
                 int param_6)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  ulong uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  uVar1 = param_5 - 1;
  if (0 < param_5) {
    fVar6 = (float)*param_4;
    if (param_6 - 1U < 2) {
      fVar7 = *param_2 + fVar6 * *param_3;
      if (0 < (int)uVar1) {
        uVar4 = (ulong)uVar1;
        pfVar5 = param_1;
        do {
          param_3 = param_3 + 1;
          param_2 = param_2 + 1;
          fVar8 = *param_2;
          fVar2 = *param_3;
          *pfVar5 = fVar7;
          pfVar5 = pfVar5 + 1;
          fVar7 = fVar8 + fVar6 * fVar2;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    else {
      if (param_6 != -1) {
        if (param_6 != 0) {
          return;
        }
        fVar7 = (float)_DAT_0413f320 - fVar6;
        fVar8 = fVar6 * *param_3 + fVar7 * *param_2;
        if (0 < (int)uVar1) {
          uVar4 = (ulong)uVar1;
          pfVar5 = param_1;
          do {
            param_3 = param_3 + 1;
            param_2 = param_2 + 1;
            fVar2 = *param_2;
            fVar3 = *param_3;
            *pfVar5 = fVar8;
            pfVar5 = pfVar5 + 1;
            fVar8 = fVar6 * fVar3 + fVar7 * fVar2;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        param_1[(int)uVar1] = fVar8;
        return;
      }
      fVar7 = *param_2 - fVar6 * *param_3;
      if (0 < (int)uVar1) {
        uVar4 = (ulong)uVar1;
        pfVar5 = param_1;
        do {
          param_3 = param_3 + 1;
          param_2 = param_2 + 1;
          fVar8 = *param_2;
          fVar2 = *param_3;
          *pfVar5 = fVar7;
          pfVar5 = pfVar5 + 1;
          fVar7 = fVar8 - fVar6 * fVar2;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    param_1[(int)uVar1] = fVar7;
  }
  return;
}

