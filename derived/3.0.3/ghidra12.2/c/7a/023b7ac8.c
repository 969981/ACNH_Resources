
void FUN_023b7ac8(long param_1)

{
  int iVar1;
  uint *puVar2;
  
  FUN_023164ec(param_1,6);
  *(undefined1 *)(param_1 + 0x1f75) = 0;
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) & 0xfffdffff;
  *(undefined4 *)(param_1 + 0x1f68) = *(undefined4 *)(param_1 + 0x1f6c);
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f0960);
      puVar2 = (uint *)&DAT_054f0958;
      if (iVar1 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar2 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar2 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
      puVar2 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
    }
  }
  *puVar2 = *puVar2 | 1;
  return;
}

