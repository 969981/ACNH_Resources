
void FUN_0049e570(long *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  if ((char)param_1[6] != '\0') {
    plVar1 = (long *)param_1[7];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
      plVar1 = (long *)param_1[7];
      param_1[7] = 0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
  plVar1 = (long *)*param_2;
  *param_2 = 0;
  plVar2 = (long *)param_1[7];
  param_1[7] = (long)plVar1;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
    plVar1 = (long *)param_1[7];
  }
  if (plVar1 == (long *)0x0) {
    lVar3 = param_2[1];
    param_1[2] = lVar3;
    *param_1 = lVar3;
    param_1[1] = param_2[2] + lVar3;
  }
  else {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  return;
}

