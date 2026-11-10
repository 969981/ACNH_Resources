
undefined8 FUN_0017af74(long *param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = 1;
  if ((param_1 != (long *)0x0) && (param_2 != (long *)0x0)) {
    lVar2 = param_2[4];
    if ((lVar2 == -1) && ((int)param_2[5] == -1)) {
      if ((long *)param_2[2] == param_2) {
        return 3;
      }
      *(long **)(param_2[3] + 0x10) = (long *)param_2[2];
      *(long *)(param_2[2] + 0x18) = param_2[3];
      param_2[2] = (long)param_2;
    }
    else {
      plVar3 = (long *)FUN_0017acd4(lVar2,param_2[5]);
      if (plVar3 != param_2) {
        return 2;
      }
      param_1 = (long *)param_2[2];
      if (param_1 == param_2) {
        if (*param_2 == 0) {
          param_1 = (long *)param_2[1];
        }
        else {
          param_1 = (long *)FUN_0017acd4(param_2[4],param_2[5]);
          param_1[1] = param_2[1];
        }
      }
      else {
        lVar2 = param_2[5];
        param_1[4] = param_2[4];
        param_1[5] = lVar2;
        param_1[1] = param_2[1];
        *param_1 = *param_2;
        param_1[3] = param_2[3];
        *(long **)(param_2[3] + 0x10) = param_1;
      }
    }
    uVar1 = 0;
    *param_3 = (long)param_1;
  }
  return uVar1;
}

