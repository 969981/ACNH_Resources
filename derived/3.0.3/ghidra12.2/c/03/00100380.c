
short * FUN_00100380(short *param_1,short *param_2,ushort param_3)

{
  short sVar1;
  short *__s;
  
  if (param_3 != 0) {
    __s = param_1;
    do {
      sVar1 = *param_2;
      if (sVar1 == 0) {
        memset(__s,0,(ulong)param_3 << 1);
        return param_1;
      }
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
      *__s = sVar1;
      __s = __s + 1;
    } while (param_3 != 0);
  }
  return param_1;
}

