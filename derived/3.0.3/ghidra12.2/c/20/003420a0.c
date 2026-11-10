
bool FUN_003420a0(float *param_1,float *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  bool bVar2;
  float *pfVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  
  bVar2 = true;
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    return bVar2;
  case 2:
    if (param_2[-2] < *param_1) {
      return bVar2;
    }
    if ((param_2[-2] == *param_1) && ((int)param_1[1] <= (int)param_2[-1])) {
      return bVar2;
    }
    uVar4 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
    *(undefined8 *)(param_2 + -2) = uVar4;
    return bVar2;
  case 3:
    FUN_00341ce0(param_1,param_1 + 2,param_2 + -2,param_3);
    break;
  case 4:
    pfVar9 = param_1 + 4;
    FUN_00341ce0(param_1,param_1 + 2,pfVar9,param_3);
    if ((param_1[4] <= param_2[-2]) &&
       ((param_2[-2] != param_1[4] || ((int)param_2[-1] < (int)param_1[5])))) {
      uVar4 = *(undefined8 *)pfVar9;
      *(undefined8 *)pfVar9 = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)(param_2 + -2) = uVar4;
      fVar11 = param_1[2];
      if ((fVar11 <= *pfVar9) && ((*pfVar9 != fVar11 || ((int)param_1[5] < (int)param_1[3])))) {
        uVar4 = *(undefined8 *)(param_1 + 2);
        uVar1 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 2) = uVar1;
        *(undefined8 *)(param_1 + 4) = uVar4;
        if ((*param_1 <= (float)uVar1) &&
           ((*param_1 < (float)uVar1 || ((int)((ulong)uVar1 >> 0x20) < (int)param_1[1])))) {
          uVar4 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = uVar1;
          *(undefined8 *)(param_1 + 2) = uVar4;
          return true;
        }
      }
    }
    break;
  case 5:
    FUN_00342360(param_1,param_1 + 2,param_1 + 4,param_1 + 6,param_2 + -2);
    return true;
  default:
    FUN_00341ce0(param_1,param_1 + 2,param_1 + 4,param_3);
    if (param_1 + 6 != param_2) {
      lVar5 = 0;
      iVar6 = 0;
      pfVar9 = param_1 + 6;
      pfVar10 = param_1 + 4;
      do {
        pfVar3 = pfVar9;
        fVar11 = *pfVar3;
        if (*pfVar10 <= fVar11) {
          if (fVar11 <= *pfVar10) {
            fVar7 = pfVar3[1];
            if ((int)pfVar10[1] <= (int)fVar7) goto LAB_00342140;
          }
          else {
            fVar7 = pfVar3[1];
          }
          *(undefined8 *)pfVar3 = *(undefined8 *)pfVar10;
          pfVar9 = param_1;
          if (pfVar10 != param_1) {
            lVar8 = lVar5;
            do {
              fVar12 = *(float *)((long)param_1 + lVar8 + 8);
              pfVar9 = pfVar10;
              if (fVar11 < fVar12) goto LAB_0034212c;
              if ((fVar11 <= fVar12) && (*(int *)((long)param_1 + lVar8 + 0xc) <= (int)fVar7)) {
                pfVar9 = (float *)((long)param_1 + lVar8 + 0x10);
                goto LAB_0034212c;
              }
              bVar2 = lVar8 != -8;
              *(undefined8 *)((long)param_1 + lVar8 + 0x10) =
                   *(undefined8 *)((long)param_1 + lVar8 + 8);
              lVar8 = lVar8 + -8;
              pfVar10 = pfVar10 + -2;
            } while (bVar2);
            pfVar9 = param_1;
          }
LAB_0034212c:
          iVar6 = iVar6 + 1;
          *pfVar9 = fVar11;
          pfVar9[1] = fVar7;
          if (iVar6 == 8) {
            return pfVar3 + 2 == param_2;
          }
        }
LAB_00342140:
        lVar5 = lVar5 + 8;
        pfVar9 = pfVar3 + 2;
        pfVar10 = pfVar3;
      } while (pfVar3 + 2 != param_2);
    }
  }
  return true;
}

