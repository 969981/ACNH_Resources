
bool FUN_001666f0(long param_1)

{
  if (*(long *)(param_1 + 0x678) == 0) {
    return true;
  }
  return *(int *)(*(long *)(param_1 + 0x678) + 0x4020) == 2;
}

