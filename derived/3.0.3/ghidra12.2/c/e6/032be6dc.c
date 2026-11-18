
void FUN_032be6dc(long param_1)

{
  long *plVar1;
  
  *(undefined1 *)(param_1 + 0x15c) = 1;
  if (*(long *)(*(long *)(param_1 + 0x38) + 0x80) != 0) {
    FUN_032c14c0(*(undefined8 *)(*(long *)(param_1 + 0x38) + 0x78));
  }
  plVar1 = *(long **)(param_1 + 0x100);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_1);
  }
  if ((*(char *)(param_1 + 0x160) != '\0') && (*(int *)(*(long *)(param_1 + 8) + 0x30) == 4)) {
    *(undefined4 *)(*(long *)(param_1 + 8) + 0x30) = 5;
  }
  return;
}

