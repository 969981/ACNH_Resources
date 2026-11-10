
void FUN_00341780(float *param_1,float *param_2,undefined8 param_3,long param_4,uint param_5)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  ulong uVar4;
  undefined8 uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  
LAB_003417b0:
  pfVar6 = param_2 + -2;
  do {
    param_4 = -param_4;
    pfVar7 = param_1;
    do {
      param_1 = pfVar7;
      param_4 = param_4 + 1;
      uVar4 = (long)param_2 - (long)param_1;
      uVar11 = (long)uVar4 >> 3;
      switch(uVar11) {
      case 0:
      case 1:
        goto switchD_0034198c_caseD_0;
      case 2:
        if (param_2[-2] < *param_1) {
          return;
        }
        if ((param_2[-2] == *param_1) && ((int)param_1[1] <= (int)param_2[-1])) {
          return;
        }
        uVar5 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_2 + -2) = uVar5;
        return;
      case 3:
        FUN_00341ce0(param_1,param_1 + 2,pfVar6,param_3);
        return;
      case 4:
        pfVar6 = param_1 + 4;
        FUN_00341ce0(param_1,param_1 + 2,pfVar6,param_3);
        if (param_2[-2] < param_1[4]) {
          return;
        }
        if ((param_2[-2] == param_1[4]) && ((int)param_1[5] <= (int)param_2[-1])) {
          return;
        }
        uVar5 = *(undefined8 *)pfVar6;
        *(undefined8 *)pfVar6 = *(undefined8 *)(param_2 + -2);
        *(undefined8 *)(param_2 + -2) = uVar5;
        fVar12 = param_1[2];
        if (*pfVar6 < fVar12) {
          return;
        }
        if ((*pfVar6 == fVar12) && ((int)param_1[3] <= (int)param_1[5])) {
          return;
        }
        uVar5 = *(undefined8 *)(param_1 + 2);
        uVar2 = *(undefined8 *)(param_1 + 4);
        *(undefined8 *)(param_1 + 2) = uVar2;
        *(undefined8 *)(param_1 + 4) = uVar5;
        if ((float)uVar2 < *param_1) {
          return;
        }
        if (((float)uVar2 <= *param_1) && ((int)param_1[1] <= (int)((ulong)uVar2 >> 0x20))) {
          return;
        }
        uVar5 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = uVar2;
        *(undefined8 *)(param_1 + 2) = uVar5;
        return;
      case 5:
        FUN_00342360(param_1,param_1 + 2,param_1 + 4,param_1 + 6,pfVar6,param_3);
        return;
      }
      if ((long)uVar4 < 0xc0) {
        pfVar6 = param_1 + 2;
        if ((param_5 & 1) == 0) {
          if (param_1 == param_2 || pfVar6 == param_2) {
            return;
          }
          goto LAB_00341c58;
        }
        if (param_1 == param_2 || pfVar6 == param_2) {
          return;
        }
        lVar10 = 0;
        pfVar7 = param_1;
        goto LAB_00341ba8;
      }
      if (param_4 == 1) {
        if (param_1 == param_2) {
          return;
        }
        uVar4 = uVar11 - 2 >> 1;
        pfVar6 = param_1 + uVar4 * 2;
        lVar10 = uVar4 + 1;
        do {
          FUN_00342510(param_1,param_3,uVar11,pfVar6);
          lVar10 = lVar10 + -1;
          pfVar6 = pfVar6 + -2;
        } while (lVar10 != 0);
        FUN_00342660(param_1,param_2,param_3);
        return;
      }
      uVar11 = uVar11 >> 1;
      pfVar7 = param_1 + uVar11 * 2;
      if (uVar4 < 0x401) {
        FUN_00341ce0(pfVar7,param_1,pfVar6,param_3);
      }
      else {
        FUN_00341ce0(param_1,pfVar7,pfVar6,param_3);
        pfVar1 = param_1 + uVar11 * 2;
        pfVar8 = param_1 + 2;
        FUN_00341ce0(pfVar8,pfVar1 + -2,param_2 + -4,param_3);
        FUN_00341ce0(param_1 + 4,pfVar8 + uVar11 * 2,param_2 + -6,param_3);
        FUN_00341ce0(pfVar1 + -2,pfVar7,pfVar8 + uVar11 * 2,param_3);
        uVar5 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)pfVar1;
        *(undefined8 *)pfVar1 = uVar5;
      }
      if (((param_5 & 1) == 0) &&
         ((param_1[-2] < *param_1 ||
          ((param_1[-2] == *param_1 && ((int)param_1[1] <= (int)param_1[-1])))))) {
        param_1 = (float *)FUN_00341e00(param_1,param_2,param_3);
        goto LAB_0034195c;
      }
      auVar14 = FUN_00341f50(param_1,param_2,param_3);
      pfVar8 = auVar14._0_8_;
      if ((auVar14._8_8_ & 1) == 0) break;
      uVar4 = FUN_003420a0(param_1,pfVar8,param_3);
      uVar11 = FUN_003420a0(pfVar8 + 2,param_2,param_3);
      if ((uVar11 & 1) != 0) {
        param_4 = -param_4;
        param_2 = pfVar8;
        if ((uVar4 & 1) != 0) {
          return;
        }
        goto LAB_003417b0;
      }
      pfVar7 = pfVar8 + 2;
    } while ((uVar4 & 1) != 0);
    FUN_00341780(param_1,pfVar8,param_3,-param_4,param_5 & 1);
    param_1 = pfVar8 + 2;
LAB_0034195c:
    param_5 = 0;
    param_4 = -param_4;
  } while( true );
LAB_00341c58:
  fVar12 = *pfVar6;
  if ((*param_1 <= fVar12) &&
     ((fVar3 = param_1[3], fVar12 != *param_1 || ((int)fVar3 < (int)param_1[1])))) {
    *(undefined8 *)pfVar6 = *(undefined8 *)param_1;
    fVar13 = param_1[-2];
    pfVar7 = param_1;
    if (fVar13 <= fVar12) {
      pfVar8 = param_1;
      do {
        if ((fVar12 <= fVar13) && ((int)pfVar8[-1] <= (int)fVar3)) {
          pfVar7 = pfVar8;
          break;
        }
        fVar13 = pfVar8[-4];
        pfVar7 = pfVar8 + -2;
        *(undefined8 *)pfVar8 = *(undefined8 *)pfVar7;
        pfVar8 = pfVar7;
      } while (fVar13 <= fVar12);
    }
    *pfVar7 = fVar12;
    pfVar7[1] = fVar3;
  }
  pfVar6 = pfVar6 + 2;
  param_1 = param_1 + 2;
  if (pfVar6 == param_2) {
    return;
  }
  goto LAB_00341c58;
LAB_00341ba8:
  pfVar8 = pfVar6;
  fVar12 = pfVar7[2];
  if ((*pfVar7 <= fVar12) &&
     ((fVar3 = pfVar7[3], fVar12 != *pfVar7 || ((int)fVar3 < (int)pfVar7[1])))) {
    *(undefined8 *)(pfVar7 + 2) = *(undefined8 *)pfVar7;
    pfVar6 = param_1;
    if (pfVar7 != param_1) {
      pfVar6 = pfVar7;
      lVar9 = lVar10;
      do {
        pfVar7 = (float *)((long)param_1 + lVar9);
        if (fVar12 < pfVar7[-2]) {
          pfVar6 = pfVar7;
          goto LAB_00341b90;
        }
        if ((fVar12 <= pfVar7[-2]) && ((int)pfVar7[-1] <= (int)fVar3)) goto LAB_00341b90;
        lVar9 = lVar9 + -8;
        *(undefined8 *)pfVar7 = *(undefined8 *)(pfVar7 + -2);
        pfVar6 = pfVar6 + -2;
      } while (lVar9 != 0);
      pfVar6 = param_1;
    }
LAB_00341b90:
    *pfVar6 = fVar12;
    pfVar6[1] = fVar3;
  }
  pfVar6 = pfVar8 + 2;
  lVar10 = lVar10 + 8;
  pfVar7 = pfVar8;
  if (pfVar6 == param_2) {
switchD_0034198c_caseD_0:
    return;
  }
  goto LAB_00341ba8;
}

