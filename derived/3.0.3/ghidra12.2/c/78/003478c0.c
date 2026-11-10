
void * malloc(size_t __size)

{
  void *pvVar1;
  int *piVar2;
  
  if ((DAT_04c61c50 == 0) ||
     (pvVar1 = (void *)nn::mem::StandardAllocator::Allocate(0x4c61c58), pvVar1 == (void *)0x0)) {
    piVar2 = __errno_location();
    *piVar2 = 0xc;
    return (void *)0x0;
  }
  return pvVar1;
}

