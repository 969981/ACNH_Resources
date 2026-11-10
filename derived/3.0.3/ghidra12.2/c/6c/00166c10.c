
bool FUN_00166c10(long param_1,long param_2)

{
  if (*(long **)(param_2 + 0x4c8) == (long *)0x0) {
    return false;
  }
  return **(long **)(param_2 + 0x4c8) == param_1;
}

