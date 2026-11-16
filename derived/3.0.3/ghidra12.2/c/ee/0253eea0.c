
/* WARNING: Removing unreachable block (ram,0x0253ef04) */

uint FUN_0253eea0(void)

{
  int iVar1;
  uint *puVar2;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f08c8 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f08c8);
      puVar2 = &DAT_054f08c0;
      if (iVar1 != 0) {
        DAT_054f08c0 = 0;
        __cxa_guard_release(&DAT_054f08c8);
        puVar2 = &DAT_054f08c0;
      }
    }
    else {
      puVar2 = &DAT_054f08c0;
    }
  }
  else {
    puVar2 = (uint *)(DAT_054f5738 + 0x1fc);
  }
  return *puVar2 >> 0x10 & 1;
}

