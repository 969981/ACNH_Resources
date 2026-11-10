
void FUN_00342360(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined8 uVar1;
  
  FUN_00341ce0();
  if ((*param_3 <= *param_4) && ((*param_4 != *param_3 || ((int)param_4[1] < (int)param_3[1])))) {
    uVar1 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = uVar1;
    if ((*param_2 <= *param_3) && ((*param_3 != *param_2 || ((int)param_3[1] < (int)param_2[1])))) {
      uVar1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar1;
      if ((*param_1 <= *param_2) && ((*param_2 != *param_1 || ((int)param_2[1] < (int)param_1[1]))))
      {
        uVar1 = *(undefined8 *)param_1;
        *(undefined8 *)param_1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = uVar1;
      }
    }
  }
  if ((*param_4 <= *param_5) && ((*param_5 != *param_4 || ((int)param_5[1] < (int)param_4[1])))) {
    uVar1 = *(undefined8 *)param_4;
    *(undefined8 *)param_4 = *(undefined8 *)param_5;
    *(undefined8 *)param_5 = uVar1;
    if ((*param_3 <= *param_4) && ((*param_4 != *param_3 || ((int)param_4[1] < (int)param_3[1])))) {
      uVar1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = *(undefined8 *)param_4;
      *(undefined8 *)param_4 = uVar1;
      if ((*param_2 <= *param_3) && ((*param_3 != *param_2 || ((int)param_3[1] < (int)param_2[1]))))
      {
        uVar1 = *(undefined8 *)param_2;
        *(undefined8 *)param_2 = *(undefined8 *)param_3;
        *(undefined8 *)param_3 = uVar1;
        if ((*param_1 <= *param_2) &&
           ((*param_2 != *param_1 || ((int)param_2[1] < (int)param_1[1])))) {
          uVar1 = *(undefined8 *)param_1;
          *(undefined8 *)param_1 = *(undefined8 *)param_2;
          *(undefined8 *)param_2 = uVar1;
        }
      }
    }
  }
  return;
}

