
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

clock_t clock(void)

{
  clock_t cVar1;
  
  cVar1 = (*(code *)PTR_clock_04be1c58)();
  return cVar1;
}

