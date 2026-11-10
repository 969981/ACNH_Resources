
long aligned_alloc(undefined8 param_1,ulong param_2)

{
  long lVar1;
  int *piVar2;
  
  if ((DAT_04c61c50 == 0) ||
     (lVar1 = nn::mem::StandardAllocator::Allocate(0x4c61c58,param_2), lVar1 == 0)) {
    piVar2 = __errno_location();
    *piVar2 = 0xc;
    return 0;
  }
  return lVar1;
}

