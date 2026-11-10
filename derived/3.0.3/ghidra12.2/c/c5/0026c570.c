
bool FUN_0026c570(long param_1)

{
  if (*(long *)(param_1 + 0x38) == 0) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x38) + 0x84) != '\0';
}

