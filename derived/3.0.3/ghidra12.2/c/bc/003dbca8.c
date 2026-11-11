
long FUN_003dbca8(uint *param_1,uint param_2)

{
  if ((param_2 < *param_1) && ((short)param_1[(ulong)param_2 * 2 + 1] == 0x4102)) {
    return (long)param_1 + (long)(int)param_1[(ulong)param_2 * 2 + 2];
  }
  return 0;
}

