
void FUN_032be74c(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_2 + 0xc) == '\0') {
    if (*(long **)(param_1 + 0x70) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x70) + 8))();
    }
    plVar1 = *(long **)(param_2 + 0x18);
    uVar2 = 0;
    if (plVar1 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0x78);
    }
    *(undefined8 *)(param_1 + 0x70) = uVar2;
  }
  else {
    if (*(long **)(param_1 + 0xa0) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0xa0) + 8))();
    }
    plVar1 = *(long **)(param_2 + 0x48);
    uVar2 = 0;
    if (plVar1 != (long *)0x0) {
      uVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,param_1 + 0xa8);
    }
    *(undefined8 *)(param_1 + 0xa0) = uVar2;
  }
  return;
}

