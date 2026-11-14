
bool FUN_01727c64(undefined8 param_1,uint param_2)

{
  if (param_2 < 8) {
    return *(char *)(&DAT_0524af98 + (long)(int)param_2 * 0x10) != '\0';
  }
  return false;
}

