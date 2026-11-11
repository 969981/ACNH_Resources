
void FUN_003d40cc(undefined8 *param_1,int *param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_003d43e0(param_1 + 3);
  *(char *)(param_1 + 4) = param_3;
  if (param_3 == '\x01') {
    param_1[3] = param_2;
  }
  else if ((((param_3 == '\0') && (*param_2 == 0x56415746)) && ((short)param_2[1] == -0x101)) &&
          (param_2[2] - 0x10000U < 0x201)) {
    *param_1 = param_2;
    piVar1 = (int *)FUN_003d4460(param_2);
    piVar2 = (int *)FUN_003d44b0(*param_1);
    if (((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) &&
       ((*piVar1 == 0x4f464e49 && (*piVar2 == 0x41544144)))) {
      param_1[1] = piVar1 + 2;
      param_1[2] = piVar2 + 2;
      return;
    }
  }
  return;
}

