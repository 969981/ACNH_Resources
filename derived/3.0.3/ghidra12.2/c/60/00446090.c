
void FUN_00446090(long *param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)param_1[6];
  if (plVar2 == (long *)0x0) {
    if ((param_1[3] != 0) && ((long *)param_1[7] != (long *)0x0)) {
      *(long *)param_1[7] = *param_1 - param_1[2];
    }
  }
  else {
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
    lVar3 = param_1[6];
    param_1[6] = 0;
    if (lVar3 != 0) {
      FUN_004435c0();
      param_1[3] = 0;
      plVar2 = (long *)*param_2;
      goto joined_r0x00446108;
    }
  }
  param_1[3] = 0;
  plVar2 = (long *)*param_2;
joined_r0x00446108:
  if (plVar2 == (long *)0x0) {
    lVar3 = param_2[1];
    lVar1 = param_2[2];
    param_1[2] = lVar3;
    *param_1 = lVar3;
    param_1[1] = lVar1 + lVar3;
    param_1[4] = 0;
    param_1[7] = param_2[3];
  }
  else {
    FUN_004435a0(plVar2);
    lVar3 = param_1[6];
    param_1[6] = (long)plVar2;
    if (lVar3 != 0) {
      FUN_004435c0();
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
    param_1[7] = 0;
  }
  param_1[3] = 1;
  return;
}

