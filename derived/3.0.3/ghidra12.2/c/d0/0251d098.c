
/* WARNING: Removing unreachable block (ram,0x0251d10c) */

uint FUN_0251d098(byte *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f0960);
      puVar2 = &DAT_054f0958;
      if (iVar1 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar2 = &DAT_054f0958;
      }
    }
    else {
      puVar2 = &DAT_054f0958;
    }
  }
  else {
    puVar2 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar2 = (undefined8 *)(DAT_054f5738 + 0x204) + *param_1;
    }
  }
  return *(uint *)((long)puVar2 + 4) & 1;
}

