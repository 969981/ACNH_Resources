
undefined8 FUN_00188648(long param_1)

{
  if (*(long *)(param_1 + 0x60) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x10);
}

