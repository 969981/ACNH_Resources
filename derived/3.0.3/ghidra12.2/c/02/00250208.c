
bool FUN_00250208(long param_1)

{
  if ((*(char *)(param_1 + 8) == '\0') || (*(long *)(param_1 + 0x18) == 0)) {
    return false;
  }
  return *(int *)(*(long *)(param_1 + 0x18) + 0x420) != 0;
}

