
float * FUN_003430b0(float *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_1;
  pfVar3 = param_1;
  if (fVar1 < 0.0) {
    do {
      while( true ) {
        pfVar3 = pfVar3 + 2;
        fVar5 = *pfVar3;
        if (0.0 <= fVar5) break;
        if (fVar5 <= fVar1) goto LAB_0034310c;
      }
    } while (fVar5 < fVar1);
  }
  else {
    do {
      pfVar3 = pfVar3 + 2;
    } while (*pfVar3 < fVar1);
  }
LAB_0034310c:
  if (pfVar3 + -2 == param_1) {
    if (pfVar3 < param_2) {
      if (fVar1 < 0.0) {
        do {
          while( true ) {
            param_2 = param_2 + -2;
            fVar5 = *param_2;
            if (0.0 <= fVar5) break;
            if (fVar1 < fVar5 || param_2 <= pfVar3) goto LAB_003431b4;
          }
        } while (fVar1 <= fVar5 && pfVar3 < param_2);
      }
      else {
        do {
          param_2 = param_2 + -2;
        } while (fVar1 <= *param_2 && pfVar3 < param_2);
      }
    }
  }
  else if (fVar1 < 0.0) {
    do {
      while( true ) {
        param_2 = param_2 + -2;
        fVar5 = *param_2;
        if (0.0 <= fVar5) break;
        if (fVar1 < fVar5) goto LAB_003431b4;
      }
    } while (fVar1 <= fVar5);
  }
  else {
    do {
      param_2 = param_2 + -2;
    } while (fVar1 <= *param_2);
  }
LAB_003431b4:
  fVar5 = param_1[1];
  if (pfVar3 < param_2) {
    do {
      uVar4 = *(undefined8 *)pfVar3;
      *(undefined8 *)pfVar3 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar4;
      if (fVar1 < 0.0) {
        do {
          while( true ) {
            pfVar3 = pfVar3 + 2;
            fVar6 = *pfVar3;
            if (0.0 <= fVar6) break;
            if (fVar6 <= fVar1) goto LAB_0034321c;
          }
        } while (fVar6 < fVar1);
      }
      else {
        do {
          pfVar3 = pfVar3 + 2;
        } while (*pfVar3 < fVar1);
      }
LAB_0034321c:
      if (fVar1 < 0.0) {
        do {
          while( true ) {
            param_2 = param_2 + -2;
            fVar6 = *param_2;
            if (0.0 <= fVar6) break;
            if (fVar1 < fVar6) goto LAB_003431d0;
          }
        } while (fVar1 <= fVar6);
      }
      else {
        do {
          param_2 = param_2 + -2;
        } while (fVar1 <= *param_2);
      }
LAB_003431d0:
    } while (pfVar3 < param_2);
  }
  pfVar2 = pfVar3 + -2;
  if (pfVar2 != param_1) {
    *(undefined8 *)param_1 = *(undefined8 *)pfVar2;
  }
  pfVar3[-2] = fVar1;
  pfVar3[-1] = fVar5;
  return pfVar2;
}

