
bool FUN_00ed80bc(int *param_1,int *param_2)

{
  if (((short)param_1[1] == 0) || ((short)param_2[1] == 0)) {
    return *param_1 == *param_2;
  }
  if (*param_1 == *param_2) {
    return (*(long *)(param_2 + 1) == *(long *)(param_1 + 1) &&
           *(long *)(param_2 + 3) == *(long *)(param_1 + 3)) && param_2[5] == param_1[5];
  }
  return false;
}

