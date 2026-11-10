
bool FUN_00209484(long param_1)

{
  if (*(long *)(param_1 + 0xf8) == 0) {
    return false;
  }
  return *(int *)(*(long *)(param_1 + 0xf8) + 0x40) != 5;
}

