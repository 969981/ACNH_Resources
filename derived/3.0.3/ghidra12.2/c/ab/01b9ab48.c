
void FUN_01b9ab48(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  FUN_03f45838(param_1 + 0xb2);
  FUN_03f45838(param_1 + 0xb2);
  plVar2 = (long *)param_1[0xb5];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    iVar1 = *(int *)((long)param_1 + 0x59c) + -1;
    if (((*(int *)((long)param_1 + 0x59c) < 1) ||
        (*(int *)((long)param_1 + 0x59c) = iVar1, iVar1 == 0)) && (param_1[0xb4] != 0)) {
      FUN_03f44508();
      param_1[0xb4] = 0;
    }
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  param_1[0x80] = &PTR_LAB_048fc7e8;
  param_1[0x28] = &PTR_LAB_048fc7e8;
  *param_1 = &PTR_LAB_048fc7e8;
  return;
}

