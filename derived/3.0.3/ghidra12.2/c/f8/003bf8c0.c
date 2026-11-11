
void FUN_003bf8c0(long param_1)

{
  if (*(char *)(param_1 + 0xc5) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x3d2) == '\0') {
    *(undefined1 *)(param_1 + 0x3d1) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x20) != 4) {
    if ((*(long *)(param_1 + 400) != 0) && (*(char *)(param_1 + 0xc4) == '\0')) {
      FUN_003c1660(*(long *)(param_1 + 400),1);
    }
    *(undefined4 *)(param_1 + 0x20) = 4;
  }
  *(undefined1 *)(param_1 + 0xc0) = 0;
  return;
}

