
void FUN_0253ef48(ulong param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_1 & 1) == 0) {
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
    uVar3 = *puVar2 & 0xfffeffff;
  }
  else {
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
    uVar3 = *puVar2 | 0x10000;
  }
  *puVar2 = uVar3;
  return;
}

