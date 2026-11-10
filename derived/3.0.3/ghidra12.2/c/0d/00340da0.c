
float * FUN_00340da0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  pfVar5 = param_2 + -2;
  fVar7 = *pfVar5;
  pfVar4 = param_1;
  if (fVar7 < fVar1) {
LAB_00340e04:
    while( true ) {
      pfVar3 = pfVar4;
      pfVar4 = pfVar3 + 2;
      if (param_2 <= pfVar4) break;
      if ((fVar1 <= *pfVar4) && ((*pfVar4 != fVar1 || ((int)fVar2 < (int)pfVar3[3])))) break;
    }
  }
  else {
    if (fVar7 == fVar1) {
      if ((int)param_2[-1] <= (int)fVar2) goto LAB_00340e04;
    }
    do {
      do {
        pfVar3 = pfVar4;
        pfVar4 = pfVar3 + 2;
      } while (*pfVar4 < fVar1);
    } while ((*pfVar4 == fVar1) && ((int)pfVar3[3] <= (int)fVar2));
  }
  if ((pfVar4 < param_2) && (param_2 = pfVar5, fVar1 <= fVar7)) {
    do {
      if ((fVar7 <= fVar1) && ((int)param_2[1] <= (int)fVar2)) break;
      param_2 = param_2 + -2;
      fVar7 = *param_2;
    } while (fVar1 <= fVar7);
  }
  do {
    if (param_2 <= pfVar4) {
      if (pfVar4 + -2 != param_1) {
        *(undefined8 *)param_1 = *(undefined8 *)(pfVar4 + -2);
      }
      pfVar4[-2] = fVar1;
      pfVar4[-1] = fVar2;
      return pfVar4;
    }
    uVar6 = *(undefined8 *)pfVar4;
    *(undefined8 *)pfVar4 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar6;
    do {
      do {
        pfVar5 = pfVar4;
        pfVar4 = pfVar5 + 2;
      } while (*pfVar4 < fVar1);
      if (*pfVar4 != fVar1) break;
    } while ((int)pfVar5[3] <= (int)fVar2);
    do {
      pfVar5 = param_2;
      param_2 = pfVar5 + -2;
      if (*param_2 < fVar1) break;
    } while ((fVar1 < *param_2) || ((int)fVar2 < (int)pfVar5[-1]));
  } while( true );
}

