
bool FUN_0014a004(long param_1)

{
  if ((*(long *)(param_1 + 0xd8) != 0) && (*(char *)(*(long *)(param_1 + 0xd8) + 0x1e0) != '\0')) {
    return true;
  }
  if (*(long *)(param_1 + 0xe0) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0xe0) + 0x1e0) != '\0';
}

