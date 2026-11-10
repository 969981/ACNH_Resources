
undefined8 FUN_0026cdcc(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x8d) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x8e) == '\0') {
    return 0;
  }
  if (param_2 != 0) {
    *(long *)(param_1 + 0x58) = param_2;
    FUN_00220f78(param_2);
  }
  *(undefined1 *)(param_1 + 0x8e) = 0;
  return 1;
}

