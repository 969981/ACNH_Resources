
void FUN_0255139c(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined8 *puVar3;
  
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
      puVar2 = puVar2 + (ulong)*param_1 * 2;
    }
  }
  *puVar2 = *puVar2 | 1;
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
      puVar2 = puVar2 + (ulong)*param_1 * 2;
    }
  }
  *puVar2 = *puVar2 & 0xfdffffff;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(&DAT_054f0960);
      puVar3 = &DAT_054f0958;
      if (iVar1 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar3 = &DAT_054f0958;
      }
    }
    else {
      puVar3 = &DAT_054f0958;
    }
  }
  else {
    puVar3 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar3 = puVar3 + *param_1;
    }
  }
  *(uint *)((long)puVar3 + 4) = *(uint *)((long)puVar3 + 4) & 0xffffdfff;
  FUN_0252be2c(param_1);
  if ((DAT_054f5738 != 0) && ((ulong)*param_1 < 8)) {
    *(undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xe60) = *param_2;
  }
  return;
}

