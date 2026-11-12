
void FUN_00add954(byte *param_1)

{
  int iVar1;
  uint *puVar2;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f0960);
      puVar2 = (uint *)&DAT_054f0958;
      if (iVar1 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar2 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar2 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar2 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar2 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*param_1 * 2;
    }
  }
  *puVar2 = *puVar2 & 0xfffffffe;
  return;
}

