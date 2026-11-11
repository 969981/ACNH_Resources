
undefined8 FUN_00429890(long *param_1,void *param_2,long param_3)

{
  void *__s1;
  int iVar1;
  ulong __n;
  
  __s1 = (void *)*param_1;
  __n = param_3 - (long)param_2;
  if ((ulong)(param_1[1] - (long)__s1) < __n) {
    return 0;
  }
  iVar1 = memcmp(__s1,param_2,__n);
  if (iVar1 == 0) {
    *param_1 = (long)__s1 + __n;
    return 1;
  }
  return 0;
}

