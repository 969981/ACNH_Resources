
undefined8 FUN_002e8910(long param_1,byte param_2)

{
  if (param_2 < 4) {
    return *(undefined8 *)(param_1 + (ulong)param_2 * 8 + 0x2a0);
  }
  return 0;
}

