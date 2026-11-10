
void * FUN_001681c4(void *param_1,long param_2,undefined8 param_3)

{
  void *__dest;
  size_t __n;
  
  __n = param_2 << 3;
  if (__n == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)FUN_001689e8(param_3,__n);
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_1,__n);
    }
  }
  return __dest;
}

