
void FUN_035a53f0(float param_1,ushort *param_2,float *param_3,ushort *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  fVar10 = *param_3 - param_1;
  fVar9 = param_1 + *param_3;
  fVar11 = param_3[2] - param_1;
  param_1 = param_1 + param_3[2];
  uVar2 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
  uVar6 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  uVar7 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
  uVar1 = uVar2;
  if ((int)uVar7 <= (int)uVar2) {
    uVar1 = uVar7;
  }
  if ((int)uVar2 <= (int)uVar7) {
    uVar2 = uVar7;
  }
  uVar3 = (int)((float)(int)param_1 / 5.0) - (uint)(param_1 < 0.0);
  uVar7 = uVar6;
  if ((int)uVar3 <= (int)uVar6) {
    uVar7 = uVar3;
  }
  if ((int)uVar6 <= (int)uVar3) {
    uVar6 = uVar3;
  }
  uVar3 = uVar6 + 1;
  if (1 < (int)((uVar2 - uVar1) + 1)) {
    if (1 < (int)(uVar3 - uVar7)) {
      if (uVar3 == uVar7) {
        return;
      }
      uVar8 = uVar7;
      uVar5 = uVar1;
      do {
        if ((((((uint)*param_2 <= (uVar5 & 0xffff)) &&
              ((uVar5 & 0xffff) <= (((uint)*param_2 + (uint)param_2[6]) - 1 & 0xffff))) &&
             ((uint)param_2[1] <= (uVar8 & 0xffff))) &&
            ((uVar8 & 0xffff) <= (((uint)param_2[1] + (uint)param_2[8]) - 1 & 0xffff))) &&
           (((uint)*param_4 != (uVar5 & 0xffff) || ((uint)param_4[1] != (uVar8 & 0xffff))))) {
          if (uVar5 == uVar1) {
            if (uVar8 == uVar7) {
              lVar4 = 1;
            }
            else {
              lVar4 = (ulong)(uVar8 == uVar6) << 1;
            }
          }
          else if (uVar5 == uVar2) {
            if (uVar8 == uVar7) {
              lVar4 = 3;
            }
            else {
              lVar4 = (ulong)(uVar8 == uVar6) << 2;
            }
          }
          else {
            lVar4 = 0;
          }
          FUN_035a4360(param_2,uVar5 & 0xffff,uVar8 & 0xffff,lVar4);
        }
        if ((int)uVar5 < (int)uVar2) {
          uVar5 = uVar5 + 1;
        }
        else {
          uVar8 = uVar8 + 1;
          uVar5 = uVar1;
        }
      } while ((uVar1 != uVar5) || (uVar3 != uVar8));
      return;
    }
  }
  if (uVar3 != uVar7) {
    uVar6 = uVar1;
    do {
      if (((((uint)*param_2 <= (uVar6 & 0xffff)) &&
           ((uVar6 & 0xffff) <= (((uint)*param_2 + (uint)param_2[6]) - 1 & 0xffff))) &&
          ((uint)param_2[1] <= (uVar7 & 0xffff))) &&
         (((uVar7 & 0xffff) <= (((uint)param_2[1] + (uint)param_2[8]) - 1 & 0xffff) &&
          (((uint)*param_4 != (uVar6 & 0xffff) || ((uint)param_4[1] != (uVar7 & 0xffff))))))) {
        FUN_035a4360(param_2,uVar6 & 0xffff,uVar7 & 0xffff,0);
      }
      if ((int)uVar6 < (int)uVar2) {
        uVar6 = uVar6 + 1;
      }
      else {
        uVar7 = uVar7 + 1;
        uVar6 = uVar1;
      }
    } while ((uVar1 != uVar6) || (uVar3 != uVar7));
  }
  return;
}

