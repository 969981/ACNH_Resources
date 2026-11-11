
bool FUN_003c04b4(long param_1)

{
  if (*(long *)(param_1 + 0x10) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x10) + 0x10) != '\0';
}

