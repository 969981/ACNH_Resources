
bool FUN_00343280(float *param_1,float *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  float *pfVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  float *pfVar7;
  long lVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  bVar2 = true;
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return bVar2;
  case 2:
    fVar10 = param_2[-2];
    fVar11 = *param_1;
    if ((0.0 <= fVar10) || (0.0 <= fVar11)) {
      if (fVar11 <= fVar10) {
        return bVar2;
      }
    }
    else if (fVar10 <= fVar11) {
      return bVar2;
    }
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)(param_2 + -2) = uVar4;
    return bVar2;
  case 3:
    FUN_00342da0(param_1,param_1 + 2,param_2 + -2,param_3);
    return true;
  case 4:
    pfVar7 = param_1 + 4;
    FUN_00342da0(param_1,param_1 + 2,pfVar7,param_3);
    fVar10 = param_2[-2];
    fVar11 = param_1[4];
    if ((0.0 <= fVar10) || (0.0 <= fVar11)) {
      if (fVar11 <= fVar10) {
        return true;
      }
    }
    else if (fVar10 <= fVar11) {
      return true;
    }
    uVar4 = *(undefined8 *)pfVar7;
    *(undefined8 *)pfVar7 = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)(param_2 + -2) = uVar4;
    fVar10 = *pfVar7;
    fVar11 = param_1[2];
    if ((0.0 <= fVar10) || (0.0 <= fVar11)) {
      if (fVar11 <= fVar10) {
        return true;
      }
    }
    else if (fVar10 <= fVar11) {
      return true;
    }
    uVar4 = *(undefined8 *)(param_1 + 2);
    uVar1 = *(undefined8 *)(param_1 + 4);
    fVar11 = *param_1;
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_1 + 4) = uVar4;
    fVar10 = (float)uVar1;
    if ((0.0 <= fVar10) || (0.0 <= fVar11)) {
      if (fVar10 < fVar11) goto LAB_0034358c;
    }
    else if (fVar11 < fVar10) {
LAB_0034358c:
      uVar4 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = uVar1;
      *(undefined8 *)(param_1 + 2) = uVar4;
      return true;
    }
    break;
  case 5:
    FUN_003435b0(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    return true;
  default:
    FUN_00342da0(param_1,param_1 + 2,param_1 + 4,param_3);
    if (param_1 + 6 != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      pfVar7 = param_1 + 6;
      pfVar9 = param_1 + 4;
      do {
        pfVar3 = pfVar7;
        fVar10 = *pfVar3;
        fVar11 = *pfVar9;
        if ((0.0 <= fVar10) || (0.0 <= fVar11)) {
          if (fVar10 < fVar11) goto LAB_00343368;
        }
        else if (fVar11 < fVar10) {
LAB_00343368:
          fVar11 = pfVar3[1];
          *(undefined8 *)pfVar3 = *(undefined8 *)pfVar9;
          pfVar7 = param_1;
          if (pfVar9 != param_1) {
            lVar8 = lVar5;
            pfVar7 = pfVar9;
            if (fVar10 < 0.0) {
              do {
                fVar12 = *(float *)((long)param_1 + lVar8 + 8);
                if (0.0 <= fVar12) {
                  if (fVar12 <= fVar10) {
                    pfVar7 = (float *)((long)param_1 + lVar8 + 0x10);
                    goto LAB_00343310;
                  }
                }
                else if (fVar10 <= fVar12) goto LAB_00343310;
                pfVar7 = pfVar7 + -2;
                bVar2 = lVar8 != -8;
                *(undefined8 *)((long)param_1 + lVar8 + 0x10) =
                     *(undefined8 *)((long)param_1 + lVar8 + 8);
                lVar8 = lVar8 + -8;
              } while (bVar2);
            }
            else {
              do {
                if (*(float *)((long)param_1 + lVar8 + 8) <= fVar10) {
                  pfVar7 = (float *)((long)param_1 + lVar8 + 0x10);
                  goto LAB_00343310;
                }
                bVar2 = lVar8 != -8;
                *(undefined8 *)((long)param_1 + lVar8 + 0x10) =
                     *(undefined8 *)((long)param_1 + lVar8 + 8);
                lVar8 = lVar8 + -8;
              } while (bVar2);
            }
            pfVar7 = param_1;
          }
LAB_00343310:
          iVar6 = iVar6 + 1;
          *pfVar7 = fVar10;
          pfVar7[1] = fVar11;
          if (iVar6 == 8) {
            return pfVar3 + 2 == param_2;
          }
        }
        lVar5 = lVar5 + 8;
        pfVar7 = pfVar3 + 2;
        pfVar9 = pfVar3;
      } while (pfVar3 + 2 != param_2);
    }
  }
  return true;
}

