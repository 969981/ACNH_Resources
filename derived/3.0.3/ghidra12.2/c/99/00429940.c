
void * FUN_00429940(long *param_1,void *param_2,long param_3,long param_4)

{
  long lVar1;
  size_t __n;
  int iVar2;
  void *pvVar3;
  
  __n = param_3 - (long)param_2;
  if (__n == 0) {
    pvVar3 = (void *)*param_1;
  }
  else {
    lVar1 = param_1[1];
    if (__n + param_4 <= (ulong)(lVar1 - *param_1)) {
      pvVar3 = (void *)(*param_1 + param_4 + -1);
      do {
        pvVar3 = (void *)((long)pvVar3 + 1);
        iVar2 = memcmp(pvVar3,param_2,__n);
        if (iVar2 == 0) {
          return pvVar3;
        }
      } while ((void *)(lVar1 - __n) != pvVar3);
    }
    pvVar3 = (void *)0x0;
  }
  return pvVar3;
}

