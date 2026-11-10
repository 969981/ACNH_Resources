
undefined8 FUN_002ba574(long param_1)

{
  if (*(long *)(param_1 + 0x80) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x80) + 8);
}

