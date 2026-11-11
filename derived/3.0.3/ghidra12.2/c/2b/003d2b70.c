
void FUN_003d2b70(long *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if (((*param_2 == 0x50524746) && ((short)param_2[1] == -0x101)) && (param_2[2] == 0x10000)) {
    piVar1 = (int *)FUN_003d2cf0(param_2);
    piVar2 = (int *)FUN_003d2d40(param_2);
    piVar3 = (int *)FUN_003d2d90(param_2);
    if (((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) &&
       ((*piVar1 == 0x4f464e49 && (*piVar2 == 0x454c4946)))) {
      if (piVar3 != (int *)0x0) {
        if (*piVar3 != 0x58464e49) {
          return;
        }
        param_1[2] = (long)(piVar3 + 2);
      }
      *param_1 = (long)(piVar1 + 2);
      param_1[1] = (long)(piVar2 + 2);
    }
  }
  return;
}

