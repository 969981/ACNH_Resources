
undefined8 FUN_00341ce0(float *param_1,float *param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = *param_2;
  if ((fVar2 < *param_1) || ((fVar2 == *param_1 && ((int)param_1[1] <= (int)param_2[1])))) {
    if ((*param_3 < fVar2) || ((*param_3 <= fVar2 && ((int)param_2[1] <= (int)param_3[1])))) {
      return 0;
    }
    uVar1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = *(undefined8 *)param_3;
    *(undefined8 *)param_3 = uVar1;
    if ((*param_1 <= *param_2) && ((*param_1 < *param_2 || ((int)param_2[1] < (int)param_1[1])))) {
      uVar1 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)param_2 = uVar1;
      return 2;
    }
  }
  else {
    if ((fVar2 <= *param_3) && ((fVar2 < *param_3 || ((int)param_3[1] < (int)param_2[1])))) {
      uVar1 = *(undefined8 *)param_1;
      *(undefined8 *)param_1 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar1;
      return 1;
    }
    uVar1 = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)param_2 = uVar1;
    if (((float)uVar1 <= *param_3) &&
       ((*param_3 != (float)uVar1 || ((int)param_3[1] < (int)((ulong)uVar1 >> 0x20))))) {
      *(undefined8 *)param_2 = *(undefined8 *)param_3;
      *(undefined8 *)param_3 = uVar1;
      return 2;
    }
  }
  return 1;
}

