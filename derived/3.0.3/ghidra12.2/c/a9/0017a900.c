
size_t FUN_0017a900(void *param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  size_t __n;
  
  __n = param_3 * param_2;
  if (param_4[1] + __n < 0xbb9) {
    lVar1 = FUN_00144e8c(*param_4);
    *param_4 = lVar1;
    if (lVar1 != 0) {
      memcpy((void *)(lVar1 + param_4[1]),param_1,__n);
      param_4[1] = param_4[1] + __n;
      return __n;
    }
  }
  return 0;
}

