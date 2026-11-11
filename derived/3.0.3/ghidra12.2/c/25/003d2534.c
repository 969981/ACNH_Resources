
void FUN_003d2534(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (((*param_2 == 0x44535746) && ((short)param_2[1] == -0x101)) && (param_2[2] - 0x10000U < 0x101)
     ) {
    *param_1 = param_2;
    piVar1 = (int *)FUN_003d2760(param_2);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0x4f464e49)) {
      param_1[1] = piVar1 + 2;
    }
  }
  return;
}

