
undefined8 FUN_003c6670(long param_1,int param_2)

{
  if (param_2 < 0x10) {
    return *(undefined8 *)(param_1 + (long)param_2 * 8 + 0x140);
  }
  return 0;
}

