
void FUN_010f6294(long param_1)

{
  if (*(char *)(param_1 + 0x29) == '\0') {
    if ((*(long *)(param_1 + 0x20) != 0) && (*(char *)(param_1 + 0x28) == '\0')) {
      *(undefined1 *)(param_1 + 0x28) = 1;
      FUN_0068a870();
      return;
    }
  }
  else if ((((*(long *)(param_1 + 0x10) != 0) && (-1 < *(int *)(param_1 + 0x18))) &&
           (*(long *)(param_1 + 0x20) != 0)) && (*(char *)(param_1 + 0x28) == '\0')) {
    *(undefined1 *)(param_1 + 0x28) = 1;
    FUN_0068a838();
    return;
  }
  return;
}

