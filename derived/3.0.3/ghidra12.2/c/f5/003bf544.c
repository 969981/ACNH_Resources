
void FUN_003bf544(long param_1)

{
  if (*(int *)(param_1 + 0x20) != 4) {
    if ((*(long *)(param_1 + 400) != 0) && (*(char *)(param_1 + 0xc4) == '\0')) {
      FUN_003c1660(*(long *)(param_1 + 400),1);
    }
    *(undefined4 *)(param_1 + 0x20) = 4;
  }
  *(undefined1 *)(param_1 + 0xc0) = 0;
  return;
}

