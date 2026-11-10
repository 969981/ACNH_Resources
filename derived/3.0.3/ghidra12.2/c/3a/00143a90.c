
void FUN_00143a90(long *param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_4 = param_3;
  if (param_1[3] == 0) {
    *param_1 = (long)param_4;
    param_4[1] = 0;
    plVar2 = param_1 + 1;
    *(undefined8 *)(*param_1 + 0x10) = 0;
  }
  else {
    plVar2 = (long *)(param_2 + 0x10);
    plVar1 = param_1;
    if (param_2 != 0) {
      plVar1 = plVar2;
    }
    lVar3 = *plVar1;
    param_4[1] = param_2;
    param_4[2] = lVar3;
    if (param_2 == 0) {
      *(undefined8 **)(*param_1 + 8) = param_4;
      plVar2 = param_1;
    }
    else {
      plVar1 = param_1;
      if ((long *)*plVar2 != (long *)0x0) {
        plVar1 = (long *)*plVar2;
      }
      plVar1[1] = (long)param_4;
    }
  }
  *plVar2 = (long)param_4;
  param_1[3] = param_1[3] + 1;
  return;
}

