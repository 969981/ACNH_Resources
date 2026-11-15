
bool FUN_02507d60(float param_1,undefined8 param_2,float *param_3,uint param_4,undefined4 param_5)

{
  bool bVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  pfVar2 = (float *)FUN_0251b3b0(param_2,param_5);
  bVar1 = false;
  if (pfVar2 != (float *)0x0) {
    lVar3 = FUN_0251e98c(1);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar3 + 0x2a0) + 0xf0))(lVar3 + 0x2a0);
    fVar5 = *param_3;
    bVar1 = false;
    fVar6 = param_3[2];
    if (fVar5 <= fVar6) {
      fVar7 = param_3[1];
      fVar8 = param_3[3];
      if (fVar7 <= fVar8) {
        fVar11 = *pfVar4 * 0.5;
        if ((param_4 & 1) == 0) {
          fVar11 = *pfVar4;
        }
        fVar10 = *pfVar2;
        fVar9 = pfVar2[2];
        if ((((fVar10 < fVar5) || (fVar6 < fVar10)) || (fVar9 < fVar7)) || (fVar8 < fVar9)) {
          if (fVar10 <= fVar6) {
            fVar6 = fVar10;
          }
          if (fVar5 <= fVar10) {
            fVar5 = fVar6;
          }
          fVar6 = fVar11 * param_1 * 0.98;
          if (fVar9 <= fVar8) {
            fVar8 = fVar9;
          }
          if (fVar7 <= fVar9) {
            fVar7 = fVar8;
          }
          bVar1 = (fVar9 - fVar7) * (fVar9 - fVar7) + (fVar10 - fVar5) * (fVar10 - fVar5) <=
                  fVar6 * fVar6;
        }
        else {
          bVar1 = true;
        }
      }
    }
  }
  return bVar1;
}

