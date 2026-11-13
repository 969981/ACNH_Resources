
void FUN_0130f77c(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_0498dbd8;
  param_1[0x3c] = PTR_DAT_04bbc2c8 + 0x10;
  FUN_03f45838(param_1 + 0x57);
  plVar2 = (long *)param_1[0x5a];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    iVar1 = *(int *)((long)param_1 + 0x2c4) + -1;
    if (((*(int *)((long)param_1 + 0x2c4) < 1) ||
        (*(int *)((long)param_1 + 0x2c4) = iVar1, iVar1 == 0)) && (param_1[0x59] != 0)) {
      FUN_03f44508();
      param_1[0x59] = 0;
    }
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  param_1[0x37] = &PTR_LAB_04993a08;
  return;
}

