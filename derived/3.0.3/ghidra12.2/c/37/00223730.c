
bool FUN_00223730(long *param_1,long *param_2)

{
  long *plVar1;
  
  if (*param_2 == 0 || param_2[1] == 0) {
    return false;
  }
  plVar1 = param_1;
  do {
    plVar1 = (long *)plVar1[1];
  } while (plVar1 != param_2 && plVar1 != param_1);
  return plVar1 != param_1;
}

