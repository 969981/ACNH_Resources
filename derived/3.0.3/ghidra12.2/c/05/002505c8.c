
undefined4 FUN_002505c8(long param_1)

{
  if ((*(char *)(param_1 + 8) == '\0') || (*(long *)(param_1 + 0x18) == 0)) {
    return 0;
  }
  return *(undefined4 *)(*(long *)(param_1 + 0x18) + 0x380);
}

