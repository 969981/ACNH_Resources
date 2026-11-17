
undefined8 FUN_02c9ba78(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x1cfcc);
  if (*(int *)(param_2 + 0x10) == 1) {
    if (*piVar1 != -1) {
      return 1;
    }
    iVar2 = 6;
  }
  else {
    if (*(int *)(param_2 + 0x10) != 0) {
      return 1;
    }
    if (*piVar1 != -1) {
      return 1;
    }
    iVar2 = 1;
  }
  *piVar1 = iVar2;
  *(undefined8 *)(param_1 + 0x1cfd0) = 0xffffffffffffffff;
  return 1;
}

