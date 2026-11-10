
void * calloc(size_t __nmemb,size_t __size)

{
  void *__s;
  int *piVar1;
  
  if (DAT_04c61c50 != 0) {
    __s = (void *)nn::mem::StandardAllocator::Allocate(0x4c61c58);
    if (__s != (void *)0x0) {
      memset(__s,0,__size * __nmemb);
      return __s;
    }
  }
  piVar1 = __errno_location();
  *piVar1 = 0xc;
  return (void *)0x0;
}

