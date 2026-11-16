
void FUN_02549d0c(void)

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
  *puVar2 = *puVar2 | 2;
  return;
}

