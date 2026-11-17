
bool FUN_02dfa554(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x210) != 0) {
    plVar1 = *(long **)(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x1b0);
    if (plVar1 == (long *)0x0) {
      return false;
    }
    uVar2 = (**(code **)(*plVar1 + 0x60))();
    if ((uVar2 & 1) == 0) {
      return false;
    }
  }
  return *(int *)(param_1 + 0x1b0) == 3 || *(int *)(param_1 + 0x1b0) == 5;
}

