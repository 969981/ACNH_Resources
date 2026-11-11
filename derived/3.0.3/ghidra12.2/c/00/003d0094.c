
void FUN_003d0094(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (((*param_2 == 0x51455346) && ((short)param_2[1] == -0x101)) &&
     (param_2[2] - 0x10000U < 0x10001)) {
    *param_1 = param_2;
    piVar1 = (int *)FUN_003d0150(param_2);
    if ((*piVar1 == 0x41544144) && (piVar2 = (int *)FUN_003d01a0(*param_1), *piVar2 == 0x4c42414c))
    {
      param_1[1] = piVar1 + 2;
      param_1[2] = piVar2 + 2;
    }
  }
  return;
}

