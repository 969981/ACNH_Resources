
float * FUN_00342ee0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar5 = param_2[-2];
  if ((0.0 <= fVar1) || (0.0 <= fVar5)) {
    if (fVar1 < fVar5) goto LAB_00342f74;
  }
  else if (fVar5 < fVar1) {
LAB_00342f74:
    pfVar3 = param_1;
    if (fVar1 < 0.0) {
      do {
        while( true ) {
          pfVar3 = pfVar3 + 2;
          fVar6 = *pfVar3;
          if (0.0 <= fVar6) break;
          if (fVar6 < fVar1) goto LAB_00342fbc;
        }
      } while (fVar6 <= fVar1);
    }
    else {
      do {
        pfVar3 = pfVar3 + 2;
      } while (*pfVar3 <= fVar1);
    }
    goto LAB_00342fbc;
  }
  pfVar3 = param_1 + 2;
  if (pfVar3 < param_2) {
    if (fVar1 < 0.0) {
      do {
        fVar6 = *pfVar3;
        if (0.0 <= fVar6) {
          if (fVar1 < fVar6) break;
        }
        else if (fVar6 < fVar1) break;
        pfVar3 = pfVar3 + 2;
      } while (pfVar3 < param_2);
    }
    else {
      do {
        if (fVar1 < *pfVar3) break;
        pfVar3 = pfVar3 + 2;
      } while (pfVar3 < param_2);
    }
  }
LAB_00342fbc:
  if (pfVar3 < param_2) {
    if (fVar1 < 0.0) {
      param_2 = param_2 + -2;
      do {
        if (0.0 <= fVar5) {
          if (fVar5 <= fVar1) goto LAB_00343080;
        }
        else if (fVar1 <= fVar5) goto LAB_00343080;
        param_2 = param_2 + -2;
        fVar5 = *param_2;
      } while( true );
    }
    do {
      param_2 = param_2 + -2;
    } while (fVar1 < *param_2);
  }
LAB_00343080:
  do {
    if (param_2 <= pfVar3) {
      if (pfVar3 + -2 != param_1) {
        *(undefined8 *)param_1 = *(undefined8 *)(pfVar3 + -2);
      }
      pfVar3[-2] = fVar1;
      pfVar3[-1] = fVar2;
      return pfVar3;
    }
    uVar4 = *(undefined8 *)pfVar3;
    *(undefined8 *)pfVar3 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar4;
    if (fVar1 < 0.0) {
      do {
        while( true ) {
          pfVar3 = pfVar3 + 2;
          fVar5 = *pfVar3;
          if (0.0 <= fVar5) break;
          if (fVar5 < fVar1) goto LAB_0034304c;
        }
      } while (fVar5 <= fVar1);
    }
    else {
      do {
        pfVar3 = pfVar3 + 2;
      } while (*pfVar3 <= fVar1);
    }
LAB_0034304c:
    if (fVar1 < 0.0) {
      do {
        while( true ) {
          param_2 = param_2 + -2;
          fVar5 = *param_2;
          if (0.0 <= fVar5) break;
          if (fVar1 <= fVar5) goto LAB_00343080;
        }
      } while (fVar1 < fVar5);
      goto LAB_00343080;
    }
    do {
      param_2 = param_2 + -2;
    } while (fVar1 < *param_2);
  } while( true );
}

