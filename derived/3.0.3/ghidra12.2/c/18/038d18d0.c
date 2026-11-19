
ulong FUN_038d18d0(undefined8 *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  char *__dest;
  ulong __n;
  
  __dest = (char *)*param_1;
  if (__dest == param_2) {
    __n = 0;
  }
  else {
    if (param_3 == 0xffffffff) {
      param_3 = 0xffffffff;
      pcVar2 = param_2;
      do {
        cVar1 = *pcVar2;
        param_3 = param_3 + 1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
    }
    if (*(int *)((long)param_1 + 0xc) <= (int)param_3) {
      param_3 = *(int *)((long)param_1 + 0xc) - 1;
    }
    __n = (ulong)param_3;
    if ((int)param_3 < 1) {
      __n = 0;
    }
    else {
      memcpy(__dest,param_2,__n);
      __dest = __dest + __n;
    }
    *__dest = '\0';
    *(int *)(param_1 + 1) = (int)__n;
  }
  return __n;
}

