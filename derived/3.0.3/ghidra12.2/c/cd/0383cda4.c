
void FUN_0383cda4(long param_1)

{
  int iVar1;
  long *plVar2;
  
  FUN_03f45838(param_1 + 0x80);
  plVar2 = *(long **)(param_1 + 0x98);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    iVar1 = *(int *)(param_1 + 0x8c) + -1;
    if (((*(int *)(param_1 + 0x8c) < 1) || (*(int *)(param_1 + 0x8c) = iVar1, iVar1 == 0)) &&
       (*(long *)(param_1 + 0x90) != 0)) {
      FUN_03f44508();
      *(undefined8 *)(param_1 + 0x90) = 0;
    }
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  FUN_03830084(param_1 + 0x38);
  return;
}

