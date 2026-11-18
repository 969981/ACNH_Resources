
/* WARNING: Removing unreachable block (ram,0x032f9a8c) */
/* WARNING: Removing unreachable block (ram,0x032f9ab0) */

void * FUN_032f9a60(uint param_1)

{
  void *__s;
  
  if ((param_1 == 0) || (*DAT_05730eb0 == 0)) {
    __s = (void *)0x0;
  }
  else {
    __s = (void *)(**(code **)(*(long *)*DAT_05730eb0 + 0x30))
                            ((long *)*DAT_05730eb0,(ulong)param_1,8);
    if (__s != (void *)0x0) {
      memset(__s,0,(ulong)param_1);
    }
  }
  return __s;
}

