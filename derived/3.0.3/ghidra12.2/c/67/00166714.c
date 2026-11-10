
bool FUN_00166714(long param_1)

{
  if (*(long *)(param_1 + 0x678) == 0) {
    return false;
  }
  return *(int *)(*(long *)(param_1 + 0x678) + 0x4020) != 2;
}

