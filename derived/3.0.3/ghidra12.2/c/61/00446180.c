
void FUN_00446180(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == (long *)0x0) {
    if ((param_1[3] != 0) && ((long *)param_1[7] != (long *)0x0)) {
      *(long *)param_1[7] = *param_1 - param_1[2];
    }
    lVar2 = param_1[6];
    param_1[3] = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
    lVar2 = param_1[6];
    param_1[6] = 0;
    if (lVar2 == 0) {
      param_1[3] = 0;
      return;
    }
    FUN_004435c0();
    lVar2 = param_1[6];
    param_1[3] = 0;
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_004435c0();
  return;
}

