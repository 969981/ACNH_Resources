
bool FUN_01e7f04c(long param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x77f4) == 0x3d) || (*(int *)(param_1 + 0x77b0) == 0x3d)) {
    iVar1 = *(int *)(param_1 + 0x126f8);
    if (iVar1 == 0 || iVar1 == 2) {
      return true;
    }
    if (iVar1 == 3) {
      return *(int *)(*(long *)(param_1 + 8) + 0x750) == 0;
    }
  }
  return false;
}

