
undefined8 FUN_00694874(int *param_1,double *param_2)

{
  double dVar1;
  
  if (*param_1 != 3) {
    return 1;
  }
  dVar1 = *(double *)(param_1 + 2);
  if ((char)param_1[4] != '\0') {
    dVar1 = (double)SUB84(*(double *)(param_1 + 2),0);
  }
  *param_2 = dVar1;
  return 0;
}

