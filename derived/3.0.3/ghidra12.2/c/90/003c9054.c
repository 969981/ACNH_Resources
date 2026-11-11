
undefined4 FUN_003c9054(long param_1,uint param_2)

{
  if (*(char *)(param_1 + 0x18) == '\0') {
    return 0;
  }
  return *(undefined4 *)(*(long *)(param_1 + 8) + (ulong)param_2 * 0xc + 0xc);
}

