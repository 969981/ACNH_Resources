
void FUN_03157f84(long *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  FUN_03f45838(param_1 + 0x759d);
  FUN_03f45838(param_1 + 0x759d);
  plVar3 = (long *)param_1[0x75a0];
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
    iVar1 = *(int *)((long)param_1 + 0x3acf4);
    iVar2 = iVar1 + -1;
    if (((iVar1 < 1) || (*(int *)((long)param_1 + 0x3acf4) = iVar2, iVar2 == 0)) &&
       (param_1[0x759f] != 0)) {
      FUN_03f44508();
      param_1[0x759f] = 0;
    }
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  param_1[0x60] = (long)(PTR_DAT_04bc5db8 + 0x10);
  FUN_03ebae78(param_1 + 0x4b);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

