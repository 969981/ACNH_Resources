
undefined8 FUN_0053b3d0(long param_1)

{
  if (*(char *)(param_1 + 0x268) == '\0') {
    return 0;
  }
  if ((*(long *)(param_1 + 0x1a0) == 0) || (*(int *)(*(long *)(param_1 + 0x1a0) + 0x20) == 0)) {
    if (*(long *)(param_1 + 0x1a8) == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(param_1 + 0x1a8) + 0x20) == 0) {
      return 0;
    }
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x158) == 0) {
    return 0;
  }
  if (*(long *)(param_1 + 0x198) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x198) + 0x88) + 0x20);
}

