
bool FUN_00209464(long param_1)

{
  if (*(long *)(param_1 + 0x108) == 0) {
    return false;
  }
  return *(int *)(*(long *)(param_1 + 0x108) + 0x40) != 5;
}

