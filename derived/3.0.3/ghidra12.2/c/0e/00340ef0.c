
float * FUN_00340ef0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  pfVar3 = param_1 + 2;
  fVar6 = *pfVar3;
  if (fVar6 <= fVar1) {
    do {
      pfVar4 = pfVar3;
      if ((fVar1 <= fVar6) && ((int)fVar2 <= (int)pfVar4[1])) {
        pfVar3 = pfVar4;
        pfVar4 = pfVar4 + -2;
        break;
      }
      pfVar3 = pfVar4 + 2;
      fVar6 = *pfVar3;
    } while (fVar6 <= fVar1);
    if (pfVar4 != param_1) {
      do {
        do {
          pfVar4 = param_2;
          param_2 = pfVar4 + -2;
        } while (fVar1 < *param_2);
      } while ((fVar1 <= *param_2) && ((int)fVar2 <= (int)pfVar4[-1]));
      goto LAB_00340f94;
    }
  }
  while( true ) {
    pfVar4 = param_2;
    param_2 = pfVar4;
    if (pfVar4 <= pfVar3) break;
    param_2 = pfVar4 + -2;
    if ((*param_2 <= fVar1) && ((*param_2 < fVar1 || ((int)pfVar4[-1] < (int)fVar2)))) break;
  }
LAB_00340f94:
  if (pfVar3 < param_2) {
    do {
      uVar5 = *(undefined8 *)pfVar3;
      *(undefined8 *)pfVar3 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar5;
      do {
        do {
          pfVar4 = pfVar3;
          pfVar3 = pfVar4 + 2;
          if (fVar1 < *pfVar3) goto LAB_00340ff0;
        } while (*pfVar3 < fVar1);
      } while ((int)pfVar4[3] < (int)fVar2);
LAB_00340ff0:
      do {
        do {
          pfVar4 = param_2;
          param_2 = pfVar4 + -2;
        } while (fVar1 < *param_2);
      } while ((fVar1 <= *param_2) && ((int)fVar2 <= (int)pfVar4[-1]));
    } while (pfVar3 < param_2);
  }
  pfVar4 = pfVar3 + -2;
  if (pfVar4 != param_1) {
    *(undefined8 *)param_1 = *(undefined8 *)pfVar4;
  }
  pfVar3[-2] = fVar1;
  pfVar3[-1] = fVar2;
  return pfVar4;
}

