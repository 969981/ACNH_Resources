
undefined8 * FUN_0251d150(byte *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (DAT_054f5738 != 0) {
    puVar1 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar1 = (undefined8 *)(DAT_054f5738 + 0x204) + *param_1;
    }
    return puVar1;
  }
  if (((DAT_054f0960 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_054f0960), iVar2 != 0)) {
    DAT_054f0958 = 0;
    __cxa_guard_release(&DAT_054f0960);
  }
  return &DAT_054f0958;
}

