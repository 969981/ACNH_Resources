
/* WARNING: Removing unreachable block (ram,0x0255c388) */

uint FUN_0255c2f4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0960);
      if (iVar2 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
      puVar3 = (uint *)&DAT_054f0958;
    }
    else {
      puVar3 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar3 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar3 = puVar3 + (ulong)*param_1 * 2;
    }
  }
  uVar1 = *puVar3;
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_054f0960);
      if (iVar2 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
      puVar3 = (uint *)&DAT_054f0958;
    }
    else {
      puVar3 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar3 = (uint *)(DAT_054f5738 + 0x204);
    if ((ulong)*param_1 < 8) {
      puVar3 = puVar3 + (ulong)*param_1 * 2;
    }
  }
  if ((param_2 & 1) == 0) {
    uVar4 = *puVar3 & 0xfeffffff;
  }
  else {
    uVar4 = *puVar3 | 0x1000000;
  }
  *puVar3 = uVar4;
  return (uVar1 >> 0x18 & 1 ^ param_2) & 1;
}

